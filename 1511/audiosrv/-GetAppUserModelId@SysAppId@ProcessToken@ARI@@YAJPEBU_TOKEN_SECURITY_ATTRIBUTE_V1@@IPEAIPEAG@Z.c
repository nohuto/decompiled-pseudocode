/*
 * XREFs of ?GetAppUserModelId@SysAppId@ProcessToken@ARI@@YAJPEBU_TOKEN_SECURITY_ATTRIBUTE_V1@@IPEAIPEAG@Z @ 0x180001B8C
 * Callers:
 *     ?GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x180032164 (-GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z.c)
 * Callees:
 *     ?GetPackageRelativeApplicationId@SysAppId@ProcessToken@ARI@@YAJPEBU_TOKEN_SECURITY_ATTRIBUTE_V1@@IPEAIPEAG@Z @ 0x180001C48 (-GetPackageRelativeApplicationId@SysAppId@ProcessToken@ARI@@YAJPEBU_TOKEN_SECURITY_ATTRIBUTE_V1@.c)
 *     ?GetPackageFamilyName@SysAppId@ProcessToken@ARI@@YAJPEBU_TOKEN_SECURITY_ATTRIBUTE_V1@@IPEAIPEAG@Z @ 0x180001C9C (-GetPackageFamilyName@SysAppId@ProcessToken@ARI@@YAJPEBU_TOKEN_SECURITY_ATTRIBUTE_V1@@IPEAIPEAG@.c)
 */

int __fastcall ARI::ProcessToken::SysAppId::GetAppUserModelId(
        ARI::ProcessToken::SysAppId *this,
        const struct _TOKEN_SECURITY_ATTRIBUTE_V1 *a2,
        _DWORD *a3,
        unsigned int *a4)
{
  unsigned int v6; // edi
  int result; // eax
  int v9; // esi
  __int64 v10; // rbx
  unsigned __int16 *v11[5]; // [rsp+20h] [rbp-28h] BYREF

  v6 = (unsigned int)a2;
  result = ARI::ProcessToken::SysAppId::GetPackageRelativeApplicationId(this, 0LL, (unsigned int)v11, 0LL, v11[0]);
  if ( result == 122 )
  {
    result = ARI::ProcessToken::SysAppId::GetPackageFamilyName(
               this,
               (const struct _TOKEN_SECURITY_ATTRIBUTE_V1 *)v6,
               (unsigned int)v11 + 4,
               a4,
               v11[0]);
    v9 = (int)v11[0];
    if ( result == 122 )
      goto LABEL_7;
    if ( result )
      return result;
    if ( v6 < HIDWORD(v11[0]) + LODWORD(v11[0]) )
    {
LABEL_7:
      result = 122;
      *a3 = HIDWORD(v11[0]) + LODWORD(v11[0]);
      return result;
    }
    v10 = (unsigned int)(HIDWORD(v11[0]) - 1);
    *((_WORD *)a4 + v10) = 33;
    ARI::ProcessToken::SysAppId::GetPackageRelativeApplicationId(
      this,
      (const struct _TOKEN_SECURITY_ATTRIBUTE_V1 *)(v6 - (unsigned int)v10 - 1),
      (unsigned int)v11 + 4,
      (unsigned int *)((char *)a4 + 2 * v10 + 2),
      v11[0]);
    *a3 = v10 + v9 + 1;
    return 0;
  }
  return result;
}
