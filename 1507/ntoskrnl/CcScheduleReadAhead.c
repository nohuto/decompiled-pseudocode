/*
 * XREFs of CcScheduleReadAhead @ 0x1401DD33C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall CcScheduleReadAhead(PFILE_OBJECT FileObject, PLARGE_INTEGER FileOffset, ULONG Length)
{
  CcScheduleReadAheadEx((_SLIST_ENTRY *)FileObject, (__int64 *)FileOffset, Length, 0LL);
}
