/*
 * XREFs of PopSetRange @ 0x14014D568
 * Callers:
 *     PoSetHiberRange @ 0x14014D3AC (PoSetHiberRange.c)
 * Callees:
 *     DbgPrint @ 0x140131E68 (DbgPrint.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     PopInternalAddToDumpFile @ 0x140233810 (PopInternalAddToDumpFile.c)
 *     PopCloneRange @ 0x1403F2280 (PopCloneRange.c)
 *     PopSetBootPhaseRange @ 0x1403F2584 (PopSetBootPhaseRange.c)
 *     PopDiscardRange @ 0x1403F267C (PopDiscardRange.c)
 */

__int64 __fastcall PopSetRange(ULONG_PTR BugCheckParameter3, int a2, const void *a3, const void *a4, unsigned int a5)
{
  if ( (PoDebug & 0x80u) != 0 )
    DbgPrint("PopSetRange: Type %04x  StartPage: %p PageCount: %p  Tag: %.4s\n", a2, a3, a4, (const char *)&a5);
  if ( *(_BYTE *)(BugCheckParameter3 + 28) )
  {
    PopInternalAddToDumpFile(BugCheckParameter3, 464LL, 0LL);
    KeBugCheckEx(0xA0u, 0x104uLL, 0xAuLL, BugCheckParameter3, 0LL);
  }
  if ( (a2 & 0x8000) != 0 )
    return PopDiscardRange(BugCheckParameter3, a3, a4, a5);
  if ( (a2 & 2) != 0 )
    return PopCloneRange(BugCheckParameter3, a3, a4, a5);
  if ( (a2 & 0x10000) == 0 )
  {
    PopInternalAddToDumpFile(BugCheckParameter3, 464LL, 0LL);
    KeBugCheckEx(0xA0u, 0x105uLL, 0xAuLL, BugCheckParameter3, 0LL);
  }
  return PopSetBootPhaseRange(BugCheckParameter3, a3, a4, a5);
}
