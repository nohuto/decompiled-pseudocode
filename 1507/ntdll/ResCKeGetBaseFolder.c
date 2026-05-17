/*
 * XREFs of ResCKeGetBaseFolder @ 0x18000F23C
 * Callers:
 *     ResCKeOpenRuntimeView @ 0x18000ED34 (ResCKeOpenRuntimeView.c)
 *     ResCKeCreateRuntimeView @ 0x1800F7138 (ResCKeCreateRuntimeView.c)
 *     ResCKeGetCacheIndices @ 0x1800F7300 (ResCKeGetCacheIndices.c)
 * Callees:
 *     _ResGetSystemWindowsDirectory @ 0x18000F2A0 (_ResGetSystemWindowsDirectory.c)
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x18000F3AC (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 */

__int64 __fastcall ResCKeGetBaseFolder(unsigned __int16 *a1)
{
  unsigned int SystemWindowsDirectory; // eax
  __int64 v3; // rdi

  if ( a1
    && (*a1 = 0, SystemWindowsDirectory = ResGetSystemWindowsDirectory(a1), (v3 = SystemWindowsDirectory) != 0)
    && (SystemWindowsDirectory >= 0x104 || StringCchCatW(a1, 0x104uLL, L"\\rescache") >= 0) )
  {
    return v3 + 9;
  }
  else
  {
    return 0LL;
  }
}
