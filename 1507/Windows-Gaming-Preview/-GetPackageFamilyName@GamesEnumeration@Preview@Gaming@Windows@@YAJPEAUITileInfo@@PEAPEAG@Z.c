/*
 * XREFs of ?GetPackageFamilyName@GamesEnumeration@Preview@Gaming@Windows@@YAJPEAUITileInfo@@PEAPEAG@Z @ 0x18001E380
 * Callers:
 *     _lambda_1bb9c5925967af19482f691dd21001c0_::operator() @ 0x180001F80 (_lambda_1bb9c5925967af19482f691dd21001c0_--operator().c)
 *     ?_InitializeProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180013510 (-_InitializeProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 * Callees:
 *     ?Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBG@Z @ 0x1800020F0 (-Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBG@Z.c)
 *     ?Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008B98 (-Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAA@XZ @ 0x180012360 (--1TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAA@XZ.c)
 *     ??0TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAA@PEAUITileInfo@@@Z @ 0x18001D774 (--0TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAA@PEAUITileInfo@@@Z.c)
 *     ?Return_Win32PreRelease@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x18001E66C (-Return_Win32PreRelease@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?GetShellProperty@TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAAJW4TileBoolProperty@2@PEA_N@Z @ 0x180021F8C (-GetShellProperty@TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAAJW4TileBoolProperty@2@PEA_N@Z.c)
 *     ?GetPackageFamilyName@TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAAJPEAPEAG@Z @ 0x180022CA4 (-GetPackageFamilyName@TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAAJPEAPEAG@Z.c)
 *     ?GetLegacyPhoneProductId@TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAAJPEAU_GUID@@@Z @ 0x180022EA0 (-GetLegacyPhoneProductId@TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAAJPEAU_GUID@@@Z.c)
 *     __security_check_cookie @ 0x180025B30 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GetPackageFamilyName(
        Windows::Gaming::Preview::GamesEnumeration *this,
        struct ITileInfo *a2,
        unsigned __int16 **a3)
{
  __int64 v4; // rdx
  void *v5; // rbx
  int LegacyPhoneProductId; // eax
  unsigned int v7; // edi
  unsigned int v8; // eax
  unsigned int v9; // r8d
  int v10; // eax
  void *v11; // rax
  unsigned int v13[2]; // [rsp+28h] [rbp-E0h] BYREF
  LPVOID pv; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v15; // [rsp+38h] [rbp-D0h]
  __int64 v16; // [rsp+40h] [rbp-C8h]
  _QWORD v17[2]; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v18[80]; // [rsp+58h] [rbp-B0h] BYREF
  struct _GUID v19; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v20[144]; // [rsp+B8h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+170h] [rbp+68h]

  v17[1] = -2LL;
  *(_QWORD *)a2 = 0LL;
  TileDataLayerItemWrappers::TDLTileInfoHelper::TDLTileInfoHelper(
    (TileDataLayerItemWrappers::TDLTileInfoHelper *)v18,
    this);
  pv = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  LOBYTE(v13[0]) = 0;
  TileDataLayerItemWrappers::TDLTileInfoHelper::GetShellProperty(v18, v4, v13);
  if ( LOBYTE(v13[0]) )
  {
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::Initialize(
      (__int64)&pv,
      (__int64)&word_18002E89C);
  }
  else
  {
    v15 = -1LL;
    v16 = -1LL;
    TileDataLayerItemWrappers::TDLTileInfoHelper::GetPackageFamilyName(
      (TileDataLayerItemWrappers::TDLTileInfoHelper *)v18,
      (unsigned __int16 **)&pv);
    v5 = pv;
    if ( pv && *(_WORD *)pv )
      goto LABEL_12;
    LegacyPhoneProductId = TileDataLayerItemWrappers::TDLTileInfoHelper::GetLegacyPhoneProductId(
                             (TileDataLayerItemWrappers::TDLTileInfoHelper *)v18,
                             &v19);
    v7 = LegacyPhoneProductId;
    if ( LegacyPhoneProductId < 0 )
    {
      wil::details::in1diag3::Return_HrPreRelease(
        retaddr,
        78LL,
        (__int64)"xbox\\shellcore\\windows.gaming.preview\\dll\\tdlutility.cpp",
        (const char *)(unsigned int)LegacyPhoneProductId);
      goto LABEL_13;
    }
    LODWORD(v17[0]) = 65;
    v8 = PackageFamilyNameFromProductId(&v19, v17, v20);
    if ( v8 )
    {
      v7 = wil::details::in1diag3::Return_Win32PreRelease(retaddr, (void *)0x52, v9, (const char *)v8, v13[0]);
      goto LABEL_13;
    }
    v10 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::Initialize(
            (__int64)&pv,
            (__int64)v20);
    v7 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_HrPreRelease(
        retaddr,
        84LL,
        (__int64)"xbox\\shellcore\\windows.gaming.preview\\dll\\tdlutility.cpp",
        (const char *)(unsigned int)v10);
      v5 = pv;
      goto LABEL_13;
    }
  }
  v5 = pv;
LABEL_12:
  v11 = v5;
  v5 = 0LL;
  pv = 0LL;
  v16 = 0LL;
  v15 = 0LL;
  *(_QWORD *)a2 = v11;
  v7 = 0;
LABEL_13:
  if ( v5 )
  {
    CoTaskMemFree(v5);
    pv = 0LL;
  }
  v15 = 0LL;
  v16 = 0LL;
  TileDataLayerItemWrappers::TDLTileInfoHelper::~TDLTileInfoHelper((TileDataLayerItemWrappers::TDLTileInfoHelper *)v18);
  return v7;
}
