/*
 * XREFs of ?IsFlicksDisabledByGroupPolicy@@YAHXZ @ 0x1C006A7A8
 * Callers:
 *     ReadPointerDeviceSettings @ 0x1C006A3E0 (ReadPointerDeviceSettings.c)
 * Callees:
 *     ?GetDWORDSettingValuesEx@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGKH@Z @ 0x1C006A818 (-GetDWORDSettingValuesEx@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGKH@Z.c)
 *     GetLocalMachineRegistryDWORDValues @ 0x1C006A9CC (GetLocalMachineRegistryDWORDValues.c)
 */

__int64 __fastcall IsFlicksDisabledByGroupPolicy(__int64 a1)
{
  unsigned int v1; // ebx
  int LocalMachineRegistryDWORDValues; // eax
  const wchar_t *v4; // [rsp+30h] [rbp-18h] BYREF
  __int64 v5; // [rsp+38h] [rbp-10h]

  v1 = 0;
  v4 = L"PreventFlicks";
  v5 = 0LL;
  LocalMachineRegistryDWORDValues = GetLocalMachineRegistryDWORDValues(
                                      a1,
                                      L"\\Software\\Policies\\Microsoft\\TabletPC",
                                      &v4);
  if ( HIDWORD(v5) )
  {
    return LocalMachineRegistryDWORDValues >= 0;
  }
  else if ( (unsigned int)GetDWORDSettingValuesEx(
                            (struct tagDEVICECONFIG_SETTING *)&v4,
                            0x4Cu,
                            L"\\Software\\Policies\\Microsoft\\TabletPC",
                            1u,
                            0) )
  {
    return HIDWORD(v5) == 1;
  }
  return v1;
}
