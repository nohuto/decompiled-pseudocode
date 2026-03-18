/*
 * XREFs of ?TraceLoggingRimHidDeviceArrivedEvent@@YAXGIIKKHPEAU_UNICODE_STRING@@0@Z @ 0x1C00E52C4
 * Callers:
 *     Win32kRIMDevChangeCallback @ 0x1C00E2AC0 (Win32kRIMDevChangeCallback.c)
 * Callees:
 *     _TlgWrite @ 0x1C00E5414 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C00E56D0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

void __fastcall TraceLoggingRimHidDeviceArrivedEvent(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        char a5,
        char a6,
        struct _UNICODE_STRING *a7,
        struct _UNICODE_STRING *a8)
{
  const GUID *v8; // r9
  int v9; // [rsp+38h] [rbp-D0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-C0h] BYREF
  int *v11; // [rsp+68h] [rbp-A0h]
  __int64 v12; // [rsp+70h] [rbp-98h]
  int *v13; // [rsp+78h] [rbp-90h]
  __int64 v14; // [rsp+80h] [rbp-88h]
  int *v15; // [rsp+88h] [rbp-80h]
  __int64 v16; // [rsp+90h] [rbp-78h]
  int *v17; // [rsp+98h] [rbp-70h]
  __int64 v18; // [rsp+A0h] [rbp-68h]
  char *v19; // [rsp+A8h] [rbp-60h]
  __int64 v20; // [rsp+B0h] [rbp-58h]
  char *v21; // [rsp+B8h] [rbp-50h]
  __int64 v22; // [rsp+C0h] [rbp-48h]
  _DWORD *v23; // [rsp+C8h] [rbp-40h]
  __int64 v24; // [rsp+D0h] [rbp-38h]
  PWSTR Buffer; // [rsp+D8h] [rbp-30h]
  _DWORD v26[2]; // [rsp+E0h] [rbp-28h] BYREF
  _DWORD *v27; // [rsp+E8h] [rbp-20h]
  __int64 v28; // [rsp+F0h] [rbp-18h]
  PWSTR v29; // [rsp+F8h] [rbp-10h]
  _DWORD v30[2]; // [rsp+100h] [rbp-8h] BYREF
  int v31; // [rsp+130h] [rbp+28h] BYREF
  int v32; // [rsp+138h] [rbp+30h] BYREF
  int v33; // [rsp+140h] [rbp+38h] BYREF

  v33 = a4;
  v32 = a3;
  v31 = a2;
  if ( dword_1C0320840 > 5u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C0320840, 0x800000000000uLL) )
    {
      v9 = (unsigned __int16)v8;
      v11 = &v9;
      v13 = &v31;
      v15 = &v32;
      v17 = &v33;
      v19 = &a5;
      v21 = &a6;
      v23 = v26;
      Buffer = a7->Buffer;
      v26[0] = a7->Length;
      v27 = v30;
      v29 = a8->Buffer;
      v30[0] = a8->Length;
      v12 = 4LL;
      v14 = 4LL;
      v16 = 4LL;
      v18 = 4LL;
      v20 = 4LL;
      v22 = 4LL;
      v24 = 2LL;
      v26[1] = 0;
      v28 = 2LL;
      v30[1] = 0;
      TlgWrite((TraceLoggingHProvider)&dword_1C0320840, &unk_1C02EE891, 0LL, v8, 0xCu, &pData);
    }
  }
}
