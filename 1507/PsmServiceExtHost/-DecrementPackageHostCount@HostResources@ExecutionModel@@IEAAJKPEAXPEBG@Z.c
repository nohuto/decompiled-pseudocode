/*
 * XREFs of ?DecrementPackageHostCount@HostResources@ExecutionModel@@IEAAJKPEAXPEBG@Z @ 0x1800184C4
 * Callers:
 *     ?ReleaseResources@ResourceSetImpl@ExecutionModel@@UEAAJXZ @ 0x180014D40 (-ReleaseResources@ResourceSetImpl@ExecutionModel@@UEAAJXZ.c)
 *     ?CleanUpHostResourceInfo@HostResources@ExecutionModel@@QEAAJAEBU_AppModelActivationId@@_N@Z @ 0x180018924 (-CleanUpHostResourceInfo@HostResources@ExecutionModel@@QEAAJAEBU_AppModelActivationId@@_N@Z.c)
 * Callees:
 *     ?GetPackageFullNameFromPsmKey@HostResources@ExecutionModel@@IEAAJPEBGPEAPEAG@Z @ 0x180018318 (-GetPackageFullNameFromPsmKey@HostResources@ExecutionModel@@IEAAJPEBGPEAPEAG@Z.c)
 *     ?NotifyPackageStateChange@HostResources@ExecutionModel@@IEAAXKPEAXPEBGW4RPPackageState@@@Z @ 0x1800183B4 (-NotifyPackageStateChange@HostResources@ExecutionModel@@IEAAXKPEAXPEBGW4RPPackageState@@@Z.c)
 *     ?erase@?$_HashTable@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@K@2@Ustring_hash@tlx@@Ustring_equal_to@5@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@K@utl@@@2@$0A@@utl@@QEAA?AV?$_DlistIt@U?$_HashNode@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@K@utl@@@utl@@@2@V?$_DlistConstIt@U?$_HashNode@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@K@utl@@@utl@@@2@0@Z @ 0x1800189A0 (-erase@-$_HashTable@V-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@U-$pair@$$CBV-.c)
 *     ??$_EqualRangeImpl@PEBG@?$_HashTable@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@K@2@Ustring_hash@tlx@@Ustring_equal_to@5@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@K@utl@@@2@$0A@@utl@@AEBAXU?$integral_constant@_N$0A@@1@AEBQEBGAEAV?$_DlistIt@U?$_HashNode@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@K@utl@@@utl@@@1@2AEA_K@Z @ 0x180018A60 (--$_EqualRangeImpl@PEBG@-$_HashTable@V-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@ut.c)
 */

__int64 __fastcall ExecutionModel::HostResources::DecrementPackageHostCount(
        ExecutionModel::HostResources *this,
        int a2,
        void *a3,
        const unsigned __int16 *a4)
{
  int PackageFullNameFromPsmKey; // eax
  int v8; // edx
  __int64 *v9; // rbx
  unsigned int v10; // edi
  _QWORD *v11; // r8
  HLOCAL v14; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v15[8]; // [rsp+38h] [rbp-40h] BYREF
  _BYTE v16[8]; // [rsp+40h] [rbp-38h] BYREF
  HLOCAL hMem; // [rsp+48h] [rbp-30h] BYREF
  _DWORD *v18; // [rsp+98h] [rbp+20h] BYREF

  hMem = 0LL;
  if ( a4 )
  {
    PackageFullNameFromPsmKey = ExecutionModel::HostResources::GetPackageFullNameFromPsmKey(
                                  this,
                                  a4,
                                  (unsigned __int16 **)&hMem);
    v9 = (__int64 *)hMem;
    v10 = PackageFullNameFromPsmKey;
    if ( PackageFullNameFromPsmKey >= 0 )
    {
      v18 = 0LL;
      v14 = hMem;
      utl::_HashTable<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>,utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,unsigned long>,tlx::string_hash,tlx::string_equal_to,utl::allocator<utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,unsigned long>>,0>::_EqualRangeImpl<unsigned short const *>(
        (_DWORD)this + 56,
        v8,
        (unsigned int)&v14,
        (unsigned int)&v18,
        (__int64)v16,
        (__int64)v15);
      v11 = v18;
      if ( v18 != (_DWORD *)((char *)this + 56) && v18[14]-- == 1 )
      {
        utl::_HashTable<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>,utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,unsigned long>,tlx::string_hash,tlx::string_equal_to,utl::allocator<utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,unsigned long>>,0>::erase(
          (char *)this + 56,
          &v18,
          v11,
          *v11);
        ExecutionModel::HostResources::NotifyPackageStateChange((__int64)this, a2, a3, v9, 1);
      }
    }
    if ( v9 )
      LocalFree(v9);
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return v10;
}
