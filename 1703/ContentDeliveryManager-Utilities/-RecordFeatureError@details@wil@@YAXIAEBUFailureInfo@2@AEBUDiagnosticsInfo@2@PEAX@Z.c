/*
 * XREFs of ?RecordFeatureError@details@wil@@YAXIAEBUFailureInfo@2@AEBUDiagnosticsInfo@2@PEAX@Z @ 0x18000A2B8
 * Callers:
 *     ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x18000AB88 (-ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z.c)
 * Callees:
 *     ?StringCchPrintfA@details@wil@@YAJPEAD_KPEBDZZ @ 0x180001DD8 (-StringCchPrintfA@details@wil@@YAJPEAD_KPEBDZZ.c)
 *     __security_check_cookie @ 0x18006F3C0 (__security_check_cookie.c)
 *     memset_0 @ 0x18006F9A2 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::RecordFeatureError(
        wil::details *this,
        __int64 a2,
        const struct wil::FailureInfo *a3,
        const struct DiagnosticsInfo *a4)
{
  bool (*v6)(void *, unsigned int *, char *, unsigned __int64); // r10
  char v7; // al
  char v8; // cl
  _BYTE *v9; // rax
  char v10; // al
  char v11; // cl
  const char *v12; // r9
  _BYTE *v13; // rax
  const char *ModuleName; // rax
  char v15; // cl
  _BYTE *v16; // rax
  void (*v17)(unsigned int, const struct FEATURE_ERROR *); // rax
  int v18; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v19; // [rsp+34h] [rbp-CCh]
  __int64 v20; // [rsp+38h] [rbp-C8h]
  _BYTE *v21; // [rsp+40h] [rbp-C0h]
  __int64 v22; // [rsp+48h] [rbp-B8h]
  int v23; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE *v24; // [rsp+58h] [rbp-A8h]
  _BYTE *v25; // [rsp+60h] [rbp-A0h]
  __int16 v26; // [rsp+68h] [rbp-98h]
  __int64 v27; // [rsp+70h] [rbp-90h]
  const char *v28; // [rsp+78h] [rbp-88h]
  int v29; // [rsp+80h] [rbp-80h] BYREF
  _BYTE *v30; // [rsp+88h] [rbp-78h]
  __int64 v31; // [rsp+90h] [rbp-70h]
  _BYTE v32[64]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v33[64]; // [rsp+D8h] [rbp-28h] BYREF
  _BYTE v34[64]; // [rsp+118h] [rbp+18h] BYREF
  _BYTE v35[104]; // [rsp+158h] [rbp+58h] BYREF

  memset_0(&v18, 0, 0x68uLL);
  v6 = wil::details::g_pfnGetModuleInformation;
  v18 = *(_DWORD *)(a2 + 4);
  v19 = *(_WORD *)(a2 + 56);
  v20 = *(_QWORD *)(a2 + 48);
  v32[0] = 0;
  if ( wil::details::g_pfnGetModuleInformation )
  {
    v7 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _BYTE *, __int64))wil::details::g_pfnGetModuleInformation)(
           0LL,
           0LL,
           v32,
           64LL);
    v6 = wil::details::g_pfnGetModuleInformation;
    v8 = v7;
  }
  else
  {
    v8 = 0;
  }
  v33[0] = 0;
  v9 = v32;
  v23 = 0;
  if ( !v8 )
    v9 = v21;
  v21 = v9;
  v22 = *(_QWORD *)(a2 + 120);
  if ( v6 )
  {
    v10 = ((__int64 (__fastcall *)(_QWORD, int *, _BYTE *, __int64))v6)(*(_QWORD *)(a2 + 136), &v23, v33, 64LL);
    v6 = wil::details::g_pfnGetModuleInformation;
    v11 = v10;
  }
  else
  {
    v11 = 0;
  }
  v12 = *(const char **)(a2 + 16);
  v13 = v33;
  if ( !v11 )
    v13 = v24;
  v24 = v13;
  if ( v12 && *(_WORD *)v12 )
  {
    wil::details::StringCchPrintfA((wil::details *)v35, (char *)0x60, "%ws", v12);
    v6 = wil::details::g_pfnGetModuleInformation;
    v25 = v35;
  }
  v26 = *((_WORD *)a3 + 12);
  v27 = *((_QWORD *)a3 + 1);
  if ( wil::details::g_pfnGetModuleName )
  {
    ModuleName = wil::details::g_pfnGetModuleName();
    v6 = wil::details::g_pfnGetModuleInformation;
    v28 = ModuleName;
  }
  v34[0] = 0;
  v29 = 0;
  if ( v6 )
    v15 = ((__int64 (__fastcall *)(_QWORD, int *, _BYTE *, __int64))v6)(*(_QWORD *)a3, &v29, v34, 64LL);
  else
    v15 = 0;
  v16 = v34;
  if ( !v15 )
    v16 = v30;
  v30 = v16;
  v31 = *((_QWORD *)a3 + 2);
  v17 = g_wil_details_internalRecordFeatureError;
  if ( g_wil_details_internalRecordFeatureError || (v17 = g_wil_details_apiRecordFeatureError) != 0LL )
    ((void (__fastcall *)(__int64, int *))v17)(7960589LL, &v18);
}
