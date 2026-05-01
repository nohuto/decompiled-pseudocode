/*
 * XREFs of ?Initialize@ResourcePolicyStore@ExecutionModel@@IEAAJPEBG@Z @ 0x180026E30
 * Callers:
 *     ?CreatePolicyStore@ExecutionModel@@YAJPEBGPEAPEAUIResourcePolicyStore@1@@Z @ 0x180024A64 (-CreatePolicyStore@ExecutionModel@@YAJPEBGPEAPEAUIResourcePolicyStore@1@@Z.c)
 * Callees:
 *     ?_Uninit@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@AEAAXXZ @ 0x18001269C (-_Uninit@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@AEAAXXZ.c)
 *     ??$_DeleteNode@U?$_TreeNode@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_MemoryPolicyManifest@@@utl@@@utl@@@?$_ContainerBase@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_MemoryPolicyManifest@@@utl@@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_MemoryPolicyManifest@@@utl@@@2@@utl@@IEAAXPEAU?$_TreeNode@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_MemoryPolicyManifest@@@utl@@@1@@Z @ 0x18001DB84 (--$_DeleteNode@U-$_TreeNode@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@.c)
 *     ?GetResourcePolicyStoreRootHive@ExecutionModel@@YAPEAUHKEY__@@XZ @ 0x1800208A4 (-GetResourcePolicyStoreRootHive@ExecutionModel@@YAPEAUHKEY__@@XZ.c)
 *     ??1?$function@$$A6AJAEAVRegistryKey@Common@@AEBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@Z@wistd@@QEAA@XZ @ 0x180025EC8 (--1-$function@$$A6AJAEAVRegistryKey@Common@@AEBV-$basic_string@GU-$char_traits@G@utl@@V-$allocat.c)
 *     ExecutionModel::ReadPolicies @ 0x180026250 (ExecutionModel--ReadPolicies.c)
 *     ?AddResourcePolicyDetails@ResourcePolicyStore@ExecutionModel@@IEAAJPEBGPEBU_ResourcePolicyDetails@@PEAW4RmResourceSetType@@@Z @ 0x180026598 (-AddResourcePolicyDetails@ResourcePolicyStore@ExecutionModel@@IEAAJPEBGPEBU_ResourcePolicyDetail.c)
 *     ?UpdatePolicyFlags@ResourcePolicyStore@ExecutionModel@@IEAAJPEBGAEAU_ResourcePolicyFlags@@@Z @ 0x1800266AC (-UpdatePolicyFlags@ResourcePolicyStore@ExecutionModel@@IEAAJPEBGAEAU_ResourcePolicyFlags@@@Z.c)
 *     _lambda_50a6150c629f36decbcd8feeef80d8a2_::operator() @ 0x180027910 (_lambda_50a6150c629f36decbcd8feeef80d8a2_--operator().c)
 *     ?OpenSubKey@RegistryKey@Common@@QEAAJPEBGKAEAVAutoHandleHKEY@2@@Z @ 0x180027A48 (-OpenSubKey@RegistryKey@Common@@QEAAJPEBGKAEAVAutoHandleHKEY@2@@Z.c)
 *     ?Open@RegistryKey@Common@@QEAAJQEAUHKEY__@@PEBGK@Z @ 0x180027AC0 (-Open@RegistryKey@Common@@QEAAJQEAUHKEY__@@PEBGK@Z.c)
 *     ?EnumKey@RegistryKey@Common@@QEAAJKAEAVStringBuffer@2@PEAU_FILETIME@@@Z @ 0x180027DBC (-EnumKey@RegistryKey@Common@@QEAAJKAEAVStringBuffer@2@PEAU_FILETIME@@@Z.c)
 *     ?SetCapacity@StringBuffer@Common@@QEAAJK@Z @ 0x180027EF0 (-SetCapacity@StringBuffer@Common@@QEAAJK@Z.c)
 *     ?SetValueFromString@StringBuffer@Common@@QEAAJPEBG@Z @ 0x180027F84 (-SetValueFromString@StringBuffer@Common@@QEAAJPEBG@Z.c)
 *     ??1StringBuffer@Common@@QEAA@XZ @ 0x18002807C (--1StringBuffer@Common@@QEAA@XZ.c)
 *     ??$_FindImpl@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@?$_Tree@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@T_RM_ACTIVITY_IMPORTANCE@@@2@U?$less@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@T_RM_ACTIVITY_IMPORTANCE@@@utl@@@2@$0A@@utl@@AEBAPEAU?$_TreeNode@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@T_RM_ACTIVITY_IMPORTANCE@@@utl@@@1@AEBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@1@@Z @ 0x1800285A0 (--$_FindImpl@V-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@@-$_Tree@V-$basic_str.c)
 *     ??$_FindImpl@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@?$_Tree@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_CpuPolicyManifest@@@2@U?$less@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_CpuPolicyManifest@@@utl@@@2@$0A@@utl@@AEBAPEAU?$_TreeNode@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_CpuPolicyManifest@@@utl@@@1@AEBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@1@@Z @ 0x180028820 (--$_FindImpl@V-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@@-$_Tree_ea_180028820.c)
 *     ??$_FindImpl@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@?$_Tree@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_MemoryPolicyManifest@@@2@U?$less@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_MemoryPolicyManifest@@@utl@@@2@$0A@@utl@@AEBAPEAU?$_TreeNode@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_MemoryPolicyManifest@@@utl@@@1@AEBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@1@@Z @ 0x180028C20 (--$_FindImpl@V-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@@-$_Tree_ea_180028C20.c)
 *     ?clear@?$_Tree@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_ExternalResourcePolicyManifest@@@2@U?$less@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_ExternalResourcePolicyManifest@@@utl@@@2@$0A@@utl@@QEAAXXZ @ 0x180028E0C (-clear@-$_Tree@V-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@U-$pair@$$CBV-$basi.c)
 *     ??$_FindImpl@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@?$_Tree@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_IoPolicyManifest@@@2@U?$less@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_IoPolicyManifest@@@utl@@@2@$0A@@utl@@AEBAPEAU?$_TreeNode@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_IoPolicyManifest@@@utl@@@1@AEBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@1@@Z @ 0x180028F70 (--$_FindImpl@V-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@@-$_Tree_ea_180028F70.c)
 *     ??$_FindImpl@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@?$_Tree@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_ExternalResourcePolicyManifest@@@2@U?$less@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_ExternalResourcePolicyManifest@@@utl@@@2@$0A@@utl@@AEBAPEAU?$_TreeNode@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_ExternalResourcePolicyManifest@@@utl@@@1@AEBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@1@@Z @ 0x1800292D0 (--$_FindImpl@V-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@@-$_Tree_ea_1800292D0.c)
 *     ??$_FindImpl@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@?$_Tree@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_ResourcePolicyFlags@@@2@U?$less@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_ResourcePolicyFlags@@@utl@@@2@$0A@@utl@@AEBAPEAU?$_TreeNode@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_ResourcePolicyFlags@@@utl@@@1@AEBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@1@@Z @ 0x180029590 (--$_FindImpl@V-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@@-$_Tree_ea_180029590.c)
 *     ??3@YAXPEAX@Z @ 0x18002AB64 (--3@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002BB1C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002BB44 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18002BC7E (memset_0.c)
 */

__int64 __fastcall ExecutionModel::ResourcePolicyStore::Initialize(
        ExecutionModel::ResourcePolicyStore *this,
        LPCWSTR lpSubKey)
{
  int InfoKeyW; // ebx
  ExecutionModel *v5; // rcx
  HKEY ResourcePolicyStoreRootHive; // rax
  bool v7; // of
  unsigned __int64 v8; // rax
  void *v9; // rax
  struct _FILETIME *v10; // r9
  unsigned int v11; // esi
  WCHAR *v12; // r14
  unsigned int *v13; // rax
  unsigned int *v14; // rdi
  LSTATUS v15; // eax
  __int64 v16; // rax
  unsigned int v17; // eax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  ExecutionModel::ResourcePolicyStore *v23; // rcx
  __int64 v24; // rcx
  unsigned __int64 v25; // rdi
  void **v26; // rdx
  __int64 v27; // rcx
  unsigned __int64 v28; // rdi
  void **v29; // rdx
  __int64 v30; // rcx
  unsigned __int64 v31; // rdi
  void **v32; // rdx
  unsigned __int64 v33; // rdi
  void **v34; // rdx
  HKEY v36; // rcx
  DWORD cSubKeys[2]; // [rsp+60h] [rbp-A0h] BYREF
  HKEY phkResult[2]; // [rsp+68h] [rbp-98h] BYREF
  HKEY hKey; // [rsp+78h] [rbp-88h] BYREF
  __int64 *v40; // [rsp+80h] [rbp-80h] BYREF
  LPCWSTR lpSubKeya; // [rsp+88h] [rbp-78h]
  int v42; // [rsp+90h] [rbp-70h]
  void *v43[2]; // [rsp+98h] [rbp-68h] BYREF
  _WORD v44[8]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v45; // [rsp+B8h] [rbp-48h] BYREF
  __int64 *v46; // [rsp+C0h] [rbp-40h]
  __int64 *v47; // [rsp+C8h] [rbp-38h]
  __int64 v48; // [rsp+D0h] [rbp-30h]
  __int64 v49; // [rsp+D8h] [rbp-28h] BYREF
  __int64 *v50; // [rsp+E0h] [rbp-20h]
  __int64 *v51; // [rsp+E8h] [rbp-18h]
  __int64 v52; // [rsp+F0h] [rbp-10h]
  __int64 v53; // [rsp+F8h] [rbp-8h] BYREF
  __int64 *v54; // [rsp+100h] [rbp+0h]
  __int64 *v55; // [rsp+108h] [rbp+8h]
  __int64 v56; // [rsp+110h] [rbp+10h]
  __int64 v57; // [rsp+118h] [rbp+18h] BYREF
  __int64 *v58; // [rsp+120h] [rbp+20h]
  __int64 *v59; // [rsp+128h] [rbp+28h]
  __int64 v60; // [rsp+130h] [rbp+30h]
  HKEY v61; // [rsp+138h] [rbp+38h] BYREF
  int v62; // [rsp+140h] [rbp+40h] BYREF
  __int64 v63; // [rsp+148h] [rbp+48h]
  int v64; // [rsp+150h] [rbp+50h]
  _QWORD v65[4]; // [rsp+158h] [rbp+58h] BYREF
  _QWORD v66[4]; // [rsp+178h] [rbp+78h] BYREF
  _QWORD v67[3]; // [rsp+198h] [rbp+98h] BYREF
  __int64 v68; // [rsp+1B0h] [rbp+B0h] BYREF
  __int128 v69; // [rsp+1B8h] [rbp+B8h]
  __int64 *v70; // [rsp+210h] [rbp+110h]

  v63 = 0LL;
  v62 = 0;
  v64 = 0;
  InfoKeyW = Common::StringBuffer::SetValueFromString((Common::StringBuffer *)&v62, lpSubKey);
  if ( InfoKeyW < 0 )
    goto LABEL_93;
  v57 = (__int64)&v57;
  v60 = 0LL;
  v58 = &v57;
  v59 = &v57;
  v49 = (__int64)&v49;
  v50 = &v49;
  v51 = &v49;
  v66[0] = v66;
  v66[1] = v66;
  v66[2] = v66;
  v45 = (__int64)&v45;
  v46 = &v45;
  v47 = &v45;
  v65[0] = v65;
  v65[1] = v65;
  v65[2] = v65;
  v53 = (__int64)&v53;
  v54 = &v53;
  v55 = &v53;
  v52 = 0LL;
  v66[3] = 0LL;
  v48 = 0LL;
  v65[3] = 0LL;
  v56 = 0LL;
  lpSubKeya = 0LL;
  LODWORD(v40) = 0;
  v42 = 0;
  InfoKeyW = Common::StringBuffer::SetCapacity((Common::StringBuffer *)&v40, 0xFFu);
  if ( InfoKeyW >= 0 )
  {
    v61 = 0LL;
    ResourcePolicyStoreRootHive = (HKEY)ExecutionModel::GetResourcePolicyStoreRootHive(v5);
    InfoKeyW = Common::RegistryKey::Open(
                 &v61,
                 ResourcePolicyStoreRootHive,
                 L"System\\ResourcePolicyStore\\ResourceSets",
                 0x20019u);
    if ( InfoKeyW < 0 )
      goto LABEL_55;
    *(_QWORD *)cSubKeys = 0LL;
    InfoKeyW = Common::RegistryKey::OpenSubKey(
                 (Common::RegistryKey *)&v61,
                 L"Policies",
                 0x20019u,
                 (struct Common::AutoHandleHKEY *)cSubKeys);
    if ( InfoKeyW < 0 )
      goto LABEL_102;
    phkResult[0] = (HKEY)this;
    phkResult[1] = (HKEY)&v57;
    v68 = (__int64)&wistd::_Func_impl<wistd::_Callable_obj<_lambda_6472679cf2c07d902257e6bf5df59423_,0>,wistd::details::function_allocator<wistd::_Func_class<long,Common::RegistryKey &,utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const &,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>>,long,Common::RegistryKey &,utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const &,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::`vftable';
    v70 = &v68;
    v69 = *(_OWORD *)phkResult;
    InfoKeyW = ExecutionModel::ReadPolicies(
                 &v40,
                 lpSubKey,
                 (Common::RegistryKey *)cSubKeys,
                 L"Importance",
                 (__int64)&v68);
    wistd::function<long (Common::RegistryKey &,utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const &)>::~function<long (Common::RegistryKey &,utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const &)>((__int64)&v68);
    if ( InfoKeyW < 0 )
      goto LABEL_102;
    phkResult[0] = (HKEY)this;
    phkResult[1] = (HKEY)&v49;
    v68 = (__int64)&wistd::_Func_impl<wistd::_Callable_obj<_lambda_484c6aa6b53657583df8a8fd9f487ad8_,0>,wistd::details::function_allocator<wistd::_Func_class<long,Common::RegistryKey &,utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const &,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>>,long,Common::RegistryKey &,utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const &,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::`vftable';
    v70 = &v68;
    v69 = *(_OWORD *)phkResult;
    InfoKeyW = ExecutionModel::ReadPolicies(&v40, lpSubKey, (Common::RegistryKey *)cSubKeys, L"CPU", (__int64)&v68);
    wistd::function<long (Common::RegistryKey &,utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const &)>::~function<long (Common::RegistryKey &,utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const &)>((__int64)&v68);
    if ( InfoKeyW < 0 )
      goto LABEL_102;
    phkResult[0] = (HKEY)this;
    phkResult[1] = (HKEY)v66;
    v68 = (__int64)&wistd::_Func_impl<wistd::_Callable_obj<_lambda_d6d8b41681ce36e6a21c54338e68fa96_,0>,wistd::details::function_allocator<wistd::_Func_class<long,Common::RegistryKey &,utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const &,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>>,long,Common::RegistryKey &,utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const &,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::`vftable';
    v70 = &v68;
    v69 = *(_OWORD *)phkResult;
    InfoKeyW = ExecutionModel::ReadPolicies(&v40, lpSubKey, (Common::RegistryKey *)cSubKeys, L"Memory", (__int64)&v68);
    wistd::function<long (Common::RegistryKey &,utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const &)>::~function<long (Common::RegistryKey &,utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const &)>((__int64)&v68);
    if ( InfoKeyW < 0 )
      goto LABEL_102;
    phkResult[0] = (HKEY)this;
    phkResult[1] = (HKEY)&v45;
    v68 = (__int64)&wistd::_Func_impl<wistd::_Callable_obj<_lambda_9bc5f19087c1f7c89894944441072aea_,0>,wistd::details::function_allocator<wistd::_Func_class<long,Common::RegistryKey &,utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const &,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>>,long,Common::RegistryKey &,utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const &,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::`vftable';
    v70 = &v68;
    v69 = *(_OWORD *)phkResult;
    InfoKeyW = ExecutionModel::ReadPolicies(&v40, lpSubKey, (Common::RegistryKey *)cSubKeys, L"IO", (__int64)&v68);
    wistd::function<long (Common::RegistryKey &,utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const &)>::~function<long (Common::RegistryKey &,utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const &)>((__int64)&v68);
    if ( InfoKeyW < 0 )
      goto LABEL_102;
    phkResult[0] = (HKEY)this;
    phkResult[1] = (HKEY)v65;
    v68 = (__int64)&wistd::_Func_impl<wistd::_Callable_obj<_lambda_41717bbc047c593e908ebc00be73e2bc_,0>,wistd::details::function_allocator<wistd::_Func_class<long,Common::RegistryKey &,utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const &,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>>,long,Common::RegistryKey &,utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const &,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::`vftable';
    v70 = &v68;
    v69 = *(_OWORD *)phkResult;
    InfoKeyW = ExecutionModel::ReadPolicies(
                 &v40,
                 lpSubKey,
                 (Common::RegistryKey *)cSubKeys,
                 L"ExternalResources",
                 (__int64)&v68);
    wistd::function<long (Common::RegistryKey &,utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const &)>::~function<long (Common::RegistryKey &,utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const &)>((__int64)&v68);
    if ( InfoKeyW < 0
      || (phkResult[0] = (HKEY)this,
          phkResult[1] = (HKEY)&v53,
          v68 = (__int64)&wistd::_Func_impl<wistd::_Callable_obj<_lambda_43f3c7a0cfabd3a1fabd61013ccc6008_,0>,wistd::details::function_allocator<wistd::_Func_class<long,Common::RegistryKey &,utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const &,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>>,long,Common::RegistryKey &,utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const &,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::`vftable',
          v70 = &v68,
          v69 = *(_OWORD *)phkResult,
          InfoKeyW = ExecutionModel::ReadPolicies(
                       &v40,
                       lpSubKey,
                       (Common::RegistryKey *)cSubKeys,
                       L"Flags",
                       (__int64)&v68),
          wistd::function<long (Common::RegistryKey &,utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const &)>::~function<long (Common::RegistryKey &,utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const &)>((__int64)&v68),
          InfoKeyW < 0) )
    {
LABEL_102:
      v36 = *(HKEY *)cSubKeys;
      if ( (unsigned __int64)(*(_QWORD *)cSubKeys - 1LL) > 0xFFFFFFFFFFFFFFFDuLL )
        goto LABEL_55;
    }
    else
    {
      if ( (unsigned __int64)(*(_QWORD *)cSubKeys - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
        RegCloseKey(*(HKEY *)cSubKeys);
      hKey = 0LL;
      InfoKeyW = Common::RegistryKey::OpenSubKey(
                   (Common::RegistryKey *)&v61,
                   L"PolicySets",
                   0x20019u,
                   (struct Common::AutoHandleHKEY *)&hKey);
      if ( InfoKeyW >= 0 )
      {
        InfoKeyW = RegQueryInfoKeyW(hKey, 0LL, 0LL, 0LL, cSubKeys, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
        if ( InfoKeyW >= 0 )
        {
          v8 = 24LL * cSubKeys[0];
          v7 = (cSubKeys[0] * (unsigned __int128)0x18uLL) >> 64 != 0;
          *((_QWORD *)this + 6) = cSubKeys[0];
          if ( v7 )
            v8 = -1LL;
          v9 = operator new[](v8, (const struct std::nothrow_t *)&std::nothrow);
          *((_QWORD *)this + 7) = v9;
          memset_0(v9, 0, 24LL * *((_QWORD *)this + 6));
          v11 = 0;
          if ( cSubKeys[0] )
          {
            while ( 1 )
            {
              InfoKeyW = Common::RegistryKey::EnumKey(
                           (Common::RegistryKey *)&hKey,
                           v11,
                           (struct Common::StringBuffer *)&v40,
                           v10);
              if ( InfoKeyW < 0 )
                goto LABEL_100;
              v12 = (WCHAR *)lpSubKeya;
              lpSubKeya = 0LL;
              LODWORD(v40) = 0;
              v42 = 0;
              v13 = (unsigned int *)operator new(0x70uLL, (const struct std::nothrow_t *)&std::nothrow);
              v14 = v13;
              if ( !v13 )
                break;
              memset_0(v13, 0, 0x70uLL);
              phkResult[0] = 0LL;
              v15 = RegOpenKeyExW(hKey, v12, 0, 0x20019u, phkResult);
              InfoKeyW = v15;
              if ( v15 > 0 )
                InfoKeyW = (unsigned __int16)v15 | 0x80070000;
              if ( InfoKeyW < 0 )
                goto LABEL_96;
              v44[0] = 0;
              v43[0] = v44;
              v43[1] = v44;
              v67[0] = phkResult;
              v67[1] = &v40;
              v67[2] = v43;
              memset_0(v14, 0, 0x70uLL);
              InfoKeyW = lambda_50a6150c629f36decbcd8feeef80d8a2_::operator()(v67, L"Importance");
              if ( InfoKeyW < 0 )
                goto LABEL_95;
              if ( (__int64 *)utl::_Tree<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>,utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_RM_ACTIVITY_IMPORTANCE>,utl::less<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>>,utl::allocator<utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_RM_ACTIVITY_IMPORTANCE>>,0>::_FindImpl<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>>(
                                &v57,
                                v43) == &v57 )
              {
LABEL_94:
                InfoKeyW = -2147024809;
LABEL_95:
                utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::_Uninit(v43);
LABEL_96:
                if ( (unsigned __int64)phkResult[0] - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
                  RegCloseKey(phkResult[0]);
LABEL_99:
                operator delete(v14);
                operator delete(v12);
                goto LABEL_100;
              }
              v16 = utl::_Tree<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>,utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_RM_ACTIVITY_IMPORTANCE>,utl::less<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>>,utl::allocator<utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_RM_ACTIVITY_IMPORTANCE>>,0>::_FindImpl<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>>(
                      &v57,
                      v43);
              if ( (__int64 *)v16 == &v57 )
                __int2c();
              v17 = *(_DWORD *)(v16 + 56);
              v14[1] = v17;
              *v14 = HIBYTE(v17);
              InfoKeyW = lambda_50a6150c629f36decbcd8feeef80d8a2_::operator()(v67, L"CPU");
              if ( InfoKeyW < 0 )
                goto LABEL_95;
              if ( (__int64 *)utl::_Tree<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>,utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_CpuPolicyManifest>,utl::less<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>>,utl::allocator<utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_CpuPolicyManifest>>,0>::_FindImpl<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>>(
                                &v49,
                                v43) == &v49 )
                goto LABEL_94;
              v18 = utl::_Tree<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>,utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_CpuPolicyManifest>,utl::less<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>>,utl::allocator<utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_CpuPolicyManifest>>,0>::_FindImpl<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>>(
                      &v49,
                      v43);
              if ( (__int64 *)v18 == &v49 )
                __int2c();
              *((_QWORD *)v14 + 5) = *(_QWORD *)(v18 + 56);
              v14[12] = *(_DWORD *)(v18 + 64);
              InfoKeyW = lambda_50a6150c629f36decbcd8feeef80d8a2_::operator()(v67, L"Memory");
              if ( InfoKeyW < 0 )
                goto LABEL_95;
              if ( (_QWORD *)utl::_Tree<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>,utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_MemoryPolicyManifest>,utl::less<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>>,utl::allocator<utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_MemoryPolicyManifest>>,0>::_FindImpl<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>>(
                               v66,
                               v43) == v66 )
                goto LABEL_94;
              v19 = utl::_Tree<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>,utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_MemoryPolicyManifest>,utl::less<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>>,utl::allocator<utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_MemoryPolicyManifest>>,0>::_FindImpl<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>>(
                      v66,
                      v43);
              if ( (_QWORD *)v19 == v66 )
                __int2c();
              *(_OWORD *)(v14 + 2) = *(_OWORD *)(v19 + 56);
              *(_OWORD *)(v14 + 6) = *(_OWORD *)(v19 + 72);
              InfoKeyW = lambda_50a6150c629f36decbcd8feeef80d8a2_::operator()(v67, L"IO");
              if ( InfoKeyW < 0 )
                goto LABEL_95;
              if ( (__int64 *)utl::_Tree<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>,utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_IoPolicyManifest>,utl::less<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>>,utl::allocator<utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_IoPolicyManifest>>,0>::_FindImpl<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>>(
                                &v45,
                                v43) == &v45 )
                goto LABEL_94;
              v20 = utl::_Tree<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>,utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_IoPolicyManifest>,utl::less<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>>,utl::allocator<utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_IoPolicyManifest>>,0>::_FindImpl<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>>(
                      &v45,
                      v43);
              if ( (__int64 *)v20 == &v45 )
                __int2c();
              v14[13] = *(_DWORD *)(v20 + 56);
              InfoKeyW = lambda_50a6150c629f36decbcd8feeef80d8a2_::operator()(v67, L"ExternalResources");
              if ( InfoKeyW < 0 )
                goto LABEL_95;
              if ( (_QWORD *)utl::_Tree<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>,utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_ExternalResourcePolicyManifest>,utl::less<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>>,utl::allocator<utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_ExternalResourcePolicyManifest>>,0>::_FindImpl<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>>(
                               v65,
                               v43) == v65 )
                goto LABEL_94;
              v21 = utl::_Tree<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>,utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_ExternalResourcePolicyManifest>,utl::less<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>>,utl::allocator<utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_ExternalResourcePolicyManifest>>,0>::_FindImpl<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>>(
                      v65,
                      v43);
              if ( (_QWORD *)v21 == v65 )
                __int2c();
              *(_OWORD *)(v14 + 14) = *(_OWORD *)(v21 + 56);
              *(_OWORD *)(v14 + 18) = *(_OWORD *)(v21 + 72);
              *((_QWORD *)v14 + 11) = *(_QWORD *)(v21 + 88);
              v14[24] = *(_DWORD *)(v21 + 96);
              *((_BYTE *)v14 + 100) = *(_BYTE *)(v21 + 100);
              InfoKeyW = lambda_50a6150c629f36decbcd8feeef80d8a2_::operator()(v67, L"Flags");
              if ( InfoKeyW < 0 )
                goto LABEL_95;
              if ( (__int64 *)utl::_Tree<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>,utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_ResourcePolicyFlags>,utl::less<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>>,utl::allocator<utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_ResourcePolicyFlags>>,0>::_FindImpl<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>>(
                                &v53,
                                v43) == &v53 )
                goto LABEL_94;
              v22 = utl::_Tree<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>,utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_ResourcePolicyFlags>,utl::less<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>>,utl::allocator<utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_ResourcePolicyFlags>>,0>::_FindImpl<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>>(
                      &v53,
                      v43);
              if ( (__int64 *)v22 == &v53 )
                __int2c();
              v14[26] = *(_DWORD *)(v22 + 56);
              utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::_Uninit(v43);
              InfoKeyW = ExecutionModel::ResourcePolicyStore::UpdatePolicyFlags(
                           v23,
                           v12,
                           (struct _ResourcePolicyFlags *)(v14 + 26));
              if ( InfoKeyW < 0 )
                goto LABEL_96;
              InfoKeyW = ExecutionModel::ResourcePolicyStore::AddResourcePolicyDetails(
                           this,
                           v12,
                           (const struct _ResourcePolicyDetails *)v14,
                           0LL);
              if ( InfoKeyW < 0 )
                goto LABEL_96;
              if ( (unsigned __int64)phkResult[0] - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
                RegCloseKey(phkResult[0]);
              operator delete(0LL);
              operator delete(0LL);
              if ( ++v11 >= cSubKeys[0] )
                goto LABEL_52;
            }
            v14 = 0LL;
            InfoKeyW = -2147024882;
            goto LABEL_99;
          }
LABEL_52:
          if ( (unsigned __int64)hKey - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
            RegCloseKey(hKey);
          *((_QWORD *)this + 9) = v63;
          v63 = 0LL;
          v62 = 0;
          v64 = 0;
          goto LABEL_55;
        }
      }
LABEL_100:
      v36 = hKey;
      if ( (unsigned __int64)hKey - 1 > 0xFFFFFFFFFFFFFFFDuLL )
      {
LABEL_55:
        if ( (unsigned __int64)v61 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
          RegCloseKey(v61);
        goto LABEL_57;
      }
    }
    RegCloseKey(v36);
    goto LABEL_55;
  }
LABEL_57:
  Common::StringBuffer::~StringBuffer((Common::StringBuffer *)&v40);
  v25 = (unsigned __int64)v55;
  if ( v55 != &v53 )
  {
    while ( 1 )
    {
      while ( *(_UNKNOWN **)(v25 + 8) != &utl::_TreeSentinel )
        v25 = *(_QWORD *)(v25 + 8);
      if ( *(_UNKNOWN **)(v25 + 16) == &utl::_TreeSentinel )
        break;
LABEL_63:
      v25 = *(_QWORD *)(v25 + 16);
    }
    while ( 1 )
    {
      v26 = (void **)v25;
      v25 = *(_QWORD *)v25 & 0xFFFFFFFFFFFFFFFEuLL;
      utl::_ContainerBase<utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_MemoryPolicyManifest>,utl::allocator<utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_MemoryPolicyManifest>>>::_DeleteNode<utl::_TreeNode<utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_MemoryPolicyManifest>>>(
        v24,
        v26);
      if ( (__int64 *)v25 == &v53 )
        break;
      if ( *(_UNKNOWN **)(v25 + 8) != &utl::_TreeSentinel )
      {
        *(_QWORD *)(v25 + 8) = &utl::_TreeSentinel;
        if ( *(_UNKNOWN **)(v25 + 16) != &utl::_TreeSentinel )
          goto LABEL_63;
      }
    }
    v56 = 0LL;
    v53 = (__int64)&v53;
    v54 = &v53;
    v55 = &v53;
  }
  utl::_Tree<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>,utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_ExternalResourcePolicyManifest>,utl::less<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>>,utl::allocator<utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_ExternalResourcePolicyManifest>>,0>::clear(v65);
  v28 = (unsigned __int64)v47;
  if ( v47 != &v45 )
  {
    while ( 1 )
    {
      while ( *(_UNKNOWN **)(v28 + 8) != &utl::_TreeSentinel )
        v28 = *(_QWORD *)(v28 + 8);
      if ( *(_UNKNOWN **)(v28 + 16) == &utl::_TreeSentinel )
        break;
LABEL_72:
      v28 = *(_QWORD *)(v28 + 16);
    }
    while ( 1 )
    {
      v29 = (void **)v28;
      v28 = *(_QWORD *)v28 & 0xFFFFFFFFFFFFFFFEuLL;
      utl::_ContainerBase<utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_MemoryPolicyManifest>,utl::allocator<utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_MemoryPolicyManifest>>>::_DeleteNode<utl::_TreeNode<utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_MemoryPolicyManifest>>>(
        v27,
        v29);
      if ( (__int64 *)v28 == &v45 )
        break;
      if ( *(_UNKNOWN **)(v28 + 8) != &utl::_TreeSentinel )
      {
        *(_QWORD *)(v28 + 8) = &utl::_TreeSentinel;
        if ( *(_UNKNOWN **)(v28 + 16) != &utl::_TreeSentinel )
          goto LABEL_72;
      }
    }
    v48 = 0LL;
    v45 = (__int64)&v45;
    v46 = &v45;
    v47 = &v45;
  }
  utl::_Tree<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>,utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_ExternalResourcePolicyManifest>,utl::less<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>>,utl::allocator<utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_ExternalResourcePolicyManifest>>,0>::clear(v66);
  v31 = (unsigned __int64)v51;
  if ( v51 != &v49 )
  {
    while ( 1 )
    {
      while ( *(_UNKNOWN **)(v31 + 8) != &utl::_TreeSentinel )
        v31 = *(_QWORD *)(v31 + 8);
      if ( *(_UNKNOWN **)(v31 + 16) == &utl::_TreeSentinel )
        break;
LABEL_80:
      v31 = *(_QWORD *)(v31 + 16);
    }
    while ( 1 )
    {
      v32 = (void **)v31;
      v31 = *(_QWORD *)v31 & 0xFFFFFFFFFFFFFFFEuLL;
      utl::_ContainerBase<utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_MemoryPolicyManifest>,utl::allocator<utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_MemoryPolicyManifest>>>::_DeleteNode<utl::_TreeNode<utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_MemoryPolicyManifest>>>(
        v30,
        v32);
      if ( (__int64 *)v31 == &v49 )
        break;
      if ( *(_UNKNOWN **)(v31 + 8) != &utl::_TreeSentinel )
      {
        *(_QWORD *)(v31 + 8) = &utl::_TreeSentinel;
        if ( *(_UNKNOWN **)(v31 + 16) != &utl::_TreeSentinel )
          goto LABEL_80;
      }
    }
    v52 = 0LL;
    v49 = (__int64)&v49;
    v50 = &v49;
    v51 = &v49;
  }
  v33 = (unsigned __int64)v59;
  if ( v59 != &v57 )
  {
    while ( 1 )
    {
      while ( *(_UNKNOWN **)(v33 + 8) != &utl::_TreeSentinel )
        v33 = *(_QWORD *)(v33 + 8);
      if ( *(_UNKNOWN **)(v33 + 16) == &utl::_TreeSentinel )
        break;
LABEL_89:
      v33 = *(_QWORD *)(v33 + 16);
    }
    while ( 1 )
    {
      v34 = (void **)v33;
      v33 = *(_QWORD *)v33 & 0xFFFFFFFFFFFFFFFEuLL;
      utl::_ContainerBase<utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_MemoryPolicyManifest>,utl::allocator<utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_MemoryPolicyManifest>>>::_DeleteNode<utl::_TreeNode<utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_MemoryPolicyManifest>>>(
        v30,
        v34);
      if ( (__int64 *)v33 == &v57 )
        break;
      if ( *(_UNKNOWN **)(v33 + 8) != &utl::_TreeSentinel )
      {
        *(_QWORD *)(v33 + 8) = &utl::_TreeSentinel;
        if ( *(_UNKNOWN **)(v33 + 16) != &utl::_TreeSentinel )
          goto LABEL_89;
      }
    }
    v60 = 0LL;
    v57 = (__int64)&v57;
    v58 = &v57;
    v59 = &v57;
  }
LABEL_93:
  Common::StringBuffer::~StringBuffer((Common::StringBuffer *)&v62);
  return (unsigned int)InfoKeyW;
}
