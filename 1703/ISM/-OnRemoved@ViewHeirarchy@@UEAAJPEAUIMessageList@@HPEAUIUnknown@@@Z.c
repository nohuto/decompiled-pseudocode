/*
 * XREFs of ?OnRemoved@ViewHeirarchy@@UEAAJPEAUIMessageList@@HPEAUIUnknown@@@Z @ 0x18006DA70
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000742C (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?clear@?$_Hash@V?$_Umap_traits@IUViewHeirarchyEntry@ViewHeirarchy@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUViewHeirarchyEntry@ViewHeirarchy@@@std@@@4@$0A@@std@@@std@@QEAAXXZ @ 0x18006E358 (-clear@-$_Hash@V-$_Umap_traits@IUViewHeirarchyEntry@ViewHeirarchy@@V-$_Uhash_compare@IU-$hash@I@.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@IUViewHeirarchyEntry@ViewHeirarchy@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUViewHeirarchyEntry@ViewHeirarchy@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUViewHeirarchyEntry@ViewHeirarchy@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUViewHeirarchyEntry@ViewHeirarchy@@@std@@@std@@@std@@@2@@Z @ 0x18006E7A4 (-erase@-$_Hash@V-$_Umap_traits@IUViewHeirarchyEntry@ViewHeirarchy@@V-$_Uhash_compare@IU-$hash@I@.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ViewHeirarchy::OnRemoved(
        ViewHeirarchy *this,
        struct IMessageList *a2,
        __int64 a3,
        struct IUnknown *a4)
{
  struct IUnknownVtbl *lpVtbl; // rax
  int v7; // eax
  int v8; // eax
  struct IUnknownVtbl *v9; // rax
  int v10; // eax
  int v11; // eax
  char *v12; // r14
  __int64 v13; // rcx
  unsigned __int64 i; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 *v18; // rax
  __int64 *j; // rbx
  __int64 *v20; // rcx
  __int64 *v21; // rdi
  __int64 *v22; // rcx
  __int64 *v23; // r8
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v27; // [rsp+20h] [rbp-20h] BYREF
  __int64 v28; // [rsp+28h] [rbp-18h] BYREF
  __int64 *v29; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  int v31; // [rsp+78h] [rbp+38h] BYREF

  if ( a4 )
    ((void (__fastcall *)(struct IUnknown *, struct IMessageList *))a4->lpVtbl->AddRef)(a4, a2);
  lpVtbl = a4->lpVtbl;
  v28 = 0LL;
  v7 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))lpVtbl->QueryInterface)(
         a4,
         &GUID_6fcecfed_9cb3_47cc_8b3a_e08908965d08,
         &v28);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0xBB,
      (__int64)"onecoreuap\\windows\\input\\delivery\\utilities\\viewheirarchy\\viewheirarchy.cpp",
      (const char *)(unsigned int)v7);
    __debugbreak();
  }
  v8 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v28 + 64LL))(v28, (char *)this - 8);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0xBC,
      (__int64)"onecoreuap\\windows\\input\\delivery\\utilities\\viewheirarchy\\viewheirarchy.cpp",
      (const char *)(unsigned int)v8);
    __debugbreak();
  }
  v9 = a4->lpVtbl;
  v27 = 0LL;
  v10 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))v9->QueryInterface)(
          a4,
          &GUID_a55d85b2_9d89_4b30_a725_6e07307073fa,
          &v27);
  if ( v10 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0xBF,
      (__int64)"onecoreuap\\windows\\input\\delivery\\utilities\\viewheirarchy\\viewheirarchy.cpp",
      (const char *)(unsigned int)v10);
    __debugbreak();
  }
  v11 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v27 + 120LL))(v27, &v31);
  if ( v11 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0xC2,
      (__int64)"onecoreuap\\windows\\input\\delivery\\utilities\\viewheirarchy\\viewheirarchy.cpp",
      (const char *)(unsigned int)v11);
    JUMPOUT(0x18006DCB9LL);
  }
  v12 = (char *)this + 72;
  v13 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 4; ++i )
  {
    v15 = *((unsigned __int8 *)&v31 + i);
    v13 = 0x100000001B3LL * (v15 ^ v13);
  }
  v16 = *((_QWORD *)this + 12);
  v17 = 2 * (v13 & *((_QWORD *)this + 15));
  v18 = (__int64 *)*((_QWORD *)this + 10);
  for ( j = *(__int64 **)(v16 + 16 * (v13 & *((_QWORD *)this + 15))); ; j = (__int64 *)*j )
  {
    if ( *(__int64 **)(v16 + 8 * v17) == v18 )
      v20 = (__int64 *)*((_QWORD *)v12 + 1);
    else
      v20 = **(__int64 ***)(v16 + 8 * v17 + 8);
    if ( j == v20 )
      goto LABEL_24;
    if ( *((_DWORD *)j + 4) == v31 )
      break;
  }
  v21 = j;
  while ( 1 )
  {
    v22 = *(__int64 **)(v16 + 8 * v17) == v18 ? (__int64 *)*((_QWORD *)v12 + 1) : **(__int64 ***)(v16 + 8 * v17 + 8);
    if ( j == v22 || v31 != *((_DWORD *)j + 4) )
      break;
    j = (__int64 *)*j;
  }
  if ( v21 == j )
  {
LABEL_24:
    j = (__int64 *)*((_QWORD *)v12 + 1);
    v21 = j;
  }
  v29 = v21;
  if ( v21 == (__int64 *)*v18 && j == v18 )
  {
    std::_Hash<std::_Umap_traits<unsigned int,ViewHeirarchy::ViewHeirarchyEntry,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,ViewHeirarchy::ViewHeirarchyEntry>>,0>>::clear(v12);
  }
  else
  {
    while ( v21 != j )
    {
      v23 = v21;
      v21 = (__int64 *)*v21;
      std::_Hash<std::_Umap_traits<unsigned int,ViewHeirarchy::ViewHeirarchyEntry,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,ViewHeirarchy::ViewHeirarchyEntry>>,0>>::erase(
        v12,
        &v29,
        v23);
    }
  }
  v24 = v27;
  if ( v27 )
  {
    v27 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  }
  v25 = v28;
  if ( v28 )
  {
    v28 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  }
  ((void (__fastcall *)(struct IUnknown *))a4->lpVtbl->Release)(a4);
  return 0LL;
}
