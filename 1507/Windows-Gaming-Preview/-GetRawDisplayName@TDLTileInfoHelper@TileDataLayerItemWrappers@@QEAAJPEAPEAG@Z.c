/*
 * XREFs of ?GetRawDisplayName@TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAAJPEAPEAG@Z @ 0x180022740
 * Callers:
 *     ?GetDisplayName@TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAAJPEAUITileManager@@PEAUIVisualElementEnumerator@@PEAPEAG@Z @ 0x180022874 (-GetDisplayName@TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAAJPEAUITileManager@@PEAUIVisualE.c)
 * Callees:
 *     ?Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008B98 (-Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x1800184A0 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 */

__int64 __fastcall TileDataLayerItemWrappers::TDLTileInfoHelper::GetRawDisplayName(
        TileDataLayerItemWrappers::TDLTileInfoHelper *this,
        unsigned __int16 **a2)
{
  __int64 v3; // rdi
  int v5; // eax
  unsigned __int16 *v6; // rcx
  __int64 v7; // rdi
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // r9
  __int64 v11; // rdx
  void *v12; // rax
  LPVOID pv; // [rsp+20h] [rbp-20h] BYREF
  __int64 v15; // [rsp+28h] [rbp-18h]
  __int64 v16; // [rsp+30h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]

  *a2 = 0LL;
  v3 = *((_QWORD *)this + 9);
  pv = 0LL;
  v15 = -1LL;
  v16 = -1LL;
  v5 = (*(__int64 (__fastcall **)(__int64, __int64, LPVOID *))(*(_QWORD *)v3 + 120LL))(v3, 983227LL, &pv);
  v6 = (unsigned __int16 *)pv;
  if ( v5 >= 0 && pv && *(_WORD *)pv )
    goto LABEL_10;
  v7 = *((_QWORD *)this + 9);
  if ( pv )
  {
    CoTaskMemFree(pv);
    pv = 0LL;
  }
  v15 = -1LL;
  v16 = -1LL;
  v8 = (*(__int64 (__fastcall **)(__int64, __int64, LPVOID *))(*(_QWORD *)v7 + 120LL))(v7, 6553604LL, &pv);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v6 = (unsigned __int16 *)pv;
    if ( !pv || !*(_WORD *)pv )
    {
      v9 = -2147023728;
      v11 = 478LL;
      v10 = 2147943568LL;
      goto LABEL_12;
    }
LABEL_10:
    v12 = 0LL;
    v16 = 0LL;
    pv = 0LL;
    v9 = 0;
    v15 = 0LL;
    *a2 = v6;
    goto LABEL_13;
  }
  v10 = (unsigned int)v8;
  v11 = 477LL;
LABEL_12:
  wil::details::in1diag3::Return_HrPreRelease(
    retaddr,
    v11,
    (__int64)"shell\\lib\\onecoretdlhelpers\\tiledatalayeritemwrappers.cpp",
    (const char *)v10);
  v12 = pv;
LABEL_13:
  if ( v12 )
    CoTaskMemFree(v12);
  return v9;
}
