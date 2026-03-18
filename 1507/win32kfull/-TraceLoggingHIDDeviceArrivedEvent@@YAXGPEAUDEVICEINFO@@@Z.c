/*
 * XREFs of ?TraceLoggingHIDDeviceArrivedEvent@@YAXGPEAUDEVICEINFO@@@Z @ 0x1C02240B8
 * Callers:
 *     ?AllocateHidDesc@@YAPEAUtagHIDDESC@@PEAUDEVICEINFO@@PEAXPEAU_HIDP_CAPS@@PEAU_HID_COLLECTION_INFORMATION@@PEAU_DEVICE_OBJECT@@PEAU_FILE_OBJECT@@@Z @ 0x1C01D2374 (-AllocateHidDesc@@YAPEAUtagHIDDESC@@PEAUDEVICEINFO@@PEAXPEAU_HIDP_CAPS@@PEAU_HID_COLLECTION_INFO.c)
 * Callees:
 *     _TlgWrite @ 0x1C007D678 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C007E128 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     _TlgCreateWsz @ 0x1C0224F24 (_TlgCreateWsz.c)
 */

void __fastcall TraceLoggingHIDDeviceArrivedEvent(const struct _TlgProvider_t *a1, struct DEVICEINFO *a2)
{
  unsigned __int16 v2; // cx
  __int64 v3; // r8
  __int64 v4; // r10
  int v5; // r11d
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  const WCHAR *v9; // rdx
  __int64 v10; // r10
  TraceLoggingHProvider v11; // rcx
  LPCGUID v12; // r8
  LPCGUID v13; // r9
  int v14; // [rsp+30h] [rbp-69h] BYREF
  int v15; // [rsp+34h] [rbp-65h] BYREF
  int v16; // [rsp+38h] [rbp-61h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-59h] BYREF
  int *v18; // [rsp+60h] [rbp-39h]
  __int64 v19; // [rsp+68h] [rbp-31h]
  __int64 v20; // [rsp+70h] [rbp-29h]
  __int64 v21; // [rsp+78h] [rbp-21h]
  __int64 v22; // [rsp+80h] [rbp-19h]
  __int64 v23; // [rsp+88h] [rbp-11h]
  int *v24; // [rsp+90h] [rbp-9h]
  __int64 v25; // [rsp+98h] [rbp-1h]
  __int64 v26; // [rsp+A0h] [rbp+7h]
  __int64 v27; // [rsp+A8h] [rbp+Fh]
  int *v28; // [rsp+B0h] [rbp+17h]
  __int64 v29; // [rsp+B8h] [rbp+1Fh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+C0h] [rbp+27h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v31; // [rsp+D0h] [rbp+37h] BYREF

  if ( a2
    && *((_QWORD *)a2 + 52)
    && *((_QWORD *)a2 + 50)
    && (unsigned int)dword_1C031D7B0 > 5
    && TlgKeywordOn(a1, 0x200000000000uLL) )
  {
    v6 = v2;
    v7 = *(_DWORD *)(v4 + 24);
    v16 = v6;
    v18 = &v16;
    v20 = v3 + 110;
    v22 = v3 + 112;
    v24 = &v14;
    v26 = v4 + 704;
    v8 = v5;
    if ( v7 == 7 )
      v8 = v5 + 1;
    v14 = v7;
    v9 = *(const WCHAR **)(v4 + 280);
    v15 = v8;
    v28 = &v15;
    v19 = 4LL;
    v21 = 2LL;
    v23 = 2LL;
    v25 = 4LL;
    v27 = 4LL;
    v29 = 4LL;
    TlgCreateWsz(&pDesc, v9);
    TlgCreateWsz(&v31, *(LPCWSTR *)(v10 + 1496));
    TlgWrite(v11, &unk_1C02EAA97, v12, v13, 0xAu, &pData);
  }
}
