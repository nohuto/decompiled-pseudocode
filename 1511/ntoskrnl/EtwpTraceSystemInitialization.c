/*
 * XREFs of EtwpTraceSystemInitialization @ 0x140755A0C
 * Callers:
 *     EtwpInitialize @ 0x140757334 (EtwpInitialize.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1400923CC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140092474 (_TlgWrite.c)
 *     EtwWrite @ 0x14009DEC0 (EtwWrite.c)
 *     HviIsHypervisorVendorMicrosoft @ 0x14013408C (HviIsHypervisorVendorMicrosoft.c)
 *     HviGetHypervisorFeatures @ 0x140137088 (HviGetHypervisorFeatures.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     HviGetHardwareFeatures @ 0x140217CE4 (HviGetHardwareFeatures.c)
 *     RtlGetVersion @ 0x1404B8B08 (RtlGetVersion.c)
 */

char EtwpTraceSystemInitialization()
{
  NTSTATUS Version; // eax
  __int64 v1; // r9
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  char v5; // r9
  int v7; // [rsp+38h] [rbp-D0h] BYREF
  int v8; // [rsp+3Ch] [rbp-CCh] BYREF
  int v9; // [rsp+40h] [rbp-C8h] BYREF
  int v10; // [rsp+44h] [rbp-C4h] BYREF
  int v11; // [rsp+48h] [rbp-C0h] BYREF
  int v12; // [rsp+4Ch] [rbp-BCh] BYREF
  DWORD dwMajorVersion; // [rsp+50h] [rbp-B8h] BYREF
  DWORD dwBuildNumber; // [rsp+54h] [rbp-B4h] BYREF
  __int64 v15; // [rsp+58h] [rbp-B0h] BYREF
  LARGE_INTEGER v16; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v17[2]; // [rsp+68h] [rbp-A0h] BYREF
  unsigned int v18[4]; // [rsp+78h] [rbp-90h] BYREF
  _OSVERSIONINFOW VersionInformation; // [rsp+88h] [rbp-80h] BYREF
  __int16 v20; // [rsp+19Ch] [rbp+94h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+1A8h] [rbp+A0h] BYREF
  DWORD *p_dwMinorVersion; // [rsp+1B8h] [rbp+B0h]
  __int64 v23; // [rsp+1C0h] [rbp+B8h]
  DWORD *v24; // [rsp+1C8h] [rbp+C0h]
  __int64 v25; // [rsp+1D0h] [rbp+C8h]
  int *v26; // [rsp+1D8h] [rbp+D0h]
  __int64 v27; // [rsp+1E0h] [rbp+D8h]
  __int16 *v28; // [rsp+1E8h] [rbp+E0h]
  __int64 v29; // [rsp+1F0h] [rbp+E8h]
  int *v30; // [rsp+1F8h] [rbp+F0h]
  __int64 v31; // [rsp+200h] [rbp+F8h]
  LARGE_INTEGER *v32; // [rsp+208h] [rbp+100h]
  __int64 v33; // [rsp+210h] [rbp+108h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+218h] [rbp+110h] BYREF
  DWORD *p_dwMajorVersion; // [rsp+238h] [rbp+130h]
  __int64 v36; // [rsp+240h] [rbp+138h]
  __int64 *v37; // [rsp+248h] [rbp+140h]
  __int64 v38; // [rsp+250h] [rbp+148h]
  DWORD *p_dwBuildNumber; // [rsp+258h] [rbp+150h]
  __int64 v40; // [rsp+260h] [rbp+158h]
  int *v41; // [rsp+268h] [rbp+160h]
  __int64 v42; // [rsp+270h] [rbp+168h]
  int *v43; // [rsp+278h] [rbp+170h]
  __int64 v44; // [rsp+280h] [rbp+178h]
  int *v45; // [rsp+288h] [rbp+180h]
  __int64 v46; // [rsp+290h] [rbp+188h]
  int *v47; // [rsp+298h] [rbp+190h]
  __int64 v48; // [rsp+2A0h] [rbp+198h]
  _QWORD *v49; // [rsp+2A8h] [rbp+1A0h]
  __int64 v50; // [rsp+2B0h] [rbp+1A8h]
  EVENT_DATA_DESCRIPTOR v51; // [rsp+2B8h] [rbp+1B0h] BYREF
  int *v52; // [rsp+2D8h] [rbp+1D0h]
  __int64 v53; // [rsp+2E0h] [rbp+1D8h]
  int *v54; // [rsp+2E8h] [rbp+1E0h]
  __int64 v55; // [rsp+2F0h] [rbp+1E8h]

  v10 = InitSafeBootMode;
  v9 = 0x4000;
  VersionInformation.dwOSVersionInfoSize = 284;
  Version = RtlGetVersion(&VersionInformation);
  if ( Version >= 0 )
  {
    v16 = KeBootTime;
    if ( stru_1402D1AD0.LevelPlus1 > 5 && TlgKeywordOn(&stru_1402D1AD0, 0x200000000000uLL) )
    {
      dwMajorVersion = VersionInformation.dwMajorVersion;
      LODWORD(v15) = VersionInformation.dwMinorVersion;
      dwBuildNumber = VersionInformation.dwBuildNumber;
      v11 = v9;
      LOWORD(v7) = v20;
      v8 = v10;
      p_dwMajorVersion = &dwMajorVersion;
      v37 = &v15;
      p_dwBuildNumber = &dwBuildNumber;
      v41 = &v12;
      v43 = &v11;
      v45 = &v7;
      v47 = &v8;
      v49 = v17;
      v12 = 1;
      v17[0] = v1;
      v36 = 4LL;
      v38 = 4LL;
      v40 = 4LL;
      v42 = 4LL;
      v44 = 4LL;
      v46 = 2LL;
      v48 = 4LL;
      v50 = 8LL;
      TlgWrite(&stru_1402D1AD0, &unk_14025515E, 0LL, 0LL, 0xAu, &pData);
    }
    LOBYTE(Version) = HviIsHypervisorVendorMicrosoft();
    if ( (_BYTE)Version )
    {
      HviGetHardwareFeatures((__int64)v18, v2, v3, v4);
      HviGetHypervisorFeatures(v17);
      LOBYTE(Version) = 0;
      if ( stru_1402D1AD0.LevelPlus1 > 5 )
      {
        LOBYTE(Version) = TlgKeywordOn(&stru_1402D1AD0, 0x400000000000uLL);
        if ( (_BYTE)Version )
        {
          LOBYTE(v7) = v5;
          v8 = (v18[0] >> 10) & 0xF;
          v52 = &v8;
          v54 = &v7;
          v53 = 4LL;
          v55 = 1LL;
          LOBYTE(Version) = TlgWrite(&stru_1402D1AD0, &unk_140254FA9, 0LL, 0LL, 4u, &v51);
        }
      }
    }
    if ( EtwKernelProvRegHandle )
    {
      *(_QWORD *)&UserData.Size = 4LL;
      UserData.Ptr = (ULONGLONG)&VersionInformation.dwMajorVersion;
      v23 = 4LL;
      p_dwMinorVersion = &VersionInformation.dwMinorVersion;
      v25 = 4LL;
      v24 = &VersionInformation.dwBuildNumber;
      v27 = 4LL;
      v26 = &v9;
      v28 = &v20;
      v30 = &v10;
      v32 = &v16;
      v29 = 2LL;
      v31 = 4LL;
      v33 = 8LL;
      LOBYTE(Version) = EtwWrite(EtwKernelProvRegHandle, &KernelSystemStart, 0LL, 7u, &UserData);
    }
  }
  return Version;
}
