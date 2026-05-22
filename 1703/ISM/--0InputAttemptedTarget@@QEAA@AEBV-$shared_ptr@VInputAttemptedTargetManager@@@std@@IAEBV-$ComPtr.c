/*
 * XREFs of ??0InputAttemptedTarget@@QEAA@AEBV?$shared_ptr@VInputAttemptedTargetManager@@@std@@IAEBV?$ComPtr@VInputThread@@@WRL@Microsoft@@AEBUtagInputRoutingInfo@@@Z @ 0x18006BD0C
 * Callers:
 *     ??$make_unique@VInputAttemptedTarget@@AEAV?$shared_ptr@VInputAttemptedTargetManager@@@std@@AEBIAEAV?$ComPtr@VInputThread@@@WRL@Microsoft@@AEBUtagInputRoutingInfo@@@std@@YA?AV?$unique_ptr@VInputAttemptedTarget@@U?$default_delete@VInputAttemptedTarget@@@std@@@0@AEAV?$shared_ptr@VInputAttemptedTargetManager@@@0@AEBIAEAV?$ComPtr@VInputThread@@@WRL@Microsoft@@AEBUtagInputRoutingInfo@@@Z @ 0x18006ABA0 (--$make_unique@VInputAttemptedTarget@@AEAV-$shared_ptr@VInputAttemptedTargetManager@@@std@@AEBIA.c)
 * Callees:
 *     ??0InputTarget@@IEAA@AEBV?$ComPtr@VInputThread@@@WRL@Microsoft@@AEBUtagInputRoutingInfo@@@Z @ 0x18006BBA4 (--0InputTarget@@IEAA@AEBV-$ComPtr@VInputThread@@@WRL@Microsoft@@AEBUtagInputRoutingInfo@@@Z.c)
 *     ??$_Insert@AEAU?$pair@$$CBIUtagInputRoutingInfo@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUtagInputRoutingInfo@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@IUtagInputRoutingInfo@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUtagInputRoutingInfo@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUtagInputRoutingInfo@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBIUtagInputRoutingInfo@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUtagInputRoutingInfo@@@std@@@std@@@std@@@1@@Z @ 0x18006CE80 (--$_Insert@AEAU-$pair@$$CBIUtagInputRoutingInfo@@@std@@V-$_List_unchecked_iterator@V-$_List_val@.c)
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBI@2@V?$tuple@$$V@2@@?$_List_buy@U?$pair@$$CBIUtagInputRoutingInfo@@@std@@V?$allocator@U?$pair@$$CBIUtagInputRoutingInfo@@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBIUtagInputRoutingInfo@@@std@@PEAX@1@PEAU21@0AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBI@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18006D0B8 (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@AEBI@2@V-$tuple@$$V@2@@-$_List__ea_18006D0B8.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall InputAttemptedTarget::InputAttemptedTarget(__int64 a1, _QWORD *a2, int a3, __int64 *a4, _OWORD *a5)
{
  _OWORD *v8; // r15
  unsigned __int64 v9; // rdi
  __int64 v10; // rbp
  _QWORD *v11; // r12
  volatile signed __int32 *v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 *v16; // rax
  __int64 v17; // r8
  __int64 *v18; // r9
  __int64 *v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // rax
  _QWORD v23[10]; // [rsp+38h] [rbp-50h] BYREF
  int *v24; // [rsp+98h] [rbp+10h] BYREF
  int v25; // [rsp+A0h] [rbp+18h] BYREF

  v8 = a5;
  InputTarget::InputTarget(a1, a4, a5);
  *(_QWORD *)a1 = &InputAttemptedTarget::`vftable';
  v9 = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  v10 = a2[1];
  v11 = (_QWORD *)*a2;
  if ( v10 )
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
  v12 = *(volatile signed __int32 **)(a1 + 72);
  if ( v12 )
  {
    if ( _InterlockedExchangeAdd(v12 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v12)(v12);
      if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
    }
  }
  *(_QWORD *)(a1 + 72) = v10;
  *(_QWORD *)(a1 + 64) = v11;
  *(_DWORD *)(a1 + 80) = a3;
  v25 = a3;
  v13 = 0xCBF29CE484222325uLL;
  do
    v13 = 0x100000001B3LL * (*((unsigned __int8 *)&v25 + v9++) ^ (unsigned __int64)v13);
  while ( v9 < 4 );
  v14 = v13 & v11[6];
  v15 = v11[3];
  v16 = *(__int64 **)(v15 + 16 * v14);
  v17 = 2 * v14;
  v18 = v16;
  while ( 1 )
  {
    v19 = v18 == (__int64 *)v11[1] ? (__int64 *)v11[1] : **(__int64 ***)(v15 + 8 * v17 + 8);
    if ( v16 == v19 )
      break;
    if ( a3 == *((_DWORD *)v16 + 4) )
      goto LABEL_17;
    v16 = (__int64 *)*v16;
  }
  v16 = (__int64 *)v11[1];
LABEL_17:
  if ( v16 == (__int64 *)v11[1] )
  {
    v24 = &v25;
    v20 = *(_QWORD *)v11[1];
    v21 = std::_List_buy<std::pair<unsigned int const,tagInputRoutingInfo>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned int const &>,std::tuple<>>(
            (_DWORD)v19,
            v20,
            *(_QWORD *)(v20 + 8),
            (_DWORD)v18,
            (__int64)&v24);
    if ( v11[2] == 0x38E38E38E38E38DLL )
      std::_Xlength_error("list<T> too long");
    ++v11[2];
    *(_QWORD *)(v20 + 8) = v21;
    **(_QWORD **)(v21 + 8) = v21;
    std::_Hash<std::_Umap_traits<unsigned int,tagInputRoutingInfo,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,tagInputRoutingInfo>>,0>>::_Insert<std::pair<unsigned int const,tagInputRoutingInfo> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,tagInputRoutingInfo>>>>>(
      v11,
      v23,
      *(_QWORD *)v11[1] + 16LL,
      *(_QWORD *)v11[1]);
    v16 = (__int64 *)v23[0];
  }
  *(_OWORD *)(v16 + 3) = *v8;
  *(_OWORD *)(v16 + 5) = v8[1];
  *(_OWORD *)(v16 + 7) = v8[2];
  return a1;
}
