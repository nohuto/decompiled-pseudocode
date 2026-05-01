/*
 * XREFs of ??$s_EnumAdaptor@V_lambda_9703d91439079e95eaf7d6783884b1c5_@@@?$CSimpleHashTable@PEBGV?$ComPtr@UIStream@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@CAHPEBV_lambda_9703d91439079e95eaf7d6783884b1c5_@@AEBQEBGAEAV?$ComPtr@UIStream@@@WRL@Microsoft@@@Z @ 0x1800246A0
 * Callers:
 *     _lambda_9e7d2ca8e92d49cfddf0abd925277e19_::operator() @ 0x180023130 (_lambda_9e7d2ca8e92d49cfddf0abd925277e19_--operator().c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180007A78 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x180017C80 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 */

__int64 __fastcall CSimpleHashTable<unsigned short const *,Microsoft::WRL::ComPtr<IStream>,CStringHashPolicy,CStringCompare,CDefaultResizePolicy,CDefaultRehashPolicy>::s_EnumAdaptor<_lambda_9703d91439079e95eaf7d6783884b1c5_>(
        _DWORD **a1,
        __int64 *a2,
        IStream **a3)
{
  __int64 v3; // r15
  HRESULT v6; // eax
  unsigned int v7; // ebp
  HRESULT v8; // ebx
  int v9; // eax
  int v10; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = *a2;
  v6 = IStream_Reset(*a3);
  v7 = 0;
  v8 = v6;
  if ( v6 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x3E0,
      (__int64)"shell\\lib\\onecoretdlhelpers\\tiledatalayeritemwrappers.cpp",
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
        (void *)0x3E3,
        (__int64)"shell\\lib\\onecoretdlhelpers\\tiledatalayeritemwrappers.cpp",
        (const char *)(unsigned int)v9);
    *a1[1] = v10;
  }
  LOBYTE(v7) = *a1[1] >= 0;
  return v7;
}
