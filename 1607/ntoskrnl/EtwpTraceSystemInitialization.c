/*
 * XREFs of EtwpTraceSystemInitialization @ 0x1407A9CCC
 * Callers:
 *     EtwpInitialize @ 0x1407A0D3C (EtwpInitialize.c)
 * Callees:
 *     _TlgWrite @ 0x14000A118 (_TlgWrite.c)
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     RtlGetSystemTimePrecise @ 0x1400EFF68 (RtlGetSystemTimePrecise.c)
 *     _TlgKeywordOn @ 0x14010CF88 (_TlgKeywordOn.c)
 *     HviIsHypervisorVendorMicrosoft @ 0x14013D4F8 (HviIsHypervisorVendorMicrosoft.c)
 *     HviGetHypervisorFeatures @ 0x14014B494 (HviGetHypervisorFeatures.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     HviGetHardwareFeatures @ 0x140231D08 (HviGetHardwareFeatures.c)
 *     RtlGetVersion @ 0x1404C17B0 (RtlGetVersion.c)
 */

char EtwpTraceSystemInitialization()
{
  NTSTATUS Version; // eax
  __int64 v1; // r9
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  REGHANDLE v5; // rbx
  char v6; // r9
  ULONGLONG v7; // rax
  int v9; // [rsp+38h] [rbp-D0h] BYREF
  int v10; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v11; // [rsp+40h] [rbp-C8h] BYREF
  DWORD dwMajorVersion; // [rsp+48h] [rbp-C0h] BYREF
  DWORD dwMinorVersion; // [rsp+4Ch] [rbp-BCh] BYREF
  DWORD dwBuildNumber; // [rsp+50h] [rbp-B8h] BYREF
  int v15; // [rsp+54h] [rbp-B4h] BYREF
  __int64 v16; // [rsp+58h] [rbp-B0h] BYREF
  LARGE_INTEGER v17; // [rsp+60h] [rbp-A8h] BYREF
  LARGE_INTEGER SystemTimePrecise; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v19[2]; // [rsp+70h] [rbp-98h] BYREF
  _DWORD v20[6]; // [rsp+80h] [rbp-88h] BYREF
  _OSVERSIONINFOW VersionInformation; // [rsp+98h] [rbp-70h] BYREF
  __int16 v22; // [rsp+1ACh] [rbp+A4h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+1B8h] [rbp+B0h] BYREF
  LARGE_INTEGER *p_SystemTimePrecise; // [rsp+1C8h] [rbp+C0h]
  __int64 v25; // [rsp+1D0h] [rbp+C8h]
  DWORD *v26; // [rsp+1D8h] [rbp+D0h]
  __int64 v27; // [rsp+1E0h] [rbp+D8h]
  __int64 *v28; // [rsp+1E8h] [rbp+E0h]
  __int64 v29; // [rsp+1F0h] [rbp+E8h]
  __int16 *v30; // [rsp+1F8h] [rbp+F0h]
  __int64 v31; // [rsp+200h] [rbp+F8h]
  char *v32; // [rsp+208h] [rbp+100h]
  __int64 v33; // [rsp+210h] [rbp+108h]
  LARGE_INTEGER *v34; // [rsp+218h] [rbp+110h]
  __int64 v35; // [rsp+220h] [rbp+118h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+228h] [rbp+120h] BYREF
  DWORD *p_dwMajorVersion; // [rsp+248h] [rbp+140h]
  __int64 v38; // [rsp+250h] [rbp+148h]
  DWORD *p_dwMinorVersion; // [rsp+258h] [rbp+150h]
  __int64 v40; // [rsp+260h] [rbp+158h]
  DWORD *p_dwBuildNumber; // [rsp+268h] [rbp+160h]
  __int64 v42; // [rsp+270h] [rbp+168h]
  int *v43; // [rsp+278h] [rbp+170h]
  __int64 v44; // [rsp+280h] [rbp+178h]
  __int64 *v45; // [rsp+288h] [rbp+180h]
  __int64 v46; // [rsp+290h] [rbp+188h]
  int *v47; // [rsp+298h] [rbp+190h]
  __int64 v48; // [rsp+2A0h] [rbp+198h]
  char *v49; // [rsp+2A8h] [rbp+1A0h]
  __int64 v50; // [rsp+2B0h] [rbp+1A8h]
  _QWORD *v51; // [rsp+2B8h] [rbp+1B0h]
  __int64 v52; // [rsp+2C0h] [rbp+1B8h]
  int *v53; // [rsp+2C8h] [rbp+1C0h]
  __int64 v54; // [rsp+2D0h] [rbp+1C8h]
  EVENT_DATA_DESCRIPTOR v55; // [rsp+2D8h] [rbp+1D0h] BYREF
  int *v56; // [rsp+2F8h] [rbp+1F0h]
  __int64 v57; // [rsp+300h] [rbp+1F8h]
  int *v58; // [rsp+308h] [rbp+200h]
  __int64 v59; // [rsp+310h] [rbp+208h]

  HIDWORD(v11) = InitSafeBootMode;
  LODWORD(v11) = 9339;
  VersionInformation.dwOSVersionInfoSize = 284;
  Version = RtlGetVersion(&VersionInformation);
  if ( Version >= 0 )
  {
    v17 = KeBootTime;
    if ( stru_1402F3680.LevelPlus1 > 5 && TlgKeywordOn(&stru_1402F3680, 0x200000000000uLL) )
    {
      dwMajorVersion = VersionInformation.dwMajorVersion;
      dwMinorVersion = VersionInformation.dwMinorVersion;
      dwBuildNumber = VersionInformation.dwBuildNumber;
      v16 = v11;
      LOWORD(v9) = v22;
      v10 = dword_140328E08;
      p_dwMajorVersion = &dwMajorVersion;
      p_dwMinorVersion = &dwMinorVersion;
      p_dwBuildNumber = &dwBuildNumber;
      v43 = &v15;
      v45 = &v16;
      v47 = &v9;
      v49 = (char *)&v16 + 4;
      v51 = v19;
      v53 = &v10;
      v15 = 1;
      v19[0] = v1;
      v38 = 4LL;
      v40 = 4LL;
      v42 = 4LL;
      v44 = 4LL;
      v46 = 4LL;
      v48 = 2LL;
      v50 = 4LL;
      v52 = 8LL;
      v54 = 4LL;
      TlgWrite(&stru_1402F3680, &unk_14027E773, 0LL, 0LL, 0xBu, &pData);
    }
    LOBYTE(Version) = HviIsHypervisorVendorMicrosoft();
    if ( (_BYTE)Version )
    {
      HviGetHardwareFeatures((__int64)v20, v2, v3, v4);
      HviGetHypervisorFeatures(v19);
      LOBYTE(Version) = 0;
      if ( stru_1402F3680.LevelPlus1 > 5 )
      {
        LOBYTE(Version) = TlgKeywordOn(&stru_1402F3680, 0x400000000000uLL);
        if ( (_BYTE)Version )
        {
          LOBYTE(v9) = v6;
          v10 = (v20[0] >> 10) & 0xF;
          v56 = &v10;
          v58 = &v9;
          v57 = 4LL;
          v59 = 1LL;
          LOBYTE(Version) = TlgWrite(&stru_1402F3680, &unk_14027E73E, 0LL, 0LL, 4u, &v55);
        }
      }
    }
    if ( EtwKernelProvRegHandle )
    {
      *(_QWORD *)&UserData.Size = 4LL;
      UserData.Ptr = (ULONGLONG)&VersionInformation.dwMajorVersion;
      v25 = 4LL;
      p_SystemTimePrecise = (LARGE_INTEGER *)&VersionInformation.dwMinorVersion;
      v27 = 4LL;
      v26 = &VersionInformation.dwBuildNumber;
      v29 = 4LL;
      v28 = &v11;
      v30 = &v22;
      v32 = (char *)&v11 + 4;
      v34 = &v17;
      v31 = 2LL;
      v33 = 4LL;
      v35 = 8LL;
      EtwWrite(EtwKernelProvRegHandle, &KernelSystemStart, 0LL, 7u, &UserData);
      v5 = EtwKernelProvRegHandle;
      LOBYTE(Version) = EtwEventEnabled(EtwKernelProvRegHandle, &BootPerformanceData);
      if ( (_BYTE)Version )
      {
        *(_QWORD *)&UserData.Size = 56LL;
        UserData.Ptr = (ULONGLONG)&EtwBootPerfData;
        LOBYTE(Version) = EtwWrite(v5, &BootPerformanceData, 0LL, 1u, &UserData);
      }
      if ( (qword_1402FD038 & 4) != 0 )
      {
        SystemTimePrecise = RtlGetSystemTimePrecise();
        v7 = *(_QWORD *)(KeLoaderBlock_0 + 240) + 2560LL;
        *(_QWORD *)&UserData.Size = 8LL;
        UserData.Ptr = v7;
        p_SystemTimePrecise = &SystemTimePrecise;
        v25 = 8LL;
        v26 = (DWORD *)(*(_QWORD *)(KeLoaderBlock_0 + 240) + 2552LL);
        v27 = 4LL;
        LOBYTE(Version) = EtwWrite(EtwKernelProvRegHandle, &SoftBootInfo, 0LL, 3u, &UserData);
      }
    }
  }
  return Version;
}
