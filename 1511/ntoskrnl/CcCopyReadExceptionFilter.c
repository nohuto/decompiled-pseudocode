/*
 * XREFs of CcCopyReadExceptionFilter @ 0x1401A8DF8
 * Callers:
 *     CcMapAndCopyInToCache @ 0x140068870 (CcMapAndCopyInToCache.c)
 *     CcCompleteAsyncRead @ 0x1400FB54C (CcCompleteAsyncRead.c)
 *     CcCopyBytesToUserBuffer @ 0x14047A9A0 (CcCopyBytesToUserBuffer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CcCopyReadExceptionFilter(int **a1, _DWORD *a2)
{
  int v2; // r8d

  v2 = **a1;
  *a2 = v2;
  if ( v2 == -1073741818 && (unsigned int)(*a1)[6] >= 3 )
    *a2 = (*a1)[12];
  return 1LL;
}
