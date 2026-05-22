/*
 * XREFs of ?OnAppThreadMessage@InputDeliveryServer@@QEAAJPEBUInputDeliveryServerMessage@@@Z @ 0x180069450
 * Callers:
 *     ?OnItemMessage@InputDeliveryServerConversationHost@InputDeliveryServer@@UEAAJPEBX0I@Z @ 0x18006B720 (-OnItemMessage@InputDeliveryServerConversationHost@InputDeliveryServer@@UEAAJPEBX0I@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18000326C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180043938 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??A?$unordered_map@IV?$ComPtr@VInputThread@@@WRL@Microsoft@@U?$hash@I@std@@U?$equal_to@I@5@V?$allocator@U?$pair@$$CBIV?$ComPtr@VInputThread@@@WRL@Microsoft@@@std@@@5@@std@@QEAAAEAV?$ComPtr@VInputThread@@@WRL@Microsoft@@AEBI@Z @ 0x18006A19C (--A-$unordered_map@IV-$ComPtr@VInputThread@@@WRL@Microsoft@@U-$hash@I@std@@U-$equal_to@I@5@V-$al.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@UtagInputRoutingInfo@@V?$unique_ptr@VInputTarget@@U?$default_delete@VInputTarget@@@std@@@std@@V?$_Uhash_compare@UtagInputRoutingInfo@@U?$hash@UtagInputRoutingInfo@@@std@@U?$equal_to@UtagInputRoutingInfo@@@3@@3@V?$allocator@U?$pair@$$CBUtagInputRoutingInfo@@V?$unique_ptr@VInputTarget@@U?$default_delete@VInputTarget@@@std@@@std@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagInputRoutingInfo@@V?$unique_ptr@VInputTarget@@U?$default_delete@VInputTarget@@@std@@@std@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagInputRoutingInfo@@V?$unique_ptr@VInputTarget@@U?$default_delete@VInputTarget@@@std@@@std@@@std@@@std@@@std@@@2@@Z @ 0x18006A2B4 (-erase@-$_Hash@V-$_Umap_traits@UtagInputRoutingInfo@@V-$unique_ptr@VInputTarget@@U-$default_dele.c)
 *     ??$make_unique@VInputTargetWithHostRegistration@@AEAV?$ComPtr@UIInputDeliveryServerHost@@@WRL@Microsoft@@AEAV?$ComPtr@VInputThread@@@34@AEBUtagInputRoutingInfo@@@std@@YA?AV?$unique_ptr@VInputTargetWithHostRegistration@@U?$default_delete@VInputTargetWithHostRegistration@@@std@@@0@AEAV?$ComPtr@UIInputDeliveryServerHost@@@WRL@Microsoft@@AEAV?$ComPtr@VInputThread@@@34@AEBUtagInputRoutingInfo@@@Z @ 0x18006AB1C (--$make_unique@VInputTargetWithHostRegistration@@AEAV-$ComPtr@UIInputDeliveryServerHost@@@WRL@Mi.c)
 *     ??$make_unique@VInputAttemptedTarget@@AEAV?$shared_ptr@VInputAttemptedTargetManager@@@std@@AEBIAEAV?$ComPtr@VInputThread@@@WRL@Microsoft@@AEBUtagInputRoutingInfo@@@std@@YA?AV?$unique_ptr@VInputAttemptedTarget@@U?$default_delete@VInputAttemptedTarget@@@std@@@0@AEAV?$shared_ptr@VInputAttemptedTargetManager@@@0@AEBIAEAV?$ComPtr@VInputThread@@@WRL@Microsoft@@AEBUtagInputRoutingInfo@@@Z @ 0x18006ABA0 (--$make_unique@VInputAttemptedTarget@@AEAV-$shared_ptr@VInputAttemptedTargetManager@@@std@@AEBIA.c)
 *     ??$_Insert@AEAU?$pair@$$CBUtagInputRoutingInfo@@V?$unique_ptr@VInputTarget@@U?$default_delete@VInputTarget@@@std@@@std@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagInputRoutingInfo@@V?$unique_ptr@VInputTarget@@U?$default_delete@VInputTarget@@@std@@@std@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@UtagInputRoutingInfo@@V?$unique_ptr@VInputTarget@@U?$default_delete@VInputTarget@@@std@@@std@@V?$_Uhash_compare@UtagInputRoutingInfo@@U?$hash@UtagInputRoutingInfo@@@std@@U?$equal_to@UtagInputRoutingInfo@@@3@@3@V?$allocator@U?$pair@$$CBUtagInputRoutingInfo@@V?$unique_ptr@VInputTarget@@U?$default_delete@VInputTarget@@@std@@@std@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagInputRoutingInfo@@V?$unique_ptr@VInputTarget@@U?$default_delete@VInputTarget@@@std@@@std@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBUtagInputRoutingInfo@@V?$unique_ptr@VInputTarget@@U?$default_delete@VInputTarget@@@std@@@std@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagInputRoutingInfo@@V?$unique_ptr@VInputTarget@@U?$default_delete@VInputTarget@@@std@@@std@@@std@@@std@@@std@@@1@@Z @ 0x18006ADF0 (--$_Insert@AEAU-$pair@$$CBUtagInputRoutingInfo@@V-$unique_ptr@VInputTarget@@U-$default_delete@VI.c)
 *     ??$_Buynode@AEBUtagInputRoutingInfo@@V?$unique_ptr@VInputAttemptedTarget@@U?$default_delete@VInputAttemptedTarget@@@std@@@std@@@?$_List_buy@U?$pair@$$CBUtagInputRoutingInfo@@V?$unique_ptr@VInputTarget@@U?$default_delete@VInputTarget@@@std@@@std@@@std@@V?$allocator@U?$pair@$$CBUtagInputRoutingInfo@@V?$unique_ptr@VInputTarget@@U?$default_delete@VInputTarget@@@std@@@std@@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBUtagInputRoutingInfo@@V?$unique_ptr@VInputTarget@@U?$default_delete@VInputTarget@@@std@@@std@@@std@@PEAX@1@PEAU21@0AEBUtagInputRoutingInfo@@$$QEAV?$unique_ptr@VInputAttemptedTarget@@U?$default_delete@VInputAttemptedTarget@@@std@@@1@@Z @ 0x18006B5A4 (--$_Buynode@AEBUtagInputRoutingInfo@@V-$unique_ptr@VInputAttemptedTarget@@U-$default_delete@VInp.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall InputDeliveryServer::OnAppThreadMessage(
        InputDeliveryServer *this,
        const struct InputDeliveryServerMessage *a2)
{
  __int64 v4; // rbx
  const char *v5; // r9
  unsigned int v6; // edx
  __int64 v7; // r9
  unsigned __int64 v8; // rax
  __int64 v9; // r10
  __int64 *v10; // r8
  __int64 v11; // r11
  __int64 *v12; // rdi
  __int64 *v13; // rax
  int v14; // ebx
  char *v15; // rsi
  __int64 v16; // rdi
  int v17; // ecx
  __int64 v18; // rax
  void (__fastcall ***v19)(_QWORD, __int64); // rcx
  _QWORD *v20; // r15
  char *v21; // rsi
  __int64 v22; // r14
  int v23; // ecx
  __int64 v24; // rax
  int v25; // eax
  _BYTE v27[24]; // [rsp+38h] [rbp-48h] BYREF
  _OWORD v28[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v29; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]
  __int64 v31; // [rsp+B0h] [rbp+30h] BYREF
  void (__fastcall ***v32)(_QWORD, __int64); // [rsp+B8h] [rbp+38h] BYREF

  v4 = *(_QWORD *)std::unordered_map<unsigned int,Microsoft::WRL::ComPtr<InputThread>>::operator[](
                    (char *)this + 392,
                    (char *)a2 + 4);
  v31 = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  if ( !*(_DWORD *)a2 )
  {
    v20 = (_QWORD *)((char *)this + 48);
    std::make_unique<InputTargetWithHostRegistration,Microsoft::WRL::ComPtr<IInputDeliveryServerHost> &,Microsoft::WRL::ComPtr<InputThread> &,tagInputRoutingInfo const &>(
      &v32,
      (char *)this + 48,
      &v31,
      (char *)a2 + 8);
    v21 = (char *)this + 328;
    v22 = **((_QWORD **)v21 + 1);
    v24 = std::_List_buy<std::pair<tagInputRoutingInfo const,std::unique_ptr<InputTarget>>>::_Buynode<tagInputRoutingInfo const &,std::unique_ptr<InputAttemptedTarget>>(
            v23,
            v22,
            *(_QWORD *)(v22 + 8),
            (int)a2 + 8,
            (__int64)&v32);
    if ( *((_QWORD *)v21 + 2) == 0x38E38E38E38E38DLL )
      std::_Xlength_error("list<T> too long");
    ++*((_QWORD *)v21 + 2);
    *(_QWORD *)(v22 + 8) = v24;
    **(_QWORD **)(v24 + 8) = v24;
    std::_Hash<std::_Umap_traits<tagInputRoutingInfo,std::unique_ptr<InputTarget>,std::_Uhash_compare<tagInputRoutingInfo,std::hash<tagInputRoutingInfo>,std::equal_to<tagInputRoutingInfo>>,std::allocator<std::pair<tagInputRoutingInfo const,std::unique_ptr<InputTarget>>>,0>>::_Insert<std::pair<tagInputRoutingInfo const,std::unique_ptr<InputTarget>> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<tagInputRoutingInfo const,std::unique_ptr<InputTarget>>>>>>(
      v21,
      v27,
      **((_QWORD **)v21 + 1) + 16LL,
      **((_QWORD **)v21 + 1));
    v28[0] = *((_OWORD *)a2 + 1);
    v28[1] = *((_OWORD *)a2 + 2);
    v29 = *((_QWORD *)a2 + 6);
    v25 = (*(__int64 (__fastcall **)(_QWORD, _OWORD *))(*(_QWORD *)*v20 + 24LL))(*v20, v28);
    if ( v25 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x195,
        (__int64)"onecoreuap\\windows\\input\\delivery\\server\\inputdeliveryserver.cpp",
        (const char *)(unsigned int)v25);
    v19 = v32;
    if ( !v32 )
      goto LABEL_31;
LABEL_30:
    (**v32)(v19, 1LL);
LABEL_31:
    v4 = v31;
    goto LABEL_32;
  }
  if ( *(_DWORD *)a2 == 1 )
  {
    v14 = (_DWORD)a2 + 8;
    std::make_unique<InputAttemptedTarget,std::shared_ptr<InputAttemptedTargetManager> &,unsigned int const &,Microsoft::WRL::ComPtr<InputThread> &,tagInputRoutingInfo const &>(
      (unsigned int)&v32,
      (_DWORD)this + 456,
      (_DWORD)a2 + 56,
      (unsigned int)&v31,
      (__int64)a2 + 8);
    v15 = (char *)this + 328;
    v16 = **((_QWORD **)v15 + 1);
    v18 = std::_List_buy<std::pair<tagInputRoutingInfo const,std::unique_ptr<InputTarget>>>::_Buynode<tagInputRoutingInfo const &,std::unique_ptr<InputAttemptedTarget>>(
            v17,
            v16,
            *(_QWORD *)(v16 + 8),
            v14,
            (__int64)&v32);
    if ( *((_QWORD *)v15 + 2) == 0x38E38E38E38E38DLL )
      std::_Xlength_error("list<T> too long");
    ++*((_QWORD *)v15 + 2);
    *(_QWORD *)(v16 + 8) = v18;
    **(_QWORD **)(v18 + 8) = v18;
    std::_Hash<std::_Umap_traits<tagInputRoutingInfo,std::unique_ptr<InputTarget>,std::_Uhash_compare<tagInputRoutingInfo,std::hash<tagInputRoutingInfo>,std::equal_to<tagInputRoutingInfo>>,std::allocator<std::pair<tagInputRoutingInfo const,std::unique_ptr<InputTarget>>>,0>>::_Insert<std::pair<tagInputRoutingInfo const,std::unique_ptr<InputTarget>> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<tagInputRoutingInfo const,std::unique_ptr<InputTarget>>>>>>(
      v15,
      v27,
      **((_QWORD **)v15 + 1) + 16LL,
      **((_QWORD **)v15 + 1));
    v19 = v32;
    if ( !v32 )
      goto LABEL_31;
    goto LABEL_30;
  }
  if ( *(_DWORD *)a2 != 2 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x1AF,
      (__int64)"onecoreuap\\windows\\input\\delivery\\server\\inputdeliveryserver.cpp",
      v5);
    __debugbreak();
  }
  v6 = *((_DWORD *)a2 + 2);
  v7 = *((unsigned int *)a2 + 3);
  v8 = *((_QWORD *)this + 47) & (v7 | ((unsigned __int64)v6 << 32));
  v9 = *((_QWORD *)this + 44);
  v10 = *(__int64 **)(v9 + 16 * v8);
  v11 = 2 * v8;
  v12 = v10;
  while ( 1 )
  {
    if ( v12 == *((__int64 **)this + 42) )
      v13 = (__int64 *)*((_QWORD *)this + 42);
    else
      v13 = **(__int64 ***)(v9 + 8 * v11 + 8);
    if ( v10 == v13 )
      goto LABEL_17;
    if ( *((_DWORD *)v10 + 4) == v6 && *((_DWORD *)v10 + 5) == (_DWORD)v7 )
      break;
    v10 = (__int64 *)*v10;
  }
  if ( v6 != *((_DWORD *)v10 + 4) || (_DWORD)v7 != *((_DWORD *)v10 + 5) )
LABEL_17:
    v10 = (__int64 *)*((_QWORD *)this + 42);
  if ( v10 == *((__int64 **)this + 42) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x1A8,
      (__int64)"onecoreuap\\windows\\input\\delivery\\server\\inputdeliveryserver.cpp",
      (const char *)retaddr);
    __debugbreak();
  }
  std::_Hash<std::_Umap_traits<tagInputRoutingInfo,std::unique_ptr<InputTarget>,std::_Uhash_compare<tagInputRoutingInfo,std::hash<tagInputRoutingInfo>,std::equal_to<tagInputRoutingInfo>>,std::allocator<std::pair<tagInputRoutingInfo const,std::unique_ptr<InputTarget>>>,0>>::erase(
    (char *)this + 328,
    &v31,
    v10,
    retaddr);
LABEL_32:
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return 0LL;
}
