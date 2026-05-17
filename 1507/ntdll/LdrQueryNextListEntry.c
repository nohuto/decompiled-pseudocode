/*
 * XREFs of LdrQueryNextListEntry @ 0x180069240
 * Callers:
 *     LdrQueryProcessModuleInformationEx @ 0x180068EE8 (LdrQueryProcessModuleInformationEx.c)
 *     LdrQueryProcessModuleInformationEx2 @ 0x1800BC6D4 (LdrQueryProcessModuleInformationEx2.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LdrQueryNextListEntry(__int64 a1, __int64 a2, __int64 a3)
{
  return LdrpReadMemory(a1, a2, a3, 8LL);
}
