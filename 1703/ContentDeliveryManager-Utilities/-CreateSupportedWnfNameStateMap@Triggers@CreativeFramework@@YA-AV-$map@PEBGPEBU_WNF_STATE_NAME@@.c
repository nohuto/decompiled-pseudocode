/*
 * XREFs of ?CreateSupportedWnfNameStateMap@Triggers@CreativeFramework@@YA?AV?$map@PEBGPEBU_WNF_STATE_NAME@@Uless@Triggers@CreativeFramework@@V?$allocator@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@@std@@XZ @ 0x180054F50
 * Callers:
 *     ?GetWellKnownWnfStateByName@Triggers@CreativeFramework@@YAJPEBGPEAPEBU_WNF_STATE_NAME@@@Z @ 0x180055094 (-GetWellKnownWnfStateByName@Triggers@CreativeFramework@@YAJPEBGPEAPEBU_WNF_STATE_NAME@@@Z.c)
 * Callees:
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180002F1C (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?lock_shared@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180002F3C (-lock_shared@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SR.c)
 *     ??0?$_Tree@V?$_Tmap_traits@PEBGPEBU_WNF_STATE_NAME@@Uless@Triggers@CreativeFramework@@V?$allocator@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@$0A@@std@@@std@@QEAA@AEBV01@AEBV?$allocator@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@1@@Z @ 0x180055304 (--0-$_Tree@V-$_Tmap_traits@PEBGPEBU_WNF_STATE_NAME@@Uless@Triggers@CreativeFramework@@V-$allocat.c)
 *     ??$_Buynode@U?$pair@PEBGPEBU_WNF_STATE_NAME@@@std@@@?$_Tree_buy@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@V?$allocator@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@2@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAX@1@$$QEAU?$pair@PEBGPEBU_WNF_STATE_NAME@@@1@@Z @ 0x18005545C (--$_Buynode@U-$pair@PEBGPEBU_WNF_STATE_NAME@@@std@@@-$_Tree_buy@U-$pair@QEBGPEBU_WNF_STATE_NAME@.c)
 *     ??$_Insert_nohint@AEAU?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAU?$_Tree_node@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEBGPEBU_WNF_STATE_NAME@@Uless@Triggers@CreativeFramework@@V?$allocator@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@QEBGPEBU_WNF_STATE_NAME@@@1@PEAU?$_Tree_node@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAX@1@@Z @ 0x18005549C (--$_Insert_nohint@AEAU-$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAU-$_Tree_node@U-$pair@QEBGPEBU_WN.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CreativeFramework::Triggers::CreateSupportedWnfNameStateMap(__int64 a1)
{
  RTL_SRWLOCK *v2; // rbx
  DWORD LastError; // edi
  wchar_t **v4; // rdi
  __int64 v5; // rbp
  __int64 v6; // rcx
  __int64 v7; // rax
  int v8; // r8d
  _QWORD v10[2]; // [rsp+40h] [rbp-38h] BYREF
  char v11; // [rsp+50h] [rbp-28h] BYREF
  PSRWLOCK SRWLock; // [rsp+88h] [rbp+10h] BYREF
  PSRWLOCK v13; // [rsp+90h] [rbp+18h] BYREF

  wil::srwlock::lock_shared(&stru_1800F4728, &SRWLock);
  v2 = SRWLock;
  if ( !qword_1800F4720 )
  {
    if ( SRWLock )
    {
      LastError = GetLastError();
      ReleaseSRWLockShared(v2);
      SetLastError(LastError);
    }
    v2 = 0LL;
    SRWLock = 0LL;
    wil::srwlock::lock_exclusive(&stru_1800F4728, &v13);
    if ( qword_1800F4720 )
    {
      std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>(a1);
      if ( v13 )
        ReleaseSRWLockExclusive(v13);
      return a1;
    }
    v4 = off_180089158;
    v5 = 853LL;
    do
    {
      v6 = (__int64)*(v4 - 1);
      if ( v6 )
      {
        v10[0] = *v4;
        v10[1] = v6;
        v7 = std::_Tree_buy<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>::_Buynode<std::pair<unsigned short const *,_WNF_STATE_NAME const *>>(
               &qword_1800F4718,
               v10);
        std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Insert_nohint<std::pair<unsigned short const * const,_WNF_STATE_NAME const *> &,std::_Tree_node<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>,void *> *>(
          (unsigned int)&qword_1800F4718,
          (unsigned int)&v11,
          v8,
          v7 + 32,
          v7);
      }
      v4 += 3;
      --v5;
    }
    while ( v5 );
    if ( v13 )
      ReleaseSRWLockExclusive(v13);
  }
  std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>(a1);
  if ( v2 )
    ReleaseSRWLockShared(v2);
  return a1;
}
