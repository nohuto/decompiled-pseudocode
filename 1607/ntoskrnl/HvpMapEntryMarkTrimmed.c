/*
 * XREFs of HvpMapEntryMarkTrimmed @ 0x140171700
 * Callers:
 *     CmpTrimHive @ 0x1404A1058 (CmpTrimHive.c)
 * Callees:
 *     <none>
 */

void __fastcall HvpMapEntryMarkTrimmed(__int64 a1)
{
  *(_QWORD *)(a1 + 8) |= 4uLL;
}
