/*
 * XREFs of ?GetDWORDSettingValues@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGK@Z @ 0x1C003CD70
 * Callers:
 *     _GetPrecisionTouchPadConfiguration @ 0x1C0039AF0 (_GetPrecisionTouchPadConfiguration.c)
 *     ReadPointerDeviceSettings @ 0x1C003C944 (ReadPointerDeviceSettings.c)
 *     ?IsFlicksDisabledByGroupPolicy@@YAHXZ @ 0x1C003CD04 (-IsFlicksDisabledByGroupPolicy@@YAHXZ.c)
 *     CheckPointerDeviceConfiguration @ 0x1C0145214 (CheckPointerDeviceConfiguration.c)
 *     ?LoadPointerDevicePenSettings@@YAHXZ @ 0x1C0151B88 (-LoadPointerDevicePenSettings@@YAHXZ.c)
 *     ?LoadPointerDeviceTouchSettings@@YAHXZ @ 0x1C0156CA4 (-LoadPointerDeviceTouchSettings@@YAHXZ.c)
 * Callees:
 *     ?OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z @ 0x1C003CF54 (-OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z.c)
 *     ?ReadPointerDeviceCfgDWORDSetting@@YAJPEAXPEAUtagDEVICECONFIG_SETTING@@@Z @ 0x1C003D594 (-ReadPointerDeviceCfgDWORDSetting@@YAJPEAXPEAUtagDEVICECONFIG_SETTING@@@Z.c)
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
        PointerDeviceCfgDWORDSetting = ReadPointerDeviceCfgDWORDSetting(Handle, a1);
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
