/*
 * XREFs of RtlpHpSegHeapAddSegment @ 0x18007FADC
 * Callers:
 *     RtlpHpSegPageRangeAllocate @ 0x18003EA7C (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegHeapCreate @ 0x18007F460 (RtlpHpSegHeapCreate.c)
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
  if ( *v3 != a1 + 96 )
    __fastfail(3u);
  *(_QWORD *)a2 = result;
  *(_QWORD *)(a2 + 8) = v3;
  *v3 = a2;
  *(_QWORD *)(a1 + 104) = a2;
  ++*(_QWORD *)(a1 + 112);
  return result;
}
