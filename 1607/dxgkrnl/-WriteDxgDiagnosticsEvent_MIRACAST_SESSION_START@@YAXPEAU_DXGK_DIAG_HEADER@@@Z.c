/*
 * XREFs of ?WriteDxgDiagnosticsEvent_MIRACAST_SESSION_START@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0024900
 * Callers:
 *     ?WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C000B200 (-WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x1C000B3EC (TraceLoggingProviderEnabled.c)
 *     _TlgKeywordOn @ 0x1C000B414 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C000F358 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C000F3F4 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 */

void __fastcall WriteDxgDiagnosticsEvent_MIRACAST_SESSION_START(struct _DXGK_DIAG_HEADER *a1)
{
  const WCHAR *v1; // r10
  LPCWSTR v2; // r11
  __int64 v3; // r10
  int v4; // ecx
  LPCGUID v5; // r9
  unsigned __int16 v6; // [rsp+30h] [rbp-D0h] BYREF
  int v7; // [rsp+34h] [rbp-CCh] BYREF
  int v8; // [rsp+38h] [rbp-C8h] BYREF
  int v9; // [rsp+3Ch] [rbp-C4h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-C0h] BYREF
  void *v11; // [rsp+60h] [rbp-A0h]
  int v12; // [rsp+68h] [rbp-98h]
  int v13; // [rsp+6Ch] [rbp-94h]
  int *v14; // [rsp+70h] [rbp-90h]
  int v15; // [rsp+78h] [rbp-88h]
  int v16; // [rsp+7Ch] [rbp-84h]
  int *v17; // [rsp+80h] [rbp-80h]
  int v18; // [rsp+88h] [rbp-78h]
  int v19; // [rsp+8Ch] [rbp-74h]
  int *v20; // [rsp+90h] [rbp-70h]
  int v21; // [rsp+98h] [rbp-68h]
  int v22; // [rsp+9Ch] [rbp-64h]
  int *v23; // [rsp+A0h] [rbp-60h]
  int v24; // [rsp+A8h] [rbp-58h]
  int v25; // [rsp+ACh] [rbp-54h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+B0h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v27; // [rsp+C0h] [rbp-40h] BYREF
  int *v28; // [rsp+D0h] [rbp-30h]
  int v29; // [rsp+D8h] [rbp-28h]
  int v30; // [rsp+DCh] [rbp-24h]
  int *v31; // [rsp+E0h] [rbp-20h]
  int v32; // [rsp+E8h] [rbp-18h]
  int v33; // [rsp+ECh] [rbp-14h]
  __int64 v34; // [rsp+F0h] [rbp-10h]
  int v35; // [rsp+F8h] [rbp-8h]
  int v36; // [rsp+FCh] [rbp-4h]
  unsigned __int16 *v37; // [rsp+100h] [rbp+0h]
  int v38; // [rsp+108h] [rbp+8h]
  int v39; // [rsp+10Ch] [rbp+Ch]
  __int64 v40; // [rsp+110h] [rbp+10h]
  int v41; // [rsp+118h] [rbp+18h]
  int v42; // [rsp+11Ch] [rbp+1Ch]

  if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, 4u, 0x200000000400uLL) && hProvider > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000400uLL) )
    {
      v13 = 0;
      v16 = 0;
      v19 = 0;
      v22 = 0;
      v25 = 0;
      v11 = &unk_1C003F298;
      v14 = (int *)(v1 + 20);
      v17 = (int *)(v1 + 16);
      v7 = *(_DWORD *)v1;
      v20 = &v7;
      v23 = (int *)(v1 + 22);
      v12 = 4;
      v15 = 4;
      v18 = 8;
      v21 = 4;
      v24 = 4;
      TlgCreateWsz(&pDesc, v1 + 32);
      TlgCreateWsz(&v27, v2);
      v30 = 0;
      v33 = 0;
      v36 = 0;
      v39 = 0;
      v4 = *(_DWORD *)(v3 + 52);
      v42 = 0;
      v28 = &v8;
      v9 = *(_DWORD *)(v3 + 56);
      v31 = &v9;
      v34 = v3 + 48;
      v6 = *(_WORD *)(v3 + 4);
      v41 = v6;
      v8 = v4;
      v29 = 4;
      v32 = 4;
      v35 = 4;
      v37 = &v6;
      v38 = 2;
      v40 = v3;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C003A90C, 0LL, v5, 0xEu, &pData);
    }
  }
}
