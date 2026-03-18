/*
 * XREFs of xxxUserReinitializeAutoRotation @ 0x1C00E92B0
 * Callers:
 *     xxxRemoteReconnect @ 0x1C01537F0 (xxxRemoteReconnect.c)
 * Callees:
 *     xxxApplyOrientationPreference @ 0x1C0098AE8 (xxxApplyOrientationPreference.c)
 *     _TlgWrite @ 0x1C00E5414 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C00E56D0 (_TlgKeywordOn.c)
 *     ?QueryAutoRotationRegistrySetting@@YAKPEBGK0@Z @ 0x1C00E93D8 (-QueryAutoRotationRegistrySetting@@YAKPEBGK0@Z.c)
 *     ?IsNativeOrientationPortrait@@YAHXZ @ 0x1C00E94BC (-IsNativeOrientationPortrait@@YAHXZ.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

__int64 xxxUserReinitializeAutoRotation()
{
  const GUID *v0; // r8
  const GUID *v1; // r9
  unsigned int AutoRotationRegistrySetting; // eax
  unsigned int v3; // ecx
  unsigned int v4; // eax
  int v6; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  int *v8; // [rsp+60h] [rbp-38h]
  __int64 v9; // [rsp+68h] [rbp-30h]
  int *v10; // [rsp+70h] [rbp-28h]
  __int64 v11; // [rsp+78h] [rbp-20h]

  dword_1C0329468 = QueryAutoRotationRegistrySetting(
                      L"Enable",
                      1u,
                      L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\AutoRotation");
  if ( dword_1C0320840 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C0320840, 0x400000000001uLL) )
  {
    v6 = 1;
    v8 = &dword_1C0329468;
    v9 = 4LL;
    v10 = &v6;
    v11 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1C0320840, &unk_1C02EE18D, v0, v1, 4u, &pData);
  }
  dword_1C0329498 = QueryAutoRotationRegistrySetting(
                      L"SlateEnable",
                      1u,
                      L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\AutoRotation");
  dword_1C032946C = QueryAutoRotationRegistrySetting(
                      L"SensorPresent",
                      0,
                      L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\AutoRotation") == 1;
  AutoRotationRegistrySetting = QueryAutoRotationRegistrySetting(
                                  L"LastAutoRequest",
                                  0xFFFFFFFF,
                                  L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\AutoRotation\\NonPreserve");
  v3 = AutoRotationRegistrySetting;
  if ( AutoRotationRegistrySetting > 3 )
    v3 = 0;
  gAutoRotationInfo = v3;
  dword_1C0329488 = AutoRotationRegistrySetting != -1;
  v4 = QueryAutoRotationRegistrySetting(
         L"LastOrientation",
         0,
         L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\AutoRotation");
  if ( v4 > 3 )
    v4 = 0;
  dword_1C0329464 = v4;
  dword_1C0329478 = IsNativeOrientationPortrait();
  dword_1C032947C = 0;
  return xxxApplyOrientationPreference();
}
