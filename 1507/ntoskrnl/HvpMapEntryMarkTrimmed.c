/*
 * XREFs of HvpMapEntryMarkTrimmed @ 0x140131CC8
 * Callers:
 *     CmpTrimHive @ 0x1404EA73C (CmpTrimHive.c)
 * Callees:
 *     <none>
 */

void __fastcall HvpMapEntryMarkTrimmed(__int64 a1)
{
  *(_QWORD *)(a1 + 8) |= 4uLL;
}
