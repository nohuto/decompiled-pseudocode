/*
 * XREFs of LdrQueryProcessModuleInformation @ 0x18006D2C0
 * Callers:
 *     <none>
 * Callees:
 *     LdrQueryProcessModuleInformationEx @ 0x18006D900 (LdrQueryProcessModuleInformationEx.c)
 */

__int64 __fastcall LdrQueryProcessModuleInformation(int a1, int a2, __int64 a3)
{
  return LdrQueryProcessModuleInformationEx(0, 2, a1, a2, a3);
}
