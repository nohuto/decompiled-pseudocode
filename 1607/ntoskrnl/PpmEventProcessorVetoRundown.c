/*
 * XREFs of PpmEventProcessorVetoRundown @ 0x14020C540
 * Callers:
 *     PpmEventTraceControlCallback @ 0x140581BF8 (PpmEventTraceControlCallback.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     PpmEventTracePreVetoAccounting @ 0x14020CD58 (PpmEventTracePreVetoAccounting.c)
 */

void __fastcall PpmEventProcessorVetoRundown(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int v3; // edx
  __int16 v4; // ax
  __int16 v5; // ax
  KIRQL v6; // al
  unsigned int v7; // r8d
  KIRQL v8; // r14
  _QWORD **v9; // rsi
  _QWORD *v10; // rdi
  int i; // [rsp+30h] [rbp-29h] BYREF
  __int16 v12; // [rsp+34h] [rbp-25h] BYREF
  __int16 v13; // [rsp+38h] [rbp-21h] BYREF
  char v14; // [rsp+3Ah] [rbp-1Fh]
  unsigned int v15; // [rsp+3Bh] [rbp-1Eh]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-19h] BYREF
  __int64 v17; // [rsp+50h] [rbp-9h]
  int v18; // [rsp+58h] [rbp-1h]
  int v19; // [rsp+5Ch] [rbp+3h]
  int *p_i; // [rsp+60h] [rbp+7h]
  int v21; // [rsp+68h] [rbp+Fh]
  int v22; // [rsp+6Ch] [rbp+13h]
  _QWORD *v23; // [rsp+70h] [rbp+17h]
  int v24; // [rsp+78h] [rbp+1Fh]
  int v25; // [rsp+7Ch] [rbp+23h]
  char *v26; // [rsp+80h] [rbp+27h]
  int v27; // [rsp+88h] [rbp+2Fh]
  int v28; // [rsp+8Ch] [rbp+33h]

  v1 = *(_QWORD *)(a1 + 23808);
  if ( v1 )
  {
    v3 = 1;
    for ( i = 1; v3 < *(_DWORD *)(v1 + 28); i = v3 )
    {
      v4 = *(unsigned __int8 *)(a1 + 1616);
      UserData.Reserved = 0;
      v13 = v4;
      v14 = *(_BYTE *)(a1 + 1617);
      UserData.Ptr = (ULONGLONG)&v13;
      v15 = v3;
      UserData.Size = 7;
      PpmEventTracePreVetoAccounting(&PPM_ETW_PROCESSOR_PRE_VETO_ACCOUNTING_RUNDOWN);
      v3 = i + 1;
    }
    if ( PpmEtwRegistered && EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PROCESSOR_IDLE_VETO_RUNDOWN) )
    {
      v5 = *(unsigned __int8 *)(a1 + 1616);
      UserData.Reserved = 0;
      v19 = 0;
      v12 = v5;
      UserData.Ptr = (ULONGLONG)&v12;
      v17 = a1 + 1617;
      UserData.Size = 2;
      v18 = 1;
      v6 = KeAcquireSpinLockRaiseToDpc(&PpmIdleVetoLock);
      v7 = 0;
      v8 = v6;
      for ( i = 0; v7 < *(_DWORD *)(v1 + 28); i = v7 )
      {
        v22 = 0;
        p_i = &i;
        v9 = (_QWORD **)(248LL * v7 + v1 + 1008);
        v21 = 4;
        v10 = *v9;
        if ( *v9 != v9 )
        {
          do
          {
            v25 = 0;
            v28 = 0;
            v23 = v10 + 2;
            v24 = 4;
            v26 = (char *)v10 + 20;
            v27 = 4;
            EtwWrite(PpmEtwHandle, &PPM_ETW_PROCESSOR_IDLE_VETO_RUNDOWN, 0LL, 5u, &UserData);
            v10 = (_QWORD *)*v10;
          }
          while ( v10 != v9 );
          v7 = i;
        }
        ++v7;
      }
      KeReleaseSpinLock(&PpmIdleVetoLock, v8);
    }
  }
}
