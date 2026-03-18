/*
 * XREFs of ?GetFlickMap@@YAHPEAUtagFLICK_MAP@@@Z @ 0x1C0068400
 * Callers:
 *     ReadPointerDeviceSettings @ 0x1C006A3E0 (ReadPointerDeviceSettings.c)
 * Callees:
 *     ?OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z @ 0x1C006ACEC (-OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z.c)
 *     ?ReadPointerDeviceCfgStringSetting@@YAJPEAXPEBGPEAGK@Z @ 0x1C012CA9C (-ReadPointerDeviceCfgStringSetting@@YAJPEAXPEBGPEAGK@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

__int64 __fastcall GetFlickMap(struct tagFLICK_MAP *a1)
{
  unsigned int v1; // ebx
  unsigned int v3; // r12d
  NTSTATUS PointerDeviceCfgStringSetting; // esi
  __int128 *v6; // r14
  GUID **v7; // r15
  const WCHAR *v8; // rdx
  HANDLE v9; // rcx
  GUID *v10; // r13
  __int128 v11; // xmm0
  __int64 v12; // rcx
  __int128 v13; // xmm1
  HANDLE Handle; // [rsp+38h] [rbp-D0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C8h] BYREF
  GUID v16; // [rsp+58h] [rbp-B0h]
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
  if ( (unsigned int)RIMIsDefaultUILanguageRTL() != dword_1C03200D4 )
  {
    v13 = xmmword_1C0320C28;
    dword_1C03200D4 = dword_1C03200D4 == 0;
    xmmword_1C0320C28 = xmmword_1C0320C88;
    xmmword_1C0320C88 = v13;
  }
  PointerDeviceCfgStringSetting = OpenDeviceCfgKey(
                                    0x7Cu,
                                    L"\\Software\\Microsoft\\Wisp\\Pen\\SysEventParameters\\FlickCommands",
                                    0x20019u,
                                    &Handle,
                                    0);
  if ( PointerDeviceCfgStringSetting >= 0 )
  {
    v6 = &xmmword_1C0320C28;
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
          v16 = *v10;
          v12 = -*(_QWORD *)&v16.Data1;
          if ( !*(_QWORD *)&v16.Data1 )
            v12 = -*(_QWORD *)v16.Data4;
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
    *(_OWORD *)a1 = xmmword_1C0320C28;
    *((_OWORD *)a1 + 1) = xmmword_1C0320C40;
    *((_OWORD *)a1 + 2) = xmmword_1C0320C58;
    *((_OWORD *)a1 + 3) = xmmword_1C0320C70;
    *((_OWORD *)a1 + 4) = xmmword_1C0320C88;
    *((_OWORD *)a1 + 5) = xmmword_1C0320CA0;
    *((_OWORD *)a1 + 6) = xmmword_1C0320CB8;
    *((_OWORD *)a1 + 7) = xmmword_1C0320CD0;
  }
  LOBYTE(v1) = PointerDeviceCfgStringSetting >= 0;
  return v1;
}
