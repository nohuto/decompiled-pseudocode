/*
 * XREFs of ?GetPackageFamilyName@ResourceManager@ExecutionModel@@QEAAJPEBGPEAV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@Z @ 0x180001968
 * Callers:
 *     ?CreateTerminalResourceSetFromResourceSetInfo@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@U_ResourceSetInfo@2@PEBGPEAT_RM_SID@@KK_KPEAPEAUIResourceSet@2@@Z @ 0x180002518 (-CreateTerminalResourceSetFromResourceSetInfo@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_ACTIV.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA_NPEBG@Z @ 0x180012860 (-assign@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@QEAA_NPEBG@Z.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     memset_0 @ 0x18002BC7E (memset_0.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::GetPackageFamilyName(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // edi
  int PackageFullNameFromKey; // eax
  LONG v7; // eax
  _WORD *v9; // rax
  UINT32 packageFamilyNameLength; // [rsp+20h] [rbp-E0h] BYREF
  int v11[3]; // [rsp+24h] [rbp-DCh] BYREF
  WCHAR packageFamilyName; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v13[142]; // [rsp+32h] [rbp-CEh] BYREF
  WCHAR packageFullName; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v15[254]; // [rsp+C2h] [rbp-3Eh] BYREF

  packageFamilyName = 0;
  v5 = 0;
  memset_0(v13, 0, 0x80uLL);
  packageFamilyNameLength = 65;
  packageFullName = 0;
  memset_0(v15, 0, sizeof(v15));
  v11[0] = 256;
  PackageFullNameFromKey = PsmGetPackageFullNameFromKey(a2, &packageFullName, v11);
  if ( PackageFullNameFromKey < 0 )
  {
    v5 = PackageFullNameFromKey | 0x10000000;
    goto LABEL_9;
  }
  v7 = PackageFamilyNameFromFullName(&packageFullName, &packageFamilyNameLength, &packageFamilyName);
  if ( v7 )
  {
    if ( v7 > 0 )
      v5 = (unsigned __int16)v7 | 0x80070000;
    else
      v5 = v7;
LABEL_9:
    if ( (v5 & 0x80000000) == 0 )
      return v5;
LABEL_10:
    v9 = *(_WORD **)a3;
    v5 = 0;
    *(_QWORD *)(a3 + 8) = *(_QWORD *)a3;
    *v9 = 0;
    return v5;
  }
  if ( !(unsigned __int8)utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::assign(
                           a3,
                           &packageFamilyName) )
    goto LABEL_10;
  return v5;
}
