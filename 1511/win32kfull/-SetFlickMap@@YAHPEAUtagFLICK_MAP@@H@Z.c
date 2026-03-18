/*
 * XREFs of ?SetFlickMap@@YAHPEAUtagFLICK_MAP@@H@Z @ 0x1C0224C9C
 * Callers:
 *     WritePointerDeviceSettings @ 0x1C022504C (WritePointerDeviceSettings.c)
 * Callees:
 *     ?OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z @ 0x1C0125A64 (-OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     ?WritePointerDeviceCfgSetting@@YAJPEAXPEBGIPEAEI@Z @ 0x1C0224DF8 (-WritePointerDeviceCfgSetting@@YAJPEAXPEBGIPEAEI@Z.c)
 */

__int64 __fastcall SetFlickMap(struct tagFLICK_MAP *a1, int a2)
{
  unsigned int v2; // r15d
  int v5; // edi
  __int128 *v6; // r14
  const GUID *const *v7; // rsi
  unsigned int v8; // ebx
  const GUID *v9; // rax
  HANDLE Handle; // [rsp+38h] [rbp-69h] BYREF
  struct _UNICODE_STRING GuidString; // [rsp+40h] [rbp-61h] BYREF
  _QWORD v13[15]; // [rsp+60h] [rbp-41h] BYREF

  v2 = 0;
  v5 = OpenDeviceCfgKey(
         0x7Cu,
         L"\\Software\\Microsoft\\Wisp\\Pen\\SysEventParameters\\FlickCommands",
         0x20006u,
         &Handle,
         0);
  if ( v5 < 0 )
    return 0;
  v13[0] = a1;
  v13[2] = (char *)a1 + 16;
  v13[12] = (char *)a1 + 96;
  v13[4] = (char *)a1 + 32;
  v13[14] = (char *)a1 + 112;
  v13[6] = (char *)a1 + 48;
  v6 = &xmmword_1C031F078;
  v13[8] = (char *)a1 + 64;
  v7 = (const GUID *const *)v13;
  v13[10] = (char *)a1 + 80;
  v8 = 1;
  do
  {
    if ( v5 < 0 )
      break;
    if ( a2 )
    {
      v5 = RtlStringFromGUID(*v7, &GuidString);
      if ( v5 >= 0 )
      {
        v5 = WritePointerDeviceCfgSetting(
               Handle,
               *((const unsigned __int16 **)v6 - 1),
               1u,
               (unsigned __int8 *)GuidString.Buffer,
               GuidString.MaximumLength);
        RtlFreeUnicodeString(&GuidString);
        GuidString.Buffer = 0LL;
      }
    }
    v9 = *v7;
    ++v2;
    v7 += 2;
    *v6 = (__int128)*v9;
    v6 = (__int128 *)((char *)v6 + 24);
  }
  while ( v2 < 8 );
  ZwClose(Handle);
  if ( v5 < 0 )
    return 0;
  else
    gFlickMapMonitor = 1;
  return v8;
}
