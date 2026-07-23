/*
 * XREFs of SymCryptInitEnvWindowsKernelmodeWin8_1nLater @ 0x140165160
 * Callers:
 *     SymCryptInit @ 0x140165158 (SymCryptInit.c)
 *     Phase1InitializationDiscard @ 0x1407D146C (Phase1InitializationDiscard.c)
 * Callees:
 *     SymCryptDetectCpuFeaturesByCpuid @ 0x1401651FC (SymCryptDetectCpuFeaturesByCpuid.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     RtlGetVersion @ 0x14054DFF8 (RtlGetVersion.c)
 */

void SymCryptInitEnvWindowsKernelmodeWin8_1nLater()
{
  char v0; // al
  _OSVERSIONINFOW VersionInformation; // [rsp+40h] [rbp-138h] BYREF

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
    v0 = g_SymCryptCpuFeaturesNotPresent;
    if ( (MEMORY[0xFFFFF780000003D8] & 4) == 0 )
      v0 = g_SymCryptCpuFeaturesNotPresent | 0x20;
    g_SymCryptCpuFeaturesNotPresent = v0 & 0xBF;
    _InterlockedOr8(&g_SymCryptFlags, 1u);
  }
}
