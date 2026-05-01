/*
 * XREFs of ?ResetTotalEnergyUsage@AppEnergyUsageManager@@UEAAJPEBGW4AppEnergyManagerUsageFlags@@@Z @ 0x18004C2D0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Find@PEBG@?$_HashTable@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@V?$ComPtr@VAppEnergyInformation@@@WRL@Microsoft@@@2@Ustring_hash@tlx@@Ustring_equal_to@5@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@V?$ComPtr@VAppEnergyInformation@@@WRL@Microsoft@@@utl@@@2@$0A@@utl@@QEAA?AV?$_DlistIt@U?$_HashNode@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@V?$ComPtr@VAppEnergyInformation@@@WRL@Microsoft@@@utl@@@utl@@@1@AEBQEBG@Z @ 0x180002440 (--$_Find@PEBG@-$_HashTable@V-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@U-$pair.c)
 *     ?ResetTotalEnergyUsage@AppEnergyInformation@@QEAAJW4AppEnergyManagerUsageFlags@@@Z @ 0x18004C274 (-ResetTotalEnergyUsage@AppEnergyInformation@@QEAAJW4AppEnergyManagerUsageFlags@@@Z.c)
 *     ?Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C420 (-Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall AppEnergyUsageManager::ResetTotalEnergyUsage(__int64 a1, _WORD *a2, char a3)
{
  __int64 v6; // rdx
  __int64 v7; // rax
  unsigned int v8; // edi
  __int64 v9; // r9
  int v10; // eax
  int v12; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF
  _WORD *v15; // [rsp+48h] [rbp+10h] BYREF

  v15 = a2;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 72));
  if ( !a2 )
  {
    v6 = 554LL;
LABEL_5:
    v8 = -2147024809;
    v9 = 2147942487LL;
LABEL_8:
    wil::details::in1diag3::Return_HrPreRelease(
      retaddr,
      (void *)v6,
      (unsigned int)"base\\appmodel\\resourcepolicy\\appenergymanager\\lib\\appenergymanager.cpp",
      (const char *)v9,
      v12);
    goto LABEL_9;
  }
  v7 = *utl::_HashTable<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>,utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,Microsoft::WRL::ComPtr<AppEnergyInformation>>,tlx::string_hash,tlx::string_equal_to,utl::allocator<utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,Microsoft::WRL::ComPtr<AppEnergyInformation>>>,0>::_Find<unsigned short const *>(
          a1 + 24,
          &v14,
          &v15);
  if ( v7 == a1 + 24 )
  {
    v6 = 557LL;
    goto LABEL_5;
  }
  v10 = AppEnergyInformation::ResetTotalEnergyUsage(*(_QWORD *)(v7 + 56), a3);
  v8 = v10;
  if ( v10 < 0 )
  {
    v9 = (unsigned int)v10;
    v6 = 560LL;
    goto LABEL_8;
  }
LABEL_9:
  LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 72));
  return v8;
}
