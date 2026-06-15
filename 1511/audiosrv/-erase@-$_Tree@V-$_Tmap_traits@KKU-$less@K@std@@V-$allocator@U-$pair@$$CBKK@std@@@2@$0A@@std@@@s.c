/*
 * XREFs of ?erase@?$_Tree@V?$_Tmap_traits@KKU?$less@K@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@2@@Z @ 0x18000D400
 * Callers:
 *     ?UpdateStreamGroupResourcePriority@CSaDeviceProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z @ 0x18000B050 (-UpdateStreamGroupResourcePriority@CSaDeviceProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z.c)
 *     ??1CSaDeviceProxy@@MEAA@XZ @ 0x18000B310 (--1CSaDeviceProxy@@MEAA@XZ.c)
 *     ?UpdateStreamResourcePriority@CBaseStreamGroupProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z @ 0x18000BE30 (-UpdateStreamResourcePriority@CBaseStreamGroupProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z.c)
 *     ??1CBaseStreamGroupProxy@@MEAA@XZ @ 0x18000BF90 (--1CBaseStreamGroupProxy@@MEAA@XZ.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@KKU?$less@K@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@2@0@Z @ 0x18006579C (-erase@-$_Tree@V-$_Tmap_traits@KKU-$less@K@std@@V-$allocator@U-$pair@$$CBKK@std@@@2_ea_18006579C.c)
 * Callees:
 *     ?_Xout_of_range@std@@YAXPEBD@Z @ 0x180046E34 (-_Xout_of_range@std@@YAXPEBD@Z.c)
 *     ?_Lrotate@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@PEAX@2@@Z @ 0x18008D70C (-_Lrotate@-$_Tree@V-$_Tmap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@.c)
 *     ?_Rrotate@?$_Tree@V?$_Tmap_traits@KKU?$less@K@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@2@@Z @ 0x18008D75C (-_Rrotate@-$_Tree@V-$_Tmap_traits@KKU-$less@K@std@@V-$allocator@U-$pair@$$CBKK@std@@@2@$0A@@std@.c)
 */

_QWORD *__fastcall std::_Tree<std::_Tmap_traits<unsigned long,unsigned long,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::erase(
        _QWORD *a1,
        _QWORD *a2,
        __int64 *a3)
{
  __int64 *i; // rdx
  __int64 ***v6; // rcx
  __int64 *v7; // rbx
  __int64 **v8; // r9
  __int64 *v9; // r10
  __int64 *j; // rcx
  __int64 *k; // rcx
  HANDLE ProcessHeap; // rax
  __int64 v13; // rax
  __int64 *v15; // rax
  __int64 *v16; // rdx
  __int64 *v17; // rdx
  __int64 **v18; // rax
  char v19; // cl
  __int64 v20; // rdx
  __int64 *v21; // [rsp+40h] [rbp+18h]

  if ( *((_BYTE *)a3 + 25) )
    std::_Xout_of_range("invalid map/set<T> iterator");
  i = (__int64 *)a3[2];
  v6 = (__int64 ***)(a3 + 2);
  v7 = a3;
  if ( *((_BYTE *)i + 25) )
  {
    for ( i = (__int64 *)a3[1]; !*((_BYTE *)i + 25); i = (__int64 *)i[1] )
    {
      if ( a3 != (__int64 *)i[2] )
        break;
      a3 = i;
    }
  }
  else
  {
    v15 = (__int64 *)*i;
    if ( !*(_BYTE *)(*i + 25) )
    {
      do
      {
        i = v15;
        v15 = (__int64 *)*v15;
      }
      while ( !*((_BYTE *)v15 + 25) );
    }
  }
  v21 = i;
  if ( *(_BYTE *)(*v7 + 25) )
  {
    v8 = *v6;
LABEL_6:
    v9 = (__int64 *)v7[1];
    if ( !*((_BYTE *)v8 + 25) )
      v8[1] = v9;
    if ( *(__int64 **)(*a1 + 8LL) == v7 )
    {
      *(_QWORD *)(*a1 + 8LL) = v8;
    }
    else if ( (__int64 *)*v9 == v7 )
    {
      *v9 = (__int64)v8;
    }
    else
    {
      v9[2] = (__int64)v8;
    }
    if ( *(__int64 **)*a1 == v7 )
    {
      if ( *((_BYTE *)v8 + 25) )
      {
        j = v9;
      }
      else
      {
        v16 = *v8;
        for ( j = (__int64 *)v8; !*((_BYTE *)v16 + 25); v16 = (__int64 *)*v16 )
          j = v16;
      }
      *(_QWORD *)*a1 = j;
    }
    if ( *(__int64 **)(*a1 + 16LL) == v7 )
    {
      if ( *((_BYTE *)v8 + 25) )
      {
        k = v9;
      }
      else
      {
        v17 = v8[2];
        for ( k = (__int64 *)v8; !*((_BYTE *)v17 + 25); v17 = (__int64 *)v17[2] )
          k = v17;
      }
      *(_QWORD *)(*a1 + 16LL) = k;
    }
    goto LABEL_18;
  }
  if ( *((_BYTE *)*v6 + 25) )
  {
    v8 = (__int64 **)*v7;
    goto LABEL_6;
  }
  v8 = (__int64 **)i[2];
  if ( i == v7 )
    goto LABEL_6;
  *(_QWORD *)(*v7 + 8) = i;
  *i = *v7;
  if ( i == (__int64 *)*v6 )
  {
    v9 = i;
  }
  else
  {
    v9 = (__int64 *)i[1];
    if ( !*((_BYTE *)v8 + 25) )
      v8[1] = v9;
    *v9 = (__int64)v8;
    i[2] = (__int64)*v6;
    (*v6)[1] = i;
  }
  if ( *(__int64 **)(*a1 + 8LL) == v7 )
  {
    *(_QWORD *)(*a1 + 8LL) = i;
  }
  else
  {
    v18 = (__int64 **)v7[1];
    if ( *v18 == v7 )
      *v18 = i;
    else
      v18[2] = i;
  }
  i[1] = v7[1];
  v19 = *((_BYTE *)i + 24);
  *((_BYTE *)i + 24) = *((_BYTE *)v7 + 24);
  *((_BYTE *)v7 + 24) = v19;
LABEL_18:
  if ( *((_BYTE *)v7 + 24) != 1 )
    goto LABEL_21;
  for ( ; v8 != *(__int64 ***)(*a1 + 8LL); v9 = (__int64 *)v9[1] )
  {
    if ( *((_BYTE *)v8 + 24) != 1 )
      break;
    v20 = *v9;
    if ( v8 == (__int64 **)*v9 )
    {
      v20 = v9[2];
      if ( !*(_BYTE *)(v20 + 24) )
      {
        *(_BYTE *)(v20 + 24) = 1;
        *((_BYTE *)v9 + 24) = 0;
        std::_Tree<std::_Tmap_traits<std::wstring,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>>>,0>>::_Lrotate(a1);
        v20 = v9[2];
      }
      if ( *(_BYTE *)(v20 + 25) )
        goto LABEL_71;
      if ( *(_BYTE *)(*(_QWORD *)v20 + 24LL) != 1 || *(_BYTE *)(*(_QWORD *)(v20 + 16) + 24LL) != 1 )
      {
        if ( *(_BYTE *)(*(_QWORD *)(v20 + 16) + 24LL) == 1 )
        {
          *(_BYTE *)(*(_QWORD *)v20 + 24LL) = 1;
          *(_BYTE *)(v20 + 24) = 0;
          std::_Tree<std::_Tmap_traits<unsigned long,unsigned long,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::_Rrotate(
            a1,
            v20);
          v20 = v9[2];
        }
        *(_BYTE *)(v20 + 24) = *((_BYTE *)v9 + 24);
        *((_BYTE *)v9 + 24) = 1;
        *(_BYTE *)(*(_QWORD *)(v20 + 16) + 24LL) = 1;
        std::_Tree<std::_Tmap_traits<std::wstring,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>>>,0>>::_Lrotate(a1);
        break;
      }
    }
    else
    {
      if ( !*(_BYTE *)(v20 + 24) )
      {
        *(_BYTE *)(v20 + 24) = 1;
        *((_BYTE *)v9 + 24) = 0;
        std::_Tree<std::_Tmap_traits<unsigned long,unsigned long,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::_Rrotate(
          a1,
          v9);
        v20 = *v9;
      }
      if ( *(_BYTE *)(v20 + 25) )
        goto LABEL_71;
      if ( *(_BYTE *)(*(_QWORD *)(v20 + 16) + 24LL) != 1 || *(_BYTE *)(*(_QWORD *)v20 + 24LL) != 1 )
      {
        if ( *(_BYTE *)(*(_QWORD *)v20 + 24LL) == 1 )
        {
          *(_BYTE *)(*(_QWORD *)(v20 + 16) + 24LL) = 1;
          *(_BYTE *)(v20 + 24) = 0;
          std::_Tree<std::_Tmap_traits<std::wstring,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>>>,0>>::_Lrotate(a1);
          v20 = *v9;
        }
        *(_BYTE *)(v20 + 24) = *((_BYTE *)v9 + 24);
        *((_BYTE *)v9 + 24) = 1;
        *(_BYTE *)(*(_QWORD *)v20 + 24LL) = 1;
        std::_Tree<std::_Tmap_traits<unsigned long,unsigned long,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::_Rrotate(
          a1,
          v9);
        break;
      }
    }
    *(_BYTE *)(v20 + 24) = 0;
LABEL_71:
    v8 = (__int64 **)v9;
  }
  *((_BYTE *)v8 + 24) = 1;
LABEL_21:
  ProcessHeap = GetProcessHeap();
  HeapFree(ProcessHeap, 0, v7);
  v13 = a1[1];
  if ( v13 )
    a1[1] = v13 - 1;
  *a2 = v21;
  return a2;
}
