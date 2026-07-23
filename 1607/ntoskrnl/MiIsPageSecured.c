/*
 * XREFs of MiIsPageSecured @ 0x1401E4A18
 * Callers:
 *     MiCopySinglePage @ 0x1401E4828 (MiCopySinglePage.c)
 *     MmTryIdentifyPage @ 0x1401E53F4 (MmTryIdentifyPage.c)
 *     MiAddNonSecuredPagesToDump @ 0x1401E729C (MiAddNonSecuredPagesToDump.c)
 *     MiAddRangeToCrashDump @ 0x1401E7468 (MiAddRangeToCrashDump.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsPageSecured(__int64 a1)
{
  unsigned __int64 v1; // rcx
  _BOOL8 result; // rax

  result = 0;
  if ( (MiFlags & 0x20000) != 0
    && ((*(_QWORD *)(a1 + 40) >> 54) & 7) == 3
    && (*(_QWORD *)(a1 + 40) & 0x200000000000000LL) == 0 )
  {
    v1 = *(_QWORD *)(a1 + 8);
    if ( !v1 || v1 <= 0xFFFFF6BFFFFFFF78uLL && v1 >= 0xFFFFF68000000000uLL )
      return 1;
  }
  return result;
}
