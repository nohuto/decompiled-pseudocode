/*
 * XREFs of ?QueryApplicationEnergyUsage@AppEnergyUsageManager@@UEAAJPEBGW4AppEnergyManagerUsageFlags@@PEAK@Z @ 0x18004B5F0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Find@PEBG@?$_HashTable@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@V?$ComPtr@VAppEnergyInformation@@@WRL@Microsoft@@@2@Ustring_hash@tlx@@Ustring_equal_to@5@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@V?$ComPtr@VAppEnergyInformation@@@WRL@Microsoft@@@utl@@@2@$0A@@utl@@QEAA?AV?$_DlistIt@U?$_HashNode@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@V?$ComPtr@VAppEnergyInformation@@@WRL@Microsoft@@@utl@@@utl@@@1@AEBQEBG@Z @ 0x180002440 (--$_Find@PEBG@-$_HashTable@V-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@U-$pair.c)
 *     ?GetEnergyUsage@AppEnergyInformation@@QEAAJW4AppEnergyManagerUsageFlags@@PEAK@Z @ 0x180049714 (-GetEnergyUsage@AppEnergyInformation@@QEAAJW4AppEnergyManagerUsageFlags@@PEAK@Z.c)
 *     ?Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C420 (-Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall AppEnergyUsageManager::QueryApplicationEnergyUsage(__int64 a1, _WORD *a2, int a3, _DWORD *a4)
{
  __int64 v8; // rdx
  __int64 v9; // rax
  unsigned int v10; // edi
  __int64 v11; // r9
  int EnergyUsage; // eax
  int v14; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v16; // [rsp+40h] [rbp+8h] BYREF
  _WORD *v17; // [rsp+48h] [rbp+10h] BYREF

  v17 = a2;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 72));
  if ( !a2 )
  {
    v8 = 423LL;
LABEL_7:
    v10 = -2147024809;
    v11 = 2147942487LL;
LABEL_10:
    wil::details::in1diag3::Return_HrPreRelease(
      retaddr,
      (void *)v8,
      (unsigned int)"base\\appmodel\\resourcepolicy\\appenergymanager\\lib\\appenergymanager.cpp",
      (const char *)v11,
      v14);
    goto LABEL_11;
  }
  if ( !a4 )
  {
    v8 = 424LL;
    goto LABEL_7;
  }
  *a4 = 0;
  v9 = *utl::_HashTable<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>,utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,Microsoft::WRL::ComPtr<AppEnergyInformation>>,tlx::string_hash,tlx::string_equal_to,utl::allocator<utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,Microsoft::WRL::ComPtr<AppEnergyInformation>>>,0>::_Find<unsigned short const *>(
          a1 + 24,
          &v16,
          &v17);
  if ( v9 == a1 + 24 )
  {
    v8 = 431LL;
    goto LABEL_7;
  }
  EnergyUsage = AppEnergyInformation::GetEnergyUsage(*(_QWORD *)(v9 + 56), a3, a4);
  v10 = EnergyUsage;
  if ( EnergyUsage < 0 )
  {
    v11 = (unsigned int)EnergyUsage;
    v8 = 434LL;
    goto LABEL_10;
  }
LABEL_11:
  LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 72));
  return v10;
}
