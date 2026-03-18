/*
 * XREFs of ?WriteSettingValues@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGK@Z @ 0x1C0225B4C
 * Callers:
 *     WritePointerDeviceSettings @ 0x1C0225C04 (WritePointerDeviceSettings.c)
 *     _SetPrecisionTouchPadConfiguration @ 0x1C0225EF0 (_SetPrecisionTouchPadConfiguration.c)
 * Callees:
 *     ?OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z @ 0x1C006ACEC (-OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z.c)
 *     ?WritePointerDeviceCfgSetting@@YAJPEAXPEBGIPEAEI@Z @ 0x1C02259B8 (-WritePointerDeviceCfgSetting@@YAJPEAXPEBGIPEAEI@Z.c)
 */

__int64 __fastcall WriteSettingValues(
        const unsigned __int16 **a1,
        unsigned int a2,
        unsigned __int16 *a3,
        unsigned int a4)
{
  unsigned int v6; // edi
  int v7; // ebp
  unsigned int v8; // ebx
  const unsigned __int16 **v9; // rsi
  HANDLE Handle; // [rsp+30h] [rbp-28h] BYREF

  v6 = 0;
  v7 = OpenDeviceCfgKey(a2, a3, 0x20006u, &Handle, 0);
  if ( v7 < 0 )
    return 0;
  v8 = 1;
  if ( a4 )
  {
    v9 = a1;
    do
    {
      v7 = WritePointerDeviceCfgSetting(Handle, *v9, 4u, (unsigned __int8 *)&a1[2 * v6 + 1] + 4, 4u);
      if ( v7 < 0 )
        break;
      ++v6;
      v9 += 2;
    }
    while ( v6 < a4 );
  }
  ZwClose(Handle);
  if ( v7 < 0 )
    return 0;
  return v8;
}
