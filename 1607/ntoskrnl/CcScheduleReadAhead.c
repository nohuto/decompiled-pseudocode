/*
 * XREFs of CcScheduleReadAhead @ 0x1401B1BE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
void __stdcall CcScheduleReadAhead(PFILE_OBJECT FileObject, PLARGE_INTEGER FileOffset, ULONG Length)
{
  CcScheduleReadAheadEx(FileObject, FileOffset, *(__int64 *)&Length, 0LL);
}
