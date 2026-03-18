/*
 * XREFs of BgkNotifyDisplayOwnershipLost @ 0x1401B6324
 * Callers:
 *     <none>
 * Callees:
 *     MmMapIoSpace @ 0x1400BD418 (MmMapIoSpace.c)
 *     BgkNotifyDisplayOwnershipChange @ 0x14011BC4C (BgkNotifyDisplayOwnershipChange.c)
 */

__int64 __fastcall BgkNotifyDisplayOwnershipLost(__int64 a1)
{
  __int64 v1; // rax
  __int64 result; // rax

  v1 = qword_14031D090;
  if ( a1 )
    v1 = a1;
  qword_14031D090 = v1;
  result = BgkNotifyDisplayOwnershipChange(0, (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))&BgkpResetDisplay);
  if ( dword_14031B830 != 2 )
  {
    result = (__int64)MmMapIoSpace((PHYSICAL_ADDRESS)655360LL, 0x20000uLL, MmNonCached);
    qword_140332030 = result;
  }
  return result;
}
