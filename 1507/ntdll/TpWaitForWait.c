/*
 * XREFs of TpWaitForWait @ 0x18007D430
 * Callers:
 *     RtlDeregisterWaitEx @ 0x18007B7E0 (RtlDeregisterWaitEx.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     TppCancelWait @ 0x18003C930 (TppCancelWait.c)
 *     TppWaitpValidateWait @ 0x18003CDCC (TppWaitpValidateWait.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 *     TppWorkWait @ 0x18007D640 (TppWorkWait.c)
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
  if ( (unsigned int)TppWaitpValidateWait((__int64)Wait, 0LL, 0LL) )
  {
    if ( CancelPendingCallbacks )
    {
      v6 = *((_QWORD *)Wait + 17);
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)Wait + 29);
      ++*((_BYTE *)Wait + 347);
      TppCancelWait((__int64)Wait, v6 + 112, 2, (int *)&v7);
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
