/*
 * XREFs of BgkNotifyDisplayOwnershipLost @ 0x1401F1254
 * Callers:
 *     <none>
 * Callees:
 *     MmMapIoSpace @ 0x140114D44 (MmMapIoSpace.c)
 *     BgkNotifyDisplayOwnershipChange @ 0x14014FED8 (BgkNotifyDisplayOwnershipChange.c)
 */

__int64 __fastcall BgkNotifyDisplayOwnershipLost(__int64 a1)
{
  __int64 v1; // rax
  __int64 result; // rax

  v1 = qword_14036E090;
  if ( a1 )
    v1 = a1;
  qword_14036E090 = v1;
  result = BgkNotifyDisplayOwnershipChange(0, (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))&BgkpResetDisplay);
  if ( dword_14036BB30 != 2 )
  {
    result = (__int64)MmMapIoSpace((PHYSICAL_ADDRESS)655360LL, 0x20000uLL, MmNonCached);
    qword_140383030 = result;
  }
  return result;
}
