/*
 * XREFs of ?MRTResolveText@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAJPEBGW4VISUAL_ELEMENT_THEME@@PEAPEAG@Z @ 0x18002280C
 * Callers:
 *     ?GetDisplayName@TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAAJPEAUITileManager@@PEAUIVisualElementEnumerator@@PEAPEAG@Z @ 0x1800225EC (-GetDisplayName@TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAAJPEAUITileManager@@PEAUIVisualE.c)
 * Callees:
 *     ?Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBG@Z @ 0x180002244 (-Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBG@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180007A78 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008AA0 (-Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x180017C80 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 *     __security_check_cookie @ 0x180025A00 (__security_check_cookie.c)
 */

__int64 __fastcall TileDataLayerItemWrappers::TDLTileInfoHelper::MRTResolveText(
        __int64 a1,
        const WCHAR *a2,
        __int64 a3,
        LPWSTR *a4)
{
  HRESULT v6; // eax
  HRESULT v7; // eax
  unsigned int v8; // edi
  __int64 v9; // rdx
  LPVOID v10; // rsi
  LPVOID v12; // rdi
  HRESULT v13; // eax
  unsigned int v14; // ebx
  int v15; // eax
  LPVOID ppv; // [rsp+30h] [rbp-D0h] BYREF
  LPVOID pv[3]; // [rsp+38h] [rbp-C8h] BYREF
  WCHAR pszOutBuf[264]; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+288h] [rbp+188h]

  *a4 = 0LL;
  if ( *a2 != 64 )
  {
    memset(pv, 0, sizeof(pv));
    v15 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::Initialize(
            (__int64)pv,
            (__int64)a2);
    v14 = v15;
    if ( v15 >= 0 )
    {
      *a4 = (LPWSTR)pv[0];
      return 0LL;
    }
    wil::details::in1diag3::Return_HrPreRelease(
      retaddr,
      779LL,
      (__int64)"shell\\lib\\onecoretdlhelpers\\tiledatalayeritemwrappers.cpp",
      (const char *)(unsigned int)v15);
    if ( pv[0] )
      CoTaskMemFree(pv[0]);
    return v14;
  }
  v6 = SHLoadIndirectString(a2, pszOutBuf, 0x104u, 0LL);
  if ( v6 >= 0 )
  {
    v13 = SHStrDupW(pszOutBuf, a4);
    v14 = v13;
    if ( v13 >= 0 )
      return 0LL;
    wil::details::in1diag3::Return_HrPreRelease(
      retaddr,
      729LL,
      (__int64)"shell\\lib\\onecoretdlhelpers\\tiledatalayeritemwrappers.cpp",
      (const char *)(unsigned int)v13);
    return v14;
  }
  wil::details::in1diag3::_Log_Hr(
    retaddr,
    (void *)0x2D7,
    (__int64)"shell\\lib\\onecoretdlhelpers\\tiledatalayeritemwrappers.cpp",
    (const char *)(unsigned int)v6);
  ppv = 0LL;
  v7 = CoCreateInstance(
         &GUID_cbc04af1_25c7_4a4d_bb78_28284403510f,
         0LL,
         0x17u,
         &GUID_d5dd8176_dfb2_4569_b4a0_eb3e65ed7ef8,
         &ppv);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v7 = (*(__int64 (__fastcall **)(LPVOID, const WCHAR *, _QWORD, _QWORD, LPWSTR *))(*(_QWORD *)ppv + 56LL))(
           ppv,
           a2,
           0LL,
           0LL,
           a4);
    v8 = v7;
    if ( v7 < 0 )
    {
      v9 = 744LL;
      goto LABEL_7;
    }
    v12 = ppv;
    if ( ppv )
    {
      ppv = 0LL;
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v12 + 16LL))(v12);
    }
    return 0LL;
  }
  v9 = 742LL;
LABEL_7:
  wil::details::in1diag3::Return_HrPreRelease(
    retaddr,
    v9,
    (__int64)"shell\\lib\\onecoretdlhelpers\\tiledatalayeritemwrappers.cpp",
    (const char *)(unsigned int)v7);
  v10 = ppv;
  if ( ppv )
  {
    ppv = 0LL;
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v10 + 16LL))(v10);
  }
  return v8;
}
