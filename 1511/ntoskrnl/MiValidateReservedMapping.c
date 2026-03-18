/*
 * XREFs of MiValidateReservedMapping @ 0x1401066D4
 * Callers:
 *     MmUnmapReservedMapping @ 0x1401D3934 (MmUnmapReservedMapping.c)
 *     MmFreeMappingAddress @ 0x1404EA1C0 (MmFreeMappingAddress.c)
 * Callees:
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 */

unsigned __int64 __fastcall MiValidateReservedMapping(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  unsigned __int64 result; // rax

  if ( *(_QWORD *)(((BugCheckParameter2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000008LL) != (BugCheckParameter3 & 0xFFFFF01E) )
    KeBugCheckEx(
      0xDAu,
      0x101uLL,
      BugCheckParameter2,
      (unsigned int)BugCheckParameter3,
      *(_QWORD *)(((BugCheckParameter2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000008LL));
  result = *(_QWORD *)(((BugCheckParameter2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000010LL) >> 28;
  if ( result <= 2 )
    KeBugCheckEx(
      0xDAu,
      0x102uLL,
      BugCheckParameter2,
      (unsigned int)BugCheckParameter3,
      *(_QWORD *)(((BugCheckParameter2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000010LL) >> 28);
  return result;
}
