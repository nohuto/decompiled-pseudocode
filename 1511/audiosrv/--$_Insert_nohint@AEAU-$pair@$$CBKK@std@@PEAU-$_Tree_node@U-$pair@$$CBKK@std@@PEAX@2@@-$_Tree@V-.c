/*
 * XREFs of ??$_Insert_nohint@AEAU?$pair@$$CBKK@std@@PEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@KKU?$less@K@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBKK@1@PEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@1@@Z @ 0x18000D540
 * Callers:
 *     ?AddResourcePriorityToMap@CResourcePriorityTracker@@IEAAJK@Z @ 0x18000D350 (-AddResourcePriorityToMap@CResourcePriorityTracker@@IEAAJK@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800301D0 (--3@YAXPEAX@Z.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x180046E08 (-_Xlength_error@std@@YAXPEBD@Z.c)
 *     ??$_Insert_at@AEAU?$pair@$$CBKK@std@@PEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@KKU?$less@K@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@1@AEAU?$pair@$$CBKK@1@1@Z @ 0x1800655DC (--$_Insert_at@AEAU-$pair@$$CBKK@std@@PEAU-$_Tree_node@U-$pair@$$CBKK@std@@PEAX@2@@-$_Tree@V-$_Tm.c)
 *     ?_Lrotate@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@PEAX@2@@Z @ 0x18008D70C (-_Lrotate@-$_Tree@V-$_Tmap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@.c)
 *     ?_Rrotate@?$_Tree@V?$_Tmap_traits@KKU?$less@K@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@2@@Z @ 0x18008D75C (-_Rrotate@-$_Tree@V-$_Tmap_traits@KKU-$less@K@std@@V-$allocator@U-$pair@$$CBKK@std@@@2@$0A@@std@.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<unsigned long,unsigned long,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::_Insert_nohint<std::pair<unsigned long const,unsigned long> &,std::_Tree_node<std::pair<unsigned long const,unsigned long>,void *> *>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4,
        void *a5)
{
  _QWORD *v6; // r10
  __int64 **v7; // rax
  __int64 *v8; // rdx
  __int64 *v9; // rcx
  char v10; // r8
  __int64 *v11; // rbx
  unsigned __int64 v12; // rax
  _QWORD *v13; // r9
  _QWORD *v14; // r11
  __int64 result; // rax
  __int64 v16; // rax
  __int64 *v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 *j; // rax
  __int64 *i; // rax
  int v22; // [rsp+20h] [rbp-28h]
  int v23; // [rsp+50h] [rbp+8h] BYREF

  v6 = a1;
  try
  {
    v7 = (__int64 **)*a1;
    v8 = *(__int64 **)(*a1 + 8LL);
    v9 = (__int64 *)*a1;
    v10 = 1;
    while ( !*((_BYTE *)v8 + 25) )
    {
      v9 = v8;
      if ( *a4 >= *((_DWORD *)v8 + 7) )
      {
        v10 = 0;
        v8 = (__int64 *)v8[2];
      }
      else
      {
        v10 = 1;
        v8 = (__int64 *)*v8;
      }
    }
    v11 = v9;
    if ( v10 )
    {
      if ( v9 == *v7 )
      {
        v12 = v6[1];
        if ( v12 >= 0x666666666666665LL )
        {
          operator delete(a5);
          std::_Xlength_error("map/set<T> too long");
        }
        v6[1] = v12 + 1;
        v13 = a5;
        *((_QWORD *)a5 + 1) = v9;
        if ( v9 == (__int64 *)*v6 )
        {
          *(_QWORD *)(*v6 + 8LL) = v13;
          *(_QWORD *)*v6 = v13;
          *(_QWORD *)(*v6 + 16LL) = v13;
        }
        else
        {
          *v9 = (__int64)v13;
          if ( v9 == *(__int64 **)*v6 )
            *(_QWORD *)*v6 = v13;
        }
        v14 = v13;
        while ( !*(_BYTE *)(v14[1] + 24LL) )
        {
          v16 = v14[1];
          v17 = *(__int64 **)(v16 + 8);
          v18 = *v17;
          if ( v16 == *v17 )
          {
            v19 = v17[2];
            if ( *(_BYTE *)(v19 + 24) )
            {
              if ( v14 == *(_QWORD **)(v16 + 16) )
                std::_Tree<std::_Tmap_traits<std::wstring,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>>>,0>>::_Lrotate(v6);
              *(_BYTE *)(v14[1] + 24LL) = 1;
              *(_BYTE *)(*(_QWORD *)(v14[1] + 8LL) + 24LL) = 0;
              std::_Tree<std::_Tmap_traits<unsigned long,unsigned long,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::_Rrotate(
                v6,
                *(_QWORD *)(v14[1] + 8LL));
            }
            else
            {
              *(_BYTE *)(v16 + 24) = 1;
              *(_BYTE *)(v19 + 24) = 1;
              *(_BYTE *)(*(_QWORD *)(v14[1] + 8LL) + 24LL) = 0;
              v14 = *(_QWORD **)(v14[1] + 8LL);
            }
          }
          else if ( *(_BYTE *)(v18 + 24) )
          {
            if ( v14 == *(_QWORD **)v16 )
              std::_Tree<std::_Tmap_traits<unsigned long,unsigned long,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::_Rrotate(
                v6,
                v16);
            *(_BYTE *)(v14[1] + 24LL) = 1;
            *(_BYTE *)(*(_QWORD *)(v14[1] + 8LL) + 24LL) = 0;
            std::_Tree<std::_Tmap_traits<std::wstring,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>>>,0>>::_Lrotate(v6);
          }
          else
          {
            *(_BYTE *)(v16 + 24) = 1;
            *(_BYTE *)(v18 + 24) = 1;
            *(_BYTE *)(*(_QWORD *)(v14[1] + 8LL) + 24LL) = 0;
            v14 = *(_QWORD **)(v14[1] + 8LL);
          }
        }
        *(_BYTE *)(*(_QWORD *)(*v6 + 8LL) + 24LL) = 1;
        *(_QWORD *)a2 = v13;
        *(_BYTE *)(a2 + 8) = 1;
        return a2;
      }
      if ( *((_BYTE *)v9 + 25) )
      {
        v11 = (__int64 *)v9[2];
      }
      else if ( *(_BYTE *)(*v9 + 25) )
      {
        for ( i = (__int64 *)v9[1]; !*((_BYTE *)i + 25); i = (__int64 *)i[1] )
        {
          if ( v11 != (__int64 *)*i )
            break;
          v11 = i;
        }
        if ( !*((_BYTE *)v11 + 25) )
          v11 = i;
      }
      else
      {
        v11 = (__int64 *)*v9;
        for ( j = *(__int64 **)(*v9 + 16); !*((_BYTE *)j + 25); j = (__int64 *)j[2] )
          v11 = j;
      }
    }
    if ( *((_DWORD *)v11 + 7) >= *a4 )
    {
      operator delete(a5);
      *(_QWORD *)a2 = v11;
      *(_BYTE *)(a2 + 8) = 0;
    }
    else
    {
      *(_QWORD *)a2 = *(_QWORD *)std::_Tree<std::_Tmap_traits<unsigned long,unsigned long,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::_Insert_at<std::pair<unsigned long const,unsigned long> &,std::_Tree_node<std::pair<unsigned long const,unsigned long>,void *> *>(
                                   (int)v6,
                                   (int)&v23,
                                   v10,
                                   (int)v9,
                                   v22,
                                   a5);
      *(_BYTE *)(a2 + 8) = 1;
    }
    result = a2;
  }
  catch ( ... )
  {
    operator delete(a5);
    throw;
  }
  return result;
}
