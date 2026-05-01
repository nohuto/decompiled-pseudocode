/*
 * XREFs of ?MRTResolveText@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAJPEBGPEAPEAG@Z @ 0x180022A94
 * Callers:
 *     ?GetDisplayName@TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAAJPEAUITileManager@@PEAUIVisualElementEnumerator@@PEAPEAG@Z @ 0x180022874 (-GetDisplayName@TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAAJPEAUITileManager@@PEAUIVisualE.c)
 * Callees:
 *     ?Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBG@Z @ 0x1800020F0 (-Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBG@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180007B70 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008B98 (-Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x1800184A0 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 *     __security_check_cookie @ 0x180025B30 (__security_check_cookie.c)
 */

__int64 __fastcall TileDataLayerItemWrappers::TDLTileInfoHelper::MRTResolveText(
        TileDataLayerItemWrappers::TDLTileInfoHelper *this,
        const unsigned __int16 *a2,
        unsigned __int16 **a3)
{
  HRESULT v5; // eax
  HRESULT v6; // eax
  unsigned int v7; // edi
  __int64 v8; // rdx
  LPVOID v9; // r14
  LPVOID v11; // rdi
  HRESULT v12; // eax
  unsigned int v13; // ebx
  int v14; // eax
  LPVOID ppv; // [rsp+30h] [rbp-D0h] BYREF
  LPVOID pv[3]; // [rsp+38h] [rbp-C8h] BYREF
  WCHAR pszOutBuf[264]; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+288h] [rbp+188h]

  if ( *a2 != 64 )
  {
    memset(pv, 0, sizeof(pv));
    v14 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::Initialize(
            (__int64)pv,
            (__int64)a2);
    v13 = v14;
    if ( v14 >= 0 )
    {
      *a3 = (unsigned __int16 *)pv[0];
      return 0LL;
    }
    wil::details::in1diag3::Return_HrPreRelease(
      retaddr,
      586LL,
      (__int64)"shell\\lib\\onecoretdlhelpers\\tiledatalayeritemwrappers.cpp",
      (const char *)(unsigned int)v14);
    if ( pv[0] )
      CoTaskMemFree(pv[0]);
    return v13;
  }
  v5 = SHLoadIndirectString(a2, pszOutBuf, 0x104u, 0LL);
  if ( v5 >= 0 )
  {
    v12 = SHStrDupW(pszOutBuf, a3);
    v13 = v12;
    if ( v12 >= 0 )
      return 0LL;
    wil::details::in1diag3::Return_HrPreRelease(
      retaddr,
      566LL,
      (__int64)"shell\\lib\\onecoretdlhelpers\\tiledatalayeritemwrappers.cpp",
      (const char *)(unsigned int)v12);
    return v13;
  }
  wil::details::in1diag3::_Log_Hr(
    retaddr,
    (void *)0x234,
    (__int64)"shell\\lib\\onecoretdlhelpers\\tiledatalayeritemwrappers.cpp",
    (const char *)(unsigned int)v5);
  ppv = 0LL;
  v6 = CoCreateInstance(
         &GUID_cbc04af1_25c7_4a4d_bb78_28284403510f,
         0LL,
         0x17u,
         &GUID_d5dd8176_dfb2_4569_b4a0_eb3e65ed7ef8,
         &ppv);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v6 = (*(__int64 (__fastcall **)(LPVOID, const unsigned __int16 *, _QWORD, _QWORD, unsigned __int16 **))(*(_QWORD *)ppv + 56LL))(
           ppv,
           a2,
           0LL,
           0LL,
           a3);
    v7 = v6;
    if ( v6 < 0 )
    {
      v8 = 580LL;
      goto LABEL_7;
    }
    v11 = ppv;
    if ( ppv )
    {
      ppv = 0LL;
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v11 + 16LL))(v11);
    }
    return 0LL;
  }
  v8 = 578LL;
LABEL_7:
  wil::details::in1diag3::Return_HrPreRelease(
    retaddr,
    v8,
    (__int64)"shell\\lib\\onecoretdlhelpers\\tiledatalayeritemwrappers.cpp",
    (const char *)(unsigned int)v6);
  v9 = ppv;
  if ( ppv )
  {
    ppv = 0LL;
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return v7;
}
