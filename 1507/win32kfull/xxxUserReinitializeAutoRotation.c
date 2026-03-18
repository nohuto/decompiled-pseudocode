/*
 * XREFs of xxxUserReinitializeAutoRotation @ 0x1C0154340
 * Callers:
 *     xxxRemoteReconnect @ 0x1C012DFA0 (xxxRemoteReconnect.c)
 * Callees:
 *     _TlgWrite @ 0x1C007D678 (_TlgWrite.c)
 *     xxxApplyOrientationPreference @ 0x1C007D7E8 (xxxApplyOrientationPreference.c)
 *     _TlgKeywordOn @ 0x1C007E128 (_TlgKeywordOn.c)
 *     ?QueryAutoRotationRegistrySetting@@YAKPEBGK0@Z @ 0x1C0100030 (-QueryAutoRotationRegistrySetting@@YAKPEBGK0@Z.c)
 *     ?IsNativeOrientationPortrait@@YAHXZ @ 0x1C0154484 (-IsNativeOrientationPortrait@@YAHXZ.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

__int64 xxxUserReinitializeAutoRotation()
{
  const struct _TlgProvider_t *v0; // rcx
  const GUID *v1; // r8
  const GUID *v2; // r9
  unsigned int AutoRotationRegistrySetting; // eax
  unsigned int v4; // ecx
  unsigned int v5; // eax
  int v7; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  int *v9; // [rsp+60h] [rbp-38h]
  __int64 v10; // [rsp+68h] [rbp-30h]
  int *v11; // [rsp+70h] [rbp-28h]
  __int64 v12; // [rsp+78h] [rbp-20h]

  dword_1C0323038 = QueryAutoRotationRegistrySetting(
                      L"Enable",
                      1u,
                      L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\AutoRotation");
  if ( (unsigned int)dword_1C031D7B0 > 5 && TlgKeywordOn(v0, 0x400000000000uLL) )
  {
    v7 = 1;
    v9 = &dword_1C0323038;
    v10 = 4LL;
    v11 = &v7;
    v12 = 4LL;
    TlgWrite((TraceLoggingHProvider)4, &unk_1C02EA3D9, v1, v2, 4u, &pData);
  }
  dword_1C032303C = QueryAutoRotationRegistrySetting(
                      L"SensorPresent",
                      0,
                      L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\AutoRotation") == 1;
  AutoRotationRegistrySetting = QueryAutoRotationRegistrySetting(
                                  L"LastAutoRequest",
                                  0xFFFFFFFF,
                                  L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\AutoRotation\\NonPreserve");
  v4 = AutoRotationRegistrySetting;
  if ( AutoRotationRegistrySetting > 3 )
    v4 = 0;
  gAutoRotationInfo = v4;
  dword_1C0323058 = AutoRotationRegistrySetting != -1;
  v5 = QueryAutoRotationRegistrySetting(
         L"LastOrientation",
         0,
         L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\AutoRotation");
  if ( v5 > 3 )
    v5 = 0;
  dword_1C0323034 = v5;
  dword_1C0323048 = IsNativeOrientationPortrait();
  dword_1C032304C = 0;
  return xxxApplyOrientationPreference();
}
