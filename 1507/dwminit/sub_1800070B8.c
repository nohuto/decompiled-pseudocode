/*
 * XREFs of sub_1800070B8 @ 0x1800070B8
 * Callers:
 *     DllEntryPoint @ 0x1800042A0 (DllEntryPoint.c)
 * Callees:
 *     sub_180007464 @ 0x180007464 (sub_180007464.c)
 */

__int64 __fastcall sub_1800070B8(__int64 a1, unsigned int a2, __int64 a3)
{
  if ( a2 == 1 )
    sub_180007464();
  return sub_1800070FC(a1, a2, a3);
}
