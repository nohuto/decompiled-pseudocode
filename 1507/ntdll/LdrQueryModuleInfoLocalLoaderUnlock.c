/*
 * XREFs of LdrQueryModuleInfoLocalLoaderUnlock @ 0x180069820
 * Callers:
 *     LdrQueryProcessModuleInformationEx @ 0x180068EE8 (LdrQueryProcessModuleInformationEx.c)
 *     LdrQueryProcessModuleInformationEx2 @ 0x1800BC6D4 (LdrQueryProcessModuleInformationEx2.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LdrQueryModuleInfoLocalLoaderUnlock(__int64 a1)
{
  return LdrpReleaseLoaderLock(a1, 10, 0);
}
