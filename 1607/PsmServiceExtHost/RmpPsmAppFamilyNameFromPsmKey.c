/*
 * XREFs of RmpPsmAppFamilyNameFromPsmKey @ 0x180005DC0
 * Callers:
 *     RmpPsmAppFamilyTableFindByActivityHost @ 0x180005870 (RmpPsmAppFamilyTableFindByActivityHost.c)
 *     RmpPsmAppFamilyIdFromPsmAppInstanceId @ 0x180005C74 (RmpPsmAppFamilyIdFromPsmAppInstanceId.c)
 *     RmpActivityHostFindMixedHostForPsmId @ 0x18002F058 (RmpActivityHostFindMixedHostForPsmId.c)
 * Callees:
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     memset_0 @ 0x180020A42 (memset_0.c)
 */

LONG __fastcall RmpPsmAppFamilyNameFromPsmKey(__int64 a1, _OWORD *a2)
{
  LONG result; // eax
  WCHAR *v5; // rax
  __int64 v6; // rcx
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  int v19; // [rsp+20h] [rbp-3C8h] BYREF
  UINT32 packageFamilyNameLength[3]; // [rsp+24h] [rbp-3C4h] BYREF
  WCHAR packageFullName[232]; // [rsp+30h] [rbp-3B8h] BYREF
  WCHAR packageFamilyName[232]; // [rsp+200h] [rbp-1E8h] BYREF

  memset_0(packageFullName, 0, 0x1CEuLL);
  v19 = 462;
  result = PsmGetPackageFullNameFromKey(a1, packageFullName, &v19);
  if ( result >= 0 )
  {
    memset_0(packageFamilyName, 0, sizeof(packageFamilyName));
    packageFamilyNameLength[0] = 232;
    result = PackageFamilyNameFromFullName(packageFullName, packageFamilyNameLength, packageFamilyName);
    if ( result )
    {
      if ( result > 0 )
        return (unsigned __int16)result | 0xC0070000;
    }
    else
    {
      v5 = packageFamilyName;
      v6 = 3LL;
      do
      {
        a2 += 8;
        v7 = *(_OWORD *)v5;
        v8 = *((_OWORD *)v5 + 1);
        v5 += 64;
        *(a2 - 8) = v7;
        v9 = *((_OWORD *)v5 - 6);
        *(a2 - 7) = v8;
        v10 = *((_OWORD *)v5 - 5);
        *(a2 - 6) = v9;
        v11 = *((_OWORD *)v5 - 4);
        *(a2 - 5) = v10;
        v12 = *((_OWORD *)v5 - 3);
        *(a2 - 4) = v11;
        v13 = *((_OWORD *)v5 - 2);
        *(a2 - 3) = v12;
        v14 = *((_OWORD *)v5 - 1);
        *(a2 - 2) = v13;
        *(a2 - 1) = v14;
        --v6;
      }
      while ( v6 );
      v15 = *((_OWORD *)v5 + 1);
      *a2 = *(_OWORD *)v5;
      v16 = *((_OWORD *)v5 + 2);
      a2[1] = v15;
      v17 = *((_OWORD *)v5 + 3);
      a2[2] = v16;
      v18 = *((_OWORD *)v5 + 4);
      result = 0;
      a2[3] = v17;
      a2[4] = v18;
    }
  }
  return result;
}
