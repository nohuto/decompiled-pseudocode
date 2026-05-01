/*
 * XREFs of ?RegisterForEnergyChangeNotifications@AppEnergyUsageManager@@UEAAJPEBGW4AppEnergyManagerUsageFlags@@PEAT_LARGE_INTEGER@@2@Z @ 0x18004BB90
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Find@PEBG@?$_HashTable@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@V?$ComPtr@VAppEnergyInformation@@@WRL@Microsoft@@@2@Ustring_hash@tlx@@Ustring_equal_to@5@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@V?$ComPtr@VAppEnergyInformation@@@WRL@Microsoft@@@utl@@@2@$0A@@utl@@QEAA?AV?$_DlistIt@U?$_HashNode@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@V?$ComPtr@VAppEnergyInformation@@@WRL@Microsoft@@@utl@@@utl@@@1@AEBQEBG@Z @ 0x180002440 (--$_Find@PEBG@-$_HashTable@V-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@U-$pair.c)
 *     ?RegisterForNotifications@AppEnergyInformation@@QEAAJW4AppEnergyManagerUsageFlags@@PEAT_LARGE_INTEGER@@1@Z @ 0x18004BC50 (-RegisterForNotifications@AppEnergyInformation@@QEAAJW4AppEnergyManagerUsageFlags@@PEAT_LARGE_IN.c)
 *     ?Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C420 (-Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall AppEnergyUsageManager::RegisterForEnergyChangeNotifications(
        __int64 a1,
        _WORD *a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v9; // rdx
  __int64 v10; // rax
  unsigned int v11; // edi
  __int64 v12; // r9
  int v13; // eax
  int v15; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v17; // [rsp+40h] [rbp+8h] BYREF
  _WORD *v18; // [rsp+48h] [rbp+10h] BYREF

  v18 = a2;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 72));
  if ( !a2 )
  {
    v9 = 479LL;
LABEL_5:
    v11 = -2147024809;
    v12 = 2147942487LL;
LABEL_8:
    wil::details::in1diag3::Return_HrPreRelease(
      retaddr,
      (void *)v9,
      (unsigned int)"base\\appmodel\\resourcepolicy\\appenergymanager\\lib\\appenergymanager.cpp",
      (const char *)v12,
      v15);
    goto LABEL_9;
  }
  v10 = *utl::_HashTable<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>,utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,Microsoft::WRL::ComPtr<AppEnergyInformation>>,tlx::string_hash,tlx::string_equal_to,utl::allocator<utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,Microsoft::WRL::ComPtr<AppEnergyInformation>>>,0>::_Find<unsigned short const *>(
           a1 + 24,
           &v17,
           &v18);
  if ( v10 == a1 + 24 )
  {
    v9 = 482LL;
    goto LABEL_5;
  }
  v13 = AppEnergyInformation::RegisterForNotifications(*(_QWORD *)(v10 + 56), a3, a4, a5);
  v11 = v13;
  if ( v13 < 0 )
  {
    v12 = (unsigned int)v13;
    v9 = 485LL;
    goto LABEL_8;
  }
LABEL_9:
  LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 72));
  return v11;
}
