/*
 * XREFs of ?erase@?$_Tree@V?$_Tmap_traits@KKU?$less@K@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@2@@Z @ 0x180023460
 * Callers:
 *     ?UpdateStreamGroupResourcePriority@CSaDeviceProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z @ 0x180022360 (-UpdateStreamGroupResourcePriority@CSaDeviceProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z.c)
 *     ?UpdateStreamResourcePriority@CBaseStreamGroupProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z @ 0x180022F30 (-UpdateStreamResourcePriority@CBaseStreamGroupProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z.c)
 * Callees:
 *     ?_Lrotate@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@PEAX@2@@Z @ 0x180075C50 (-_Lrotate@-$_Tree@V-$_Tmap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@.c)
 *     ?_Rrotate@?$_Tree@V?$_Tmap_traits@KKU?$less@K@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@2@@Z @ 0x180075CA0 (-_Rrotate@-$_Tree@V-$_Tmap_traits@KKU-$less@K@std@@V-$allocator@U-$pair@$$CBKK@std@@@2@$0A@@std@.c)
 */

_QWORD *__fastcall std::_Tree<std::_Tmap_traits<unsigned long,unsigned long,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::erase(
        _QWORD *a1,
        _QWORD *a2,
        __int64 *a3)
{
  __int64 ***v5; // rbx
  __int64 **v6; // rax
  __int64 *i; // rax
  __int64 **v8; // r9
  __int64 *v9; // r10
  __int64 *k; // rcx
  __int64 *m; // rcx
  HANDLE ProcessHeap; // rax
  __int64 v13; // rax
  __int64 *j; // rax
  __int64 *v16; // rdx
  __int64 *v17; // rdx
  __int64 **v18; // rax
  char v19; // cl
  __int64 v20; // rdx
  __int64 *v21; // [rsp+40h] [rbp+18h]

  v21 = a3;
  v5 = (__int64 ***)a3;
  if ( !*((_BYTE *)a3 + 25) )
  {
    v6 = (__int64 **)a3[2];
    if ( *((_BYTE *)v6 + 25) )
    {
      for ( i = (__int64 *)a3[1]; !*((_BYTE *)i + 25); i = (__int64 *)i[1] )
      {
        if ( a3 != (__int64 *)i[2] )
          break;
        a3 = i;
      }
      a3 = i;
      v21 = i;
    }
    else
    {
      a3 = (__int64 *)a3[2];
      for ( j = *v6; !*((_BYTE *)j + 25); j = (__int64 *)*j )
        a3 = j;
      v21 = a3;
    }
  }
  if ( *((_BYTE *)*v5 + 25) )
  {
    v8 = v5[2];
LABEL_7:
    v9 = (__int64 *)v5[1];
    if ( !*((_BYTE *)v8 + 25) )
      v8[1] = v9;
    if ( *(__int64 ****)(*a1 + 8LL) == v5 )
    {
      *(_QWORD *)(*a1 + 8LL) = v8;
    }
    else if ( (__int64 ***)*v9 == v5 )
    {
      *v9 = (__int64)v8;
    }
    else
    {
      v9[2] = (__int64)v8;
    }
    if ( *(__int64 ****)*a1 == v5 )
    {
      if ( *((_BYTE *)v8 + 25) )
      {
        k = v9;
      }
      else
      {
        v16 = *v8;
        for ( k = (__int64 *)v8; !*((_BYTE *)v16 + 25); v16 = (__int64 *)*v16 )
          k = v16;
      }
      *(_QWORD *)*a1 = k;
    }
    if ( *(__int64 ****)(*a1 + 16LL) == v5 )
    {
      if ( *((_BYTE *)v8 + 25) )
      {
        m = v9;
      }
      else
      {
        v17 = v8[2];
        for ( m = (__int64 *)v8; !*((_BYTE *)v17 + 25); v17 = (__int64 *)v17[2] )
          m = v17;
      }
      *(_QWORD *)(*a1 + 16LL) = m;
    }
    goto LABEL_19;
  }
  if ( *((_BYTE *)v5[2] + 25) )
  {
    v8 = *v5;
    goto LABEL_7;
  }
  v8 = (__int64 **)a3[2];
  if ( a3 == (__int64 *)v5 )
    goto LABEL_7;
  (*v5)[1] = a3;
  *a3 = (__int64)*v5;
  if ( a3 == (__int64 *)v5[2] )
  {
    v9 = a3;
  }
  else
  {
    v9 = (__int64 *)a3[1];
    if ( !*((_BYTE *)v8 + 25) )
      v8[1] = v9;
    *v9 = (__int64)v8;
    a3[2] = (__int64)v5[2];
    v5[2][1] = a3;
  }
  if ( *(__int64 ****)(*a1 + 8LL) == v5 )
  {
    *(_QWORD *)(*a1 + 8LL) = a3;
  }
  else
  {
    v18 = v5[1];
    if ( *v18 == (__int64 *)v5 )
      *v18 = a3;
    else
      v18[2] = a3;
  }
  a3[1] = (__int64)v5[1];
  v19 = *((_BYTE *)a3 + 24);
  *((_BYTE *)a3 + 24) = *((_BYTE *)v5 + 24);
  *((_BYTE *)v5 + 24) = v19;
LABEL_19:
  if ( *((_BYTE *)v5 + 24) != 1 )
    goto LABEL_22;
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
        std::_Tree<std::_Tmap_traits<std::wstring,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>>>,0>>::_Lrotate(
          a1,
          v9,
          a3);
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
            v20,
            a3);
          v20 = v9[2];
        }
        *(_BYTE *)(v20 + 24) = *((_BYTE *)v9 + 24);
        *((_BYTE *)v9 + 24) = 1;
        *(_BYTE *)(*(_QWORD *)(v20 + 16) + 24LL) = 1;
        std::_Tree<std::_Tmap_traits<std::wstring,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>>>,0>>::_Lrotate(
          a1,
          v9,
          a3);
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
          v9,
          a3);
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
          std::_Tree<std::_Tmap_traits<std::wstring,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>>>,0>>::_Lrotate(
            a1,
            v20,
            a3);
          v20 = *v9;
        }
        *(_BYTE *)(v20 + 24) = *((_BYTE *)v9 + 24);
        *((_BYTE *)v9 + 24) = 1;
        *(_BYTE *)(*(_QWORD *)v20 + 24LL) = 1;
        std::_Tree<std::_Tmap_traits<unsigned long,unsigned long,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::_Rrotate(
          a1,
          v9,
          a3);
        break;
      }
    }
    *(_BYTE *)(v20 + 24) = 0;
LABEL_71:
    v8 = (__int64 **)v9;
  }
  *((_BYTE *)v8 + 24) = 1;
LABEL_22:
  ProcessHeap = GetProcessHeap();
  HeapFree(ProcessHeap, 0, v5);
  v13 = a1[1];
  if ( v13 )
    a1[1] = v13 - 1;
  *a2 = v21;
  return a2;
}
