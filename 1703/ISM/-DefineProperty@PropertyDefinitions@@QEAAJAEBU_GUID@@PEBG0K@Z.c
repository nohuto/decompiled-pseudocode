/*
 * XREFs of ?DefineProperty@PropertyDefinitions@@QEAAJAEBU_GUID@@PEBG0K@Z @ 0x180029B28
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x18001248C (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180001914 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?QueryType@PropertyDefinitions@@QEBAJAEBU_GUID@@PEAPEBUPropertyTypeInfo@Input@@@Z @ 0x180029A7C (-QueryType@PropertyDefinitions@@QEBAJAEBU_GUID@@PEAPEBUPropertyTypeInfo@Input@@@Z.c)
 *     ?QueryProperty@PropertyDefinitions@@QEBAJAEBU_GUID@@PEAPEBUPropertyInfo@Input@@@Z @ 0x180029D40 (-QueryProperty@PropertyDefinitions@@QEBAJAEBU_GUID@@PEAPEBUPropertyInfo@Input@@@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG@Z @ 0x18002A36C (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K_K@Z @ 0x18002A588 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K_K@Z.c)
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBU_GUID@@@2@V?$tuple@$$V@2@@?$_Tree_comp_alloc@V?$_Tmap_traits@U_GUID@@UPropertyInfo@Input@@U?$KeyCompareTrait@U_GUID@@@3@V?$allocator@U?$pair@$$CBU_GUID@@UPropertyInfo@Input@@@std@@@std@@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UPropertyInfo@Input@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBU_GUID@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18002A8B4 (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@AEBU_GUID@@@2@V-$tuple@$$V@2@@-$_Tree_comp_a.c)
 *     ??$_Insert_hint@AEAU?$pair@$$CBU_GUID@@UPropertyInfo@Input@@@std@@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UPropertyInfo@Input@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@U_GUID@@UPropertyInfo@Input@@U?$KeyCompareTrait@U_GUID@@@3@V?$allocator@U?$pair@$$CBU_GUID@@UPropertyInfo@Input@@@std@@@std@@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@UPropertyInfo@Input@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@UPropertyInfo@Input@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBU_GUID@@UPropertyInfo@Input@@@1@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UPropertyInfo@Input@@@std@@PEAX@1@@Z @ 0x18002A91C (--$_Insert_hint@AEAU-$pair@$$CBU_GUID@@UPropertyInfo@Input@@@std@@PEAU-$_Tree_node@U-$pair@$$CBU.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     memcmp_0 @ 0x18009EAF2 (memcmp_0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PropertyDefinitions::DefineProperty(
        struct Input::PropertyTypeInfo **this,
        const struct _GUID *Buf1,
        unsigned __int16 *Src,
        const struct _GUID *a4,
        unsigned int a5)
{
  __int64 result; // rax
  unsigned int v10; // esi
  __int64 v11; // rdx
  struct Input::PropertyTypeInfo *v12; // rdi
  __int64 *v13; // r14
  struct Input::PropertyTypeInfo *v14; // rbx
  __int64 v15; // rax
  struct _GUID *v16; // rbx
  struct Input::PropertyTypeInfo *v17[2]; // [rsp+30h] [rbp-88h] BYREF
  struct _GUID v18; // [rsp+40h] [rbp-78h] BYREF
  void *v19[3]; // [rsp+50h] [rbp-68h] BYREF
  unsigned __int64 v20; // [rsp+68h] [rbp-50h]
  struct Input::PropertyTypeInfo *v21; // [rsp+70h] [rbp-48h]
  int v22; // [rsp+78h] [rbp-40h]

  v17[1] = (struct Input::PropertyTypeInfo *)-2LL;
  if ( *(_OWORD *)Buf1 == 0LL )
    return 2205630466LL;
  if ( !*(_QWORD *)&a4->Data1 && !*(_QWORD *)a4->Data4 )
    return 2205630465LL;
  v10 = 0;
  if ( !Src || !*Src )
    return 2205630467LL;
  if ( PropertyDefinitions::QueryProperty((PropertyDefinitions *)this, Buf1, 0LL) >= 0 )
    return 2205630472LL;
  result = PropertyDefinitions::QueryType((PropertyDefinitions *)this, a4, v17);
  if ( (int)result >= 0 )
  {
    v19[2] = 0LL;
    v20 = 7LL;
    LOWORD(v19[0]) = 0;
    v21 = 0LL;
    v22 = 0;
    v18 = *Buf1;
    std::wstring::assign(v19, Src);
    v21 = v17[0];
    v22 = 3;
    try
    {
      v12 = this[2];
      v13 = (__int64 *)*((_QWORD *)v12 + 1);
      v14 = v12;
      while ( !*((_BYTE *)v13 + 25) )
      {
        if ( memcmp_0(v13 + 4, Buf1, 0x10uLL) >= 0 )
        {
          v14 = (struct Input::PropertyTypeInfo *)v13;
          v13 = (__int64 *)*v13;
        }
        else
        {
          v13 = (__int64 *)v13[2];
        }
      }
      if ( v14 == v12 || memcmp_0(Buf1, (char *)v14 + 32, 0x10uLL) < 0 )
      {
        v17[0] = (struct Input::PropertyTypeInfo *)Buf1;
        v15 = std::_Tree_comp_alloc<std::_Tmap_traits<_GUID,Input::PropertyInfo,Input::KeyCompareTrait<_GUID>,std::allocator<std::pair<_GUID const,Input::PropertyInfo>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<_GUID const &>,std::tuple<>>(
                this + 2,
                v11,
                v17);
        std::_Tree<std::_Tmap_traits<_GUID,Input::PropertyInfo,Input::KeyCompareTrait<_GUID>,std::allocator<std::pair<_GUID const,Input::PropertyInfo>>,0>>::_Insert_hint<std::pair<_GUID const,Input::PropertyInfo> &,std::_Tree_node<std::pair<_GUID const,Input::PropertyInfo>,void *> *>(
          this + 2,
          v17,
          v14,
          v15 + 32,
          v15);
        v14 = v17[0];
      }
      v16 = (struct _GUID *)((char *)v14 + 48);
      if ( &v18 != v16 )
      {
        *v16 = v18;
        if ( &v16[1] != (struct _GUID *)v19 )
          std::wstring::assign(&v16[1]);
        *(_QWORD *)&v16[3].Data1 = v21;
        *(_DWORD *)v16[3].Data4 = v22;
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
  return result;
}
