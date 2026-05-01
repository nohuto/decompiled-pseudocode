/*
 * XREFs of ??$s_EnumAdaptor@V_lambda_954234f30b113599677294cff02138d7_@@@?$CSimpleHashTable@PEBGV?$ComPtr@UIStream@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@CAHPEBV_lambda_954234f30b113599677294cff02138d7_@@AEBQEBGAEAV?$ComPtr@UIStream@@@WRL@Microsoft@@@Z @ 0x180024DB4
 * Callers:
 *     _lambda_3cb62ef21b7cb42cb283c2442e3ae7ae_::operator() @ 0x18002318C (_lambda_3cb62ef21b7cb42cb283c2442e3ae7ae_--operator().c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000AC44 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180027980 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSimpleHashTable<unsigned short const *,Microsoft::WRL::ComPtr<IStream>,CStringHashPolicy,CStringCompare,CDefaultResizePolicy,CDefaultRehashPolicy>::s_EnumAdaptor<_lambda_954234f30b113599677294cff02138d7_>(
        _DWORD **a1,
        __int64 *a2,
        IStream **a3)
{
  __int64 v3; // rbp
  HRESULT v6; // eax
  unsigned int v7; // ebx
  HRESULT v8; // esi
  int v9; // eax
  int v10; // esi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = *a2;
  v6 = IStream_Reset(*a3);
  v7 = 0;
  v8 = v6;
  if ( v6 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x38F,
      (__int64)"onecoreuap\\shell\\onecoretdlhelpers\\tiledatalayeritemwrappers.cpp",
      (const char *)(unsigned int)v6);
  *a1[1] = v8;
  if ( (int)*a1[1] >= 0 )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD, __int64, IStream *))(**((_QWORD **)*a1 + 9) + 104LL))(
           *((_QWORD *)*a1 + 9),
           v3,
           *a3);
    v10 = v9;
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x392,
        (__int64)"onecoreuap\\shell\\onecoretdlhelpers\\tiledatalayeritemwrappers.cpp",
        (const char *)(unsigned int)v9);
    *a1[1] = v10;
  }
  LOBYTE(v7) = *a1[1] >= 0;
  return v7;
}
