/*
 * XREFs of ??$s_EnumAdaptor@V_lambda_ff9e2e3e7739ed5ce4d1dc70b79c8674_@@@?$CSimpleHashTable@KV?$ComPtr@UITilePropertyInfo@@@WRL@Microsoft@@V?$CDefaultHashPolicy@K@@V?$CDefaultKeyCompare@K@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@CAHPEBV_lambda_ff9e2e3e7739ed5ce4d1dc70b79c8674_@@AEBKAEAV?$ComPtr@UITilePropertyInfo@@@WRL@Microsoft@@@Z @ 0x1800244CC
 * Callers:
 *     _lambda_9e7d2ca8e92d49cfddf0abd925277e19_::operator() @ 0x180023130 (_lambda_9e7d2ca8e92d49cfddf0abd925277e19_--operator().c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180007A78 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x180017C80 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 */

_BOOL8 __fastcall CSimpleHashTable<unsigned long,Microsoft::WRL::ComPtr<ITilePropertyInfo>,CDefaultHashPolicy<unsigned long>,CDefaultKeyCompare<unsigned long>,CDefaultResizePolicy,CDefaultRehashPolicy>::s_EnumAdaptor<_lambda_ff9e2e3e7739ed5ce4d1dc70b79c8674_>(
        __int64 *a1,
        unsigned int *a2,
        __int64 *a3)
{
  __int64 v3; // rdi
  __int64 v6; // rax
  unsigned int v7; // r14d
  int v8; // eax
  int v9; // ebx
  int v10; // eax
  int v11; // ebx
  int v12; // eax
  int v13; // ebx
  __int64 v14; // rsi
  bool v15; // r14
  LPVOID pv; // [rsp+20h] [rbp-20h] BYREF
  __int64 v18; // [rsp+28h] [rbp-18h]
  __int64 v19; // [rsp+30h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v21; // [rsp+60h] [rbp+20h] BYREF

  v3 = *a3;
  if ( *a3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  v6 = *a1;
  v7 = *a2;
  v21 = 0LL;
  v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(**(_QWORD **)(v6 + 72) + 120LL))(
         *(_QWORD *)(v6 + 72),
         v7,
         &v21);
  v9 = v8;
  if ( v8 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x3F3,
      (__int64)"shell\\lib\\onecoretdlhelpers\\tiledatalayeritemwrappers.cpp",
      (const char *)(unsigned int)v8);
  *(_DWORD *)a1[1] = v9;
  if ( *(int *)a1[1] >= 0 )
  {
    pv = 0LL;
    v18 = -1LL;
    v19 = -1LL;
    v10 = (*(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v3 + 32LL))(v3, &pv);
    v11 = v10;
    if ( v10 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3F7,
        (__int64)"shell\\lib\\onecoretdlhelpers\\tiledatalayeritemwrappers.cpp",
        (const char *)(unsigned int)v10);
    *(_DWORD *)a1[1] = v11;
    if ( *(int *)a1[1] >= 0 )
    {
      v12 = (*(__int64 (__fastcall **)(__int64, LPVOID))(*(_QWORD *)v21 + 40LL))(v21, pv);
      v13 = v12;
      if ( v12 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x3FA,
          (__int64)"shell\\lib\\onecoretdlhelpers\\tiledatalayeritemwrappers.cpp",
          (const char *)(unsigned int)v12);
      *(_DWORD *)a1[1] = v13;
    }
    if ( pv )
    {
      CoTaskMemFree(pv);
      pv = 0LL;
    }
    v18 = 0LL;
    v19 = 0LL;
  }
  v14 = v21;
  v15 = *(_DWORD *)a1[1] >= 0;
  if ( v21 )
  {
    v21 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  return v15;
}
