/*
 * XREFs of LdrQueryNextListEntry @ 0x18006CAA0
 * Callers:
 *     LdrQueryProcessModuleInformationEx @ 0x18006C728 (LdrQueryProcessModuleInformationEx.c)
 *     LdrQueryProcessModuleInformationEx2 @ 0x1800C93F4 (LdrQueryProcessModuleInformationEx2.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LdrQueryNextListEntry(__int64 a1, __int64 a2, __int64 a3)
{
  return LdrpReadMemory(a1, a2, a3, 8LL);
}
