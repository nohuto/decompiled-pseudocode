/*
 * XREFs of ?GetFlickMap@@YAHPEAUtagFLICK_MAP@@@Z @ 0x1C003D368
 * Callers:
 *     ReadPointerDeviceSettings @ 0x1C003C944 (ReadPointerDeviceSettings.c)
 * Callees:
 *     ?OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z @ 0x1C003CF54 (-OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z.c)
 *     ?ReadPointerDeviceCfgStringSetting@@YAJPEAXPEBGPEAGK@Z @ 0x1C0150FB4 (-ReadPointerDeviceCfgStringSetting@@YAJPEAXPEBGPEAGK@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

__int64 __fastcall GetFlickMap(struct tagFLICK_MAP *a1)
{
  unsigned int v1; // ebx
  unsigned int v3; // r12d
  int PointerDeviceCfgStringSetting; // esi
  __int128 *v6; // r14
  GUID **v7; // r15
  const WCHAR *v8; // rdx
  HANDLE v9; // rcx
  GUID *v10; // r13
  __int128 v11; // xmm0
  __int64 v12; // rcx
  __int128 v13; // xmm1
  HANDLE Handle; // [rsp+38h] [rbp-D0h] BYREF
  GUID v15; // [rsp+48h] [rbp-C0h]
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v17[15]; // [rsp+70h] [rbp-98h] BYREF
  WCHAR SourceString[128]; // [rsp+E8h] [rbp-20h] BYREF

  v1 = 0;
  v3 = 0;
  if ( gFlickMapMonitor )
    goto LABEL_2;
  v17[0] = a1;
  v17[2] = (char *)a1 + 16;
  v17[4] = (char *)a1 + 32;
  v17[6] = (char *)a1 + 48;
  v17[8] = (char *)a1 + 64;
  v17[10] = (char *)a1 + 80;
  v17[12] = (char *)a1 + 96;
  v17[14] = (char *)a1 + 112;
  if ( (unsigned int)RIMIsDefaultUILanguageRTL() != dword_1C031B074 )
  {
    v13 = xmmword_1C031EF78;
    dword_1C031B074 = dword_1C031B074 == 0;
    xmmword_1C031EF78 = xmmword_1C031EFD8;
    xmmword_1C031EFD8 = v13;
  }
  PointerDeviceCfgStringSetting = OpenDeviceCfgKey(
                                    0x7Cu,
                                    L"\\Software\\Microsoft\\Wisp\\Pen\\SysEventParameters\\FlickCommands",
                                    0x20019u,
                                    &Handle,
                                    0);
  if ( PointerDeviceCfgStringSetting >= 0 )
  {
    v6 = &xmmword_1C031EF78;
    v7 = (GUID **)v17;
    while ( PointerDeviceCfgStringSetting >= 0 )
    {
      v8 = (const WCHAR *)*((_QWORD *)v6 - 1);
      v9 = Handle;
      *(v7 - 1) = (GUID *)SourceString;
      PointerDeviceCfgStringSetting = ReadPointerDeviceCfgStringSetting(v9, v8, SourceString, 0x7Du);
      if ( PointerDeviceCfgStringSetting >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, SourceString);
        v10 = *v7;
        PointerDeviceCfgStringSetting = RtlGUIDFromString(&DestinationString, *v7);
        if ( PointerDeviceCfgStringSetting >= 0 )
        {
          v11 = (__int128)*v10;
          v15 = *v10;
          v12 = -*(_QWORD *)&v15.Data1;
          if ( !*(_QWORD *)&v15.Data1 )
            v12 = -*(_QWORD *)v15.Data4;
          if ( v12 )
            *v6 = v11;
        }
      }
      ++v3;
      v7 += 2;
      v6 = (__int128 *)((char *)v6 + 24);
      if ( v3 >= 8 )
      {
        if ( PointerDeviceCfgStringSetting >= 0 )
          gFlickMapMonitor = 1;
        break;
      }
    }
    ZwClose(Handle);
  }
  if ( gFlickMapMonitor )
  {
LABEL_2:
    PointerDeviceCfgStringSetting = 0;
    *(_OWORD *)a1 = xmmword_1C031EF78;
    *((_OWORD *)a1 + 1) = xmmword_1C031EF90;
    *((_OWORD *)a1 + 2) = xmmword_1C031EFA8;
    *((_OWORD *)a1 + 3) = xmmword_1C031EFC0;
    *((_OWORD *)a1 + 4) = xmmword_1C031EFD8;
    *((_OWORD *)a1 + 5) = xmmword_1C031EFF0;
    *((_OWORD *)a1 + 6) = xmmword_1C031F008;
    *((_OWORD *)a1 + 7) = xmmword_1C031F020;
  }
  LOBYTE(v1) = PointerDeviceCfgStringSetting >= 0;
  return v1;
}
