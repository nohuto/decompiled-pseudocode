/*
 * XREFs of MiInsertLargeTbFlushEntry @ 0x14008B9B4
 * Callers:
 *     MiZeroPageWorkMapping @ 0x14008B8A0 (MiZeroPageWorkMapping.c)
 *     MiUnmapMdlCommon @ 0x1401E3CF0 (MiUnmapMdlCommon.c)
 *     MiUnmapLargeUserPages @ 0x1401F5AE0 (MiUnmapLargeUserPages.c)
 * Callees:
 *     MiInsertTbFlushEntry @ 0x1400E0240 (MiInsertTbFlushEntry.c)
 */

__int64 __fastcall MiInsertLargeTbFlushEntry(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v5; // rbx
  unsigned int v6; // esi
  __int64 result; // rax

  v5 = a3 << 25 >> 16;
  v6 = 0;
  do
  {
    result = MiInsertTbFlushEntry(a1, v5, 1LL);
    ++v6;
    v5 = v5 << 25 >> 16;
  }
  while ( v6 <= a2 );
  return result;
}
