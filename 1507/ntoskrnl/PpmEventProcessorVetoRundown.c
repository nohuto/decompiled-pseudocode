/*
 * XREFs of PpmEventProcessorVetoRundown @ 0x1402410EC
 * Callers:
 *     PpmEventTraceControlCallback @ 0x1405C2C9C (PpmEventTraceControlCallback.c)
 * Callees:
 *     EtwWrite @ 0x140014D30 (EtwWrite.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     EtwEventEnabled @ 0x1400EA070 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

char __fastcall PpmEventProcessorVetoRundown(__int64 a1)
{
  __int64 *v1; // rax
  __int64 v3; // rbx
  __int16 v4; // ax
  unsigned __int8 CurrentIrql; // r14
  unsigned int v6; // edx
  _QWORD **v7; // rsi
  _QWORD *v8; // rdi
  unsigned int i; // [rsp+38h] [rbp-19h] BYREF
  __int16 v11; // [rsp+3Ch] [rbp-15h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-9h] BYREF
  __int64 v13; // [rsp+58h] [rbp+7h]
  int v14; // [rsp+60h] [rbp+Fh]
  int v15; // [rsp+64h] [rbp+13h]
  unsigned int *p_i; // [rsp+68h] [rbp+17h]
  int v17; // [rsp+70h] [rbp+1Fh]
  int v18; // [rsp+74h] [rbp+23h]
  _QWORD *v19; // [rsp+78h] [rbp+27h]
  int v20; // [rsp+80h] [rbp+2Fh]
  int v21; // [rsp+84h] [rbp+33h]
  char *v22; // [rsp+88h] [rbp+37h]
  int v23; // [rsp+90h] [rbp+3Fh]
  int v24; // [rsp+94h] [rbp+43h]
  __int64 retaddr; // [rsp+B0h] [rbp+5Fh] BYREF

  v1 = &retaddr;
  if ( PpmEtwRegistered )
  {
    LOBYTE(v1) = EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PROCESSOR_IDLE_VETO_RUNDOWN);
    if ( (_BYTE)v1 )
    {
      v3 = *(_QWORD *)(a1 + 23808);
      if ( v3 )
      {
        v4 = *(unsigned __int8 *)(a1 + 1616);
        UserData.Reserved = 0;
        v15 = 0;
        v11 = v4;
        UserData.Ptr = (ULONGLONG)&v11;
        v13 = a1 + 1617;
        UserData.Size = 2;
        v14 = 1;
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          KiAcquireSpinLockInstrumented((volatile signed __int32 *)&PpmIdleVetoLock);
        }
        else if ( _interlockedbittestandset64((volatile signed __int32 *)&PpmIdleVetoLock, 0LL) )
        {
          KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&PpmIdleVetoLock);
        }
        v6 = 0;
        for ( i = 0; v6 < *(_DWORD *)(v3 + 28); i = v6 )
        {
          v18 = 0;
          v17 = 4;
          v7 = (_QWORD **)(248LL * v6 + v3 + 1008);
          p_i = &i;
          v8 = *v7;
          if ( *v7 != v7 )
          {
            do
            {
              v21 = 0;
              v24 = 0;
              v19 = v8 + 2;
              v20 = 4;
              v22 = (char *)v8 + 20;
              v23 = 4;
              EtwWrite(PpmEtwHandle, &PPM_ETW_PROCESSOR_IDLE_VETO_RUNDOWN, 0LL, 5u, &UserData);
              v8 = (_QWORD *)*v8;
            }
            while ( v8 != v7 );
            v6 = i;
          }
          ++v6;
        }
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          KiReleaseSpinLockInstrumented(&PpmIdleVetoLock, retaddr);
        else
          _InterlockedAnd64(&PpmIdleVetoLock, 0LL);
        LOBYTE(v1) = CurrentIrql;
        __writecr8(CurrentIrql);
      }
    }
  }
  return (char)v1;
}
