/*
 * XREFs of ?GetPackageFamilyName@ResourceManager@ExecutionModel@@QEAAJPEBGPEAV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@Z @ 0x18000E268
 * Callers:
 *     ?CreateTerminalResourceSetFromResourceSetInfo@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@U_ResourceSetInfo@2@PEBGPEAT_RM_SID@@KK_KPEAPEAUIResourceSet@2@@Z @ 0x180001C7C (-CreateTerminalResourceSetFromResourceSetInfo@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_ACTIV.c)
 *     ?AcquireResourceSetHelperPhase2@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAUIResourceSetCallback@2@PEAXPEBGPEAT_RM_SID@@KK_KKPEAU_RM_ACTIVATOR@@PEA_NPEAVResourceSet@2@PEAPEAUIResourceSet@2@@Z @ 0x18000FCB0 (-AcquireResourceSetHelperPhase2@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA_NPEBG_K@Z @ 0x18000D940 (-assign@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@QEAA_NPEBG_K@Z.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     memset_0 @ 0x180020A42 (memset_0.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::GetPackageFamilyName(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v5; // edi
  int PackageFullNameFromKey; // eax
  LONG v7; // eax
  unsigned __int64 v8; // r8
  _WORD *v10; // rax
  int v11; // [rsp+20h] [rbp-1C8h] BYREF
  UINT32 packageFamilyNameLength[3]; // [rsp+24h] [rbp-1C4h] BYREF
  WCHAR packageFamilyName[72]; // [rsp+30h] [rbp-1B8h] BYREF
  WCHAR packageFullName[128]; // [rsp+C0h] [rbp-128h] BYREF

  v5 = 0;
  memset_0(packageFamilyName, 0, 0x82uLL);
  packageFamilyNameLength[0] = 65;
  memset_0(packageFullName, 0, sizeof(packageFullName));
  v11 = 256;
  PackageFullNameFromKey = PsmGetPackageFullNameFromKey(a2, packageFullName, &v11);
  if ( PackageFullNameFromKey < 0 )
  {
    v5 = PackageFullNameFromKey | 0x10000000;
    goto LABEL_11;
  }
  v7 = PackageFamilyNameFromFullName(packageFullName, packageFamilyNameLength, packageFamilyName);
  if ( v7 )
  {
    if ( v7 > 0 )
      v5 = (unsigned __int16)v7 | 0x80070000;
    else
      v5 = v7;
LABEL_11:
    if ( (v5 & 0x80000000) == 0 )
      return v5;
LABEL_12:
    v10 = (_WORD *)*a3;
    v5 = 0;
    a3[1] = *a3;
    *v10 = 0;
    return v5;
  }
  v8 = -1LL;
  do
    ++v8;
  while ( packageFamilyName[v8] );
  if ( !utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::assign(
          (__int64)a3,
          (__int64 *)packageFamilyName,
          v8) )
    goto LABEL_12;
  return v5;
}
