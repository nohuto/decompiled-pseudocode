/*
 * XREFs of ?WriteDxgDiagnosticsEvent_CODE_POINT@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C000B32C
 * Callers:
 *     ?WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C000B200 (-WriteDxgDiagnosticsEvent@@YAXPEAU_DXGK_DIAG_HEADER@@@Z.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x1C000B3EC (TraceLoggingProviderEnabled.c)
 *     _TlgKeywordOn @ 0x1C000B414 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C000F358 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 */

void __fastcall WriteDxgDiagnosticsEvent_CODE_POINT(struct _DXGK_DIAG_HEADER *a1)
{
  int v1; // r11d
  unsigned int v3; // r10d
  unsigned int v4; // r10d
  const GUID *v5; // r9
  __int64 v6; // r10
  int v7; // r11d
  const void *v8; // rdx
  int *v9; // rax
  int v10; // r11d
  __int16 v11; // [rsp+30h] [rbp-D0h] BYREF
  int v12; // [rsp+34h] [rbp-CCh] BYREF
  int v13; // [rsp+38h] [rbp-C8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-C0h] BYREF
  void *v15; // [rsp+60h] [rbp-A0h]
  __int64 v16; // [rsp+68h] [rbp-98h]
  char *v17; // [rsp+70h] [rbp-90h]
  __int64 v18; // [rsp+78h] [rbp-88h]
  char *v19; // [rsp+80h] [rbp-80h]
  __int64 v20; // [rsp+88h] [rbp-78h]
  int *v21; // [rsp+90h] [rbp-70h]
  __int64 v22; // [rsp+98h] [rbp-68h]
  char *v23; // [rsp+A0h] [rbp-60h]
  __int64 v24; // [rsp+A8h] [rbp-58h]
  int *v25; // [rsp+B0h] [rbp-50h]
  __int64 v26; // [rsp+B8h] [rbp-48h]
  char *v27; // [rsp+C0h] [rbp-40h]
  __int64 v28; // [rsp+C8h] [rbp-38h]
  char *v29; // [rsp+D0h] [rbp-30h]
  __int64 v30; // [rsp+D8h] [rbp-28h]
  char *v31; // [rsp+E0h] [rbp-20h]
  __int64 v32; // [rsp+E8h] [rbp-18h]
  __int16 *v33; // [rsp+F0h] [rbp-10h]
  __int64 v34; // [rsp+F8h] [rbp-8h]
  struct _DXGK_DIAG_HEADER *v35; // [rsp+100h] [rbp+0h]
  int v36; // [rsp+108h] [rbp+8h]
  int v37; // [rsp+10Ch] [rbp+Ch]

  v1 = *((_DWORD *)a1 + 12);
  if ( v1 >= 32 && (v1 <= 33 || v1 > 36 && (v1 <= 38 || v1 == 60)) )
  {
    if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, 4u, 0x10uLL)
      && hProvider > v3
      && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x10uLL) )
    {
      v13 = v7;
      v15 = &unk_1C003F298;
      v8 = &unk_1C003C30E;
      v17 = (char *)a1 + 40;
      v19 = (char *)a1 + 32;
      v12 = *(_DWORD *)a1;
      v21 = &v12;
      v23 = (char *)a1 + 44;
      v9 = &v13;
LABEL_16:
      v25 = v9;
      v20 = 8LL;
      v27 = (char *)a1 + 52;
      v29 = (char *)a1 + 56;
      v31 = (char *)a1 + 60;
      v36 = *((unsigned __int16 *)a1 + 2);
      v11 = v36;
      v18 = v6;
      v16 = v6;
      v37 = (int)v5;
      v35 = a1;
      v34 = 2LL;
      v33 = &v11;
      v32 = v6;
      v30 = v6;
      v28 = v6;
      v26 = v6;
      v24 = v6;
      v22 = v6;
      TlgWrite((TraceLoggingHProvider)&hProvider, v8, 0LL, v5, 0xDu, &pData);
    }
  }
  else if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, 4u, 0x200000000010uLL)
         && hProvider > v4
         && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000010uLL) )
  {
    v12 = v10;
    v15 = &unk_1C003F298;
    v8 = &unk_1C003C294;
    v17 = (char *)a1 + 40;
    v19 = (char *)a1 + 32;
    v13 = *(_DWORD *)a1;
    v21 = &v13;
    v23 = (char *)a1 + 44;
    v9 = &v12;
    goto LABEL_16;
  }
}
