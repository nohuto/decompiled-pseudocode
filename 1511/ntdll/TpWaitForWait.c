/*
 * XREFs of TpWaitForWait @ 0x180004C20
 * Callers:
 *     RtlDeregisterWaitEx @ 0x180006DF0 (RtlDeregisterWaitEx.c)
 * Callees:
 *     TppWorkWait @ 0x18000A800 (TppWorkWait.c)
 *     TppCancelWait @ 0x18000AA60 (TppCancelWait.c)
 *     TppWaitpValidateWait @ 0x18000AC08 (TppWaitpValidateWait.c)
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 */

void __cdecl TpWaitForWait(PTP_WAIT Wait, LOGICAL CancelPendingCallbacks)
{
  unsigned int v3; // esi
  char v5; // r14
  __int64 v6; // rbx
  unsigned int v7; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  v7 = 0;
  v5 = 0;
  if ( (unsigned int)TppWaitpValidateWait(Wait, 0LL, 0LL) )
  {
    if ( CancelPendingCallbacks )
    {
      v6 = *((_QWORD *)Wait + 17);
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)Wait + 29);
      ++*((_BYTE *)Wait + 347);
      TppCancelWait(Wait, v6 + 112, 2LL, &v7);
      if ( *((_DWORD *)Wait + 14) )
        v5 = 1;
      else
        --*((_BYTE *)Wait + 347);
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)Wait + 29);
      v3 = v7;
    }
    TppWorkWait(Wait, CancelPendingCallbacks);
    if ( v5 )
    {
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)Wait + 29);
      --*((_BYTE *)Wait + 347);
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)Wait + 29);
    }
    if ( v3 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)Wait, v3) == -v3 )
        (**((void (__fastcall ***)(PTP_WAIT))Wait + 1))(Wait);
    }
  }
}
