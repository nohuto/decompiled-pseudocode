/*
 * XREFs of ?DisplayTelemetry@ADAPTER_DISPLAY@@QEAAXPEAU_UNICODE_STRING@@W4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_GUID@@@Z @ 0x1C00DB16C
 * Callers:
 *     ?AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@@Z @ 0x1C00D6934 (-AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C000AC10 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C000D5D4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 */

void __fastcall ADAPTER_DISPLAY::DisplayTelemetry(const struct _TlgProvider_t *a1)
{
  __int64 v1; // rcx
  int v2; // r8d
  const GUID *v3; // r9
  const GUID *v4; // r10
  const struct _TlgProvider_t *v5; // rcx
  __int16 v6; // [rsp+30h] [rbp-39h] BYREF
  __int16 v7; // [rsp+32h] [rbp-37h] BYREF
  int v8; // [rsp+34h] [rbp-35h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-29h] BYREF
  _DWORD *v10; // [rsp+60h] [rbp-9h]
  __int64 v11; // [rsp+68h] [rbp-1h]
  __int64 v12; // [rsp+70h] [rbp+7h]
  _DWORD v13[2]; // [rsp+78h] [rbp+Fh] BYREF
  __int16 *v14; // [rsp+80h] [rbp+17h]
  __int64 v15; // [rsp+88h] [rbp+1Fh]
  __int16 *v16; // [rsp+90h] [rbp+27h]
  __int64 v17; // [rsp+98h] [rbp+2Fh]
  int *v18; // [rsp+A0h] [rbp+37h]
  __int64 v19; // [rsp+A8h] [rbp+3Fh]

  if ( (unsigned int)hProvider > 5 )
  {
    if ( TlgKeywordOn(a1, 0x800000000000uLL) )
    {
      v5 = *(const struct _TlgProvider_t **)(v1 + 16);
      v10 = v13;
      v12 = *(_QWORD *)v3->Data4;
      v13[0] = LOWORD(v3->Data1);
      v11 = 2LL;
      v13[1] = 0;
      v7 = *((_WORD *)v5 + 460);
      v14 = &v7;
      v15 = 2LL;
      v6 = *((_WORD *)v5 + 462);
      v16 = &v6;
      v18 = &v8;
      v17 = 2LL;
      v8 = v2;
      v19 = 4LL;
      TlgWrite(v5, &unk_1C002FC81, v4, v3, 7u, &pData);
    }
  }
}
