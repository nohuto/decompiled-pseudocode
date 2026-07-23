/*
 * XREFs of PpmIdleCaptureCsVetoAccounting @ 0x1401FF964
 * Callers:
 *     PopForceCompleteCsSleepStudySession @ 0x140127178 (PopForceCompleteCsSleepStudySession.c)
 *     PopConnectedStandbySettingCallback @ 0x14054849C (PopConnectedStandbySettingCallback.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     PpmIdleCsVetoAccountingUpdateBlock @ 0x140200314 (PpmIdleCsVetoAccountingUpdateBlock.c)
 *     PopDiagTraceSleepStudyBlocker @ 0x140209288 (PopDiagTraceSleepStudyBlocker.c)
 */

void __fastcall PpmIdleCaptureCsVetoAccounting(__int64 a1, unsigned int a2, char a3)
{
  __int64 v4; // rsi
  KIRQL v5; // al
  _DWORD *v6; // rbx
  __int64 v7; // rdi
  KIRQL i; // r15
  __int64 v9; // rdx
  unsigned int v10; // edi
  __int64 v11; // rsi
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // r9
  unsigned int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rax
  char v17; // [rsp+28h] [rbp-49h] BYREF
  unsigned int v18; // [rsp+30h] [rbp-41h] BYREF
  int v19; // [rsp+38h] [rbp-39h] BYREF
  __int64 v20; // [rsp+3Ch] [rbp-35h]
  int v21; // [rsp+44h] [rbp-2Dh]
  char *v22; // [rsp+48h] [rbp-29h] BYREF
  int v23; // [rsp+50h] [rbp-21h]
  int v24; // [rsp+54h] [rbp-1Dh]
  GUID *v25; // [rsp+58h] [rbp-19h]
  int v26; // [rsp+60h] [rbp-11h]
  int v27; // [rsp+64h] [rbp-Dh]
  unsigned int *v28; // [rsp+68h] [rbp-9h]
  int v29; // [rsp+70h] [rbp-1h]
  int v30; // [rsp+74h] [rbp+3h]
  __int64 v31; // [rsp+78h] [rbp+7h]
  int v32; // [rsp+80h] [rbp+Fh]
  int v33; // [rsp+84h] [rbp+13h]
  int *v34; // [rsp+88h] [rbp+17h]
  int v35; // [rsp+90h] [rbp+1Fh]
  int v36; // [rsp+94h] [rbp+23h]
  unsigned __int64 v37; // [rsp+98h] [rbp+27h]
  int v38; // [rsp+A0h] [rbp+2Fh]
  int v39; // [rsp+A4h] [rbp+33h]

  v17 = PopWdiCurrentScenarioInstanceId;
  v4 = a2;
  if ( PpmPlatformStates && *(_DWORD *)(PpmPlatformStates + 4) )
  {
    v5 = KeAcquireSpinLockRaiseToDpc(&PpmIdleVetoLock);
    v6 = (_DWORD *)PpmPlatformStates;
    v7 = 0LL;
    for ( i = v5; (unsigned int)v7 < *v6; v7 = (unsigned int)(v7 + 1) )
    {
      if ( a3 )
      {
        v9 = 384 * v7;
        LOBYTE(v9) = 4;
        PpmIdleCsVetoAccountingUpdateBlock(&v6[96 * v7 + 18], v9, 0LL);
        v6 = (_DWORD *)PpmPlatformStates;
      }
    }
    if ( (_DWORD)v4 != -1 )
    {
      v24 = 0;
      v27 = 0;
      v36 = 0;
      v10 = 0;
      v21 = 0;
      v20 = (unsigned __int16)v4;
      v22 = &v17;
      v25 = &GUID_SLEEPSTUDY_BLOCKER_PARENT_PREVETO;
      v11 = 96 * v4;
      v34 = &v19;
      v19 = -1429427508;
      v23 = 1;
      v26 = 16;
      v35 = 16;
      if ( v6[v11 + 25] )
      {
        do
        {
          v12 = *(_QWORD *)&v6[v11 + 26] + ((unsigned __int64)v10 << 6);
          v13 = v12 + 56;
          if ( *(_QWORD *)(v12 + 56) )
          {
            HIDWORD(v20) = *(_DWORD *)(v12 + 16);
            v14 = *(unsigned __int16 *)(PpmIdleVetoList + 16LL * v10 + 8);
            v30 = 0;
            v18 = v14 >> 1;
            v28 = &v18;
            v29 = 4;
            v15 = *(unsigned __int16 *)(PpmIdleVetoList + 16LL * v10 + 8);
            v16 = *(_QWORD *)(PpmIdleVetoList + 16LL * v10 + 16);
            v33 = 0;
            v39 = 0;
            v31 = v16;
            v32 = v15;
            v37 = v13;
            v38 = 8;
            PopDiagTraceSleepStudyBlocker(v15, &v22);
          }
          ++v10;
        }
        while ( v10 < v6[v11 + 25] );
      }
    }
    KeReleaseSpinLock(&PpmIdleVetoLock, i);
  }
}
