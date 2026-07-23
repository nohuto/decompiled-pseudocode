/*
 * XREFs of TppTimerpStopCallbackGeneration @ 0x18007DF70
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     TppCancelTimer @ 0x18003CF70 (TppCancelTimer.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 */

char __fastcall TppTimerpStopCallbackGeneration(__int64 a1)
{
  _RTL_SRWLOCK *v2; // rdx
  signed __int32 v3; // eax

  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 232));
  v2 = *(_RTL_SRWLOCK **)(a1 + 136);
  ++*(_BYTE *)(a1 + 347);
  LOBYTE(v3) = TppCancelTimer(a1, v2 + 14, 0);
  if ( (_BYTE)v3 )
  {
    v3 = _InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF);
    if ( v3 == 1 )
      LOBYTE(v3) = (**(__int64 (__fastcall ***)(__int64))(a1 + 8))(a1);
  }
  return v3;
}
