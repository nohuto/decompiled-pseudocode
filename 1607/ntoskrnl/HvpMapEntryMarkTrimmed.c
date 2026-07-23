/*
 * XREFs of HvpMapEntryMarkTrimmed @ 0x140171C00
 * Callers:
 *     CmpTrimHive @ 0x140519464 (CmpTrimHive.c)
 * Callees:
 *     <none>
 */

void __fastcall HvpMapEntryMarkTrimmed(__int64 a1)
{
  *(_QWORD *)(a1 + 8) |= 4uLL;
}
