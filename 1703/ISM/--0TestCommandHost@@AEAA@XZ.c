/*
 * XREFs of ??0TestCommandHost@@AEAA@XZ @ 0x180009B80
 * Callers:
 *     ?Initialize@InputStateManager@@IEAAJXZ @ 0x180005DF8 (-Initialize@InputStateManager@@IEAAJXZ.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180009A54 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateEndpointToReceiveMessages@TestCommandHost@@AEAAXXZ @ 0x180009DE4 (-CreateEndpointToReceiveMessages@TestCommandHost@@AEAAXXZ.c)
 *     ?_Init@?$_Hash@V?$_Umap_traits@IUtagInputRoutingInfo@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUtagInputRoutingInfo@@@std@@@3@$0A@@std@@@std@@IEAAX_K@Z @ 0x18000A4BC (-_Init@-$_Hash@V-$_Umap_traits@IUtagInputRoutingInfo@@V-$_Uhash_compare@IU-$hash@I@std@@U-$equal.c)
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBIUViewHeirarchyEntry@ViewHeirarchy@@@std@@V?$allocator@U?$pair@$$CBIUViewHeirarchyEntry@ViewHeirarchy@@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBIUViewHeirarchyEntry@ViewHeirarchy@@@std@@PEAX@2@PEAU32@0@Z @ 0x18000A980 (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBIUViewHeirarchyEntry@ViewHeirarchy@@@st.c)
 *     ??$_Insert@AEAU?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@W4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@V?$_Uhash_compare@W4TestCommandMessageType@@U?$hash@W4TestCommandMessageType@@@std@@U?$equal_to@W4TestCommandMessageType@@@3@@3@V?$allocator@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@@std@@@std@@@1@@Z @ 0x18000AA28 (--$_Insert@AEAU-$pair@$$CBW4TestCommandMessageType@@U-$pair@PEAXP6A_NPEAXPEAUTestCommandMessageD.c)
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@$$QEAW4TestCommandMessageType@@@2@V?$tuple@$$V@2@@?$_List_buy@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@V?$allocator@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@PEAX@1@PEAU21@0AEBUpiecewise_construct_t@1@$$QEAV?$tuple@$$QEAW4TestCommandMessageType@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18000AC60 (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@$$QEAW4TestCommandMessageType@@@2@V-$tuple@$.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
TestCommandHost *__fastcall TestCommandHost::TestCommandHost(TestCommandHost *this)
{
  unsigned __int64 v2; // rsi
  char *v3; // rdi
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 *v9; // rax
  __int64 v10; // r8
  __int64 *v11; // r9
  __int64 *v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rax
  _QWORD v16[6]; // [rsp+38h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  char *v18; // [rsp+78h] [rbp+10h] BYREF
  char **v19; // [rsp+80h] [rbp+18h] BYREF

  v2 = 0LL;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  v3 = (char *)this + 72;
  v18 = (char *)this + 72;
  *((_DWORD *)this + 18) = 0;
  v19 = (char **)((char *)this + 80);
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 10) = std::_List_alloc<std::_List_base_types<std::pair<unsigned int const,ViewHeirarchy::ViewHeirarchyEntry>>>::_Buynode0(
                             this,
                             0LL,
                             0LL);
  *((_QWORD *)v3 + 3) = 0LL;
  *((_QWORD *)v3 + 4) = 0LL;
  *((_QWORD *)v3 + 5) = 0LL;
  *(_DWORD *)v3 = 1065353216;
  std::_Hash<std::_Umap_traits<unsigned int,tagInputRoutingInfo,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,tagInputRoutingInfo>>,0>>::_Init(
    v3,
    8LL);
  *((_DWORD *)this + 2) = 0;
  v4 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    *(_QWORD *)this = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = CoreUICreate(this);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x53,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\testcommandhost\\lib\\testcommandhost.cpp",
      (const char *)(unsigned int)v5);
    __debugbreak();
  }
  TestCommandHost::CreateEndpointToReceiveMessages(this);
  LODWORD(v18) = 1;
  v6 = 0xCBF29CE484222325uLL;
  do
    v6 = 0x100000001B3LL * (*((unsigned __int8 *)&v18 + v2++) ^ (unsigned __int64)v6);
  while ( v2 < 4 );
  v7 = v6 & *((_QWORD *)v3 + 6);
  v8 = *((_QWORD *)v3 + 3);
  v9 = *(__int64 **)(v8 + 16 * v7);
  v10 = 2 * v7;
  v11 = v9;
  while ( 1 )
  {
    v12 = v11 == *((__int64 **)v3 + 1) ? (__int64 *)*((_QWORD *)v3 + 1) : **(__int64 ***)(v8 + 8 * v10 + 8);
    if ( v9 == v12 )
      break;
    if ( *((_DWORD *)v9 + 4) == 1 )
      goto LABEL_15;
    v9 = (__int64 *)*v9;
  }
  v9 = (__int64 *)*((_QWORD *)v3 + 1);
LABEL_15:
  if ( v9 == *((__int64 **)v3 + 1) )
  {
    v19 = &v18;
    v13 = **((_QWORD **)v3 + 1);
    v14 = std::_List_buy<std::pair<enum TestCommandMessageType const,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>>>::_Buynode<std::piecewise_construct_t const &,std::tuple<enum TestCommandMessageType &&>,std::tuple<>>(
            (_DWORD)v12,
            v13,
            *(_QWORD *)(v13 + 8),
            (_DWORD)v11,
            (__int64)&v19);
    if ( *((_QWORD *)v3 + 2) == 0x666666666666665LL )
      std::_Xlength_error("list<T> too long");
    ++*((_QWORD *)v3 + 2);
    *(_QWORD *)(v13 + 8) = v14;
    **(_QWORD **)(v14 + 8) = v14;
    std::_Hash<std::_Umap_traits<enum TestCommandMessageType,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>,std::_Uhash_compare<enum TestCommandMessageType,std::hash<enum TestCommandMessageType>,std::equal_to<enum TestCommandMessageType>>,std::allocator<std::pair<enum TestCommandMessageType const,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>>>,0>>::_Insert<std::pair<enum TestCommandMessageType const,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<enum TestCommandMessageType const,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>>>>>>(
      v3,
      v16,
      **((_QWORD **)v3 + 1) + 16LL,
      **((_QWORD **)v3 + 1));
    v9 = (__int64 *)v16[0];
  }
  v9[3] = (__int64)this;
  v9[4] = (__int64)&lambda_e553b185ff1de720e49cf48bc3fd719c_::_lambda_invoker_cdecl_;
  return this;
}
