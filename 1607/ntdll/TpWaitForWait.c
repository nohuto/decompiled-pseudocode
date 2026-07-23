/*
 * XREFs of TpWaitForWait @ 0x180064F30
 * Callers:
 *     RtlDeregisterWaitEx @ 0x180064420 (RtlDeregisterWaitEx.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C540 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BE0 (RtlAcquireSRWLockExclusive.c)
 *     TppWorkWait @ 0x18003B868 (TppWorkWait.c)
 *     TppCancelWait @ 0x18003BE68 (TppCancelWait.c)
 *     TppWaitpValidateWait @ 0x18003BF88 (TppWaitpValidateWait.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 */

void __cdecl TpWaitForWait(PTP_WAIT Wait, LOGICAL CancelPendingCallbacks)
{
  unsigned int v3; // esi
  char v5; // r14
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rbx
  unsigned int v9; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  v9 = 0;
  v5 = 0;
  if ( (unsigned int)TppWaitpValidateWait((__int64)Wait, 0LL, 0LL) )
  {
    if ( CancelPendingCallbacks )
    {
      v8 = *((_QWORD *)Wait + 18);
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)Wait + 30);
      ++*((_BYTE *)Wait + 355);
      TppCancelWait((__int64)Wait, v8 + 112, 2, (int *)&v9);
      if ( *((_DWORD *)Wait + 14) )
        v5 = 1;
      else
        --*((_BYTE *)Wait + 355);
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)Wait + 30);
      v3 = v9;
    }
    TppWorkWait(Wait, CancelPendingCallbacks, v6, v7);
    if ( v5 )
    {
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)Wait + 30);
      --*((_BYTE *)Wait + 355);
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)Wait + 30);
    }
    if ( v3 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)Wait, v3) == -v3 )
        (**((void (__fastcall ***)(PTP_WAIT))Wait + 1))(Wait);
    }
  }
}
