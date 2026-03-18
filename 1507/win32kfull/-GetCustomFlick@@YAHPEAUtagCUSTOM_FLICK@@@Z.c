/*
 * XREFs of ?GetCustomFlick@@YAHPEAUtagCUSTOM_FLICK@@@Z @ 0x1C02253E0
 * Callers:
 *     ReadPointerDeviceSettings @ 0x1C003C944 (ReadPointerDeviceSettings.c)
 * Callees:
 *     ?OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z @ 0x1C003CF54 (-OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z.c)
 *     ?ReadPointerDeviceCfgDWORDSetting@@YAJPEAXPEAUtagDEVICECONFIG_SETTING@@@Z @ 0x1C003D594 (-ReadPointerDeviceCfgDWORDSetting@@YAJPEAXPEAUtagDEVICECONFIG_SETTING@@@Z.c)
 *     ?ReadPointerDeviceCfgStringSetting@@YAJPEAXPEBGPEAGK@Z @ 0x1C0150FB4 (-ReadPointerDeviceCfgStringSetting@@YAJPEAXPEBGPEAGK@Z.c)
 *     ?GetCustomFlickPath@@YAHAEBU_GUID@@PEAU_UNICODE_STRING@@@Z @ 0x1C02254FC (-GetCustomFlickPath@@YAHAEBU_GUID@@PEAU_UNICODE_STRING@@@Z.c)
 */

__int64 __fastcall GetCustomFlick(GUID *a1)
{
  unsigned int v1; // ebx
  int PointerDeviceCfgStringSetting; // edi
  HANDLE v4; // rcx
  HANDLE v5; // rcx
  struct _UNICODE_STRING Destination; // [rsp+30h] [rbp-30h] BYREF
  PCWSTR v8; // [rsp+40h] [rbp-20h] BYREF
  __int64 v9; // [rsp+48h] [rbp-18h]
  PCWSTR v10; // [rsp+50h] [rbp-10h] BYREF
  __int64 v11; // [rsp+58h] [rbp-8h]
  HANDLE Handle; // [rsp+70h] [rbp+10h] BYREF

  v1 = 0;
  *(_QWORD *)&Destination.MaximumLength = 0LL;
  Destination.Length = 0;
  *(_DWORD *)((char *)&Destination.Buffer + 2) = 0;
  HIWORD(Destination.Buffer) = 0;
  Handle = 0LL;
  if ( (unsigned int)GetCustomFlickPath(a1, &Destination) )
  {
    Destination.Buffer[(unsigned __int64)Destination.Length >> 1] = 0;
    PointerDeviceCfgStringSetting = OpenDeviceCfgKey(
                                      Destination.MaximumLength,
                                      Destination.Buffer,
                                      0x20019u,
                                      &Handle,
                                      0);
    if ( PointerDeviceCfgStringSetting >= 0 )
    {
      v8 = L"ModifierKeys";
      v9 = 0LL;
      v10 = L"KeyCode";
      v11 = 0LL;
      PointerDeviceCfgStringSetting = ReadPointerDeviceCfgDWORDSetting(Handle, &v8);
      if ( PointerDeviceCfgStringSetting >= 0 )
      {
        v4 = Handle;
        a1[1].Data1 = HIDWORD(v9);
        PointerDeviceCfgStringSetting = ReadPointerDeviceCfgDWORDSetting(v4, &v10);
        if ( PointerDeviceCfgStringSetting >= 0 )
        {
          v5 = Handle;
          *(_DWORD *)&a1[1].Data2 = HIDWORD(v11);
          PointerDeviceCfgStringSetting = ReadPointerDeviceCfgStringSetting(
                                            v5,
                                            L"FriendlyName",
                                            (char *)&a1[1].Data4[4],
                                            0x104u);
        }
      }
    }
    if ( Handle )
      ZwClose(Handle);
    Win32FreePool(Destination.Buffer);
    if ( PointerDeviceCfgStringSetting >= 0 )
      return 1;
  }
  return v1;
}
