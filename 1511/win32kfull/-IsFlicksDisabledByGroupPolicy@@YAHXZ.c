/*
 * XREFs of ?IsFlicksDisabledByGroupPolicy@@YAHXZ @ 0x1C0125938
 * Callers:
 *     ReadPointerDeviceSettings @ 0x1C0125F9C (ReadPointerDeviceSettings.c)
 * Callees:
 *     ?GetDWORDSettingValues@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGK@Z @ 0x1C01259A4 (-GetDWORDSettingValues@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGK@Z.c)
 *     GetLocalMachineRegistryDWORDValues @ 0x1C0125BB4 (GetLocalMachineRegistryDWORDValues.c)
 */

__int64 __fastcall IsFlicksDisabledByGroupPolicy(__int64 a1)
{
  unsigned int v1; // ebx
  int LocalMachineRegistryDWORDValues; // eax
  const wchar_t *v4; // [rsp+20h] [rbp-18h] BYREF
  __int64 v5; // [rsp+28h] [rbp-10h]

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
  else if ( (unsigned int)GetDWORDSettingValues(
                            (struct tagDEVICECONFIG_SETTING *)&v4,
                            0x4Cu,
                            L"\\Software\\Policies\\Microsoft\\TabletPC",
                            1u) )
  {
    return HIDWORD(v5) == 1;
  }
  return v1;
}
