/*
 * XREFs of SymCryptInitEnvWindowsKernelmodeWin8_1nLater @ 0x14013E388
 * Callers:
 *     SymCryptInit @ 0x14013E380 (SymCryptInit.c)
 *     KeInitSystem @ 0x140791AC4 (KeInitSystem.c)
 * Callees:
 *     SymCryptDetectCpuFeaturesByCpuid @ 0x14013E434 (SymCryptDetectCpuFeaturesByCpuid.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     RtlGetVersion @ 0x1404C17B0 (RtlGetVersion.c)
 */

__int64 SymCryptInitEnvWindowsKernelmodeWin8_1nLater()
{
  __int64 result; // rax
  int v1; // eax
  _OSVERSIONINFOW VersionInformation; // [rsp+40h] [rbp-138h] BYREF

  result = (unsigned int)g_SymCryptFlags;
  if ( (g_SymCryptFlags & 1) == 0 )
  {
    VersionInformation.dwOSVersionInfoSize = 276;
    if ( RtlGetVersion(&VersionInformation) < 0 )
      KeBugCheckEx(0x171u, 0x6E737276uLL, 0LL, 0LL, 0LL);
    if ( VersionInformation.dwMajorVersion < 6
      || VersionInformation.dwMajorVersion == 6 && VersionInformation.dwMinorVersion < 3 )
    {
      KeBugCheckEx(0x171u, 0x6E737276uLL, 0LL, 0LL, 0LL);
    }
    SymCryptDetectCpuFeaturesByCpuid();
    v1 = g_SymCryptCpuFeaturesNotPresent;
    if ( (MEMORY[0xFFFFF780000003D8] & 4) == 0 )
      v1 = g_SymCryptCpuFeaturesNotPresent | 0x10;
    g_SymCryptCpuFeaturesNotPresent = v1 & 0xFFFFFFDF;
    _InterlockedOr(&g_SymCryptFlags, 1u);
    result = ~(v1 & 0xFFFFFFDF);
    g_SymCryptCpuFeaturesPresentCheck = result;
  }
  return result;
}
