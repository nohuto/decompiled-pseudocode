/*
 * XREFs of ?Initialize@ResourcePolicyStore@ExecutionModel@@IEAAJPEBG@Z @ 0x18001D360
 * Callers:
 *     ?CreatePolicyStore@ExecutionModel@@YAJPEBGPEAPEAUIResourcePolicyStore@1@@Z @ 0x18002245C (-CreatePolicyStore@ExecutionModel@@YAJPEBGPEAPEAUIResourcePolicyStore@1@@Z.c)
 * Callees:
 *     ??$AutoHandleCloseHKEY@PEAUHKEY__@@@Common@@YAXPEAUHKEY__@@@Z @ 0x180004AC0 (--$AutoHandleCloseHKEY@PEAUHKEY__@@@Common@@YAXPEAUHKEY__@@@Z.c)
 *     ?GetResourcePolicyStoreRootHive@ExecutionModel@@YAPEAUHKEY__@@XZ @ 0x180005558 (-GetResourcePolicyStoreRootHive@ExecutionModel@@YAPEAUHKEY__@@XZ.c)
 *     ?_Uninit@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@AEAAXXZ @ 0x180016628 (-_Uninit@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@AEAAXXZ.c)
 *     ??$_DeleteNode@U?$_TreeNode@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_MemoryPolicyManifest@@@utl@@@utl@@@?$_ContainerBase@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_MemoryPolicyManifest@@@utl@@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_MemoryPolicyManifest@@@utl@@@2@@utl@@IEAAXPEAU?$_TreeNode@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_MemoryPolicyManifest@@@utl@@@1@@Z @ 0x180019384 (--$_DeleteNode@U-$_TreeNode@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@.c)
 *     ExecutionModel::ReadPolicies @ 0x18001BE60 (ExecutionModel--ReadPolicies.c)
 *     ?OpenSubKey@RegistryKey@Common@@QEAAJPEBGKAEAVAutoHandleHKEY@2@@Z @ 0x18001C21C (-OpenSubKey@RegistryKey@Common@@QEAAJPEBGKAEAVAutoHandleHKEY@2@@Z.c)
 *     ?Open@RegistryKey@Common@@QEAAJQEAUHKEY__@@PEBGK@Z @ 0x18001C284 (-Open@RegistryKey@Common@@QEAAJQEAUHKEY__@@PEBGK@Z.c)
 *     ?EnumKey@RegistryKey@Common@@QEAAJKAEAVStringBuffer@2@PEAU_FILETIME@@@Z @ 0x18001C620 (-EnumKey@RegistryKey@Common@@QEAAJKAEAVStringBuffer@2@PEAU_FILETIME@@@Z.c)
 *     ?SetCapacity@StringBuffer@Common@@QEAAJK@Z @ 0x18001C764 (-SetCapacity@StringBuffer@Common@@QEAAJK@Z.c)
 *     ?SetValueFromString@StringBuffer@Common@@QEAAJPEBG@Z @ 0x18001C7F8 (-SetValueFromString@StringBuffer@Common@@QEAAJPEBG@Z.c)
 *     ??1StringBuffer@Common@@QEAA@XZ @ 0x18001C8F0 (--1StringBuffer@Common@@QEAA@XZ.c)
 *     ?AddResourcePolicyDetails@ResourcePolicyStore@ExecutionModel@@IEAAJPEBGPEBU_ResourcePolicyDetails@@PEAW4RmResourceSetType@@@Z @ 0x18001C998 (-AddResourcePolicyDetails@ResourcePolicyStore@ExecutionModel@@IEAAJPEBGPEBU_ResourcePolicyDetail.c)
 *     ?UpdatePolicyFlags@ResourcePolicyStore@ExecutionModel@@IEAAJPEBGAEAU_ResourcePolicyFlags@@@Z @ 0x18001CAF0 (-UpdatePolicyFlags@ResourcePolicyStore@ExecutionModel@@IEAAJPEBGAEAU_ResourcePolicyFlags@@@Z.c)
 *     _lambda_50a6150c629f36decbcd8feeef80d8a2_::operator() @ 0x18001DE20 (_lambda_50a6150c629f36decbcd8feeef80d8a2_--operator().c)
 *     ??$_FindImpl@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@?$_Tree@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@T_RM_ACTIVITY_IMPORTANCE@@@2@U?$less@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@T_RM_ACTIVITY_IMPORTANCE@@@utl@@@2@$0A@@utl@@AEBAPEAU?$_TreeNode@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@T_RM_ACTIVITY_IMPORTANCE@@@utl@@@1@AEBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@1@@Z @ 0x18001E440 (--$_FindImpl@V-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@@-$_Tree@V-$basic_str.c)
 *     ?clear@?$_Tree@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@T_RM_ACTIVITY_IMPORTANCE@@@2@U?$less@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@T_RM_ACTIVITY_IMPORTANCE@@@utl@@@2@$0A@@utl@@QEAAXXZ @ 0x18001E610 (-clear@-$_Tree@V-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@U-$pair@$$CBV-$basi.c)
 *     ??$_FindImpl@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@?$_Tree@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_CpuPolicyManifest@@@2@U?$less@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_CpuPolicyManifest@@@utl@@@2@$0A@@utl@@AEBAPEAU?$_TreeNode@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_CpuPolicyManifest@@@utl@@@1@AEBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@1@@Z @ 0x18001E750 (--$_FindImpl@V-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@@-$_Tree_ea_18001E750.c)
 *     ??$_FindImpl@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@?$_Tree@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_MemoryPolicyManifest@@@2@U?$less@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_MemoryPolicyManifest@@@utl@@@2@$0A@@utl@@AEBAPEAU?$_TreeNode@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_MemoryPolicyManifest@@@utl@@@1@AEBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@1@@Z @ 0x18001EB60 (--$_FindImpl@V-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@@-$_Tree_ea_18001EB60.c)
 *     ?clear@?$_Tree@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_ExternalResourcePolicyManifest@@@2@U?$less@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_ExternalResourcePolicyManifest@@@utl@@@2@$0A@@utl@@QEAAXXZ @ 0x18001ED80 (-clear@-$_Tree@V-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@U-$pai_ea_18001ED80.c)
 *     ??$_FindImpl@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@?$_Tree@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_IoPolicyManifest@@@2@U?$less@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_IoPolicyManifest@@@utl@@@2@$0A@@utl@@AEBAPEAU?$_TreeNode@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_IoPolicyManifest@@@utl@@@1@AEBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@1@@Z @ 0x18001EEE0 (--$_FindImpl@V-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@@-$_Tree_ea_18001EEE0.c)
 *     ??$_FindImpl@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@?$_Tree@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_ResourcePolicyFlags@@@2@U?$less@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_ResourcePolicyFlags@@@utl@@@2@$0A@@utl@@AEBAPEAU?$_TreeNode@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_ResourcePolicyFlags@@@utl@@@1@AEBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@1@@Z @ 0x18001F020 (--$_FindImpl@V-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@@-$_Tree_ea_18001F020.c)
 *     ??$_FindImpl@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@?$_Tree@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_ExternalResourcePolicyManifest@@@2@U?$less@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_ExternalResourcePolicyManifest@@@utl@@@2@$0A@@utl@@AEBAPEAU?$_TreeNode@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_ExternalResourcePolicyManifest@@@utl@@@1@AEBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@1@@Z @ 0x180023210 (--$_FindImpl@V-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@@-$_Tree_ea_180023210.c)
 *     ??1?$function@$$A6AJAEAVRegistryKey@Common@@AEBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@Z@wistd@@QEAA@XZ @ 0x1800236A0 (--1-$function@$$A6AJAEAVRegistryKey@Common@@AEBV-$basic_string@GU-$char_traits@G@utl@@V-$allocat.c)
 *     ??3@YAXPEAX@Z @ 0x180023DC0 (--3@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     memset_0 @ 0x180024EDE (memset_0.c)
 */

__int64 __fastcall ExecutionModel::ResourcePolicyStore::Initialize(
        ExecutionModel::ResourcePolicyStore *this,
        LPCWSTR lpSubKey)
{
  int Policies; // ebx
  ExecutionModel *v5; // rcx
  HKEY ResourcePolicyStoreRootHive; // rax
  unsigned __int64 v7; // rdi
  void *v8; // rax
  struct _FILETIME *v9; // r9
  DWORD v10; // esi
  WCHAR *v11; // r14
  unsigned int *v12; // rax
  unsigned int *v13; // rdi
  LSTATUS v14; // eax
  __int64 v15; // rax
  unsigned int v16; // eax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  ExecutionModel::ResourcePolicyStore *v22; // rcx
  __int64 v23; // rcx
  unsigned __int64 v24; // rdi
  void **v25; // rdx
  __int64 v26; // rcx
  unsigned __int64 v27; // rdi
  void **v28; // rdx
  __int64 v29; // rcx
  unsigned __int64 v30; // rdi
  void **v31; // rdx
  HKEY v33; // rcx
  DWORD cSubKeys[2]; // [rsp+60h] [rbp-A0h] BYREF
  HKEY phkResult[2]; // [rsp+68h] [rbp-98h] BYREF
  HKEY hKey; // [rsp+78h] [rbp-88h] BYREF
  void *v37; // [rsp+80h] [rbp-80h] BYREF
  LPCWSTR lpSubKeya; // [rsp+88h] [rbp-78h]
  int v39; // [rsp+90h] [rbp-70h]
  void *v40[2]; // [rsp+98h] [rbp-68h] BYREF
  _WORD v41[8]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v42; // [rsp+B8h] [rbp-48h] BYREF
  __int64 *v43; // [rsp+C0h] [rbp-40h]
  __int64 *v44; // [rsp+C8h] [rbp-38h]
  __int64 v45; // [rsp+D0h] [rbp-30h]
  __int64 v46; // [rsp+D8h] [rbp-28h] BYREF
  __int64 *v47; // [rsp+E0h] [rbp-20h]
  __int64 *v48; // [rsp+E8h] [rbp-18h]
  __int64 v49; // [rsp+F0h] [rbp-10h]
  HKEY v50; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v51; // [rsp+100h] [rbp+0h] BYREF
  __int64 *v52; // [rsp+108h] [rbp+8h]
  __int64 *v53; // [rsp+110h] [rbp+10h]
  __int64 v54; // [rsp+118h] [rbp+18h]
  int v55; // [rsp+120h] [rbp+20h] BYREF
  __int64 v56; // [rsp+128h] [rbp+28h]
  int v57; // [rsp+130h] [rbp+30h]
  _QWORD v58[4]; // [rsp+138h] [rbp+38h] BYREF
  _QWORD v59[3]; // [rsp+158h] [rbp+58h] BYREF
  _QWORD v60[4]; // [rsp+170h] [rbp+70h] BYREF
  _QWORD v61[4]; // [rsp+190h] [rbp+90h] BYREF
  __int64 v62; // [rsp+1B0h] [rbp+B0h] BYREF
  __int128 v63; // [rsp+1B8h] [rbp+B8h]
  __int64 *v64; // [rsp+210h] [rbp+110h]

  v56 = 0LL;
  v55 = 0;
  v57 = 0;
  Policies = Common::StringBuffer::SetValueFromString((Common::StringBuffer *)&v55, lpSubKey);
  if ( Policies < 0 )
    goto LABEL_76;
  v60[0] = v60;
  v60[3] = 0LL;
  v60[1] = v60;
  v60[2] = v60;
  v46 = (__int64)&v46;
  v47 = &v46;
  v48 = &v46;
  v58[0] = v58;
  v58[1] = v58;
  v58[2] = v58;
  v42 = (__int64)&v42;
  v43 = &v42;
  v44 = &v42;
  v61[0] = v61;
  v61[1] = v61;
  v61[2] = v61;
  v51 = (__int64)&v51;
  v52 = &v51;
  v53 = &v51;
  v49 = 0LL;
  v58[3] = 0LL;
  v45 = 0LL;
  v61[3] = 0LL;
  v54 = 0LL;
  lpSubKeya = 0LL;
  LODWORD(v37) = 0;
  v39 = 0;
  Policies = Common::StringBuffer::SetCapacity(&v37, 0xFFu);
  if ( Policies >= 0 )
  {
    v50 = 0LL;
    ResourcePolicyStoreRootHive = (HKEY)ExecutionModel::GetResourcePolicyStoreRootHive(v5);
    Policies = Common::RegistryKey::Open(
                 &v50,
                 ResourcePolicyStoreRootHive,
                 L"System\\ResourcePolicyStore\\ResourceSets",
                 0x20019u);
    if ( Policies >= 0 )
    {
      *(_QWORD *)cSubKeys = 0LL;
      Policies = Common::RegistryKey::OpenSubKey(&v50, L"Policies", 0x20019u, (HKEY *)cSubKeys);
      if ( Policies < 0 )
        goto LABEL_83;
      phkResult[0] = (HKEY)this;
      phkResult[1] = (HKEY)v60;
      v62 = (__int64)&wistd::_Func_impl<wistd::_Callable_obj<_lambda_6472679cf2c07d902257e6bf5df59423_,0>,wistd::details::function_allocator<wistd::_Func_class<long,Common::RegistryKey &,utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const &,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>>,long,Common::RegistryKey &,utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const &,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::`vftable';
      v64 = &v62;
      v63 = *(_OWORD *)phkResult;
      Policies = ExecutionModel::ReadPolicies(
                   (const WCHAR **)&v37,
                   lpSubKey,
                   (Common::RegistryKey *)cSubKeys,
                   L"Importance",
                   (__int64)&v62);
      wistd::function<long (Common::RegistryKey &,utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const &)>::~function<long (Common::RegistryKey &,utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const &)>(&v62);
      if ( Policies < 0 )
        goto LABEL_83;
      phkResult[0] = (HKEY)this;
      phkResult[1] = (HKEY)&v46;
      v62 = (__int64)&wistd::_Func_impl<wistd::_Callable_obj<_lambda_484c6aa6b53657583df8a8fd9f487ad8_,0>,wistd::details::function_allocator<wistd::_Func_class<long,Common::RegistryKey &,utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const &,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>>,long,Common::RegistryKey &,utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const &,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::`vftable';
      v64 = &v62;
      v63 = *(_OWORD *)phkResult;
      Policies = ExecutionModel::ReadPolicies(
                   (const WCHAR **)&v37,
                   lpSubKey,
                   (Common::RegistryKey *)cSubKeys,
                   L"CPU",
                   (__int64)&v62);
      wistd::function<long (Common::RegistryKey &,utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const &)>::~function<long (Common::RegistryKey &,utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const &)>(&v62);
      if ( Policies < 0 )
        goto LABEL_83;
      phkResult[0] = (HKEY)this;
      phkResult[1] = (HKEY)v58;
      v62 = (__int64)&wistd::_Func_impl<wistd::_Callable_obj<_lambda_d6d8b41681ce36e6a21c54338e68fa96_,0>,wistd::details::function_allocator<wistd::_Func_class<long,Common::RegistryKey &,utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const &,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>>,long,Common::RegistryKey &,utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const &,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::`vftable';
      v64 = &v62;
      v63 = *(_OWORD *)phkResult;
      Policies = ExecutionModel::ReadPolicies(
                   (const WCHAR **)&v37,
                   lpSubKey,
                   (Common::RegistryKey *)cSubKeys,
                   L"Memory",
                   (__int64)&v62);
      wistd::function<long (Common::RegistryKey &,utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const &)>::~function<long (Common::RegistryKey &,utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const &)>(&v62);
      if ( Policies < 0 )
        goto LABEL_83;
      phkResult[0] = (HKEY)this;
      phkResult[1] = (HKEY)&v42;
      v62 = (__int64)&wistd::_Func_impl<wistd::_Callable_obj<_lambda_9bc5f19087c1f7c89894944441072aea_,0>,wistd::details::function_allocator<wistd::_Func_class<long,Common::RegistryKey &,utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const &,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>>,long,Common::RegistryKey &,utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const &,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::`vftable';
      v64 = &v62;
      v63 = *(_OWORD *)phkResult;
      Policies = ExecutionModel::ReadPolicies(
                   (const WCHAR **)&v37,
                   lpSubKey,
                   (Common::RegistryKey *)cSubKeys,
                   L"IO",
                   (__int64)&v62);
      wistd::function<long (Common::RegistryKey &,utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const &)>::~function<long (Common::RegistryKey &,utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const &)>(&v62);
      if ( Policies < 0 )
        goto LABEL_83;
      phkResult[0] = (HKEY)this;
      phkResult[1] = (HKEY)v61;
      v62 = (__int64)&wistd::_Func_impl<wistd::_Callable_obj<_lambda_41717bbc047c593e908ebc00be73e2bc_,0>,wistd::details::function_allocator<wistd::_Func_class<long,Common::RegistryKey &,utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const &,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>>,long,Common::RegistryKey &,utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const &,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::`vftable';
      v64 = &v62;
      v63 = *(_OWORD *)phkResult;
      Policies = ExecutionModel::ReadPolicies(
                   (const WCHAR **)&v37,
                   lpSubKey,
                   (Common::RegistryKey *)cSubKeys,
                   L"ExternalResources",
                   (__int64)&v62);
      wistd::function<long (Common::RegistryKey &,utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const &)>::~function<long (Common::RegistryKey &,utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const &)>(&v62);
      if ( Policies < 0
        || (phkResult[0] = (HKEY)this,
            phkResult[1] = (HKEY)&v51,
            v62 = (__int64)&wistd::_Func_impl<wistd::_Callable_obj<_lambda_43f3c7a0cfabd3a1fabd61013ccc6008_,0>,wistd::details::function_allocator<wistd::_Func_class<long,Common::RegistryKey &,utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const &,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>>,long,Common::RegistryKey &,utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const &,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::`vftable',
            v64 = &v62,
            v63 = *(_OWORD *)phkResult,
            Policies = ExecutionModel::ReadPolicies(
                         (const WCHAR **)&v37,
                         lpSubKey,
                         (Common::RegistryKey *)cSubKeys,
                         L"Flags",
                         (__int64)&v62),
            wistd::function<long (Common::RegistryKey &,utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const &)>::~function<long (Common::RegistryKey &,utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const &)>(&v62),
            Policies < 0) )
      {
LABEL_83:
        v33 = *(HKEY *)cSubKeys;
      }
      else
      {
        Common::AutoHandleCloseHKEY<HKEY__ *>(*(HKEY *)cSubKeys);
        hKey = 0LL;
        Policies = Common::RegistryKey::OpenSubKey(&v50, L"PolicySets", 0x20019u, &hKey);
        if ( Policies >= 0 )
        {
          Policies = RegQueryInfoKeyW(hKey, 0LL, 0LL, 0LL, cSubKeys, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
          if ( Policies >= 0 )
          {
            v7 = cSubKeys[0];
            *((_QWORD *)this + 6) = cSubKeys[0];
            v8 = malloc(saturated_mul(v7, 0x18uLL));
            *((_QWORD *)this + 7) = v8;
            memset_0(v8, 0, 24 * v7);
            v10 = 0;
            if ( cSubKeys[0] )
            {
              while ( 1 )
              {
                Policies = Common::RegistryKey::EnumKey(&hKey, v10, (struct Common::StringBuffer *)&v37, v9);
                if ( Policies < 0 )
                  goto LABEL_82;
                v11 = (WCHAR *)lpSubKeya;
                lpSubKeya = 0LL;
                LODWORD(v37) = 0;
                v39 = 0;
                v12 = (unsigned int *)malloc(0x70uLL);
                v13 = v12;
                if ( !v12 )
                  break;
                memset_0(v12, 0, 0x70uLL);
                phkResult[0] = 0LL;
                v14 = RegOpenKeyExW(hKey, v11, 0, 0x20019u, phkResult);
                Policies = v14;
                if ( v14 > 0 )
                  Policies = (unsigned __int16)v14 | 0x80070000;
                if ( Policies < 0 )
                  goto LABEL_79;
                v41[0] = 0;
                v40[0] = v41;
                v40[1] = v41;
                v59[0] = phkResult;
                v59[1] = &v37;
                v59[2] = v40;
                memset_0(v13, 0, 0x70uLL);
                Policies = lambda_50a6150c629f36decbcd8feeef80d8a2_::operator()(v59, L"Importance");
                if ( Policies < 0 )
                  goto LABEL_78;
                if ( (_QWORD *)utl::_Tree<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>,utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_RM_ACTIVITY_IMPORTANCE>,utl::less<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>>,utl::allocator<utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_RM_ACTIVITY_IMPORTANCE>>,0>::_FindImpl<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>>(
                                 v60,
                                 v40) == v60 )
                {
LABEL_77:
                  Policies = -2147024809;
LABEL_78:
                  utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::_Uninit(v40);
LABEL_79:
                  Common::AutoHandleCloseHKEY<HKEY__ *>(phkResult[0]);
LABEL_81:
                  operator delete(v13);
                  operator delete(v11);
                  goto LABEL_82;
                }
                v15 = utl::_Tree<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>,utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_RM_ACTIVITY_IMPORTANCE>,utl::less<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>>,utl::allocator<utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_RM_ACTIVITY_IMPORTANCE>>,0>::_FindImpl<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>>(
                        v60,
                        v40);
                if ( (_QWORD *)v15 == v60 )
                  __int2c();
                v16 = *(_DWORD *)(v15 + 56);
                v13[1] = v16;
                *v13 = HIBYTE(v16);
                Policies = lambda_50a6150c629f36decbcd8feeef80d8a2_::operator()(v59, L"CPU");
                if ( Policies < 0 )
                  goto LABEL_78;
                if ( (__int64 *)utl::_Tree<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>,utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_CpuPolicyManifest>,utl::less<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>>,utl::allocator<utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_CpuPolicyManifest>>,0>::_FindImpl<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>>(
                                  &v46,
                                  v40) == &v46 )
                  goto LABEL_77;
                v17 = utl::_Tree<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>,utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_CpuPolicyManifest>,utl::less<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>>,utl::allocator<utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_CpuPolicyManifest>>,0>::_FindImpl<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>>(
                        &v46,
                        v40);
                if ( (__int64 *)v17 == &v46 )
                  __int2c();
                *((_QWORD *)v13 + 5) = *(_QWORD *)(v17 + 56);
                v13[12] = *(_DWORD *)(v17 + 64);
                Policies = lambda_50a6150c629f36decbcd8feeef80d8a2_::operator()(v59, L"Memory");
                if ( Policies < 0 )
                  goto LABEL_78;
                if ( (_QWORD *)utl::_Tree<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>,utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_MemoryPolicyManifest>,utl::less<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>>,utl::allocator<utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_MemoryPolicyManifest>>,0>::_FindImpl<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>>(
                                 v58,
                                 v40) == v58 )
                  goto LABEL_77;
                v18 = utl::_Tree<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>,utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_MemoryPolicyManifest>,utl::less<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>>,utl::allocator<utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_MemoryPolicyManifest>>,0>::_FindImpl<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>>(
                        v58,
                        v40);
                if ( (_QWORD *)v18 == v58 )
                  __int2c();
                *(_OWORD *)(v13 + 2) = *(_OWORD *)(v18 + 56);
                *(_OWORD *)(v13 + 6) = *(_OWORD *)(v18 + 72);
                Policies = lambda_50a6150c629f36decbcd8feeef80d8a2_::operator()(v59, L"IO");
                if ( Policies < 0 )
                  goto LABEL_78;
                if ( (__int64 *)utl::_Tree<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>,utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_IoPolicyManifest>,utl::less<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>>,utl::allocator<utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_IoPolicyManifest>>,0>::_FindImpl<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>>(
                                  &v42,
                                  v40) == &v42 )
                  goto LABEL_77;
                v19 = utl::_Tree<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>,utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_IoPolicyManifest>,utl::less<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>>,utl::allocator<utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_IoPolicyManifest>>,0>::_FindImpl<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>>(
                        &v42,
                        v40);
                if ( (__int64 *)v19 == &v42 )
                  __int2c();
                v13[13] = *(_DWORD *)(v19 + 56);
                Policies = lambda_50a6150c629f36decbcd8feeef80d8a2_::operator()(v59, L"ExternalResources");
                if ( Policies < 0 )
                  goto LABEL_78;
                if ( (_QWORD *)utl::_Tree<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>,utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_ExternalResourcePolicyManifest>,utl::less<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>>,utl::allocator<utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_ExternalResourcePolicyManifest>>,0>::_FindImpl<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>>(
                                 v61,
                                 v40) == v61 )
                  goto LABEL_77;
                v20 = utl::_Tree<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>,utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_ExternalResourcePolicyManifest>,utl::less<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>>,utl::allocator<utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_ExternalResourcePolicyManifest>>,0>::_FindImpl<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>>(
                        v61,
                        v40);
                if ( (_QWORD *)v20 == v61 )
                  __int2c();
                *(_OWORD *)(v13 + 14) = *(_OWORD *)(v20 + 56);
                *(_OWORD *)(v13 + 18) = *(_OWORD *)(v20 + 72);
                *((_QWORD *)v13 + 11) = *(_QWORD *)(v20 + 88);
                v13[24] = *(_DWORD *)(v20 + 96);
                *((_BYTE *)v13 + 100) = *(_BYTE *)(v20 + 100);
                Policies = lambda_50a6150c629f36decbcd8feeef80d8a2_::operator()(v59, L"Flags");
                if ( Policies < 0 )
                  goto LABEL_78;
                if ( (__int64 *)utl::_Tree<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>,utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_ResourcePolicyFlags>,utl::less<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>>,utl::allocator<utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_ResourcePolicyFlags>>,0>::_FindImpl<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>>(
                                  &v51,
                                  v40) == &v51 )
                  goto LABEL_77;
                v21 = utl::_Tree<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>,utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_ResourcePolicyFlags>,utl::less<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>>,utl::allocator<utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_ResourcePolicyFlags>>,0>::_FindImpl<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>>(
                        &v51,
                        v40);
                if ( (__int64 *)v21 == &v51 )
                  __int2c();
                v13[26] = *(_DWORD *)(v21 + 56);
                utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::_Uninit(v40);
                Policies = ExecutionModel::ResourcePolicyStore::UpdatePolicyFlags(
                             v22,
                             v11,
                             (struct _ResourcePolicyFlags *)(v13 + 26));
                if ( Policies < 0 )
                  goto LABEL_79;
                Policies = ExecutionModel::ResourcePolicyStore::AddResourcePolicyDetails(
                             this,
                             v11,
                             (const struct _ResourcePolicyDetails *)v13,
                             0LL);
                if ( Policies < 0 )
                  goto LABEL_79;
                Common::AutoHandleCloseHKEY<HKEY__ *>(phkResult[0]);
                operator delete(0LL);
                operator delete(0LL);
                if ( ++v10 >= cSubKeys[0] )
                  goto LABEL_46;
              }
              v13 = 0LL;
              Policies = -2147024882;
              goto LABEL_81;
            }
LABEL_46:
            Common::AutoHandleCloseHKEY<HKEY__ *>(hKey);
            *((_QWORD *)this + 9) = v56;
            v56 = 0LL;
            v55 = 0;
            v57 = 0;
            goto LABEL_47;
          }
        }
LABEL_82:
        v33 = hKey;
      }
      Common::AutoHandleCloseHKEY<HKEY__ *>(v33);
    }
LABEL_47:
    Common::AutoHandleCloseHKEY<HKEY__ *>(v50);
  }
  Common::StringBuffer::~StringBuffer((Common::StringBuffer *)&v37);
  v24 = (unsigned __int64)v53;
  if ( v53 != &v51 )
  {
    while ( 1 )
    {
      while ( *(_UNKNOWN **)(v24 + 8) != &utl::_TreeSentinel )
        v24 = *(_QWORD *)(v24 + 8);
      if ( *(_UNKNOWN **)(v24 + 16) == &utl::_TreeSentinel )
        break;
LABEL_54:
      v24 = *(_QWORD *)(v24 + 16);
    }
    while ( 1 )
    {
      v25 = (void **)v24;
      v24 = *(_QWORD *)v24 & 0xFFFFFFFFFFFFFFFEuLL;
      utl::_ContainerBase<utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_MemoryPolicyManifest>,utl::allocator<utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_MemoryPolicyManifest>>>::_DeleteNode<utl::_TreeNode<utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_MemoryPolicyManifest>>>(
        v23,
        v25);
      if ( (__int64 *)v24 == &v51 )
        break;
      if ( *(_UNKNOWN **)(v24 + 8) != &utl::_TreeSentinel )
      {
        *(_QWORD *)(v24 + 8) = &utl::_TreeSentinel;
        if ( *(_UNKNOWN **)(v24 + 16) != &utl::_TreeSentinel )
          goto LABEL_54;
      }
    }
    v54 = 0LL;
    v51 = (__int64)&v51;
    v52 = &v51;
    v53 = &v51;
  }
  utl::_Tree<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>,utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_ExternalResourcePolicyManifest>,utl::less<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>>,utl::allocator<utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_ExternalResourcePolicyManifest>>,0>::clear(v61);
  v27 = (unsigned __int64)v44;
  if ( v44 != &v42 )
  {
    while ( 1 )
    {
      while ( *(_UNKNOWN **)(v27 + 8) != &utl::_TreeSentinel )
        v27 = *(_QWORD *)(v27 + 8);
      if ( *(_UNKNOWN **)(v27 + 16) == &utl::_TreeSentinel )
        break;
LABEL_63:
      v27 = *(_QWORD *)(v27 + 16);
    }
    while ( 1 )
    {
      v28 = (void **)v27;
      v27 = *(_QWORD *)v27 & 0xFFFFFFFFFFFFFFFEuLL;
      utl::_ContainerBase<utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_MemoryPolicyManifest>,utl::allocator<utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_MemoryPolicyManifest>>>::_DeleteNode<utl::_TreeNode<utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_MemoryPolicyManifest>>>(
        v26,
        v28);
      if ( (__int64 *)v27 == &v42 )
        break;
      if ( *(_UNKNOWN **)(v27 + 8) != &utl::_TreeSentinel )
      {
        *(_QWORD *)(v27 + 8) = &utl::_TreeSentinel;
        if ( *(_UNKNOWN **)(v27 + 16) != &utl::_TreeSentinel )
          goto LABEL_63;
      }
    }
    v45 = 0LL;
    v42 = (__int64)&v42;
    v43 = &v42;
    v44 = &v42;
  }
  utl::_Tree<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>,utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_ExternalResourcePolicyManifest>,utl::less<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>>,utl::allocator<utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_ExternalResourcePolicyManifest>>,0>::clear(v58);
  v30 = (unsigned __int64)v48;
  if ( v48 != &v46 )
  {
    while ( 1 )
    {
      while ( *(_UNKNOWN **)(v30 + 8) != &utl::_TreeSentinel )
        v30 = *(_QWORD *)(v30 + 8);
      if ( *(_UNKNOWN **)(v30 + 16) == &utl::_TreeSentinel )
        break;
LABEL_71:
      v30 = *(_QWORD *)(v30 + 16);
    }
    while ( 1 )
    {
      v31 = (void **)v30;
      v30 = *(_QWORD *)v30 & 0xFFFFFFFFFFFFFFFEuLL;
      utl::_ContainerBase<utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_MemoryPolicyManifest>,utl::allocator<utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_MemoryPolicyManifest>>>::_DeleteNode<utl::_TreeNode<utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_MemoryPolicyManifest>>>(
        v29,
        v31);
      if ( (__int64 *)v30 == &v46 )
        break;
      if ( *(_UNKNOWN **)(v30 + 8) != &utl::_TreeSentinel )
      {
        *(_QWORD *)(v30 + 8) = &utl::_TreeSentinel;
        if ( *(_UNKNOWN **)(v30 + 16) != &utl::_TreeSentinel )
          goto LABEL_71;
      }
    }
    v49 = 0LL;
    v46 = (__int64)&v46;
    v47 = &v46;
    v48 = &v46;
  }
  utl::_Tree<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>,utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_RM_ACTIVITY_IMPORTANCE>,utl::less<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>>,utl::allocator<utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_RM_ACTIVITY_IMPORTANCE>>,0>::clear(v60);
LABEL_76:
  Common::StringBuffer::~StringBuffer((Common::StringBuffer *)&v55);
  return (unsigned int)Policies;
}
