/*
 * XREFs of PpmIdleStopCsVetoAccounting @ 0x1401E7F40
 * Callers:
 *     PopConnectedStandbySettingCallback @ 0x14050C7FC (PopConnectedStandbySettingCallback.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     PpmIdleCsVetoAccountingUpdateBlock @ 0x1401E7930 (PpmIdleCsVetoAccountingUpdateBlock.c)
 *     PopDiagTraceSleepStudyBlocker @ 0x1401F0680 (PopDiagTraceSleepStudyBlocker.c)
 */

void __fastcall PpmIdleStopCsVetoAccounting(__int64 a1, unsigned int a2)
{
  __int64 v2; // rsi
  KIRQL v3; // al
  __int64 v4; // rbx
  __int64 v5; // rdi
  KIRQL i; // r14
  unsigned int v7; // edi
  __int64 v8; // rsi
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r9
  unsigned int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rax
  char v14; // [rsp+28h] [rbp-39h] BYREF
  unsigned int v15; // [rsp+30h] [rbp-31h] BYREF
  int v16; // [rsp+38h] [rbp-29h] BYREF
  __int64 v17; // [rsp+3Ch] [rbp-25h]
  int v18; // [rsp+44h] [rbp-1Dh]
  char *v19; // [rsp+48h] [rbp-19h] BYREF
  int v20; // [rsp+50h] [rbp-11h]
  int v21; // [rsp+54h] [rbp-Dh]
  GUID *v22; // [rsp+58h] [rbp-9h]
  int v23; // [rsp+60h] [rbp-1h]
  int v24; // [rsp+64h] [rbp+3h]
  unsigned int *v25; // [rsp+68h] [rbp+7h]
  int v26; // [rsp+70h] [rbp+Fh]
  int v27; // [rsp+74h] [rbp+13h]
  __int64 v28; // [rsp+78h] [rbp+17h]
  int v29; // [rsp+80h] [rbp+1Fh]
  int v30; // [rsp+84h] [rbp+23h]
  int *v31; // [rsp+88h] [rbp+27h]
  int v32; // [rsp+90h] [rbp+2Fh]
  int v33; // [rsp+94h] [rbp+33h]
  unsigned __int64 v34; // [rsp+98h] [rbp+37h]
  int v35; // [rsp+A0h] [rbp+3Fh]
  int v36; // [rsp+A4h] [rbp+43h]

  v14 = PopWdiCurrentScenarioInstanceId;
  v2 = a2;
  if ( PpmPlatformStates && *(_DWORD *)(PpmPlatformStates + 4) )
  {
    v3 = KeAcquireSpinLockRaiseToDpc(&PpmIdleVetoLock);
    v4 = PpmPlatformStates;
    v5 = 0LL;
    for ( i = v3; (unsigned int)v5 < *(_DWORD *)PpmPlatformStates; v5 = (unsigned int)(v5 + 1) )
    {
      PpmIdleCsVetoAccountingUpdateBlock(384 * v5 + v4 + 72, 4, 0);
      v4 = PpmPlatformStates;
    }
    if ( (_DWORD)v2 != -1 )
    {
      v21 = 0;
      v24 = 0;
      v33 = 0;
      v7 = 0;
      v18 = 0;
      v17 = (unsigned __int16)v2;
      v19 = &v14;
      v22 = &GUID_SLEEPSTUDY_BLOCKER_PARENT_PREVETO;
      v8 = 384 * v2;
      v31 = &v16;
      v16 = -1429427508;
      v20 = 1;
      v23 = 16;
      v32 = 16;
      if ( *(_DWORD *)(v8 + v4 + 100) )
      {
        do
        {
          v9 = *(_QWORD *)(v8 + v4 + 104) + ((unsigned __int64)v7 << 6);
          v10 = v9 + 56;
          if ( *(_QWORD *)(v9 + 56) )
          {
            HIDWORD(v17) = *(_DWORD *)(v9 + 16);
            v11 = *(unsigned __int16 *)(PpmIdleVetoList + 16LL * v7 + 8);
            v27 = 0;
            v15 = v11 >> 1;
            v25 = &v15;
            v26 = 4;
            v12 = *(unsigned __int16 *)(PpmIdleVetoList + 16LL * v7 + 8);
            v13 = *(_QWORD *)(PpmIdleVetoList + 16LL * v7 + 16);
            v30 = 0;
            v36 = 0;
            v28 = v13;
            v29 = v12;
            v34 = v10;
            v35 = 8;
            PopDiagTraceSleepStudyBlocker(v12, &v19);
          }
          ++v7;
        }
        while ( v7 < *(_DWORD *)(v8 + v4 + 100) );
      }
    }
    KeReleaseSpinLock(&PpmIdleVetoLock, i);
  }
}
