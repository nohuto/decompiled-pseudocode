/*
 * XREFs of ?GetPackageFamilyName@TDLTileInfoHelper@TileDataLayerItemWrappers@@QEAAJPEAPEAG@Z @ 0x180022B74
 * Callers:
 *     ?GetPackageFamilyName@GamesEnumeration@Preview@Gaming@Windows@@YAJPEAUITileInfo@@PEAPEAG@Z @ 0x18001E08C (-GetPackageFamilyName@GamesEnumeration@Preview@Gaming@Windows@@YAJPEAUITileInfo@@PEAPEAG@Z.c)
 * Callees:
 *     ?_EnsureCapacity@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_K@Z @ 0x18000297C (-_EnsureCapacity@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_.c)
 *     ?Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008AA0 (-Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x180017C80 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 *     ?GetAppIdentifierFromTile@OneCoreDataHelpers@@YAJPEAUITileInfo@@PEAPEAUIApplicationIdentifier@@@Z @ 0x180024CD8 (-GetAppIdentifierFromTile@OneCoreDataHelpers@@YAJPEAUITileInfo@@PEAPEAUIApplicationIdentifier@@@.c)
 */

__int64 __fastcall TileDataLayerItemWrappers::TDLTileInfoHelper::GetPackageFamilyName(
        TileDataLayerItemWrappers::TDLTileInfoHelper *this,
        unsigned __int16 **a2,
        struct IApplicationIdentifier **a3)
{
  OneCoreDataHelpers *v4; // rcx
  int AppIdentifierFromTile; // eax
  unsigned int v6; // edi
  int v7; // eax
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rax
  unsigned __int16 *v11; // rbx
  PWSTR v12; // rsi
  LONG v13; // eax
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rsi
  PCWSTR applicationUserModelId; // [rsp+30h] [rbp-50h] BYREF
  __int64 v19; // [rsp+38h] [rbp-48h]
  __int64 v20; // [rsp+40h] [rbp-40h]
  PWSTR packageRelativeApplicationId[3]; // [rsp+48h] [rbp-38h] BYREF
  PWSTR packageFamilyName[4]; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]
  UINT32 packageRelativeApplicationIdLength; // [rsp+B0h] [rbp+30h] BYREF
  UINT32 packageFamilyNameLength; // [rsp+B8h] [rbp+38h] BYREF
  __int64 v26; // [rsp+C0h] [rbp+40h] BYREF

  *a2 = 0LL;
  v4 = (OneCoreDataHelpers *)*((_QWORD *)this + 9);
  v26 = 0LL;
  AppIdentifierFromTile = OneCoreDataHelpers::GetAppIdentifierFromTile(v4, (struct ITileInfo *)&v26, a3);
  v6 = AppIdentifierFromTile;
  if ( AppIdentifierFromTile < 0 )
  {
    wil::details::in1diag3::Return_HrPreRelease(
      retaddr,
      919LL,
      (__int64)"shell\\lib\\onecoretdlhelpers\\tiledatalayeritemwrappers.cpp",
      (const char *)(unsigned int)AppIdentifierFromTile);
    goto LABEL_27;
  }
  applicationUserModelId = 0LL;
  v19 = -1LL;
  v20 = -1LL;
  v7 = (*(__int64 (__fastcall **)(__int64, PCWSTR *))(*(_QWORD *)v26 + 80LL))(v26, &applicationUserModelId);
  v6 = v7;
  if ( v7 >= 0 )
  {
    if ( !applicationUserModelId || !*applicationUserModelId )
    {
      v6 = -2147023728;
      v9 = 924LL;
      v8 = 2147943568LL;
      goto LABEL_23;
    }
    LODWORD(v10) = v19;
    memset(packageFamilyName, 0, 24);
    if ( v19 == -1 )
    {
      v10 = -1LL;
      do
        ++v10;
      while ( applicationUserModelId[v10] );
      v19 = v10;
    }
    packageFamilyNameLength = v10;
    memset(packageRelativeApplicationId, 0, sizeof(packageRelativeApplicationId));
    packageRelativeApplicationIdLength = v10;
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCapacity(
      (__int64)packageFamilyName,
      (unsigned int)(v10 + 1));
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCapacity(
      (__int64)packageRelativeApplicationId,
      packageRelativeApplicationIdLength + 1);
    v11 = packageFamilyName[0];
    v12 = packageRelativeApplicationId[0];
    v13 = ParseApplicationUserModelId(
            applicationUserModelId,
            &packageFamilyNameLength,
            packageFamilyName[0],
            &packageRelativeApplicationIdLength,
            packageRelativeApplicationId[0]);
    v6 = v13;
    if ( v13 >= 0 )
    {
      if ( v11 && *v11 )
      {
        v6 = 0;
        *a2 = v11;
        v11 = 0LL;
LABEL_18:
        if ( v12 )
          CoTaskMemFree(v12);
        if ( v11 )
          CoTaskMemFree(v11);
        goto LABEL_24;
      }
      v6 = -2147418113;
      v15 = 942LL;
      v14 = 2147549183LL;
    }
    else
    {
      v14 = (unsigned int)v13;
      v15 = 940LL;
    }
    wil::details::in1diag3::Return_HrPreRelease(
      retaddr,
      v15,
      (__int64)"shell\\lib\\onecoretdlhelpers\\tiledatalayeritemwrappers.cpp",
      (const char *)v14);
    goto LABEL_18;
  }
  v8 = (unsigned int)v7;
  v9 = 922LL;
LABEL_23:
  wil::details::in1diag3::Return_HrPreRelease(
    retaddr,
    v9,
    (__int64)"shell\\lib\\onecoretdlhelpers\\tiledatalayeritemwrappers.cpp",
    (const char *)v8);
LABEL_24:
  if ( applicationUserModelId )
  {
    CoTaskMemFree((LPVOID)applicationUserModelId);
    applicationUserModelId = 0LL;
  }
  v19 = 0LL;
  v20 = 0LL;
LABEL_27:
  v16 = v26;
  if ( v26 )
  {
    v26 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  return v6;
}
