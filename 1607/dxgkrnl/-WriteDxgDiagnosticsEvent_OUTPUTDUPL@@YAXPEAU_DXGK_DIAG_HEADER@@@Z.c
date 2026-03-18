/*
 * XREFs of ?WriteDxgDiagnosticsEvent_OUTPUTDUPL@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C002525C
 * Callers:
 *     ?WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C000B200 (-WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x1C000B3EC (TraceLoggingProviderEnabled.c)
 *     _TlgKeywordOn @ 0x1C000B414 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C000F358 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 */

void __fastcall WriteDxgDiagnosticsEvent_OUTPUTDUPL(struct _DXGK_DIAG_HEADER *a1)
{
  __int64 v1; // r10
  unsigned int v2; // r11d
  int v3; // ecx
  int v4; // ecx
  const GUID *v5; // r9
  int *v6; // r10
  __int64 v7; // r11
  const void *v8; // rdx
  int *v9; // rax
  int *v10; // rax
  unsigned __int16 v11; // [rsp+30h] [rbp-D0h] BYREF
  int v12; // [rsp+34h] [rbp-CCh] BYREF
  int v13; // [rsp+38h] [rbp-C8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-C0h] BYREF
  void *v15; // [rsp+60h] [rbp-A0h]
  __int64 v16; // [rsp+68h] [rbp-98h]
  int *v17; // [rsp+70h] [rbp-90h]
  __int64 v18; // [rsp+78h] [rbp-88h]
  int *v19; // [rsp+80h] [rbp-80h]
  __int64 v20; // [rsp+88h] [rbp-78h]
  int *v21; // [rsp+90h] [rbp-70h]
  __int64 v22; // [rsp+98h] [rbp-68h]
  int *v23; // [rsp+A0h] [rbp-60h]
  __int64 v24; // [rsp+A8h] [rbp-58h]
  int *v25; // [rsp+B0h] [rbp-50h]
  __int64 v26; // [rsp+B8h] [rbp-48h]
  int *v27; // [rsp+C0h] [rbp-40h]
  __int64 v28; // [rsp+C8h] [rbp-38h]
  int *v29; // [rsp+D0h] [rbp-30h]
  __int64 v30; // [rsp+D8h] [rbp-28h]
  unsigned __int16 *v31; // [rsp+E0h] [rbp-20h]
  __int64 v32; // [rsp+E8h] [rbp-18h]
  int *v33; // [rsp+F0h] [rbp-10h]
  int v34; // [rsp+F8h] [rbp-8h]
  int v35; // [rsp+FCh] [rbp-4h]

  if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, 4u, 0x200000000200uLL) )
  {
    v3 = *(_DWORD *)(v1 + 48);
    if ( v3 )
    {
      v4 = v3 - 1;
      if ( v4 )
      {
        if ( v4 == 10 && hProvider > v2 && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000200uLL) )
        {
          v15 = &unk_1C003F298;
          v8 = &unk_1C003B1B8;
          v17 = v6 + 10;
          v19 = v6 + 8;
          v12 = *v6;
          v9 = &v12;
LABEL_14:
          v21 = v9;
          v23 = v6 + 11;
          v25 = v6 + 13;
          v27 = v6 + 14;
          v10 = v6 + 15;
          goto LABEL_15;
        }
      }
      else if ( hProvider > v2 && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000200uLL) )
      {
        v15 = &unk_1C003F298;
        v8 = &unk_1C003B131;
        v17 = v6 + 10;
        v19 = v6 + 8;
        v12 = *v6;
        v21 = &v12;
        v23 = v6 + 11;
        v25 = v6 + 13;
        v27 = v6 + 14;
        v13 = v6[15];
        v10 = &v13;
LABEL_15:
        v29 = v10;
        v11 = *((_WORD *)v6 + 2);
        v34 = v11;
        v16 = v7;
        v18 = v7;
        v20 = 8LL;
        v22 = v7;
        v24 = v7;
        v26 = v7;
        v28 = v7;
        v30 = v7;
        v31 = &v11;
        v32 = 2LL;
        v33 = v6;
        v35 = (int)v5;
        TlgWrite((TraceLoggingHProvider)&hProvider, v8, 0LL, v5, 0xCu, &pData);
      }
    }
    else if ( hProvider > v2 && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000200uLL) )
    {
      v15 = &unk_1C003F298;
      v8 = &unk_1C003B23F;
      v17 = v6 + 10;
      v19 = v6 + 8;
      v13 = *v6;
      v9 = &v13;
      goto LABEL_14;
    }
  }
}
