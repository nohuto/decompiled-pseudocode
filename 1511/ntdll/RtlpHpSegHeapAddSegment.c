/*
 * XREFs of RtlpHpSegHeapAddSegment @ 0x180059358
 * Callers:
 *     RtlpHpSegPageRangeAllocate @ 0x180058BE4 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegHeapCreate @ 0x1800598B0 (RtlpHpSegHeapCreate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpSegHeapAddSegment(__int64 a1, unsigned __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 *v3; // r8

  *(_QWORD *)(a2 + 16) = a1 ^ RtlpHeapKey ^ (a2 >> 20) ^ 0xA2E64EADA2E64EADuLL;
  result = a1 + 96;
  v3 = *(unsigned __int64 **)(a1 + 104);
  *(_QWORD *)a2 = a1 + 96;
  *(_QWORD *)(a2 + 8) = v3;
  if ( *v3 != a1 + 96 )
    __fastfail(3u);
  *v3 = a2;
  *(_QWORD *)(a1 + 104) = a2;
  ++*(_QWORD *)(a1 + 112);
  return result;
}
