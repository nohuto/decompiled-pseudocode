/*
 * XREFs of RmpPsmAppFamilyNameFromPsmKey @ 0x180008D80
 * Callers:
 *     RmpPsmAppFamilyTableTryRemoveActivityHost @ 0x180008410 (RmpPsmAppFamilyTableTryRemoveActivityHost.c)
 *     ?RmpPsmAppFamilyTableFindOrCreateByActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@PEAPEAU_RM_PSM_APP_FAMILY@@@Z @ 0x180008B70 (-RmpPsmAppFamilyTableFindOrCreateByActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@PEAPEAU_RM_PSM_APP_FA.c)
 *     RmpPsmAppFamilyIdFromPsmAppInstanceId @ 0x1800193B0 (RmpPsmAppFamilyIdFromPsmAppInstanceId.c)
 *     RmpActivityHostFindMixedHostForPsmId @ 0x18003BB14 (RmpActivityHostFindMixedHostForPsmId.c)
 * Callees:
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     memset_0 @ 0x180024EDE (memset_0.c)
 */

LONG __fastcall RmpPsmAppFamilyNameFromPsmKey(__int64 a1, _OWORD *a2)
{
  LONG result; // eax
  __int64 v5; // rcx
  WCHAR *v6; // rax
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  UINT32 packageFamilyNameLength; // [rsp+20h] [rbp-3C8h] BYREF
  int v19[3]; // [rsp+24h] [rbp-3C4h] BYREF
  WCHAR packageFullName[232]; // [rsp+30h] [rbp-3B8h] BYREF
  WCHAR packageFamilyName[232]; // [rsp+200h] [rbp-1E8h] BYREF

  memset_0(packageFullName, 0, 0x1CEuLL);
  v19[0] = 462;
  result = PsmGetPackageFullNameFromKey(a1, packageFullName, v19);
  if ( result >= 0 )
  {
    memset_0(packageFamilyName, 0, sizeof(packageFamilyName));
    packageFamilyNameLength = 232;
    result = PackageFamilyNameFromFullName(packageFullName, &packageFamilyNameLength, packageFamilyName);
    if ( result )
    {
      if ( result > 0 )
        return (unsigned __int16)result | 0xC0070000;
    }
    else
    {
      v5 = 3LL;
      v6 = packageFamilyName;
      do
      {
        v7 = *((_OWORD *)v6 + 1);
        *a2 = *(_OWORD *)v6;
        v8 = *((_OWORD *)v6 + 2);
        a2[1] = v7;
        v9 = *((_OWORD *)v6 + 3);
        a2[2] = v8;
        v10 = *((_OWORD *)v6 + 4);
        a2[3] = v9;
        v11 = *((_OWORD *)v6 + 5);
        a2[4] = v10;
        v12 = *((_OWORD *)v6 + 6);
        a2[5] = v11;
        v13 = *((_OWORD *)v6 + 7);
        v6 += 64;
        a2[6] = v12;
        a2 += 8;
        *(a2 - 1) = v13;
        --v5;
      }
      while ( v5 );
      v14 = *((_OWORD *)v6 + 1);
      *a2 = *(_OWORD *)v6;
      v15 = *((_OWORD *)v6 + 2);
      a2[1] = v14;
      v16 = *((_OWORD *)v6 + 3);
      a2[2] = v15;
      v17 = *((_OWORD *)v6 + 4);
      result = 0;
      a2[3] = v16;
      a2[4] = v17;
    }
  }
  return result;
}
