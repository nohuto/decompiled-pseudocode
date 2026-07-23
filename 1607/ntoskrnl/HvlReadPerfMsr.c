/*
 * XREFs of HvlReadPerfMsr @ 0x1401BB0D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HvlReadPerfMsr(__int64 a1, unsigned int a2, __int64 a3)
{
  return HvlpReadPerfRegister(a1, a2 | 0x10000000000000LL, a3);
}
