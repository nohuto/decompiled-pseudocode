/*
 * XREFs of ?RecvCallback@AppEnergyUsageManager@@UEAAXW4RMExecServiceProviderCallbackType@2ExecutionModel@@PEAXJ@Z @ 0x180052790
 * Callers:
 *     <none>
 * Callees:
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 *     ??$_EqualRangeImpl@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@?$_HashTable@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@V?$ComPtr@VAppEnergyInformation@@@WRL@Microsoft@@@2@Ustring_hash@tlx@@Ustring_equal_to@5@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@V?$ComPtr@VAppEnergyInformation@@@WRL@Microsoft@@@utl@@@2@$0A@@utl@@AEBAXU?$integral_constant@_N$0A@@1@AEBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@1@AEAV?$_DlistIt@U?$_HashNode@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@V?$ComPtr@VAppEnergyInformation@@@WRL@Microsoft@@@utl@@@utl@@@1@2AEA_K@Z @ 0x18004F648 (--$_EqualRangeImpl@V-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@@-$_HashTable@V.c)
 *     ??$emplace@AEBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@?$list@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@V?$allocator@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@2@@utl@@QEAA?AV?$_DlistIt@U?$_DlistNode@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@utl@@@1@V?$_DlistConstIt@U?$_DlistNode@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@utl@@@1@AEBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@1@@Z @ 0x18004F898 (--$emplace@AEBV-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@@-$list@V-$basic_str.c)
 *     ?clear@?$list@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@V?$allocator@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@2@@utl@@QEAAXXZ @ 0x180053C48 (-clear@-$list@V-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@V-$allocator@V-$basi.c)
 *     ?erase@?$_HashTable@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@V?$ComPtr@VAppEnergyInformation@@@WRL@Microsoft@@@2@Ustring_hash@tlx@@Ustring_equal_to@5@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@V?$ComPtr@VAppEnergyInformation@@@WRL@Microsoft@@@utl@@@2@$0A@@utl@@QEAA?AV?$_DlistIt@U?$_HashNode@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@V?$ComPtr@VAppEnergyInformation@@@WRL@Microsoft@@@utl@@@utl@@@2@V?$_DlistConstIt@U?$_HashNode@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@V?$ComPtr@VAppEnergyInformation@@@WRL@Microsoft@@@utl@@@utl@@@2@0@Z @ 0x180053C9C (-erase@-$_HashTable@V-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@U_ea_180053C9C.c)
 */

__int64 __fastcall AppEnergyUsageManager::RecvCallback(__int64 a1)
{
  __int64 v2; // rdx
  __int64 *v3; // r15
  __int64 *i; // rdi
  __int64 v5; // r14
  struct _RTL_CRITICAL_SECTION *v6; // rbx
  _QWORD *j; // rbx
  __int64 v9; // [rsp+30h] [rbp-30h] BYREF
  __int64 v10; // [rsp+38h] [rbp-28h] BYREF
  char v11[8]; // [rsp+40h] [rbp-20h] BYREF
  _QWORD v12[3]; // [rsp+48h] [rbp-18h] BYREF
  __int64 *v13; // [rsp+90h] [rbp+30h] BYREF

  v12[2] = 0LL;
  v12[0] = v12;
  v12[1] = v12;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 64));
  *(_QWORD *)(a1 + 128) = 0LL;
  v3 = (__int64 *)(a1 + 16);
  for ( i = *(__int64 **)(a1 + 16); i != v3; i = (__int64 *)*i )
  {
    v5 = i[7];
    v6 = (struct _RTL_CRITICAL_SECTION *)(v5 + 304);
    EnterCriticalSection((LPCRITICAL_SECTION)(v5 + 304));
    LODWORD(v5) = *(_DWORD *)(v5 + 232);
    LeaveCriticalSection(v6);
    if ( (unsigned int)AppEnergyUsageManager::s_pfnGetTickCount(AppEnergyUsageManager::s_pfnGetTickCount)
       - (unsigned int)v5 >= *(_DWORD *)(a1 + 120) )
      utl::list<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>,utl::allocator<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>>>::emplace<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const &>(
        (__int64)v12,
        (void ***)&v13,
        v12,
        (__int64)(i + 3));
  }
  for ( j = (_QWORD *)v12[0]; j != v12; j = (_QWORD *)*j )
  {
    v13 = 0LL;
    utl::_HashTable<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>,utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,Microsoft::WRL::ComPtr<AppEnergyInformation>>,tlx::string_hash,tlx::string_equal_to,utl::allocator<utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,Microsoft::WRL::ComPtr<AppEnergyInformation>>>,0>::_EqualRangeImpl<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>>(
      a1 + 16,
      v2,
      (__int64)(j + 2),
      &v13,
      &v10,
      &v9);
    if ( v13 != v3 )
      utl::_HashTable<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>,utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,Microsoft::WRL::ComPtr<AppEnergyInformation>>,tlx::string_hash,tlx::string_equal_to,utl::allocator<utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,Microsoft::WRL::ComPtr<AppEnergyInformation>>>,0>::erase(
        a1 + 16,
        v11,
        v13,
        *v13);
  }
  utl::list<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>,utl::allocator<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>>>::clear(v12);
  LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 64));
  utl::list<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>,utl::allocator<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>>>::clear(v12);
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64, _QWORD, __int64))(**(_QWORD **)(a1 + 112) + 24LL))(
           *(_QWORD *)(a1 + 112),
           *(unsigned int *)(a1 + 120),
           1000LL,
           a1 & -(__int64)(a1 != 16),
           0LL,
           a1 + 128);
}
