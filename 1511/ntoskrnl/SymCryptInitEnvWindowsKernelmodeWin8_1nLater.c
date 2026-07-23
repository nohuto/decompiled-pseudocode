/*
 * XREFs of SymCryptInitEnvWindowsKernelmodeWin8_1nLater @ 0x1401304B0
 * Callers:
 *     SymCryptInit @ 0x1401304A8 (SymCryptInit.c)
 *     KeInitSystem @ 0x14074E20C (KeInitSystem.c)
 * Callees:
 *     SymCryptDetectCpuFeaturesByCpuid @ 0x14013054C (SymCryptDetectCpuFeaturesByCpuid.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     RtlGetVersion @ 0x1404B8B08 (RtlGetVersion.c)
 */

char SymCryptInitEnvWindowsKernelmodeWin8_1nLater()
{
  char result; // al
  char v1; // al
  _OSVERSIONINFOW VersionInformation; // [rsp+40h] [rbp-138h] BYREF

  result = g_SymCryptFlags;
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
      v1 = g_SymCryptCpuFeaturesNotPresent | 0x20;
    result = v1 & 0xBF;
    g_SymCryptCpuFeaturesNotPresent = result;
    _InterlockedOr(&g_SymCryptFlags, 1u);
  }
  return result;
}
