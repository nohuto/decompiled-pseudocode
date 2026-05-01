/*
 * XREFs of ?GetPackageFamilyName@ResourceManager@ExecutionModel@@QEAAJPEBGPEAV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@Z @ 0x18002E8DC
 * Callers:
 *     ?CreateTerminalResourceSetFromResourceSetInfo@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@U_ResourceSetInfo@2@PEBGPEAT_RM_SID@@KK_KPEAPEAUIResourceSet@2@@Z @ 0x1800351D4 (-CreateTerminalResourceSetFromResourceSetInfo@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_ACTIV.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA_NPEBG@Z @ 0x180016A90 (-assign@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@QEAA_NPEBG@Z.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     memset_0 @ 0x180024EDE (memset_0.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::GetPackageFamilyName(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v5; // edi
  int PackageFullNameFromKey; // eax
  LONG v7; // eax
  __int64 v8; // r8
  __int64 v9; // r9
  _WORD *v10; // rax
  UINT32 packageFamilyNameLength; // [rsp+20h] [rbp-E0h] BYREF
  int v13[3]; // [rsp+24h] [rbp-DCh] BYREF
  WCHAR packageFamilyName[72]; // [rsp+30h] [rbp-D0h] BYREF
  WCHAR packageFullName; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v16[254]; // [rsp+C2h] [rbp-3Eh] BYREF

  packageFamilyName[0] = 0;
  v5 = 0;
  memset_0(&packageFamilyName[1], 0, 0x80uLL);
  packageFamilyNameLength = 65;
  packageFullName = 0;
  memset_0(v16, 0, sizeof(v16));
  v13[0] = 256;
  PackageFullNameFromKey = PsmGetPackageFullNameFromKey(a2, &packageFullName, v13);
  if ( PackageFullNameFromKey < 0 )
  {
    v5 = PackageFullNameFromKey | 0x10000000;
    goto LABEL_7;
  }
  v7 = PackageFamilyNameFromFullName(&packageFullName, &packageFamilyNameLength, packageFamilyName);
  if ( v7 )
  {
    if ( v7 > 0 )
      v5 = (unsigned __int16)v7 | 0x80070000;
    else
      v5 = v7;
LABEL_7:
    if ( v5 < 0 )
      goto LABEL_10;
    return (unsigned int)v5;
  }
  if ( !utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::assign(
          (__int64)a3,
          (__int64 *)packageFamilyName,
          v8,
          v9) )
  {
LABEL_10:
    v10 = (_WORD *)*a3;
    v5 = 0;
    a3[1] = *a3;
    *v10 = 0;
  }
  return (unsigned int)v5;
}
