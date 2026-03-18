/*
 * XREFs of PpmEventPlatformVetoRundown @ 0x140240E64
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

void PpmEventPlatformVetoRundown()
{
  unsigned __int8 CurrentIrql; // si
  _DWORD *v1; // r8
  __int64 v2; // rdx
  _QWORD **v3; // rdi
  _QWORD *v4; // rbx
  int i; // [rsp+30h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-38h] BYREF
  _QWORD *v7; // [rsp+48h] [rbp-28h]
  int v8; // [rsp+50h] [rbp-20h]
  int v9; // [rsp+54h] [rbp-1Ch]
  char *v10; // [rsp+58h] [rbp-18h]
  int v11; // [rsp+60h] [rbp-10h]
  int v12; // [rsp+64h] [rbp-Ch]
  __int64 retaddr; // [rsp+78h] [rbp+8h]

  if ( PpmEtwRegistered && EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PLATFORM_IDLE_VETO_RUNDOWN) && PpmPlatformStates )
  {
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
    v1 = (_DWORD *)PpmPlatformStates;
    v2 = 0LL;
    for ( i = 0; (unsigned int)v2 < *v1; i = v2 )
    {
      UserData.Reserved = 0;
      v3 = (_QWORD **)&v1[96 * v2 + 20];
      UserData.Size = 4;
      UserData.Ptr = (ULONGLONG)&i;
      v4 = *v3;
      if ( *v3 != v3 )
      {
        do
        {
          v9 = 0;
          v12 = 0;
          v7 = v4 + 2;
          v8 = 4;
          v10 = (char *)v4 + 20;
          v11 = 4;
          EtwWrite(PpmEtwHandle, &PPM_ETW_PLATFORM_IDLE_VETO_RUNDOWN, 0LL, 3u, &UserData);
          v4 = (_QWORD *)*v4;
        }
        while ( v4 != v3 );
        LODWORD(v2) = i;
        v1 = (_DWORD *)PpmPlatformStates;
      }
      v2 = (unsigned int)(v2 + 1);
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(&PpmIdleVetoLock, retaddr);
    else
      _InterlockedAnd64(&PpmIdleVetoLock, 0LL);
    __writecr8(CurrentIrql);
  }
}
