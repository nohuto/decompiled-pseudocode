/*
 * XREFs of ?MRTResolveText@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAJPEBGW4VISUAL_ELEMENT_THEME@@PEAPEAG@Z @ 0x180022DC0
 * Callers:
 *     ?GetDisplayName@TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAAJPEAUITileManager@@PEAUIVisualElementEnumerator@@PEAPEAG@Z @ 0x180022BAC (-GetDisplayName@TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAAJPEAUITileManager@@PEAUIVisualE.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002C08 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBG@Z @ 0x180005FE8 (-Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBG@Z.c)
 *     __security_check_cookie @ 0x180026090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180027980 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TileDataLayerItemWrappers::TDLTileInfoHelper::MRTResolveText(
        __int64 a1,
        const WCHAR *a2,
        __int64 a3,
        LPWSTR *a4)
{
  HRESULT v6; // eax
  unsigned int v7; // ebx
  HRESULT v9; // eax
  __int64 v10; // rdx
  LPVOID v11; // rcx
  LPVOID v12; // rcx
  int v13; // eax
  LPVOID ppv; // [rsp+30h] [rbp-D0h] BYREF
  LPVOID pv[3]; // [rsp+38h] [rbp-C8h] BYREF
  WCHAR pszOutBuf[264]; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+288h] [rbp+188h]

  *a4 = 0LL;
  if ( *a2 == 64 )
  {
    if ( SHLoadIndirectString(a2, pszOutBuf, 0x104u, 0LL) < 0 )
    {
      ppv = 0LL;
      v9 = CoCreateInstance(
             &GUID_cbc04af1_25c7_4a4d_bb78_28284403510f,
             0LL,
             0x17u,
             &GUID_d5dd8176_dfb2_4569_b4a0_eb3e65ed7ef8,
             &ppv);
      v7 = v9;
      if ( v9 >= 0 )
      {
        v9 = (*(__int64 (__fastcall **)(LPVOID, const WCHAR *, _QWORD, _QWORD, LPWSTR *))(*(_QWORD *)ppv + 56LL))(
               ppv,
               a2,
               0LL,
               0LL,
               a4);
        v7 = v9;
        if ( v9 >= 0 )
        {
          v12 = ppv;
          if ( ppv )
          {
            ppv = 0LL;
            (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v12 + 16LL))(v12);
          }
          return 0LL;
        }
        v10 = 671LL;
      }
      else
      {
        v10 = 669LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (__int64)"onecoreuap\\shell\\onecoretdlhelpers\\tiledatalayeritemwrappers.cpp",
        (const char *)(unsigned int)v9);
      v11 = ppv;
      if ( ppv )
      {
        ppv = 0LL;
        (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v11 + 16LL))(v11);
      }
      return v7;
    }
    v6 = SHStrDupW(pszOutBuf, a4);
    v7 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x290,
        (__int64)"onecoreuap\\shell\\onecoretdlhelpers\\tiledatalayeritemwrappers.cpp",
        (const char *)(unsigned int)v6);
      return v7;
    }
  }
  else
  {
    memset(pv, 0, sizeof(pv));
    v13 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::Initialize(
            (__int64)pv,
            (__int64)a2);
    v7 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2C2,
        (__int64)"onecoreuap\\shell\\onecoretdlhelpers\\tiledatalayeritemwrappers.cpp",
        (const char *)(unsigned int)v13);
      if ( pv[0] )
        CoTaskMemFree(pv[0]);
      return v7;
    }
    *a4 = (LPWSTR)pv[0];
  }
  return 0LL;
}
