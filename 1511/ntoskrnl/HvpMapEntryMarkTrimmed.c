/*
 * XREFs of HvpMapEntryMarkTrimmed @ 0x140166DC8
 * Callers:
 *     CmpTrimHive @ 0x1403BAC40 (CmpTrimHive.c)
 * Callees:
 *     <none>
 */

void __fastcall HvpMapEntryMarkTrimmed(__int64 a1)
{
  *(_QWORD *)(a1 + 8) |= 4uLL;
}
