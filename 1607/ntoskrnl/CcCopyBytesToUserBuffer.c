/*
 * XREFs of CcCopyBytesToUserBuffer @ 0x1404465B0
 * Callers:
 *     CcMapAndCopyFromCache @ 0x140446260 (CcMapAndCopyFromCache.c)
 * Callees:
 *     FsRtlNormalizeNtstatus @ 0x14010F85C (FsRtlNormalizeNtstatus.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     CcCopyReadExceptionFilter @ 0x1401B18A4 (CcCopyReadExceptionFilter.c)
 */

__int64 __fastcall CcCopyBytesToUserBuffer(char *a1, char *Src, size_t Size)
{
  unsigned int v3; // ebx
  unsigned int v6; // r15d

  v3 = Size;
  while ( v3 )
  {
    if ( v3 >= 0x10000 )
      v6 = 0x10000;
    else
      v6 = v3;
    memmove(a1, Src, v6);
    v3 -= v6;
    Src += v6;
    a1 += v6;
  }
  return 0LL;
}
