/*
 * XREFs of RtlpHpSegLfhVsFree @ 0x180050F00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpSegLfhVsFree(_RTL_SRWLOCK *a1, unsigned __int64 a2, char a3)
{
  return RtlpHpSegFree(a1, a2, a3 & 1);
}
