/*
 * XREFs of ?GetWellKnownWnfStateByName@Triggers@CreativeFramework@@YAJPEBGPEAPEBU_WNF_STATE_NAME@@@Z @ 0x180055094
 * Callers:
 *     ?PublishSystemState@ActionHelper@ContentManagement@@UEAAJPEAUHSTRING__@@IPEBE@Z @ 0x18000ECD0 (-PublishSystemState@ActionHelper@ContentManagement@@UEAAJPEAUHSTRING__@@IPEBE@Z.c)
 *     ?RegisterWnfTrigger@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@AEAAJPEAUITargetedContentTriggerInternal@2345@W4TriggerRegistrationOption@2345@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x1800492A4 (-RegisterWnfTrigger@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windo.c)
 * Callees:
 *     ?CreateSupportedWnfNameStateMap@Triggers@CreativeFramework@@YA?AV?$map@PEBGPEBU_WNF_STATE_NAME@@Uless@Triggers@CreativeFramework@@V?$allocator@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@@std@@XZ @ 0x180054F50 (-CreateSupportedWnfNameStateMap@Triggers@CreativeFramework@@YA-AV-$map@PEBGPEBU_WNF_STATE_NAME@@.c)
 *     ??1?$_Tree@V?$_Tmap_traits@PEBGPEBU_WNF_STATE_NAME@@Uless@Triggers@CreativeFramework@@V?$allocator@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@$0A@@std@@@std@@QEAA@XZ @ 0x180055220 (--1-$_Tree@V-$_Tmap_traits@PEBGPEBU_WNF_STATE_NAME@@Uless@Triggers@CreativeFramework@@V-$allocat.c)
 *     ??$_Buynode@U?$pair@PEBGPEBU_WNF_STATE_NAME@@@std@@@?$_Tree_buy@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@V?$allocator@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@2@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAX@1@$$QEAU?$pair@PEBGPEBU_WNF_STATE_NAME@@@1@@Z @ 0x18005545C (--$_Buynode@U-$pair@PEBGPEBU_WNF_STATE_NAME@@@std@@@-$_Tree_buy@U-$pair@QEBGPEBU_WNF_STATE_NAME@.c)
 *     ??$_Insert_hint@AEAU?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAU?$_Tree_node@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEBGPEBU_WNF_STATE_NAME@@Uless@Triggers@CreativeFramework@@V?$allocator@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@@std@@@1@AEAU?$pair@QEBGPEBU_WNF_STATE_NAME@@@1@PEAU?$_Tree_node@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAX@1@@Z @ 0x180055618 (--$_Insert_hint@AEAU-$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAU-$_Tree_node@U-$pair@QEBGPEBU_WNF_.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CreativeFramework::Triggers::GetWellKnownWnfStateByName(
        LPCWCH lpString1,
        unsigned __int16 *a2,
        const struct _WNF_STATE_NAME **a3)
{
  unsigned int v5; // esi
  __int64 *v6; // rax
  __int64 *v7; // rbx
  __int64 *v8; // rdi
  __int64 *v9; // r14
  bool v10; // zf
  __int64 *v11; // rdi
  __int64 *v12; // rbx
  __int64 v13; // rax
  _QWORD v15[2]; // [rsp+38h] [rbp-28h] BYREF
  _QWORD v16[3]; // [rsp+48h] [rbp-18h] BYREF
  __int64 *v17; // [rsp+98h] [rbp+38h] BYREF

  v5 = 0;
  *(_QWORD *)a2 = 0LL;
  CreativeFramework::Triggers::CreateSupportedWnfNameStateMap((__int64)v15);
  v6 = (__int64 *)v15[0];
  v7 = (__int64 *)v15[0];
  v8 = *(__int64 **)(v15[0] + 8LL);
  v9 = (__int64 *)v15[0];
  if ( *((_BYTE *)v8 + 25) )
    goto LABEL_8;
  do
  {
    if ( CompareStringOrdinal((LPCWCH)v8[4], -1, lpString1, -1, 1) == 1 )
    {
      v8 = (__int64 *)v8[2];
    }
    else
    {
      v9 = v8;
      v8 = (__int64 *)*v8;
    }
  }
  while ( !*((_BYTE *)v8 + 25) );
  v6 = (__int64 *)v15[0];
  if ( v9 == (__int64 *)v15[0]
    || (v10 = CompareStringOrdinal(lpString1, -1, (LPCWCH)v9[4], -1, 1) == 1, v6 = (__int64 *)v15[0], v10) )
  {
LABEL_8:
    v9 = v6;
  }
  if ( v9 == v7 )
  {
    v5 = -2147024809;
  }
  else
  {
    v11 = (__int64 *)v6[1];
    v12 = v6;
    if ( !*((_BYTE *)v11 + 25) )
    {
      do
      {
        if ( CompareStringOrdinal((LPCWCH)v11[4], -1, lpString1, -1, 1) == 1 )
        {
          v11 = (__int64 *)v11[2];
        }
        else
        {
          v12 = v11;
          v11 = (__int64 *)*v11;
        }
      }
      while ( !*((_BYTE *)v11 + 25) );
      v6 = (__int64 *)v15[0];
    }
    if ( v12 == v6 || CompareStringOrdinal(lpString1, -1, (LPCWCH)v12[4], -1, 1) == 1 )
    {
      v16[0] = lpString1;
      v16[1] = 0LL;
      v13 = std::_Tree_buy<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>::_Buynode<std::pair<unsigned short const *,_WNF_STATE_NAME const *>>(
              v15,
              v16);
      std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Insert_hint<std::pair<unsigned short const * const,_WNF_STATE_NAME const *> &,std::_Tree_node<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>,void *> *>(
        (unsigned int)v15,
        (unsigned int)&v17,
        (_DWORD)v12,
        v13 + 32,
        v13);
      v12 = v17;
    }
    *(_QWORD *)a2 = v12[5];
  }
  std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::~_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>(v15);
  return v5;
}
