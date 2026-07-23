/*
 * XREFs of TppWaitTimerExpiration @ 0x180082DA4
 * Callers:
 *     TppSingleTimerExpiration @ 0x18000B6E0 (TppSingleTimerExpiration.c)
 * Callees:
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 *     ZwCancelWaitCompletionPacket @ 0x1800A62B0 (ZwCancelWaitCompletionPacket.c)
 *     TppRaiseHandleStatus @ 0x1800F55A8 (TppRaiseHandleStatus.c)
 */

char __fastcall TppWaitTimerExpiration(__int64 a1)
{
  unsigned __int32 v2; // eax

  v2 = ZwCancelWaitCompletionPacket(*(HANDLE *)(a1 + 360), 0);
  if ( v2 )
  {
    if ( v2 != -1073741536 && v2 != 259 )
      TppRaiseHandleStatus(v2, *(_QWORD *)(a1 + 352), a1);
    return 0;
  }
  else
  {
    if ( !_InterlockedDecrement((volatile signed __int32 *)a1) )
      (**(void (__fastcall ***)(__int64))(a1 + 8))(a1);
    *(_QWORD *)(a1 + 352) = 0LL;
    return 1;
  }
}
