/*
 * XREFs of ?StopTrackingEnergyUsage@AppEnergyUsageManager@@IEAAJPEAGKPEAU_SID@@@Z @ 0x180053790
 * Callers:
 *     ?OnPackageStateChanged@AppEnergyUsageManager@@UEAAXPEAGKPEAU_SID@@W4RPPackageState@@@Z @ 0x18001CA50 (-OnPackageStateChanged@AppEnergyUsageManager@@UEAAXPEAGKPEAU_SID@@W4RPPackageState@@@Z.c)
 * Callees:
 *     ??$_EqualRangeImpl@PEAG@?$_HashTable@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@V?$ComPtr@VAppEnergyInformation@@@WRL@Microsoft@@@2@Ustring_hash@tlx@@Ustring_equal_to@5@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@V?$ComPtr@VAppEnergyInformation@@@WRL@Microsoft@@@utl@@@2@$0A@@utl@@AEBAXU?$integral_constant@_N$0A@@1@AEBQEAGAEAV?$_DlistIt@U?$_HashNode@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@V?$ComPtr@VAppEnergyInformation@@@WRL@Microsoft@@@utl@@@utl@@@1@2AEA_K@Z @ 0x18004F4F0 (--$_EqualRangeImpl@PEAG@-$_HashTable@V-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@ut.c)
 *     ?Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800531B0 (-Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StopEnergyTracking@AppEnergyInformation@@QEAAJKPEAU_SID@@@Z @ 0x1800536A4 (-StopEnergyTracking@AppEnergyInformation@@QEAAJKPEAU_SID@@@Z.c)
 */

__int64 __fastcall AppEnergyUsageManager::StopTrackingEnergyUsage(
        AppEnergyUsageManager *this,
        unsigned __int16 *a2,
        unsigned int a3,
        struct _SID *a4)
{
  char *v4; // rbx
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // r9
  __int64 result; // rax
  __int64 v11; // [rsp+30h] [rbp-18h] BYREF
  __int64 v12; // [rsp+38h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF
  _WORD *v15; // [rsp+58h] [rbp+10h] BYREF

  v15 = a2;
  v14 = 0LL;
  v4 = (char *)this + 32;
  utl::_HashTable<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>,utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,Microsoft::WRL::ComPtr<AppEnergyInformation>>,tlx::string_hash,tlx::string_equal_to,utl::allocator<utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,Microsoft::WRL::ComPtr<AppEnergyInformation>>>,0>::_EqualRangeImpl<unsigned short *>(
    (__int64)this + 32,
    (__int64)a2,
    &v15,
    &v14,
    &v12,
    &v11);
  if ( (char *)v14 == v4 )
  {
    v7 = -2147024809;
    v8 = 345LL;
    v9 = 2147942487LL;
  }
  else
  {
    result = AppEnergyInformation::StopEnergyTracking(*(AppEnergyInformation **)(v14 + 56), a3, a4);
    v7 = result;
    if ( (int)result >= 0 )
      return result;
    v9 = (unsigned int)result;
    v8 = 348LL;
  }
  wil::details::in1diag3::Return_HrPreRelease(
    retaddr,
    v8,
    (__int64)"base\\appmodel\\resourcepolicy\\appenergymanager\\lib\\appenergymanager.cpp",
    (const char *)v9);
  return v7;
}
