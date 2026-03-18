/*
 * XREFs of ?TraceLoggingRIMHIDDeviceArrivedEvent@@YAXGIIKKHPEAU_UNICODE_STRING@@0@Z @ 0x1C0145C88
 * Callers:
 *     Win32kRIMDevChangeCallback @ 0x1C01453D0 (Win32kRIMDevChangeCallback.c)
 * Callees:
 *     _TlgWrite @ 0x1C007D678 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C007E128 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

void __fastcall TraceLoggingRIMHIDDeviceArrivedEvent(
        const struct _TlgProvider_t *a1,
        int a2,
        int a3,
        int a4,
        char a5,
        char a6,
        struct _UNICODE_STRING *a7,
        TraceLoggingHProvider hProvider)
{
  unsigned __int16 v8; // cx
  const GUID *v9; // r9
  int v10; // [rsp+38h] [rbp-D0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-C0h] BYREF
  int *v12; // [rsp+68h] [rbp-A0h]
  __int64 v13; // [rsp+70h] [rbp-98h]
  int *v14; // [rsp+78h] [rbp-90h]
  __int64 v15; // [rsp+80h] [rbp-88h]
  int *v16; // [rsp+88h] [rbp-80h]
  __int64 v17; // [rsp+90h] [rbp-78h]
  int *v18; // [rsp+98h] [rbp-70h]
  __int64 v19; // [rsp+A0h] [rbp-68h]
  char *v20; // [rsp+A8h] [rbp-60h]
  __int64 v21; // [rsp+B0h] [rbp-58h]
  char *v22; // [rsp+B8h] [rbp-50h]
  __int64 v23; // [rsp+C0h] [rbp-48h]
  _DWORD *v24; // [rsp+C8h] [rbp-40h]
  __int64 v25; // [rsp+D0h] [rbp-38h]
  PWSTR Buffer; // [rsp+D8h] [rbp-30h]
  _DWORD v27[2]; // [rsp+E0h] [rbp-28h] BYREF
  _DWORD *v28; // [rsp+E8h] [rbp-20h]
  __int64 v29; // [rsp+F0h] [rbp-18h]
  __int64 v30; // [rsp+F8h] [rbp-10h]
  _DWORD v31[2]; // [rsp+100h] [rbp-8h] BYREF
  int v32; // [rsp+130h] [rbp+28h] BYREF
  int v33; // [rsp+138h] [rbp+30h] BYREF
  int v34; // [rsp+140h] [rbp+38h] BYREF

  v34 = a4;
  v33 = a3;
  v32 = a2;
  if ( (unsigned int)dword_1C031D7B0 > 5 )
  {
    if ( TlgKeywordOn(a1, 0x200000000000uLL) )
    {
      v10 = v8;
      v12 = &v10;
      v14 = &v32;
      v16 = &v33;
      v18 = &v34;
      v20 = &a5;
      v22 = &a6;
      v24 = v27;
      Buffer = a7->Buffer;
      v27[0] = a7->Length;
      v28 = v31;
      v13 = 4LL;
      v30 = *((_QWORD *)hProvider + 1);
      v31[0] = *(unsigned __int16 *)hProvider;
      v15 = 4LL;
      v17 = 4LL;
      v19 = 4LL;
      v21 = 4LL;
      v23 = 4LL;
      v25 = 2LL;
      v27[1] = 0;
      v29 = 2LL;
      v31[1] = 0;
      TlgWrite(hProvider, &unk_1C02EA54D, 0LL, v9, 0xCu, &pData);
    }
  }
}
