/*
 * XREFs of ?DefineType@PropertyDefinitions@@QEAAJAEBU_GUID@@PEBGKP6AJPEBXKPEAGK@Z@Z @ 0x180029898
 * Callers:
 *     ?ProcessInit@PropertyDefinitions@@SAJXZ @ 0x180029524 (-ProcessInit@PropertyDefinitions@@SAJXZ.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180001914 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?QueryType@PropertyDefinitions@@QEBAJAEBU_GUID@@PEAPEBUPropertyTypeInfo@Input@@@Z @ 0x180029A7C (-QueryType@PropertyDefinitions@@QEBAJAEBU_GUID@@PEAPEBUPropertyTypeInfo@Input@@@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG@Z @ 0x18002A36C (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K_K@Z @ 0x18002A588 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K_K@Z.c)
 *     ??$_Insert_hint@AEAU?$pair@$$CBU_GUID@@UPropertyInfo@Input@@@std@@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UPropertyInfo@Input@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@U_GUID@@UPropertyInfo@Input@@U?$KeyCompareTrait@U_GUID@@@3@V?$allocator@U?$pair@$$CBU_GUID@@UPropertyInfo@Input@@@std@@@std@@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@UPropertyInfo@Input@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@UPropertyInfo@Input@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBU_GUID@@UPropertyInfo@Input@@@1@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UPropertyInfo@Input@@@std@@PEAX@1@@Z @ 0x18002A91C (--$_Insert_hint@AEAU-$pair@$$CBU_GUID@@UPropertyInfo@Input@@@std@@PEAU-$_Tree_node@U-$pair@$$CBU.c)
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBU_GUID@@@2@V?$tuple@$$V@2@@?$_Tree_comp_alloc@V?$_Tmap_traits@U_GUID@@UPropertyTypeInfo@Input@@U?$KeyCompareTrait@U_GUID@@@3@V?$allocator@U?$pair@$$CBU_GUID@@UPropertyTypeInfo@Input@@@std@@@std@@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UPropertyTypeInfo@Input@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBU_GUID@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18002ABB4 (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@AEBU_GUID@@@2@V-$tuple@$$V@2@@-_ea_18002ABB4.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     memcmp_0 @ 0x18009EAF2 (memcmp_0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PropertyDefinitions::DefineType(
        PropertyDefinitions *this,
        const struct _GUID *a2,
        unsigned __int16 *a3,
        unsigned int a4,
        int (*a5)(const void *, unsigned int, unsigned __int16 *, unsigned int))
{
  unsigned int v10; // esi
  __int64 v11; // rdx
  struct _GUID *v12; // rdi
  struct _GUID *v13; // r14
  struct _GUID *v14; // rbx
  __int64 v15; // rax
  struct _GUID *v16; // rbx
  _QWORD v17[2]; // [rsp+30h] [rbp-98h] BYREF
  struct _GUID v18; // [rsp+40h] [rbp-88h] BYREF
  void *v19[3]; // [rsp+50h] [rbp-78h] BYREF
  unsigned __int64 v20; // [rsp+68h] [rbp-60h]
  unsigned int v21; // [rsp+70h] [rbp-58h]
  int (*v22)(const void *, unsigned int, unsigned __int16 *, unsigned int); // [rsp+78h] [rbp-50h]

  v17[1] = -2LL;
  if ( *(_OWORD *)a2 == 0LL )
    return 2205630465LL;
  v10 = 0;
  if ( !a3 || !*a3 )
    return 2205630467LL;
  if ( !a5 )
    return 2205630469LL;
  if ( PropertyDefinitions::QueryType(this, a2, 0LL) >= 0 )
    return 2205630470LL;
  v19[2] = 0LL;
  v20 = 7LL;
  LOWORD(v19[0]) = 0;
  v21 = 0;
  v22 = 0LL;
  v18 = *a2;
  std::wstring::assign(v19, a3);
  v21 = a4;
  v22 = a5;
  try
  {
    v12 = *(struct _GUID **)this;
    v13 = *(struct _GUID **)(*(_QWORD *)this + 8LL);
    v14 = *(struct _GUID **)this;
    while ( !v13[1].Data4[1] )
    {
      if ( memcmp_0(&v13[2], a2, 0x10uLL) >= 0 )
      {
        v14 = v13;
        v13 = *(struct _GUID **)&v13->Data1;
      }
      else
      {
        v13 = *(struct _GUID **)&v13[1].Data1;
      }
    }
    if ( v14 == v12 || memcmp_0(a2, &v14[2], 0x10uLL) < 0 )
    {
      v17[0] = a2;
      v15 = std::_Tree_comp_alloc<std::_Tmap_traits<_GUID,Input::PropertyTypeInfo,Input::KeyCompareTrait<_GUID>,std::allocator<std::pair<_GUID const,Input::PropertyTypeInfo>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<_GUID const &>,std::tuple<>>(
              this,
              v11,
              v17);
      std::_Tree<std::_Tmap_traits<_GUID,Input::PropertyInfo,Input::KeyCompareTrait<_GUID>,std::allocator<std::pair<_GUID const,Input::PropertyInfo>>,0>>::_Insert_hint<std::pair<_GUID const,Input::PropertyInfo> &,std::_Tree_node<std::pair<_GUID const,Input::PropertyInfo>,void *> *>(
        this,
        v17,
        v14,
        v15 + 32,
        v15);
      v14 = (struct _GUID *)v17[0];
    }
    v16 = v14 + 3;
    if ( &v18 != v16 )
    {
      *v16 = v18;
      if ( &v16[1] != (struct _GUID *)v19 )
        std::wstring::assign(&v16[1]);
      v16[3].Data1 = v21;
      *(_QWORD *)v16[3].Data4 = v22;
    }
  }
  catch ( ... )
  {
    LODWORD(v17[0]) = -2147024882;
    v10 = -2147024882;
  }
  if ( v20 >= 8 )
    std::_Deallocate((char *)v19[0], v20 + 1, 2uLL);
  return v10;
}
