/*
 * XREFs of ??$s_EnumAdaptor@V_lambda_661bc0f79e8fe0483d0640f4a356b4c8_@@@?$CSimpleHashTable@KV?$ComPtr@UITilePropertyInfo@@@WRL@Microsoft@@V?$CDefaultHashPolicy@K@@V?$CDefaultKeyCompare@K@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@CAHPEBV_lambda_661bc0f79e8fe0483d0640f4a356b4c8_@@AEBKAEAV?$ComPtr@UITilePropertyInfo@@@WRL@Microsoft@@@Z @ 0x180024A80
 * Callers:
 *     _lambda_3cb62ef21b7cb42cb283c2442e3ae7ae_::operator() @ 0x18002318C (_lambda_3cb62ef21b7cb42cb283c2442e3ae7ae_--operator().c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000AC44 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180027980 (_guard_dispatch_icall_nop.c)
 */

_BOOL8 __fastcall CSimpleHashTable<unsigned long,Microsoft::WRL::ComPtr<ITilePropertyInfo>,CDefaultHashPolicy<unsigned long>,CDefaultKeyCompare<unsigned long>,CDefaultResizePolicy,CDefaultRehashPolicy>::s_EnumAdaptor<_lambda_661bc0f79e8fe0483d0640f4a356b4c8_>(
        __int64 *a1,
        unsigned int *a2,
        _QWORD *a3)
{
  __int64 v3; // rbx
  __int64 v6; // rax
  int v7; // eax
  int v8; // esi
  int v9; // eax
  int v10; // esi
  int v11; // eax
  int v12; // esi
  __int64 v13; // rcx
  bool v14; // di
  LPVOID pv; // [rsp+20h] [rbp-20h] BYREF
  __int64 v17; // [rsp+28h] [rbp-18h]
  __int64 v18; // [rsp+30h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]
  __int64 v20; // [rsp+50h] [rbp+10h] BYREF

  v3 = *a3;
  if ( *a3 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v3 + 8LL))(*a3);
  v6 = *a1;
  v20 = 0LL;
  v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(**(_QWORD **)(v6 + 72) + 120LL))(
         *(_QWORD *)(v6 + 72),
         *a2,
         &v20);
  v8 = v7;
  if ( v7 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x3A2,
      (__int64)"onecoreuap\\shell\\onecoretdlhelpers\\tiledatalayeritemwrappers.cpp",
      (const char *)(unsigned int)v7);
  *(_DWORD *)a1[1] = v8;
  if ( *(int *)a1[1] >= 0 )
  {
    pv = 0LL;
    v17 = -1LL;
    v18 = -1LL;
    v9 = (*(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v3 + 32LL))(v3, &pv);
    v10 = v9;
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3A6,
        (__int64)"onecoreuap\\shell\\onecoretdlhelpers\\tiledatalayeritemwrappers.cpp",
        (const char *)(unsigned int)v9);
    *(_DWORD *)a1[1] = v10;
    if ( *(int *)a1[1] >= 0 )
    {
      v11 = (*(__int64 (__fastcall **)(__int64, LPVOID))(*(_QWORD *)v20 + 40LL))(v20, pv);
      v12 = v11;
      if ( v11 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x3A9,
          (__int64)"onecoreuap\\shell\\onecoretdlhelpers\\tiledatalayeritemwrappers.cpp",
          (const char *)(unsigned int)v11);
      *(_DWORD *)a1[1] = v12;
    }
    if ( pv )
    {
      CoTaskMemFree(pv);
      pv = 0LL;
    }
    v17 = 0LL;
    v18 = 0LL;
  }
  v13 = v20;
  v14 = *(_DWORD *)a1[1] >= 0;
  if ( v20 )
  {
    v20 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  return v14;
}
