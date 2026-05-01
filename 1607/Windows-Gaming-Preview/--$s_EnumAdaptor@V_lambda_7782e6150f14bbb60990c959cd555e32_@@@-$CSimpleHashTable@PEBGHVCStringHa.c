/*
 * XREFs of ??$s_EnumAdaptor@V_lambda_7782e6150f14bbb60990c959cd555e32_@@@?$CSimpleHashTable@PEBGHVCStringHashPolicy@@VCStringCompare@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@CAHPEBV_lambda_7782e6150f14bbb60990c959cd555e32_@@AEBQEBGAEAH@Z @ 0x180024E7C
 * Callers:
 *     _lambda_3cb62ef21b7cb42cb283c2442e3ae7ae_::operator() @ 0x18002318C (_lambda_3cb62ef21b7cb42cb283c2442e3ae7ae_--operator().c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000AC44 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180027980 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSimpleHashTable<unsigned short const *,int,CStringHashPolicy,CStringCompare,CDefaultResizePolicy,CDefaultRehashPolicy>::s_EnumAdaptor<_lambda_7782e6150f14bbb60990c959cd555e32_>(
        _DWORD **a1,
        _QWORD *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)*a1 + 9) + 112LL))(*((_QWORD *)*a1 + 9), *a2);
  v4 = 0;
  v5 = v3;
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x39A,
      (__int64)"onecoreuap\\shell\\onecoretdlhelpers\\tiledatalayeritemwrappers.cpp",
      (const char *)(unsigned int)v3);
  *a1[1] = v5;
  LOBYTE(v4) = *a1[1] >= 0;
  return v4;
}
