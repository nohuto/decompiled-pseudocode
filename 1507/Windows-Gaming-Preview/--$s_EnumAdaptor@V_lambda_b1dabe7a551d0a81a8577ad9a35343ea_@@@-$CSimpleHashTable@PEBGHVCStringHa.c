/*
 * XREFs of ??$s_EnumAdaptor@V_lambda_b1dabe7a551d0a81a8577ad9a35343ea_@@@?$CSimpleHashTable@PEBGHVCStringHashPolicy@@VCStringCompare@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@CAHPEBV_lambda_b1dabe7a551d0a81a8577ad9a35343ea_@@AEBQEBGAEAH@Z @ 0x180024870
 * Callers:
 *     _lambda_baa2029db22e8b1694aee1901adb8c93_::operator() @ 0x180023260 (_lambda_baa2029db22e8b1694aee1901adb8c93_--operator().c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180007B70 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x1800184A0 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 */

_BOOL8 __fastcall CSimpleHashTable<unsigned short const *,int,CStringHashPolicy,CStringCompare,CDefaultResizePolicy,CDefaultRehashPolicy>::s_EnumAdaptor<_lambda_b1dabe7a551d0a81a8577ad9a35343ea_>(
        _DWORD **a1,
        __int64 *a2)
{
  __int64 v3; // rbp
  int v4; // eax
  int v5; // eax
  int v6; // ebx
  __int64 v7; // rdi
  bool v8; // si
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v11; // [rsp+40h] [rbp+18h] BYREF

  v11 = 0LL;
  v3 = *a2;
  v4 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))*a1 + 9))(
         *((_QWORD *)*a1 + 9),
         &GUID_d499ceb2_0297_46ec_a841_3b57a7591669,
         &v11);
  *a1[1] = v4;
  if ( v4 >= 0 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 136LL))(v11, v3);
    v6 = v5;
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x306,
        (__int64)"shell\\lib\\onecoretdlhelpers\\tiledatalayeritemwrappers.cpp",
        (const char *)(unsigned int)v5);
    *a1[1] = v6;
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x304,
      (__int64)"shell\\lib\\onecoretdlhelpers\\tiledatalayeritemwrappers.cpp",
      (const char *)(unsigned int)v4);
  }
  v7 = v11;
  v8 = *a1[1] >= 0;
  if ( v11 )
  {
    v11 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return v8;
}
