/*
 * XREFs of RtlGetVersion @ 0x14054DFF8
 * Callers:
 *     RtlVerifyVersionInfo @ 0x140157DD0 (RtlVerifyVersionInfo.c)
 *     SymCryptInitEnvWindowsKernelmodeWin8_1nLater @ 0x140165160 (SymCryptInitEnvWindowsKernelmodeWin8_1nLater.c)
 *     SdbpMatchOsVersion @ 0x1405AB6C4 (SdbpMatchOsVersion.c)
 *     Win7RtlGetVersion @ 0x14069E08C (Win7RtlGetVersion.c)
 *     Win81RtlGetVersion @ 0x14069E158 (Win81RtlGetVersion.c)
 *     Win8RtlGetVersion @ 0x14069E224 (Win8RtlGetVersion.c)
 *     EtwpTraceSystemInitialization @ 0x1407E549C (EtwpTraceSystemInitialization.c)
 * Callees:
 *     RtlGetNtProductType @ 0x14054E0B0 (RtlGetNtProductType.c)
 */

NTSTATUS __stdcall RtlGetVersion(PRTL_OSVERSIONINFOW lpVersionInformation)
{
  DWORD v1; // eax
  __int16 v3; // ax
  bool v4; // zf
  _NT_PRODUCT_TYPE ProductType; // [rsp+30h] [rbp+8h] BYREF

  v1 = lpVersionInformation->dwOSVersionInfoSize - 284;
  *(_QWORD *)&lpVersionInformation->dwMajorVersion = 10LL;
  lpVersionInformation->dwBuildNumber = 10240;
  lpVersionInformation->dwPlatformId = 2;
  if ( (v1 & 0xFFFFFFF7) == 0 )
  {
    LOWORD(lpVersionInformation[1].dwOSVersionInfoSize) = BYTE1(CmNtCSDVersion);
    v3 = (unsigned __int8)CmNtCSDVersion;
    LOWORD(lpVersionInformation[1].dwMajorVersion) = 0;
    v4 = (_DWORD)InitializationPhase == 0;
    HIWORD(lpVersionInformation[1].dwOSVersionInfoSize) = v3;
    BYTE2(lpVersionInformation[1].dwMajorVersion) = 0;
    if ( !v4 )
    {
      if ( RtlGetNtProductType(&ProductType) )
        BYTE2(lpVersionInformation[1].dwMajorVersion) = ProductType;
      v4 = lpVersionInformation->dwOSVersionInfoSize == 292;
      LOWORD(lpVersionInformation[1].dwMajorVersion) = MEMORY[0xFFFFF780000002D0];
      if ( v4 )
        lpVersionInformation[1].dwMinorVersion = MEMORY[0xFFFFF780000002D0] & 0x1FFFF;
    }
    HIBYTE(lpVersionInformation[1].dwMajorVersion) = 0;
  }
  return 0;
}
