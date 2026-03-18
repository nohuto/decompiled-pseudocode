/*
 * XREFs of ?GetDWORDSettingValuesEx@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGKH@Z @ 0x1C006A818
 * Callers:
 *     ReadPointerDeviceSettings @ 0x1C006A3E0 (ReadPointerDeviceSettings.c)
 *     ?IsFlicksDisabledByGroupPolicy@@YAHXZ @ 0x1C006A7A8 (-IsFlicksDisabledByGroupPolicy@@YAHXZ.c)
 *     _GetPrecisionTouchPadConfiguration @ 0x1C00E4AD0 (_GetPrecisionTouchPadConfiguration.c)
 *     CheckPointerDeviceConfiguration @ 0x1C00E61F0 (CheckPointerDeviceConfiguration.c)
 *     ?LoadPointerDevicePenSettings@@YAHXZ @ 0x1C012D824 (-LoadPointerDevicePenSettings@@YAHXZ.c)
 *     ?LoadPointerDeviceTouchSettings@@YAHXZ @ 0x1C0134424 (-LoadPointerDeviceTouchSettings@@YAHXZ.c)
 * Callees:
 *     ?OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z @ 0x1C006ACEC (-OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z.c)
 *     ?ReadPointerDeviceCfgDWORDSetting@@YAJPEAXPEAUtagDEVICECONFIG_SETTING@@@Z @ 0x1C011D4E0 (-ReadPointerDeviceCfgDWORDSetting@@YAJPEAXPEAUtagDEVICECONFIG_SETTING@@@Z.c)
 */

__int64 __fastcall GetDWORDSettingValuesEx(
        struct tagDEVICECONFIG_SETTING *a1,
        unsigned int a2,
        unsigned __int16 *a3,
        unsigned int a4,
        int a5)
{
  __int64 v5; // rsi
  unsigned int v7; // ebx
  int v8; // r15d
  int PointerDeviceCfgDWORDSetting; // r14d
  _DWORD *v11; // rdi
  __int64 v12; // r12
  HANDLE Handle; // [rsp+30h] [rbp-28h] BYREF

  v5 = a4;
  v7 = 0;
  v8 = 0;
  PointerDeviceCfgDWORDSetting = OpenDeviceCfgKey(a2, a3, 0x20019u, &Handle, 0);
  if ( PointerDeviceCfgDWORDSetting >= 0 )
  {
    if ( (_DWORD)v5 )
    {
      v11 = (_DWORD *)((char *)a1 + 12);
      v8 = v5;
      v12 = v5;
      do
      {
        PointerDeviceCfgDWORDSetting = ReadPointerDeviceCfgDWORDSetting(Handle, a1);
        if ( PointerDeviceCfgDWORDSetting < 0 )
        {
          if ( a5 )
            *v11 = *(v11 - 1);
          else
            *v11 = -1;
        }
        a1 = (struct tagDEVICECONFIG_SETTING *)((char *)a1 + 16);
        v11 += 4;
        --v12;
      }
      while ( v12 );
    }
    ZwClose(Handle);
    if ( PointerDeviceCfgDWORDSetting >= 0 )
      return 1;
  }
  if ( v8 == (_DWORD)v5 )
    return 1;
  return v7;
}
