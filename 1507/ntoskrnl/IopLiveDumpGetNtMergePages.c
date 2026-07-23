/*
 * XREFs of IopLiveDumpGetNtMergePages @ 0x140677F38
 * Callers:
 *     IopLiveDumpWriteDumpFileWithHvPages @ 0x1406783E0 (IopLiveDumpWriteDumpFileWithHvPages.c)
 * Callees:
 *     IopLiveDumpGetCapturePagesNoLock @ 0x1403FF3CC (IopLiveDumpGetCapturePagesNoLock.c)
 */

_UNKNOWN **__fastcall IopLiveDumpGetNtMergePages(_RTL_BITMAP_EX *a1, __int64 a2, _QWORD *a3, _DWORD *a4, _QWORD *a5)
{
  _UNKNOWN **result; // rax

  result = IopLiveDumpGetCapturePagesNoLock(a1 + 23, (__int64)&a1[29].Buffer, a2, (__int64)a4, a4, a5);
  if ( *a4 )
  {
    result = (_UNKNOWN **)a1[33].Buffer;
    *a3 = result[*a5];
  }
  return result;
}
