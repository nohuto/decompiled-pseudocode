/*
 * XREFs of EtwpTraceSystemInitialization @ 0x1407E549C
 * Callers:
 *     EtwpInitialize @ 0x1407C0848 (EtwpInitialize.c)
 * Callees:
 *     EtwWrite @ 0x140014D30 (EtwWrite.c)
 *     _TlgWrite @ 0x1400EFEB0 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1400EFFB0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     RtlGetVersion @ 0x14054DFF8 (RtlGetVersion.c)
 */

char EtwpTraceSystemInitialization()
{
  NTSTATUS Version; // eax
  __int64 v1; // r9
  __int16 v3; // [rsp+30h] [rbp-D0h] BYREF
  int v4; // [rsp+34h] [rbp-CCh] BYREF
  int v5; // [rsp+38h] [rbp-C8h] BYREF
  int v6; // [rsp+3Ch] [rbp-C4h] BYREF
  int v7; // [rsp+40h] [rbp-C0h] BYREF
  DWORD dwMajorVersion; // [rsp+44h] [rbp-BCh] BYREF
  int v9; // [rsp+48h] [rbp-B8h] BYREF
  DWORD dwBuildNumber; // [rsp+4Ch] [rbp-B4h] BYREF
  DWORD dwMinorVersion; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v12; // [rsp+58h] [rbp-A8h] BYREF
  LARGE_INTEGER v13; // [rsp+60h] [rbp-A0h] BYREF
  _OSVERSIONINFOW VersionInformation; // [rsp+70h] [rbp-90h] BYREF
  __int16 v15; // [rsp+184h] [rbp+84h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+190h] [rbp+90h] BYREF
  DWORD *v17; // [rsp+1A0h] [rbp+A0h]
  __int64 v18; // [rsp+1A8h] [rbp+A8h]
  DWORD *v19; // [rsp+1B0h] [rbp+B0h]
  __int64 v20; // [rsp+1B8h] [rbp+B8h]
  int *v21; // [rsp+1C0h] [rbp+C0h]
  __int64 v22; // [rsp+1C8h] [rbp+C8h]
  __int16 *v23; // [rsp+1D0h] [rbp+D0h]
  __int64 v24; // [rsp+1D8h] [rbp+D8h]
  int *v25; // [rsp+1E0h] [rbp+E0h]
  __int64 v26; // [rsp+1E8h] [rbp+E8h]
  LARGE_INTEGER *v27; // [rsp+1F0h] [rbp+F0h]
  __int64 v28; // [rsp+1F8h] [rbp+F8h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+200h] [rbp+100h] BYREF
  DWORD *p_dwMajorVersion; // [rsp+220h] [rbp+120h]
  __int64 v31; // [rsp+228h] [rbp+128h]
  DWORD *p_dwMinorVersion; // [rsp+230h] [rbp+130h]
  __int64 v33; // [rsp+238h] [rbp+138h]
  DWORD *p_dwBuildNumber; // [rsp+240h] [rbp+140h]
  __int64 v35; // [rsp+248h] [rbp+148h]
  int *v36; // [rsp+250h] [rbp+150h]
  __int64 v37; // [rsp+258h] [rbp+158h]
  int *v38; // [rsp+260h] [rbp+160h]
  __int64 v39; // [rsp+268h] [rbp+168h]
  __int16 *v40; // [rsp+270h] [rbp+170h]
  __int64 v41; // [rsp+278h] [rbp+178h]
  int *v42; // [rsp+280h] [rbp+180h]
  __int64 v43; // [rsp+288h] [rbp+188h]
  __int64 *v44; // [rsp+290h] [rbp+190h]
  __int64 v45; // [rsp+298h] [rbp+198h]

  v5 = InitSafeBootMode;
  v4 = 16506;
  VersionInformation.dwOSVersionInfoSize = 284;
  Version = RtlGetVersion(&VersionInformation);
  if ( Version >= 0 )
  {
    v13 = KeBootTime;
    if ( stru_140320BE0.LevelPlus1 > 5 )
    {
      LOBYTE(Version) = TlgKeywordOn(&stru_140320BE0, 0x200000000000uLL);
      if ( (_BYTE)Version )
      {
        dwMajorVersion = VersionInformation.dwMajorVersion;
        dwMinorVersion = VersionInformation.dwMinorVersion;
        dwBuildNumber = VersionInformation.dwBuildNumber;
        v9 = v4;
        v3 = v15;
        v7 = v5;
        p_dwMajorVersion = &dwMajorVersion;
        p_dwMinorVersion = &dwMinorVersion;
        p_dwBuildNumber = &dwBuildNumber;
        v36 = &v6;
        v38 = &v9;
        v40 = &v3;
        v42 = &v7;
        v44 = &v12;
        v6 = 1;
        v12 = v1;
        v31 = 4LL;
        v33 = 4LL;
        v35 = 4LL;
        v37 = 4LL;
        v39 = 4LL;
        v41 = 2LL;
        v43 = 4LL;
        v45 = 8LL;
        LOBYTE(Version) = TlgWrite(&stru_140320BE0, &unk_1402A5018, 0LL, 0LL, 0xAu, &pData);
      }
    }
    if ( EtwKernelProvRegHandle )
    {
      *(_QWORD *)&UserData.Size = 4LL;
      UserData.Ptr = (ULONGLONG)&VersionInformation.dwMajorVersion;
      v18 = 4LL;
      v17 = &VersionInformation.dwMinorVersion;
      v20 = 4LL;
      v19 = &VersionInformation.dwBuildNumber;
      v22 = 4LL;
      v21 = &v4;
      v23 = &v15;
      v25 = &v5;
      v27 = &v13;
      v24 = 2LL;
      v26 = 4LL;
      v28 = 8LL;
      LOBYTE(Version) = EtwWrite(EtwKernelProvRegHandle, &KernelSystemStart, 0LL, 7u, &UserData);
    }
  }
  return Version;
}
