/*
 * XREFs of CcScheduleReadAhead @ 0x1401A9138
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall CcScheduleReadAhead(PFILE_OBJECT FileObject, PLARGE_INTEGER FileOffset, ULONG Length)
{
  CcScheduleReadAheadEx(FileObject, FileOffset, Length, 0LL);
}
