/*
 * XREFs of ?GetOrCreateEnergyInformation@AppEnergyUsageManager@@IEAAJPEBGPEAV?$ComPtr@VAppEnergyInformation@@@WRL@Microsoft@@@Z @ 0x180050AA0
 * Callers:
 *     ?StartTrackingEnergyUsage@AppEnergyUsageManager@@IEAAJPEAGKPEAU_SID@@@Z @ 0x180053604 (-StartTrackingEnergyUsage@AppEnergyUsageManager@@IEAAJPEAGKPEAU_SID@@@Z.c)
 * Callees:
 *     ??$_Find@PEBG@?$_HashTable@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@V?$ComPtr@VAppEnergyInformation@@@WRL@Microsoft@@@2@Ustring_hash@tlx@@Ustring_equal_to@5@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@V?$ComPtr@VAppEnergyInformation@@@WRL@Microsoft@@@utl@@@2@$0A@@utl@@QEAA?AV?$_DlistIt@U?$_HashNode@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@V?$ComPtr@VAppEnergyInformation@@@WRL@Microsoft@@@utl@@@utl@@@1@AEBQEBG@Z @ 0x1800051A0 (--$_Find@PEBG@-$_HashTable@V-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@U-$pair.c)
 *     ??$MakeAndInitialize@VAppEnergyInformation@@V1@PEAUIEnergyNotificationServer@@PEAUIRMExecServicesProvider@ExecutionModel@@AEAPEBGAEAU_WNF_STATE_NAME@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VAppEnergyInformation@@@WRL@Microsoft@@@012@$$QEAPEAUIEnergyNotificationServer@@$$QEAPEAUIRMExecServicesProvider@ExecutionModel@@AEAPEBGAEAU_WNF_STATE_NAME@@@Z @ 0x18004F31C (--$MakeAndInitialize@VAppEnergyInformation@@V1@PEAUIEnergyNotificationServer@@PEAUI_ea_18004F31C.c)
 *     ??$_NewNodeConstruct@AEAPEBGPEAVAppEnergyInformation@@@?$_HashTable@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@V?$ComPtr@VAppEnergyInformation@@@WRL@Microsoft@@@2@Ustring_hash@tlx@@Ustring_equal_to@5@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@V?$ComPtr@VAppEnergyInformation@@@WRL@Microsoft@@@utl@@@2@$0A@@utl@@AEAAPEAU?$_HashNode@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@V?$ComPtr@VAppEnergyInformation@@@WRL@Microsoft@@@utl@@@1@AEAPEBG$$QEAPEAVAppEnergyInformation@@@Z @ 0x18004F788 (--$_NewNodeConstruct@AEAPEBGPEAVAppEnergyInformation@@@-$_HashTable@V-$basic_string@GU-$char_tra.c)
 *     ?InternalAddRef@?$ComPtr@VAppEnergyInformation@@@WRL@Microsoft@@IEBAXXZ @ 0x180051B20 (-InternalAddRef@-$ComPtr@VAppEnergyInformation@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIXmlDocument@Dom@Xml@Data@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180051B58 (-InternalRelease@-$ComPtr@UIXmlDocument@Dom@Xml@Data@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800531B0 (-Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_EmplaceImpl@?$_HashTable@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@V?$ComPtr@VAppEnergyInformation@@@WRL@Microsoft@@@2@Ustring_hash@tlx@@Ustring_equal_to@5@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@V?$ComPtr@VAppEnergyInformation@@@WRL@Microsoft@@@utl@@@2@$0A@@utl@@AEAA?AU?$pair@V?$_DlistIt@U?$_HashNode@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@V?$ComPtr@VAppEnergyInformation@@@WRL@Microsoft@@@utl@@@utl@@@utl@@_N@2@U?$integral_constant@_N$0A@@2@V?$_DlistConstIt@U?$_HashNode@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@V?$ComPtr@VAppEnergyInformation@@@WRL@Microsoft@@@utl@@@utl@@@2@PEAU?$_HashNode@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@V?$ComPtr@VAppEnergyInformation@@@WRL@Microsoft@@@utl@@@2@@Z @ 0x180053958 (-_EmplaceImpl@-$_HashTable@V-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@_ea_180053958.c)
 */

__int64 __fastcall AppEnergyUsageManager::GetOrCreateEnergyInformation(
        struct _WNF_STATE_NAME *a1,
        __int64 *a2,
        __int64 **a3)
{
  unsigned int v3; // edi
  __int64 v6; // rdx
  struct IEnergyNotificationServer *v8; // rbx
  struct IEnergyNotificationServer *v9; // rcx
  __int64 v10; // rdx
  int v11; // eax
  __int64 v12; // rcx
  unsigned __int64 v13; // r9
  char *v14; // rax
  int v15; // r8d
  __int64 **v16; // rcx
  __int64 *v17; // rbx
  int v18; // [rsp+20h] [rbp-30h]
  struct ExecutionModel::IRMExecServicesProvider *v19; // [rsp+30h] [rbp-20h] BYREF
  struct IEnergyNotificationServer *v20[2]; // [rsp+38h] [rbp-18h] BYREF
  __int64 v21; // [rsp+48h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  __int64 *v23; // [rsp+88h] [rbp+38h] BYREF
  AppEnergyInformation *v24; // [rsp+98h] [rbp+48h] BYREF

  v23 = a2;
  v3 = 0;
  if ( !a2 )
  {
    v6 = 366LL;
LABEL_3:
    wil::details::in1diag3::Return_HrPreRelease(
      retaddr,
      (void *)v6,
      (unsigned int)"base\\appmodel\\resourcepolicy\\appenergymanager\\lib\\appenergymanager.cpp",
      (const char *)0x80070057LL,
      v18);
    return 2147942487LL;
  }
  if ( !a3 )
  {
    v6 = 367LL;
    goto LABEL_3;
  }
  Microsoft::WRL::ComPtr<Windows::Data::Xml::Dom::IXmlDocument>::InternalRelease(a3);
  v8 = (struct IEnergyNotificationServer *)*utl::_HashTable<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>,utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,Microsoft::WRL::ComPtr<AppEnergyInformation>>,tlx::string_hash,tlx::string_equal_to,utl::allocator<utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,Microsoft::WRL::ComPtr<AppEnergyInformation>>>,0>::_Find<unsigned short const *>(
                                              (__int64)&a1[4],
                                              &v21,
                                              (_WORD **)&v23);
  if ( v8 == (struct IEnergyNotificationServer *)&a1[4] )
  {
    v24 = 0LL;
    v9 = (struct IEnergyNotificationServer *)a1[15];
    if ( !v9 )
    {
      v3 = -2147467263;
      v10 = 377LL;
LABEL_13:
      v13 = v3;
      goto LABEL_14;
    }
    v19 = (struct ExecutionModel::IRMExecServicesProvider *)a1[16];
    v20[0] = v9;
    v11 = Microsoft::WRL::Details::MakeAndInitialize<AppEnergyInformation,AppEnergyInformation,IEnergyNotificationServer *,ExecutionModel::IRMExecServicesProvider *,unsigned short const * &,_WNF_STATE_NAME &>(
            &v24,
            v20,
            &v19,
            (const unsigned __int16 **)&v23,
            a1 + 9);
    v3 = v11;
    if ( v11 < 0 )
    {
      v13 = (unsigned int)v11;
      v10 = 384LL;
LABEL_14:
      wil::details::in1diag3::Return_HrPreRelease(
        retaddr,
        (void *)v10,
        (unsigned int)"base\\appmodel\\resourcepolicy\\appenergymanager\\lib\\appenergymanager.cpp",
        (const char *)v13,
        v18);
      v16 = (__int64 **)&v24;
LABEL_18:
      Microsoft::WRL::ComPtr<Windows::Data::Xml::Dom::IXmlDocument>::InternalRelease(v16);
      return v3;
    }
    v20[0] = v24;
    v14 = utl::_HashTable<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>,utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,Microsoft::WRL::ComPtr<AppEnergyInformation>>,tlx::string_hash,tlx::string_equal_to,utl::allocator<utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,Microsoft::WRL::ComPtr<AppEnergyInformation>>>,0>::_NewNodeConstruct<unsigned short const * &,AppEnergyInformation *>(
            v12,
            &v23,
            v20);
    utl::_HashTable<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>,utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,Microsoft::WRL::ComPtr<AppEnergyInformation>>,tlx::string_hash,tlx::string_equal_to,utl::allocator<utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,Microsoft::WRL::ComPtr<AppEnergyInformation>>>,0>::_EmplaceImpl(
      (_DWORD)a1 + 32,
      (unsigned int)v20,
      v15,
      0,
      (__int64)v14);
    v8 = v20[0];
    if ( !v20[0] )
    {
      v3 = -2147024882;
      v10 = 387LL;
      goto LABEL_13;
    }
    Microsoft::WRL::ComPtr<Windows::Data::Xml::Dom::IXmlDocument>::InternalRelease(&v24);
  }
  v17 = (__int64 *)*((_QWORD *)v8 + 7);
  if ( *a3 != v17 )
  {
    v23 = v17;
    Microsoft::WRL::ComPtr<AppEnergyInformation>::InternalAddRef(&v23);
    v16 = &v23;
    v23 = *a3;
    *a3 = v17;
    goto LABEL_18;
  }
  return v3;
}
