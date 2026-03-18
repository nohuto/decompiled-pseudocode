/*
 * XREFs of unknown_libname_3 @ 0x1401F9E84
 * Callers:
 *     RtlStringCchCopyExW @ 0x140019AA0 (RtlStringCchCopyExW.c)
 *     RtlStringCchPrintfExW @ 0x140019C20 (RtlStringCchPrintfExW.c)
 * Callees:
 *     memset @ 0x140195A80 (memset.c)
 */

// Windows Driver Kit 7/10 64bit
__int64 __fastcall unknown_libname_3(__int64 a1, unsigned __int64 a2, unsigned __int8 a3)
{
  if ( a2 > 2 )
    memset((void *)(a1 + 2), a3, a2 - 2);
  return 0LL;
}
