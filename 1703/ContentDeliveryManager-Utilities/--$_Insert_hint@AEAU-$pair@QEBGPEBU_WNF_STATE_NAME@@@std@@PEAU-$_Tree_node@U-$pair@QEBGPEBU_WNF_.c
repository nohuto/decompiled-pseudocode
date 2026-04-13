/*
 * XREFs of ??$_Insert_hint@AEAU?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAU?$_Tree_node@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEBGPEBU_WNF_STATE_NAME@@Uless@Triggers@CreativeFramework@@V?$allocator@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@@std@@@1@AEAU?$pair@QEBGPEBU_WNF_STATE_NAME@@@1@PEAU?$_Tree_node@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAX@1@@Z @ 0x180055618
 * Callers:
 *     ?GetWellKnownWnfStateByName@Triggers@CreativeFramework@@YAJPEBGPEAPEBU_WNF_STATE_NAME@@@Z @ 0x180055094 (-GetWellKnownWnfStateByName@Triggers@CreativeFramework@@YAJPEBGPEAPEBU_WNF_STATE_NAME@@@Z.c)
 * Callees:
 *     ??$_Insert_nohint@AEAU?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAU?$_Tree_node@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEBGPEBU_WNF_STATE_NAME@@Uless@Triggers@CreativeFramework@@V?$allocator@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@QEBGPEBU_WNF_STATE_NAME@@@1@PEAU?$_Tree_node@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAX@1@@Z @ 0x18005549C (--$_Insert_nohint@AEAU-$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAU-$_Tree_node@U-$pair@QEBGPEBU_WN.c)
 *     ??$_Insert_at@AEAU?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAU?$_Tree_node@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEBGPEBU_WNF_STATE_NAME@@Uless@Triggers@CreativeFramework@@V?$allocator@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAX@1@AEAU?$pair@QEBGPEBU_WNF_STATE_NAME@@@1@1@Z @ 0x1800559D0 (--$_Insert_at@AEAU-$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAU-$_Tree_node@U-$pair@QEBGPEBU_WNF_ST.c)
 */

// Hidden C++ exception states: #try_helpers=1
_QWORD *__fastcall std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Insert_hint<std::pair<unsigned short const * const,_WNF_STATE_NAME const *> &,std::_Tree_node<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>,void *> *>(
        __int64 **a1,
        _QWORD *a2,
        __int64 *a3,
        LPCWCH *a4,
        void *a5)
{
  __int64 *v6; // rbx
  __int64 *v10; // rax
  __int64 v11; // r8
  __int64 *v12; // rax
  __int64 *v13; // rdi
  __int64 *j; // rax
  __int64 *i; // rcx
  int v16; // r8d
  __int64 *v17; // rdi
  __int64 *v18; // rax
  __int64 *k; // rax
  _BYTE v20[24]; // [rsp+38h] [rbp-30h] BYREF

  v6 = a3;
  if ( !a1[1] )
  {
    LOBYTE(a3) = 1;
    std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Insert_at<std::pair<unsigned short const * const,_WNF_STATE_NAME const *> &,std::_Tree_node<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>,void *> *>(
      (_DWORD)a1,
      (_DWORD)a2,
      (_DWORD)a3,
      (unsigned int)*a1);
    return a2;
  }
  v10 = *a1;
  if ( a3 == (__int64 *)**a1 )
  {
    if ( CompareStringOrdinal(*a4, -1, (LPCWCH)a3[4], -1, 1) == 1 )
    {
      LOBYTE(v11) = 1;
      std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Insert_at<std::pair<unsigned short const * const,_WNF_STATE_NAME const *> &,std::_Tree_node<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>,void *> *>(
        (_DWORD)a1,
        (_DWORD)a2,
        v11,
        (_DWORD)v6);
      return a2;
    }
    goto LABEL_44;
  }
  if ( a3 == v10 )
  {
    if ( CompareStringOrdinal(*(LPCWCH *)(v10[2] + 32), -1, *a4, -1, 1) == 1 )
    {
      std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Insert_at<std::pair<unsigned short const * const,_WNF_STATE_NAME const *> &,std::_Tree_node<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>,void *> *>(
        (_DWORD)a1,
        (_DWORD)a2,
        0,
        (*a1)[2]);
      return a2;
    }
    goto LABEL_44;
  }
  if ( CompareStringOrdinal(*a4, -1, (LPCWCH)a3[4], -1, 1) != 1 )
    goto LABEL_39;
  v12 = v6;
  if ( *((_BYTE *)v6 + 25) )
  {
    v13 = (__int64 *)v6[2];
  }
  else
  {
    v13 = (__int64 *)*v6;
    if ( *(_BYTE *)(*v6 + 25) )
    {
      for ( i = (__int64 *)v6[1]; !*((_BYTE *)i + 25) && v12 == (__int64 *)*i; i = (__int64 *)i[1] )
        v12 = i;
      v13 = v12;
      if ( !*((_BYTE *)v12 + 25) )
        v13 = i;
    }
    else
    {
      for ( j = (__int64 *)v13[2]; !*((_BYTE *)j + 25); j = (__int64 *)j[2] )
        v13 = j;
    }
  }
  if ( CompareStringOrdinal((LPCWCH)v13[4], -1, *a4, -1, 1) == 1 )
  {
    if ( *(_BYTE *)(v13[2] + 25) )
    {
      std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Insert_at<std::pair<unsigned short const * const,_WNF_STATE_NAME const *> &,std::_Tree_node<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>,void *> *>(
        (_DWORD)a1,
        (_DWORD)a2,
        0,
        (_DWORD)v13);
    }
    else
    {
      LOBYTE(v16) = 1;
      std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Insert_at<std::pair<unsigned short const * const,_WNF_STATE_NAME const *> &,std::_Tree_node<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>,void *> *>(
        (_DWORD)a1,
        (_DWORD)a2,
        v16,
        (_DWORD)v6);
    }
    return a2;
  }
  else
  {
LABEL_39:
    if ( CompareStringOrdinal((LPCWCH)v6[4], -1, *a4, -1, 1) != 1 )
      goto LABEL_44;
    v17 = v6;
    if ( !*((_BYTE *)v6 + 25) )
    {
      v18 = (__int64 *)v6[2];
      if ( *((_BYTE *)v18 + 25) )
      {
        for ( k = (__int64 *)v6[1]; !*((_BYTE *)k + 25) && v17 == (__int64 *)k[2]; k = (__int64 *)k[1] )
          v17 = k;
        v17 = k;
      }
      else
      {
        do
        {
          v17 = v18;
          v18 = (__int64 *)*v18;
        }
        while ( !*((_BYTE *)v18 + 25) );
      }
    }
    if ( v17 != *a1 && CompareStringOrdinal(*a4, -1, (LPCWCH)v17[4], -1, 1) != 1 )
    {
LABEL_44:
      *a2 = *(_QWORD *)std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Insert_nohint<std::pair<unsigned short const * const,_WNF_STATE_NAME const *> &,std::_Tree_node<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>,void *> *>(
                         a1,
                         (__int64)v20,
                         v11,
                         a4,
                         a5);
      return a2;
    }
    if ( *(_BYTE *)(v6[2] + 25) )
    {
      std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Insert_at<std::pair<unsigned short const * const,_WNF_STATE_NAME const *> &,std::_Tree_node<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>,void *> *>(
        (_DWORD)a1,
        (_DWORD)a2,
        0,
        (_DWORD)v6);
    }
    else
    {
      LOBYTE(v11) = 1;
      std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Insert_at<std::pair<unsigned short const * const,_WNF_STATE_NAME const *> &,std::_Tree_node<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>,void *> *>(
        (_DWORD)a1,
        (_DWORD)a2,
        v11,
        (_DWORD)v17);
    }
    return a2;
  }
}
