/*
 * XREFs of ?GetCustomFlick@@YAHPEAUtagCUSTOM_FLICK@@@Z @ 0x1C02254B0
 * Callers:
 *     ReadPointerDeviceSettings @ 0x1C006A3E0 (ReadPointerDeviceSettings.c)
 * Callees:
 *     ?OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z @ 0x1C006ACEC (-OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z.c)
 *     ?ReadPointerDeviceCfgDWORDSetting@@YAJPEAXPEAUtagDEVICECONFIG_SETTING@@@Z @ 0x1C011D4E0 (-ReadPointerDeviceCfgDWORDSetting@@YAJPEAXPEAUtagDEVICECONFIG_SETTING@@@Z.c)
 *     ?ReadPointerDeviceCfgStringSetting@@YAJPEAXPEBGPEAGK@Z @ 0x1C012CA9C (-ReadPointerDeviceCfgStringSetting@@YAJPEAXPEBGPEAGK@Z.c)
 *     ?GetCustomFlickPath@@YAHAEBU_GUID@@PEAU_UNICODE_STRING@@@Z @ 0x1C02255CC (-GetCustomFlickPath@@YAHAEBU_GUID@@PEAU_UNICODE_STRING@@@Z.c)
 */

__int64 __fastcall GetCustomFlick(GUID *a1)
{
  unsigned int v1; // ebx
  __int64 v3; // rdx
  int PointerDeviceCfgStringSetting; // edi
  __int64 v5; // r8
  HANDLE v6; // rcx
  HANDLE v7; // rcx
  struct _UNICODE_STRING Destination; // [rsp+30h] [rbp-30h] BYREF
  PCWSTR v10; // [rsp+40h] [rbp-20h] BYREF
  __int64 v11; // [rsp+48h] [rbp-18h]
  PCWSTR v12; // [rsp+50h] [rbp-10h] BYREF
  __int64 v13; // [rsp+58h] [rbp-8h]
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
      v10 = L"ModifierKeys";
      v11 = 0LL;
      v12 = L"KeyCode";
      v13 = 0LL;
      PointerDeviceCfgStringSetting = ReadPointerDeviceCfgDWORDSetting(Handle, &v10);
      if ( PointerDeviceCfgStringSetting >= 0 )
      {
        v6 = Handle;
        a1[1].Data1 = HIDWORD(v11);
        PointerDeviceCfgStringSetting = ReadPointerDeviceCfgDWORDSetting(v6, &v12);
        if ( PointerDeviceCfgStringSetting >= 0 )
        {
          v7 = Handle;
          *(_DWORD *)&a1[1].Data2 = HIDWORD(v13);
          PointerDeviceCfgStringSetting = ReadPointerDeviceCfgStringSetting(
                                            v7,
                                            L"FriendlyName",
                                            (char *)&a1[1].Data4[4],
                                            0x104u);
        }
      }
    }
    if ( Handle )
      ZwClose(Handle);
    Win32FreePool(Destination.Buffer, v3, v5);
    if ( PointerDeviceCfgStringSetting >= 0 )
      return 1;
  }
  return v1;
}
