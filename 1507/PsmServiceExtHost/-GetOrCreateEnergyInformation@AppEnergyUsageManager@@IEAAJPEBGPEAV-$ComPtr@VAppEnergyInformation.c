/*
 * XREFs of ?GetOrCreateEnergyInformation@AppEnergyUsageManager@@IEAAJPEBGPEAV?$ComPtr@VAppEnergyInformation@@@WRL@Microsoft@@@Z @ 0x180049AC8
 * Callers:
 *     ?StartTrackingEnergyUsage@AppEnergyUsageManager@@IEAAJPEAGKPEAU_SID@@@Z @ 0x18004CA2C (-StartTrackingEnergyUsage@AppEnergyUsageManager@@IEAAJPEAGKPEAU_SID@@@Z.c)
 * Callees:
 *     ??$_Find@PEBG@?$_HashTable@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@V?$ComPtr@VAppEnergyInformation@@@WRL@Microsoft@@@2@Ustring_hash@tlx@@Ustring_equal_to@5@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@V?$ComPtr@VAppEnergyInformation@@@WRL@Microsoft@@@utl@@@2@$0A@@utl@@QEAA?AV?$_DlistIt@U?$_HashNode@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@V?$ComPtr@VAppEnergyInformation@@@WRL@Microsoft@@@utl@@@utl@@@1@AEBQEBG@Z @ 0x180002440 (--$_Find@PEBG@-$_HashTable@V-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@U-$pair.c)
 *     ??$MakeAndInitialize@VAppEnergyInformation@@V1@PEAUIEnergyNotificationServer@@PEAUIRMExecServicesProvider@ExecutionModel@@AEAPEBGAEAU_WNF_STATE_NAME@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VAppEnergyInformation@@@WRL@Microsoft@@@012@$$QEAPEAUIEnergyNotificationServer@@$$QEAPEAUIRMExecServicesProvider@ExecutionModel@@AEAPEBGAEAU_WNF_STATE_NAME@@@Z @ 0x18004836C (--$MakeAndInitialize@VAppEnergyInformation@@V1@PEAUIEnergyNotificationServer@@PEAUI_ea_18004836C.c)
 *     ??$emplace@AEAPEBGPEAVAppEnergyInformation@@@?$_HashTable@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@V?$ComPtr@VAppEnergyInformation@@@WRL@Microsoft@@@2@Ustring_hash@tlx@@Ustring_equal_to@5@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@V?$ComPtr@VAppEnergyInformation@@@WRL@Microsoft@@@utl@@@2@$0A@@utl@@QEAA?AU?$pair@V?$_DlistIt@U?$_HashNode@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@V?$ComPtr@VAppEnergyInformation@@@WRL@Microsoft@@@utl@@@utl@@@utl@@_N@1@AEAPEBG$$QEAPEAVAppEnergyInformation@@@Z @ 0x18004880C (--$emplace@AEAPEBGPEAVAppEnergyInformation@@@-$_HashTable@V-$basic_string@GU-$char_traits@G@utl@.c)
 *     ?InternalAddRef@?$ComPtr@VAppEnergyInformation@@@WRL@Microsoft@@IEBAXXZ @ 0x18004AC88 (-InternalAddRef@-$ComPtr@VAppEnergyInformation@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIXmlDocument@Dom@Xml@Data@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18004ACE0 (-InternalRelease@-$ComPtr@UIXmlDocument@Dom@Xml@Data@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C420 (-Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall AppEnergyUsageManager::GetOrCreateEnergyInformation(__int64 a1, __int64 *a2, __int64 **a3)
{
  unsigned int v3; // edi
  __int64 v6; // rdx
  __int64 v8; // rbx
  void *v9; // rcx
  __int64 v10; // rdx
  int v11; // eax
  unsigned __int64 v12; // r9
  __int64 **v13; // rcx
  __int64 *v14; // rbx
  int v15; // [rsp+20h] [rbp-30h]
  struct ExecutionModel::IRMExecServicesProvider *v16[2]; // [rsp+30h] [rbp-20h] BYREF
  void *v17; // [rsp+40h] [rbp-10h] BYREF
  __int64 v18; // [rsp+48h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  __int64 *v20; // [rsp+88h] [rbp+38h] BYREF
  AppEnergyInformation *v21; // [rsp+98h] [rbp+48h] BYREF

  v20 = a2;
  v3 = 0;
  if ( !a2 )
  {
    v6 = 360LL;
LABEL_3:
    wil::details::in1diag3::Return_HrPreRelease(
      retaddr,
      (void *)v6,
      (unsigned int)"base\\appmodel\\resourcepolicy\\appenergymanager\\lib\\appenergymanager.cpp",
      (const char *)0x80070057LL,
      v15);
    return 2147942487LL;
  }
  if ( !a3 )
  {
    v6 = 361LL;
    goto LABEL_3;
  }
  Microsoft::WRL::ComPtr<Windows::Data::Xml::Dom::IXmlDocument>::InternalRelease(a3);
  v8 = *utl::_HashTable<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>,utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,Microsoft::WRL::ComPtr<AppEnergyInformation>>,tlx::string_hash,tlx::string_equal_to,utl::allocator<utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,Microsoft::WRL::ComPtr<AppEnergyInformation>>>,0>::_Find<unsigned short const *>(
          a1 + 32,
          &v18,
          (_WORD **)&v20);
  if ( v8 == a1 + 32 )
  {
    v21 = 0LL;
    v9 = *(void **)(a1 + 120);
    if ( !v9 )
    {
      v3 = -2147467263;
      v10 = 371LL;
LABEL_13:
      v12 = v3;
      goto LABEL_14;
    }
    v16[0] = *(struct ExecutionModel::IRMExecServicesProvider **)(a1 + 128);
    v17 = v9;
    v11 = Microsoft::WRL::Details::MakeAndInitialize<AppEnergyInformation,AppEnergyInformation,IEnergyNotificationServer *,ExecutionModel::IRMExecServicesProvider *,unsigned short const * &,_WNF_STATE_NAME &>(
            &v21,
            (struct IEnergyNotificationServer **)&v17,
            v16,
            (const unsigned __int16 **)&v20,
            (struct _WNF_STATE_NAME *)(a1 + 72));
    v3 = v11;
    if ( v11 < 0 )
    {
      v12 = (unsigned int)v11;
      v10 = 378LL;
LABEL_14:
      wil::details::in1diag3::Return_HrPreRelease(
        retaddr,
        (void *)v10,
        (unsigned int)"base\\appmodel\\resourcepolicy\\appenergymanager\\lib\\appenergymanager.cpp",
        (const char *)v12,
        v15);
      v13 = (__int64 **)&v21;
LABEL_18:
      Microsoft::WRL::ComPtr<Windows::Data::Xml::Dom::IXmlDocument>::InternalRelease(v13);
      return v3;
    }
    v17 = v21;
    v8 = *(_QWORD *)utl::_HashTable<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>,utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,Microsoft::WRL::ComPtr<AppEnergyInformation>>,tlx::string_hash,tlx::string_equal_to,utl::allocator<utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,Microsoft::WRL::ComPtr<AppEnergyInformation>>>,0>::emplace<unsigned short const * &,AppEnergyInformation *>(
                      (int)a1 + 32,
                      (__int64)v16,
                      &v20,
                      &v17);
    if ( !v8 )
    {
      v3 = -2147024882;
      v10 = 381LL;
      goto LABEL_13;
    }
    v21 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Data::Xml::Dom::IXmlDocument>::InternalRelease(&v21);
  }
  v14 = *(__int64 **)(v8 + 56);
  if ( *a3 != v14 )
  {
    v20 = v14;
    Microsoft::WRL::ComPtr<AppEnergyInformation>::InternalAddRef(&v20);
    v13 = &v20;
    v20 = *a3;
    *a3 = v14;
    goto LABEL_18;
  }
  return v3;
}
