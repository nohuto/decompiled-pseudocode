/*
 * XREFs of TppTimerpStopCallbackGeneration @ 0x18007DF70
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     TppCancelTimer @ 0x18003CF70 (TppCancelTimer.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 */

char __fastcall TppTimerpStopCallbackGeneration(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // r9
  signed __int32 v7; // eax

  RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 232), a2, a3, a4);
  v5 = *(_QWORD *)(a1 + 136);
  ++*(_BYTE *)(a1 + 347);
  LOBYTE(v7) = TppCancelTimer(a1, (volatile signed __int64 *)(v5 + 112), 0LL, v6);
  if ( (_BYTE)v7 )
  {
    v7 = _InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF);
    if ( v7 == 1 )
      LOBYTE(v7) = (**(__int64 (__fastcall ***)(__int64))(a1 + 8))(a1);
  }
  return v7;
}
