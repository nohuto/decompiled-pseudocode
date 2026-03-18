/*
 * XREFs of MiIsPageSecured @ 0x1401D3FF0
 * Callers:
 *     MiCopySinglePage @ 0x1401D3E08 (MiCopySinglePage.c)
 *     MmTryIdentifyPage @ 0x1401D4978 (MmTryIdentifyPage.c)
 *     MiAddNonSecuredPagesToDump @ 0x1401D5B64 (MiAddNonSecuredPagesToDump.c)
 *     MiAddRangeToCrashDump @ 0x1401D5D2C (MiAddRangeToCrashDump.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsPageSecured(__int64 a1)
{
  unsigned __int64 v1; // rcx
  _BOOL8 result; // rax

  result = 0;
  if ( (MiFlags & 0x80000) != 0
    && ((*(_QWORD *)(a1 + 40) >> 54) & 7) == 3
    && (*(_QWORD *)(a1 + 40) & 0x200000000000000LL) == 0 )
  {
    v1 = *(_QWORD *)(a1 + 8);
    if ( !v1
      || v1 <= (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
      && v1 >= 0xFFFFF68000000000uLL )
    {
      return 1;
    }
  }
  return result;
}
