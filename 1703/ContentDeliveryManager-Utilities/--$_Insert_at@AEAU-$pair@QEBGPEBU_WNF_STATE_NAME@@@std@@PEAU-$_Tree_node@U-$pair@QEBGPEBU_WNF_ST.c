/*
 * XREFs of ??$_Insert_at@AEAU?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAU?$_Tree_node@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEBGPEBU_WNF_STATE_NAME@@Uless@Triggers@CreativeFramework@@V?$allocator@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAX@1@AEAU?$pair@QEBGPEBU_WNF_STATE_NAME@@@1@1@Z @ 0x1800559D0
 * Callers:
 *     ??$_Insert_nohint@AEAU?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAU?$_Tree_node@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEBGPEBU_WNF_STATE_NAME@@Uless@Triggers@CreativeFramework@@V?$allocator@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@QEBGPEBU_WNF_STATE_NAME@@@1@PEAU?$_Tree_node@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAX@1@@Z @ 0x18005549C (--$_Insert_nohint@AEAU-$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAU-$_Tree_node@U-$pair@QEBGPEBU_WN.c)
 *     ??$_Insert_hint@AEAU?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAU?$_Tree_node@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEBGPEBU_WNF_STATE_NAME@@Uless@Triggers@CreativeFramework@@V?$allocator@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@@std@@@1@AEAU?$pair@QEBGPEBU_WNF_STATE_NAME@@@1@PEAU?$_Tree_node@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAX@1@@Z @ 0x180055618 (--$_Insert_hint@AEAU-$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAU-$_Tree_node@U-$pair@QEBGPEBU_WNF_.c)
 * Callees:
 *     ?_Destroy_if_not_nil@?$_Tree@V?$_Tmap_traits@PEBGPEBU_WNF_STATE_NAME@@Uless@Triggers@CreativeFramework@@V?$allocator@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAX@2@@Z @ 0x18002EF60 (-_Destroy_if_not_nil@-$_Tree@V-$_Tmap_traits@PEBGPEBU_WNF_STATE_NAME@@Uless@Triggers@CreativeFra.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x18006A714 (-_Xlength_error@std@@YAXPEBD@Z.c)
 */

_QWORD *__fastcall std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Insert_at<std::pair<unsigned short const * const,_WNF_STATE_NAME const *> &,std::_Tree_node<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>,void *> *>(
        _QWORD *a1,
        _QWORD *a2,
        char a3,
        _QWORD *a4,
        __int64 a5,
        _QWORD *a6)
{
  unsigned __int64 v6; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  _QWORD *v11; // rdx
  __int64 *v12; // rax
  __int64 *v13; // r9
  __int64 *v14; // rcx
  _QWORD *v15; // rcx
  _QWORD *v16; // rax
  _QWORD *v17; // rcx
  _QWORD *v18; // r9
  __int64 v19; // rax
  _QWORD *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  _QWORD *v23; // rax
  _QWORD *v24; // rax
  __int64 v25; // rax
  __int64 v26; // rcx
  _QWORD *result; // rax

  v6 = a1[1];
  if ( v6 >= 0x555555555555554LL )
  {
    std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Destroy_if_not_nil(
      0x555555555555554LL,
      a6);
    std::_Xlength_error("map/set<T> too long");
  }
  a1[1] = v6 + 1;
  a6[1] = a4;
  if ( a4 == (_QWORD *)*a1 )
  {
    *(_QWORD *)(*a1 + 8LL) = a6;
    *(_QWORD *)*a1 = a6;
    v9 = *a1;
LABEL_8:
    *(_QWORD *)(v9 + 16) = a6;
    goto LABEL_9;
  }
  if ( a3 )
  {
    *a4 = a6;
    if ( a4 == *(_QWORD **)*a1 )
      *(_QWORD *)*a1 = a6;
    goto LABEL_9;
  }
  a4[2] = a6;
  v9 = *a1;
  if ( a4 == *(_QWORD **)(*a1 + 16LL) )
    goto LABEL_8;
LABEL_9:
  v10 = a6[1];
  v11 = a6;
  while ( !*(_BYTE *)(v10 + 24) )
  {
    v12 = (__int64 *)v11[1];
    v13 = (__int64 *)v12[1];
    v14 = (__int64 *)*v13;
    if ( v12 == (__int64 *)*v13 )
    {
      v14 = (__int64 *)v13[2];
      if ( !*((_BYTE *)v14 + 24) )
        goto LABEL_30;
      if ( v11 == (_QWORD *)v12[2] )
      {
        v15 = (_QWORD *)v12[2];
        v11 = (_QWORD *)v11[1];
        v12[2] = *v15;
        if ( !*(_BYTE *)(*v15 + 25LL) )
          *(_QWORD *)(*v15 + 8LL) = v12;
        v15[1] = v12[1];
        if ( v12 == *(__int64 **)(*a1 + 8LL) )
        {
          *(_QWORD *)(*a1 + 8LL) = v15;
        }
        else
        {
          v16 = (_QWORD *)v12[1];
          if ( v11 == (_QWORD *)*v16 )
            *v16 = v15;
          else
            v16[2] = v15;
        }
        *v15 = v11;
        v11[1] = v15;
      }
      *(_BYTE *)(v11[1] + 24LL) = 1;
      *(_BYTE *)(*(_QWORD *)(v11[1] + 8LL) + 24LL) = 0;
      v17 = *(_QWORD **)(v11[1] + 8LL);
      v18 = (_QWORD *)*v17;
      *v17 = *(_QWORD *)(*v17 + 16LL);
      v19 = v18[2];
      if ( !*(_BYTE *)(v19 + 25) )
        *(_QWORD *)(v19 + 8) = v17;
      v18[1] = v17[1];
      if ( v17 == *(_QWORD **)(*a1 + 8LL) )
      {
        *(_QWORD *)(*a1 + 8LL) = v18;
      }
      else
      {
        v20 = (_QWORD *)v17[1];
        if ( v17 == (_QWORD *)v20[2] )
          v20[2] = v18;
        else
          *v20 = v18;
      }
      v18[2] = v17;
    }
    else
    {
      if ( !*((_BYTE *)v14 + 24) )
      {
LABEL_30:
        *((_BYTE *)v12 + 24) = 1;
        *((_BYTE *)v14 + 24) = 1;
        *(_BYTE *)(*(_QWORD *)(v11[1] + 8LL) + 24LL) = 0;
        v11 = *(_QWORD **)(v11[1] + 8LL);
        goto LABEL_49;
      }
      if ( v11 == (_QWORD *)*v12 )
      {
        v21 = *v12;
        v11 = (_QWORD *)v11[1];
        *v12 = *(_QWORD *)(*v12 + 16);
        v22 = *(_QWORD *)(v21 + 16);
        if ( !*(_BYTE *)(v22 + 25) )
          *(_QWORD *)(v22 + 8) = v11;
        *(_QWORD *)(v21 + 8) = v11[1];
        if ( v11 == *(_QWORD **)(*a1 + 8LL) )
        {
          *(_QWORD *)(*a1 + 8LL) = v21;
        }
        else
        {
          v23 = (_QWORD *)v11[1];
          if ( v11 == (_QWORD *)v23[2] )
            v23[2] = v21;
          else
            *v23 = v21;
        }
        *(_QWORD *)(v21 + 16) = v11;
        v11[1] = v21;
      }
      *(_BYTE *)(v11[1] + 24LL) = 1;
      *(_BYTE *)(*(_QWORD *)(v11[1] + 8LL) + 24LL) = 0;
      v17 = *(_QWORD **)(v11[1] + 8LL);
      v18 = (_QWORD *)v17[2];
      v17[2] = *v18;
      if ( !*(_BYTE *)(*v18 + 25LL) )
        *(_QWORD *)(*v18 + 8LL) = v17;
      v18[1] = v17[1];
      if ( v17 == *(_QWORD **)(*a1 + 8LL) )
      {
        *(_QWORD *)(*a1 + 8LL) = v18;
      }
      else
      {
        v24 = (_QWORD *)v17[1];
        if ( v17 == (_QWORD *)*v24 )
          *v24 = v18;
        else
          v24[2] = v18;
      }
      *v18 = v17;
    }
    v17[1] = v18;
LABEL_49:
    v10 = v11[1];
  }
  v25 = *a1;
  *a2 = a6;
  v26 = *(_QWORD *)(v25 + 8);
  result = a2;
  *(_BYTE *)(v26 + 24) = 1;
  return result;
}
