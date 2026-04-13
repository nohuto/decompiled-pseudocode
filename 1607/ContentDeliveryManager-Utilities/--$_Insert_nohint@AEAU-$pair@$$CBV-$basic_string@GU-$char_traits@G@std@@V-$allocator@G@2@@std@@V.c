/*
 * XREFs of ??$_Insert_nohint@AEAU?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@1@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@PEAX@1@@Z @ 0x180038C50
 * Callers:
 *     ?GetSubscriptionContext@SubscribedContentStore@CreativeFramework@@YA?AV?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@@std@@PEBG@Z @ 0x180032E4C (-GetSubscriptionContext@SubscribedContentStore@CreativeFramework@@YA-AV-$map@V-$basic_string@GU-.c)
 *     ?RegisterSubscription@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UEAAJPEAUHSTRING__@@PEAUISubscriptionPriv@234@PEAU?$IMap@PEAUHSTRING__@@PEAU1@@Collections@Foundation@Windows@@@Z @ 0x180034E50 (-RegisterSubscription@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UEAAJP.c)
 * Callees:
 *     ??$_Insert_at@AEAU?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@PEAX@1@AEAU?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@1@1@Z @ 0x180039AD4 (--$_Insert_at@AEAU-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V12@@.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::wstring>>,0>>::_Insert_nohint<std::pair<std::wstring const,std::wstring> &,std::_Tree_node<std::pair<std::wstring const,std::wstring>,void *> *>(
        __int64 ***a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        __int64 a5)
{
  int v6; // r12d
  __int64 **v7; // rdi
  __int64 *v8; // rdx
  __int64 *v9; // r8
  bool v10; // r15
  unsigned __int64 v11; // r14
  _QWORD *v12; // rcx
  unsigned __int64 v13; // rbx
  _WORD *v14; // r11
  __int64 v15; // r10
  bool i; // zf
  int v17; // eax
  __int64 v18; // rcx
  int v19; // eax
  __int64 *v20; // rbx
  int v21; // r9d
  __int64 v22; // rcx
  __int64 result; // rax
  __int64 *v24; // rax
  __int64 *j; // rax
  _QWORD *v26; // rcx
  unsigned __int64 v27; // r11
  unsigned __int64 v28; // r10
  unsigned __int64 v29; // rdx
  bool k; // zf
  int v31; // eax
  __int64 v32; // rcx
  int v33; // eax
  int v34; // r9d
  __int64 v35; // rdi
  char v36; // [rsp+70h] [rbp+8h] BYREF

  v6 = (int)a1;
  try
  {
    v7 = *a1;
    v8 = (*a1)[1];
    v9 = (__int64 *)*a1;
    v10 = 1;
    if ( !*((_BYTE *)v8 + 25) )
    {
      v11 = a4[2];
      do
      {
        v9 = v8;
        v12 = v8 + 4;
        v13 = v8[6];
        if ( (unsigned __int64)v8[7] >= 8 )
          v12 = (_QWORD *)*v12;
        if ( (unsigned __int64)a4[3] < 8 )
          v14 = a4;
        else
          v14 = (_WORD *)*a4;
        v15 = v8[6];
        if ( v11 < v13 )
          v15 = a4[2];
        for ( i = v15 == 0; ; i = v15 == 0 )
        {
          if ( i )
          {
            v17 = 0;
            goto LABEL_17;
          }
          if ( *v14 != *(_WORD *)v12 )
            break;
          ++v14;
          v12 = (_QWORD *)((char *)v12 + 2);
          --v15;
        }
        v17 = *v14 < *(_WORD *)v12 ? -1 : 1;
LABEL_17:
        v18 = v17;
        v19 = v11 != v13;
        if ( v11 < v13 )
          v19 = -1;
        if ( v18 )
          v19 = v18;
        v10 = v19 < 0;
        if ( v19 >= 0 )
          v8 = (__int64 *)v8[2];
        else
          v8 = (__int64 *)*v8;
      }
      while ( !*((_BYTE *)v8 + 25) );
    }
    v20 = v9;
    if ( v10 )
    {
      if ( v9 == *v7 )
      {
        v21 = (int)v9;
        LOBYTE(v9) = 1;
        *(_QWORD *)a2 = *(_QWORD *)std::_Tree<std::_Tmap_traits<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::wstring>>,0>>::_Insert_at<std::pair<std::wstring const,std::wstring> &,std::_Tree_node<std::pair<std::wstring const,std::wstring>,void *> *>(
                                     v6,
                                     (unsigned int)&v36,
                                     (_DWORD)v9,
                                     v21);
        *(_BYTE *)(a2 + 8) = 1;
        return a2;
      }
      if ( *((_BYTE *)v9 + 25) )
      {
        v20 = (__int64 *)v9[2];
      }
      else
      {
        v24 = (__int64 *)*v9;
        if ( *(_BYTE *)(*v9 + 25) )
        {
          for ( j = (__int64 *)v9[1]; !*((_BYTE *)j + 25) && v20 == (__int64 *)*j; j = (__int64 *)j[1] )
            v20 = j;
          if ( !*((_BYTE *)v20 + 25) )
            v20 = j;
        }
        else
        {
          do
          {
            v20 = v24;
            v24 = (__int64 *)v24[2];
          }
          while ( !*((_BYTE *)v24 + 25) );
        }
      }
    }
    v26 = v20 + 4;
    v27 = a4[2];
    if ( (unsigned __int64)a4[3] >= 8 )
      a4 = (__int64 *)*a4;
    v28 = v20[6];
    if ( (unsigned __int64)v20[7] >= 8 )
      v26 = (_QWORD *)*v26;
    v29 = v27;
    if ( v28 < v27 )
      v29 = v20[6];
    for ( k = v29 == 0; ; k = v29 == 0 )
    {
      if ( k )
      {
        v31 = 0;
        goto LABEL_51;
      }
      if ( *(_WORD *)v26 != *(_WORD *)a4 )
        break;
      v26 = (_QWORD *)((char *)v26 + 2);
      a4 = (__int64 *)((char *)a4 + 2);
      --v29;
    }
    v31 = *(_WORD *)v26 < *(_WORD *)a4 ? -1 : 1;
LABEL_51:
    v32 = v31;
    v33 = v28 != v27;
    if ( v28 < v27 )
      v33 = -1;
    if ( v32 )
      v33 = v32;
    if ( v33 >= 0 )
    {
      v35 = a5;
      if ( *(_QWORD *)(a5 + 88) >= 8uLL )
        operator delete(*(void **)(a5 + 64));
      *(_QWORD *)(v35 + 88) = 7LL;
      *(_QWORD *)(v35 + 80) = 0LL;
      *(_WORD *)(v35 + 64) = 0;
      if ( *(_QWORD *)(v35 + 56) >= 8uLL )
        operator delete(*(void **)(v35 + 32));
      *(_QWORD *)(v35 + 56) = 7LL;
      *(_QWORD *)(v35 + 48) = 0LL;
      *(_WORD *)(v35 + 32) = 0;
      operator delete((void *)v35);
      *(_QWORD *)a2 = v20;
      *(_BYTE *)(a2 + 8) = 0;
      result = a2;
    }
    else
    {
      v34 = (int)v9;
      LOBYTE(v9) = v10;
      *(_QWORD *)a2 = *(_QWORD *)std::_Tree<std::_Tmap_traits<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::wstring>>,0>>::_Insert_at<std::pair<std::wstring const,std::wstring> &,std::_Tree_node<std::pair<std::wstring const,std::wstring>,void *> *>(
                                   v6,
                                   (unsigned int)&v36,
                                   (_DWORD)v9,
                                   v34);
      *(_BYTE *)(a2 + 8) = 1;
      result = a2;
    }
  }
  catch ( ... )
  {
    std::_Tree<std::_Tmap_traits<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::wstring>>,0>>::_Destroy_if_not_nil(
      v22,
      a5);
    throw;
  }
  return result;
}
