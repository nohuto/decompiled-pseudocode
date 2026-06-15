/*
 * XREFs of ?erase@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@@std@@@std@@@2@@Z @ 0x180075DDC
 * Callers:
 *     ?erase@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@@std@@@std@@@2@0@Z @ 0x180075CF4 (-erase@-$_Tree@V-$_Tmap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800291CC (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ??$destroy@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@@?$_Wrap_alloc@V?$allocator@U?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@PEAX@std@@@std@@@std@@QEAAXPEAU?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@1@@Z @ 0x180074730 (--$destroy@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$ComPtr@U.c)
 *     ?_Lrotate@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@PEAX@2@@Z @ 0x180075C50 (-_Lrotate@-$_Tree@V-$_Tmap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@.c)
 *     ?_Rrotate@?$_Tree@V?$_Tmap_traits@KKU?$less@K@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@2@@Z @ 0x180075CA0 (-_Rrotate@-$_Tree@V-$_Tmap_traits@KKU-$less@K@std@@V-$allocator@U-$pair@$$CBKK@std@@@2@$0A@@std@.c)
 */

__int64 *__fastcall std::_Tree<std::_Tmap_traits<std::wstring,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>>>,0>>::erase(
        _QWORD *a1,
        __int64 *a2,
        __int64 a3)
{
  __int64 *v5; // rbx
  __int64 v6; // rax
  __int64 i; // rax
  __int64 v8; // rcx
  __int64 v9; // r10
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 *v13; // rax
  _BYTE *v14; // rdx
  __int64 v15; // rax
  __int64 v17; // [rsp+40h] [rbp+18h]

  v17 = a3;
  v5 = (__int64 *)a3;
  if ( !*(_BYTE *)(a3 + 25) )
  {
    v6 = *(_QWORD *)(a3 + 16);
    if ( *(_BYTE *)(v6 + 25) )
    {
      for ( i = *(_QWORD *)(a3 + 8); !*(_BYTE *)(i + 25) && a3 == *(_QWORD *)(i + 16); i = *(_QWORD *)(i + 8) )
        a3 = i;
      a3 = i;
      v17 = i;
    }
    else
    {
      do
      {
        a3 = v6;
        v6 = *(_QWORD *)v6;
      }
      while ( !*(_BYTE *)(v6 + 25) );
      v17 = a3;
    }
  }
  v8 = *v5;
  if ( *(_BYTE *)(*v5 + 25) )
  {
    v9 = v5[2];
LABEL_15:
    v10 = v5[1];
    if ( !*(_BYTE *)(v9 + 25) )
      *(_QWORD *)(v9 + 8) = v10;
    if ( *(__int64 **)(*a1 + 8LL) == v5 )
    {
      *(_QWORD *)(*a1 + 8LL) = v9;
    }
    else if ( *(__int64 **)v10 == v5 )
    {
      *(_QWORD *)v10 = v9;
    }
    else
    {
      *(_QWORD *)(v10 + 16) = v9;
    }
    if ( *(__int64 **)*a1 == v5 )
    {
      if ( *(_BYTE *)(v9 + 25) )
      {
        v11 = v10;
      }
      else
      {
        v8 = *(_QWORD *)v9;
        v11 = v9;
        while ( !*(_BYTE *)(v8 + 25) )
        {
          v11 = v8;
          v8 = *(_QWORD *)v8;
        }
      }
      *(_QWORD *)*a1 = v11;
    }
    if ( *(__int64 **)(*a1 + 16LL) == v5 )
    {
      if ( *(_BYTE *)(v9 + 25) )
      {
        v12 = v10;
      }
      else
      {
        v8 = *(_QWORD *)(v9 + 16);
        v12 = v9;
        while ( !*(_BYTE *)(v8 + 25) )
        {
          v12 = v8;
          v8 = *(_QWORD *)(v8 + 16);
        }
      }
      *(_QWORD *)(*a1 + 16LL) = v12;
    }
    goto LABEL_47;
  }
  if ( *(_BYTE *)(v5[2] + 25) )
  {
    v9 = *v5;
    goto LABEL_15;
  }
  v9 = *(_QWORD *)(a3 + 16);
  if ( (__int64 *)a3 == v5 )
    goto LABEL_15;
  *(_QWORD *)(v8 + 8) = a3;
  *(_QWORD *)a3 = *v5;
  if ( a3 == v5[2] )
  {
    v10 = a3;
  }
  else
  {
    v10 = *(_QWORD *)(a3 + 8);
    if ( !*(_BYTE *)(v9 + 25) )
      *(_QWORD *)(v9 + 8) = v10;
    *(_QWORD *)v10 = v9;
    *(_QWORD *)(a3 + 16) = v5[2];
    *(_QWORD *)(v5[2] + 8) = a3;
  }
  if ( *(__int64 **)(*a1 + 8LL) == v5 )
  {
    *(_QWORD *)(*a1 + 8LL) = a3;
  }
  else
  {
    v13 = (__int64 *)v5[1];
    if ( (__int64 *)*v13 == v5 )
      *v13 = a3;
    else
      v13[2] = a3;
  }
  *(_QWORD *)(a3 + 8) = v5[1];
  LOBYTE(v8) = *(_BYTE *)(a3 + 24);
  *(_BYTE *)(a3 + 24) = *((_BYTE *)v5 + 24);
  *((_BYTE *)v5 + 24) = v8;
LABEL_47:
  if ( *((_BYTE *)v5 + 24) != 1 )
    goto LABEL_72;
  while ( v9 != *(_QWORD *)(*a1 + 8LL) && *(_BYTE *)(v9 + 24) == 1 )
  {
    v14 = *(_BYTE **)v10;
    if ( v9 == *(_QWORD *)v10 )
    {
      v14 = *(_BYTE **)(v10 + 16);
      if ( !v14[24] )
      {
        v14[24] = 1;
        *(_BYTE *)(v10 + 24) = 0;
        std::_Tree<std::_Tmap_traits<std::wstring,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>>>,0>>::_Lrotate(
          (__int64)a1,
          v10);
        v14 = *(_BYTE **)(v10 + 16);
      }
      if ( !v14[25] )
      {
        if ( *(_BYTE *)(*(_QWORD *)v14 + 24LL) != 1 || *(_BYTE *)(*((_QWORD *)v14 + 2) + 24LL) != 1 )
        {
          if ( *(_BYTE *)(*((_QWORD *)v14 + 2) + 24LL) == 1 )
          {
            *(_BYTE *)(*(_QWORD *)v14 + 24LL) = 1;
            v14[24] = 0;
            std::_Tree<std::_Tmap_traits<unsigned long,unsigned long,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::_Rrotate(
              (__int64)a1,
              v14);
            v14 = *(_BYTE **)(v10 + 16);
          }
          v14[24] = *(_BYTE *)(v10 + 24);
          *(_BYTE *)(v10 + 24) = 1;
          *(_BYTE *)(*((_QWORD *)v14 + 2) + 24LL) = 1;
          std::_Tree<std::_Tmap_traits<std::wstring,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>>>,0>>::_Lrotate(
            (__int64)a1,
            v10);
          break;
        }
LABEL_64:
        v14[24] = 0;
      }
    }
    else
    {
      if ( !v14[24] )
      {
        v14[24] = 1;
        *(_BYTE *)(v10 + 24) = 0;
        std::_Tree<std::_Tmap_traits<unsigned long,unsigned long,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::_Rrotate(
          (__int64)a1,
          (_QWORD *)v10);
        v14 = *(_BYTE **)v10;
      }
      if ( !v14[25] )
      {
        if ( *(_BYTE *)(*((_QWORD *)v14 + 2) + 24LL) != 1 || *(_BYTE *)(*(_QWORD *)v14 + 24LL) != 1 )
        {
          if ( *(_BYTE *)(*(_QWORD *)v14 + 24LL) == 1 )
          {
            *(_BYTE *)(*((_QWORD *)v14 + 2) + 24LL) = 1;
            v14[24] = 0;
            std::_Tree<std::_Tmap_traits<std::wstring,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>>>,0>>::_Lrotate(
              (__int64)a1,
              (__int64)v14);
            v14 = *(_BYTE **)v10;
          }
          v14[24] = *(_BYTE *)(v10 + 24);
          *(_BYTE *)(v10 + 24) = 1;
          *(_BYTE *)(*(_QWORD *)v14 + 24LL) = 1;
          std::_Tree<std::_Tmap_traits<unsigned long,unsigned long,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::_Rrotate(
            (__int64)a1,
            (_QWORD *)v10);
          break;
        }
        goto LABEL_64;
      }
    }
    v9 = v10;
    v10 = *(_QWORD *)(v10 + 8);
  }
  *(_BYTE *)(v9 + 24) = 1;
LABEL_72:
  std::_Wrap_alloc<std::allocator<std::_Tree_node<std::pair<std::wstring const,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>>,void *>>>::destroy<std::pair<std::wstring const,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>>>(
    v8,
    v5 + 4);
  std::_Deallocate(v5, 1uLL, 0x48uLL);
  v15 = a1[1];
  if ( v15 )
    a1[1] = v15 - 1;
  *a2 = v17;
  return a2;
}
