/*
 * XREFs of ?GetDWORDSettingValues@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGK@Z @ 0x1C01259A4
 * Callers:
 *     CheckPointerDeviceConfiguration @ 0x1C0098070 (CheckPointerDeviceConfiguration.c)
 *     _GetPrecisionTouchPadConfiguration @ 0x1C0098878 (_GetPrecisionTouchPadConfiguration.c)
 *     ?LoadPointerDevicePenSettings@@YAHXZ @ 0x1C0111430 (-LoadPointerDevicePenSettings@@YAHXZ.c)
 *     ?LoadPointerDeviceTouchSettings@@YAHXZ @ 0x1C0113358 (-LoadPointerDeviceTouchSettings@@YAHXZ.c)
 *     ?IsFlicksDisabledByGroupPolicy@@YAHXZ @ 0x1C0125938 (-IsFlicksDisabledByGroupPolicy@@YAHXZ.c)
 *     ReadPointerDeviceSettings @ 0x1C0125F9C (ReadPointerDeviceSettings.c)
 * Callees:
 *     ?ReadPointerDeviceCfgDWORDSetting@@YAJPEAXPEAUtagDEVICECONFIG_SETTING@@@Z @ 0x1C012566C (-ReadPointerDeviceCfgDWORDSetting@@YAJPEAXPEAUtagDEVICECONFIG_SETTING@@@Z.c)
 *     ?OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z @ 0x1C0125A64 (-OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z.c)
 */

__int64 __fastcall GetDWORDSettingValues(
        struct tagDEVICECONFIG_SETTING *a1,
        unsigned int a2,
        unsigned __int16 *a3,
        unsigned int a4)
{
  __int64 v4; // rbp
  unsigned int v6; // ebx
  int v7; // r15d
  int PointerDeviceCfgDWORDSetting; // r14d
  _DWORD *v10; // rsi
  __int64 v11; // r12
  HANDLE Handle; // [rsp+30h] [rbp-28h] BYREF

  v4 = a4;
  v6 = 0;
  v7 = 0;
  PointerDeviceCfgDWORDSetting = OpenDeviceCfgKey(a2, a3, 0x20019u, &Handle, 0);
  if ( PointerDeviceCfgDWORDSetting >= 0 )
  {
    if ( (_DWORD)v4 )
    {
      v10 = (_DWORD *)((char *)a1 + 12);
      v7 = v4;
      v11 = v4;
      do
      {
        PointerDeviceCfgDWORDSetting = ReadPointerDeviceCfgDWORDSetting(Handle, (PCWSTR *)a1);
        if ( PointerDeviceCfgDWORDSetting < 0 )
          *v10 = -1;
        a1 = (struct tagDEVICECONFIG_SETTING *)((char *)a1 + 16);
        v10 += 4;
        --v11;
      }
      while ( v11 );
    }
    ZwClose(Handle);
    if ( PointerDeviceCfgDWORDSetting >= 0 )
      return 1;
  }
  if ( v7 == (_DWORD)v4 )
    return 1;
  return v6;
}
