/*
 * XREFs of ?GetPackageFamilyName@GamesEnumeration@Preview@Gaming@Windows@@YAJPEAUITileInfo@@PEAPEAG@Z @ 0x18001F69C
 * Callers:
 *     ?_FilterTile@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAUITileInfo@@@Z @ 0x1800058A4 (-_FilterTile@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAUITileInfo@@@Z.c)
 *     ?_InitializeProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180014C40 (-_InitializeProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002C08 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAA@XZ @ 0x180004218 (--1TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAA@XZ.c)
 *     ??0TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAA@PEAUITileInfo@@@Z @ 0x180005154 (--0TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAA@PEAUITileInfo@@@Z.c)
 *     ?Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBG@Z @ 0x180005FE8 (-Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBG@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x18001F934 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?GetLegacyPhoneProductId@TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAAJPEAU_GUID@@@Z @ 0x180022F98 (-GetLegacyPhoneProductId@TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAAJPEAU_GUID@@@Z.c)
 *     ??$GetSimpleDataMetaProperty@_N@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAJPEBGPEA_N@Z @ 0x1800249A4 (--$GetSimpleDataMetaProperty@_N@TDLTileInfoHelper@TileDataLayerItemWrappers@@AEAAJPEBGPEA_N@Z.c)
 *     __security_check_cookie @ 0x180026090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180027980 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GetPackageFamilyName(
        Windows::Gaming::Preview::GamesEnumeration *this,
        struct ITileInfo *a2,
        unsigned __int16 **a3)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  LPVOID v7; // rax
  int LegacyPhoneProductId; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  unsigned int v11; // eax
  unsigned int v12; // r8d
  unsigned int v14[2]; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v15; // [rsp+30h] [rbp-D8h] BYREF
  LPVOID pv; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v17; // [rsp+40h] [rbp-C8h]
  __int64 v18; // [rsp+48h] [rbp-C0h]
  __int64 v19; // [rsp+50h] [rbp-B8h]
  _BYTE v20[72]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 (__fastcall ***v21)(_QWORD, GUID *, __int64 *); // [rsp+A0h] [rbp-68h]
  struct _GUID v22; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v23[144]; // [rsp+B8h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+170h] [rbp+68h]

  v19 = -2LL;
  *(_QWORD *)a2 = 0LL;
  TileDataLayerItemWrappers::TDLTileInfoHelper::TDLTileInfoHelper(
    (TileDataLayerItemWrappers::TDLTileInfoHelper *)v20,
    this);
  pv = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  LOBYTE(v14[0]) = 0;
  TileDataLayerItemWrappers::TDLTileInfoHelper::GetSimpleDataMetaProperty<bool>(
    v20,
    L"AppResolver_IsDesktopAppTile",
    v14);
  if ( !LOBYTE(v14[0]) )
  {
    if ( pv )
    {
      CoTaskMemFree(pv);
      pv = 0LL;
    }
    v17 = -1LL;
    v18 = -1LL;
    pv = 0LL;
    v15 = 0LL;
    v4 = (**v21)(v21, &GUID_66b7d702_1591_4c2e_adfc_5997d695119f, &v15);
    if ( v4 >= 0 )
    {
      v4 = (*(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v15 + 32LL))(v15, &pv);
      if ( v4 >= 0 )
        goto LABEL_10;
      v5 = 864LL;
    }
    else
    {
      v5 = 863LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"onecoreuap\\shell\\onecoretdlhelpers\\tiledatalayeritemwrappers.cpp",
      (const char *)(unsigned int)v4);
LABEL_10:
    v6 = v15;
    if ( v15 )
    {
      v15 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    v7 = pv;
    if ( pv && *(_WORD *)pv )
      goto LABEL_22;
    LegacyPhoneProductId = TileDataLayerItemWrappers::TDLTileInfoHelper::GetLegacyPhoneProductId(
                             (TileDataLayerItemWrappers::TDLTileInfoHelper *)v20,
                             &v22);
    v9 = LegacyPhoneProductId;
    if ( LegacyPhoneProductId >= 0 )
    {
      LODWORD(v15) = 65;
      v11 = PackageFamilyNameFromProductId(&v22, &v15, v23);
      if ( v11 )
      {
        v9 = wil::details::in1diag3::Return_Win32(retaddr, (void *)0x85, v12, (const char *)v11, v14[0]);
        goto LABEL_23;
      }
      LegacyPhoneProductId = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::Initialize(
                               (__int64)&pv,
                               (__int64)v23);
      v9 = LegacyPhoneProductId;
      if ( LegacyPhoneProductId >= 0 )
        goto LABEL_21;
      v10 = 135LL;
    }
    else
    {
      v10 = 129LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\tdlutility.cpp",
      (const char *)(unsigned int)LegacyPhoneProductId);
    goto LABEL_23;
  }
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::Initialize(
    (__int64)&pv,
    (__int64)&unk_18003004C);
LABEL_21:
  v7 = pv;
LABEL_22:
  pv = 0LL;
  v18 = 0LL;
  v17 = 0LL;
  *(_QWORD *)a2 = v7;
  v9 = 0;
LABEL_23:
  if ( pv )
  {
    CoTaskMemFree(pv);
    pv = 0LL;
  }
  v17 = 0LL;
  v18 = 0LL;
  TileDataLayerItemWrappers::TDLTileInfoHelper::~TDLTileInfoHelper((TileDataLayerItemWrappers::TDLTileInfoHelper *)v20);
  return v9;
}
