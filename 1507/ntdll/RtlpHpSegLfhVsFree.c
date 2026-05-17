/*
 * XREFs of RtlpHpSegLfhVsFree @ 0x180008A90
 * Callers:
 *     RtlpHpSegFree @ 0x18002B710 (RtlpHpSegFree.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpSegLfhVsFree(__int64 a1, __int64 a2, char a3)
{
  return RtlpHpSegFree(a1, a2, a3 & 1);
}
