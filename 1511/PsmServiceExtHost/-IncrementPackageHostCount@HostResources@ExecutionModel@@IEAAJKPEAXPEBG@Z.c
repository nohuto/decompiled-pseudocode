/*
 * XREFs of ?IncrementPackageHostCount@HostResources@ExecutionModel@@IEAAJKPEAXPEBG@Z @ 0x18001A4F8
 * Callers:
 *     ?CreateHostResourceInfoForAppId@HostResources@ExecutionModel@@IEAAPEAVHostResourceInfo@2@KPEAXAEBU_AppModelActivationId@@PEAVResourcePolicyEngine@2@@Z @ 0x18001A9E0 (-CreateHostResourceInfoForAppId@HostResources@ExecutionModel@@IEAAPEAVHostResourceInfo@2@KPEAXAE.c)
 * Callees:
 *     ?GetPackageFullNameFromPsmKey@HostResources@ExecutionModel@@IEAAJPEBGPEAPEAG@Z @ 0x18001A248 (-GetPackageFullNameFromPsmKey@HostResources@ExecutionModel@@IEAAJPEBGPEAPEAG@Z.c)
 *     ?NotifyPackageStateChange@HostResources@ExecutionModel@@IEAAXKPEAXPEBGW4RPPackageState@@@Z @ 0x18001A2E4 (-NotifyPackageStateChange@HostResources@ExecutionModel@@IEAAXKPEAXPEBGW4RPPackageState@@@Z.c)
 *     ??$_EqualRangeImpl@PEBG@?$_HashTable@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@K@2@Ustring_hash@tlx@@Ustring_equal_to@5@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@K@utl@@@2@$0A@@utl@@AEBAXU?$integral_constant@_N$0A@@1@AEBQEBGAEAV?$_DlistIt@U?$_HashNode@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@K@utl@@@utl@@@1@2AEA_K@Z @ 0x18001B410 (--$_EqualRangeImpl@PEBG@-$_HashTable@V-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@ut.c)
 *     ??$emplace@PEBGH@?$_HashTable@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@K@2@Ustring_hash@tlx@@Ustring_equal_to@5@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@K@utl@@@2@$0A@@utl@@QEAA?AU?$pair@V?$_DlistIt@U?$_HashNode@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@K@utl@@@utl@@@utl@@_N@1@$$QEAPEBG$$QEAH@Z @ 0x18001B82C (--$emplace@PEBGH@-$_HashTable@V-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@U-$p.c)
 */

__int64 __fastcall ExecutionModel::HostResources::IncrementPackageHostCount(
        ExecutionModel::HostResources *this,
        int a2,
        void *a3,
        const unsigned __int16 *a4)
{
  int PackageFullNameFromPsmKey; // eax
  int v8; // edx
  __int64 *v9; // rdi
  unsigned int v10; // ebx
  __int64 *v12; // [rsp+30h] [rbp-30h] BYREF
  _BYTE v13[8]; // [rsp+38h] [rbp-28h] BYREF
  HLOCAL hMem[4]; // [rsp+40h] [rbp-20h] BYREF
  _DWORD *v15; // [rsp+A8h] [rbp+48h] BYREF

  hMem[0] = 0LL;
  if ( a4 )
  {
    PackageFullNameFromPsmKey = ExecutionModel::HostResources::GetPackageFullNameFromPsmKey(
                                  this,
                                  a4,
                                  (unsigned __int16 **)hMem);
    v9 = (__int64 *)hMem[0];
    v10 = PackageFullNameFromPsmKey;
    if ( PackageFullNameFromPsmKey >= 0 )
    {
      v15 = 0LL;
      v12 = (__int64 *)hMem[0];
      utl::_HashTable<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>,utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,unsigned long>,tlx::string_hash,tlx::string_equal_to,utl::allocator<utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,unsigned long>>,0>::_EqualRangeImpl<unsigned short const *>(
        (_DWORD)this + 56,
        v8,
        (unsigned int)&v12,
        (unsigned int)&v15,
        (__int64)hMem,
        (__int64)v13);
      if ( v15 == (_DWORD *)((char *)this + 56) )
      {
        LODWORD(v15) = 1;
        v12 = v9;
        if ( *(_QWORD *)utl::_HashTable<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>,utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,unsigned long>,tlx::string_hash,tlx::string_equal_to,utl::allocator<utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,unsigned long>>,0>::emplace<unsigned short const *,int>(
                          (char *)this + 56,
                          hMem,
                          &v12,
                          &v15) )
          ExecutionModel::HostResources::NotifyPackageStateChange((__int64)this, a2, a3, v9, 0);
        else
          v10 = -2147024882;
      }
      else
      {
        ++v15[14];
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
