/*
 * XREFs of ?erase@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@@std@@@std@@@2@@Z @ 0x18008D8B0
 * Callers:
 *     ?erase@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@@std@@@std@@@2@0@Z @ 0x18008D7D8 (-erase@-$_Tree@V-$_Tmap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800301D0 (--3@YAXPEAX@Z.c)
 *     ?_Xout_of_range@std@@YAXPEBD@Z @ 0x180046E34 (-_Xout_of_range@std@@YAXPEBD@Z.c)
 *     ??$destroy@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@@?$_Wrap_alloc@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@PEAX@std@@@std@@@std@@QEAAXPEAU?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@1@@Z @ 0x18008B4CC (--$destroy@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$ComPtr@U.c)
 *     ?_Lrotate@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@PEAX@2@@Z @ 0x18008D70C (-_Lrotate@-$_Tree@V-$_Tmap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@.c)
 *     ?_Rrotate@?$_Tree@V?$_Tmap_traits@KKU?$less@K@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@2@@Z @ 0x18008D75C (-_Rrotate@-$_Tree@V-$_Tmap_traits@KKU-$less@K@std@@V-$allocator@U-$pair@$$CBKK@std@@@2@$0A@@std@.c)
 */

__int64 *__fastcall std::_Tree<std::_Tmap_traits<std::wstring,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>>>,0>>::erase(
        _QWORD *a1,
        __int64 *a2,
        __int64 a3)
{
  __int64 v5; // rcx
  __int64 *v6; // rbx
  __int64 i; // rdx
  __int64 j; // rax
  __int64 v9; // r10
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 *v13; // rax
  char v14; // r11
  _BYTE *v15; // rdx
  __int64 v16; // rax
  __int64 v18; // [rsp+40h] [rbp+18h]

  if ( *(_BYTE *)(a3 + 25) )
    std::_Xout_of_range("invalid map/set<T> iterator");
  v5 = a3 + 16;
  v6 = (__int64 *)a3;
  i = *(_QWORD *)(a3 + 16);
  if ( *(_BYTE *)(i + 25) )
  {
    for ( i = *(_QWORD *)(a3 + 8); !*(_BYTE *)(i + 25) && a3 == *(_QWORD *)(i + 16); i = *(_QWORD *)(i + 8) )
      a3 = i;
  }
  else
  {
    for ( j = *(_QWORD *)i; !*(_BYTE *)(j + 25); j = *(_QWORD *)j )
      i = j;
  }
  v18 = i;
  if ( *(_BYTE *)(*v6 + 25) )
  {
    v9 = *(_QWORD *)v5;
LABEL_17:
    v10 = v6[1];
    if ( !*(_BYTE *)(v9 + 25) )
      *(_QWORD *)(v9 + 8) = v10;
    if ( *(__int64 **)(*a1 + 8LL) == v6 )
    {
      *(_QWORD *)(*a1 + 8LL) = v9;
    }
    else if ( *(__int64 **)v10 == v6 )
    {
      *(_QWORD *)v10 = v9;
    }
    else
    {
      *(_QWORD *)(v10 + 16) = v9;
    }
    if ( *(__int64 **)*a1 == v6 )
    {
      if ( *(_BYTE *)(v9 + 25) )
      {
        v11 = v10;
      }
      else
      {
        v5 = *(_QWORD *)v9;
        v11 = v9;
        while ( !*(_BYTE *)(v5 + 25) )
        {
          v11 = v5;
          v5 = *(_QWORD *)v5;
        }
      }
      *(_QWORD *)*a1 = v11;
    }
    if ( *(__int64 **)(*a1 + 16LL) == v6 )
    {
      if ( *(_BYTE *)(v9 + 25) )
      {
        v12 = v10;
      }
      else
      {
        v5 = *(_QWORD *)(v9 + 16);
        v12 = v9;
        while ( !*(_BYTE *)(v5 + 25) )
        {
          v12 = v5;
          v5 = *(_QWORD *)(v5 + 16);
        }
      }
      *(_QWORD *)(*a1 + 16LL) = v12;
    }
    goto LABEL_49;
  }
  if ( *(_BYTE *)(*(_QWORD *)v5 + 25LL) )
  {
    v9 = *v6;
    goto LABEL_17;
  }
  v9 = *(_QWORD *)(i + 16);
  if ( (__int64 *)i == v6 )
    goto LABEL_17;
  *(_QWORD *)(*v6 + 8) = i;
  *(_QWORD *)i = *v6;
  if ( i == *(_QWORD *)v5 )
  {
    v10 = i;
  }
  else
  {
    v10 = *(_QWORD *)(i + 8);
    if ( !*(_BYTE *)(v9 + 25) )
      *(_QWORD *)(v9 + 8) = v10;
    *(_QWORD *)v10 = v9;
    *(_QWORD *)(i + 16) = *(_QWORD *)v5;
    *(_QWORD *)(*(_QWORD *)v5 + 8LL) = i;
  }
  if ( *(__int64 **)(*a1 + 8LL) == v6 )
  {
    *(_QWORD *)(*a1 + 8LL) = i;
  }
  else
  {
    v13 = (__int64 *)v6[1];
    if ( (__int64 *)*v13 == v6 )
      *v13 = i;
    else
      v13[2] = i;
  }
  *(_QWORD *)(i + 8) = v6[1];
  LOBYTE(v5) = *(_BYTE *)(i + 24);
  *(_BYTE *)(i + 24) = *((_BYTE *)v6 + 24);
  *((_BYTE *)v6 + 24) = v5;
LABEL_49:
  v14 = 1;
  if ( *((_BYTE *)v6 + 24) != 1 )
    goto LABEL_74;
  while ( v9 != *(_QWORD *)(*a1 + 8LL) && *(_BYTE *)(v9 + 24) == v14 )
  {
    v15 = *(_BYTE **)v10;
    if ( v9 == *(_QWORD *)v10 )
    {
      v15 = *(_BYTE **)(v10 + 16);
      if ( !v15[24] )
      {
        v15[24] = v14;
        *(_BYTE *)(v10 + 24) = 0;
        std::_Tree<std::_Tmap_traits<std::wstring,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>>>,0>>::_Lrotate(
          (__int64)a1,
          v10);
        v15 = *(_BYTE **)(v10 + 16);
      }
      if ( !v15[25] )
      {
        if ( *(_BYTE *)(*(_QWORD *)v15 + 24LL) != v14 || *(_BYTE *)(*((_QWORD *)v15 + 2) + 24LL) != v14 )
        {
          if ( *(_BYTE *)(*((_QWORD *)v15 + 2) + 24LL) == v14 )
          {
            *(_BYTE *)(*(_QWORD *)v15 + 24LL) = v14;
            v15[24] = 0;
            std::_Tree<std::_Tmap_traits<unsigned long,unsigned long,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::_Rrotate(
              (__int64)a1,
              v15);
            v15 = *(_BYTE **)(v10 + 16);
          }
          v15[24] = *(_BYTE *)(v10 + 24);
          *(_BYTE *)(v10 + 24) = v14;
          *(_BYTE *)(*((_QWORD *)v15 + 2) + 24LL) = v14;
          std::_Tree<std::_Tmap_traits<std::wstring,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>>>,0>>::_Lrotate(
            (__int64)a1,
            v10);
          break;
        }
LABEL_66:
        v15[24] = 0;
      }
    }
    else
    {
      if ( !v15[24] )
      {
        v15[24] = v14;
        *(_BYTE *)(v10 + 24) = 0;
        std::_Tree<std::_Tmap_traits<unsigned long,unsigned long,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::_Rrotate(
          (__int64)a1,
          (_QWORD *)v10);
        v15 = *(_BYTE **)v10;
      }
      if ( !v15[25] )
      {
        if ( *(_BYTE *)(*((_QWORD *)v15 + 2) + 24LL) != v14 || *(_BYTE *)(*(_QWORD *)v15 + 24LL) != v14 )
        {
          if ( *(_BYTE *)(*(_QWORD *)v15 + 24LL) == v14 )
          {
            *(_BYTE *)(*((_QWORD *)v15 + 2) + 24LL) = v14;
            v15[24] = 0;
            std::_Tree<std::_Tmap_traits<std::wstring,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>>>,0>>::_Lrotate(
              (__int64)a1,
              (__int64)v15);
            v15 = *(_BYTE **)v10;
          }
          v15[24] = *(_BYTE *)(v10 + 24);
          *(_BYTE *)(v10 + 24) = v14;
          *(_BYTE *)(*(_QWORD *)v15 + 24LL) = v14;
          std::_Tree<std::_Tmap_traits<unsigned long,unsigned long,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::_Rrotate(
            (__int64)a1,
            (_QWORD *)v10);
          break;
        }
        goto LABEL_66;
      }
    }
    v9 = v10;
    v10 = *(_QWORD *)(v10 + 8);
  }
  *(_BYTE *)(v9 + 24) = v14;
LABEL_74:
  std::_Wrap_alloc<std::allocator<std::_Tree_node<std::pair<std::wstring const,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>>,void *>>>::destroy<std::pair<std::wstring const,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>>>(
    v5,
    v6 + 4);
  operator delete(v6);
  v16 = a1[1];
  if ( v16 )
    a1[1] = v16 - 1;
  *a2 = v18;
  return a2;
}
