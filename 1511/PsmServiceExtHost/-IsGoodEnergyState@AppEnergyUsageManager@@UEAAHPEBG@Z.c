/*
 * XREFs of ?IsGoodEnergyState@AppEnergyUsageManager@@UEAAHPEBG@Z @ 0x180005130
 * Callers:
 *     Srv_IsPackageInGoodEnergyState @ 0x1800050B0 (Srv_IsPackageInGoodEnergyState.c)
 * Callees:
 *     ??$_Find@PEBG@?$_HashTable@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@V?$ComPtr@VAppEnergyInformation@@@WRL@Microsoft@@@2@Ustring_hash@tlx@@Ustring_equal_to@5@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@V?$ComPtr@VAppEnergyInformation@@@WRL@Microsoft@@@utl@@@2@$0A@@utl@@QEAA?AV?$_DlistIt@U?$_HashNode@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@V?$ComPtr@VAppEnergyInformation@@@WRL@Microsoft@@@utl@@@utl@@@1@AEBQEBG@Z @ 0x1800051A0 (--$_Find@PEBG@-$_HashTable@V-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@U-$pair.c)
 *     ?IsGoodEnergyState@AppEnergyInformation@@QEAAHXZ @ 0x180051B98 (-IsGoodEnergyState@AppEnergyInformation@@QEAAHXZ.c)
 */

__int64 __fastcall AppEnergyUsageManager::IsGoodEnergyState(AppEnergyUsageManager *this, const unsigned __int16 *a2)
{
  unsigned int IsGoodEnergyState; // esi
  AppEnergyInformation **v5; // rax
  char v7; // [rsp+40h] [rbp+8h] BYREF
  const unsigned __int16 *v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = a2;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 72));
  IsGoodEnergyState = 0;
  if ( a2 )
  {
    v5 = *(AppEnergyInformation ***)utl::_HashTable<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>,utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,Microsoft::WRL::ComPtr<AppEnergyInformation>>,tlx::string_hash,tlx::string_equal_to,utl::allocator<utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,Microsoft::WRL::ComPtr<AppEnergyInformation>>>,0>::_Find<unsigned short const *>(
                                      (char *)this + 24,
                                      &v7,
                                      &v8);
    if ( v5 == (AppEnergyInformation **)((char *)this + 24) )
      IsGoodEnergyState = 1;
    else
      IsGoodEnergyState = AppEnergyInformation::IsGoodEnergyState(v5[7]);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 72));
  return IsGoodEnergyState;
}
