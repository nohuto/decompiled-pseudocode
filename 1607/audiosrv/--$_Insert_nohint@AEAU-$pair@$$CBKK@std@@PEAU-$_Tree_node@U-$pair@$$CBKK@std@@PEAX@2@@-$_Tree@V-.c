/*
 * XREFs of ??$_Insert_nohint@AEAU?$pair@$$CBKK@std@@PEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@KKU?$less@K@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBKK@1@PEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@1@@Z @ 0x180023590
 * Callers:
 *     ?AddResourcePriorityToMap@CResourcePriorityTracker@@IEAAJK@Z @ 0x1800233C0 (-AddResourcePriorityToMap@CResourcePriorityTracker@@IEAAJK@Z.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800291CC (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ??$_Insert_at@AEAU?$pair@$$CBKK@std@@PEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@KKU?$less@K@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@1@AEAU?$pair@$$CBKK@1@1@Z @ 0x180050D8C (--$_Insert_at@AEAU-$pair@$$CBKK@std@@PEAU-$_Tree_node@U-$pair@$$CBKK@std@@PEAX@2@@-$_Tree@V-$_Tm.c)
 *     ?_Lrotate@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@PEAX@2@@Z @ 0x180075C50 (-_Lrotate@-$_Tree@V-$_Tmap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@.c)
 *     ?_Rrotate@?$_Tree@V?$_Tmap_traits@KKU?$less@K@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@2@@Z @ 0x180075CA0 (-_Rrotate@-$_Tree@V-$_Tmap_traits@KKU-$less@K@std@@V-$allocator@U-$pair@$$CBKK@std@@@2@$0A@@std@.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<unsigned long,unsigned long,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::_Insert_nohint<std::pair<unsigned long const,unsigned long> &,std::_Tree_node<std::pair<unsigned long const,unsigned long>,void *> *>(
        _QWORD **a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4,
        void *a5)
{
  _QWORD *v7; // r10
  _QWORD *v8; // rcx
  __int64 *v9; // rax
  _QWORD *v10; // r9
  _QWORD *v11; // rbx
  _QWORD *v12; // r11
  _QWORD *v13; // r9
  __int64 i; // rax
  __int64 result; // rax
  __int64 v16; // rax
  __int64 *v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 j; // rax
  int v21; // [rsp+20h] [rbp-28h]
  int v22; // [rsp+50h] [rbp+8h] BYREF

  v7 = a1;
  try
  {
    v8 = *a1;
    v9 = (__int64 *)v8[1];
    v10 = v8;
    LOBYTE(a3) = 1;
    while ( !*((_BYTE *)v9 + 25) )
    {
      v10 = v9;
      if ( *a4 >= *((_DWORD *)v9 + 7) )
      {
        LOBYTE(a3) = 0;
        v9 = (__int64 *)v9[2];
      }
      else
      {
        LOBYTE(a3) = 1;
        v9 = (__int64 *)*v9;
      }
    }
    v11 = v10;
    if ( (_BYTE)a3 )
    {
      if ( v10 == (_QWORD *)*v8 )
      {
        if ( v7[1] >= 0x666666666666665uLL )
        {
          std::_Deallocate(a5, 1uLL, 0x28uLL);
          std::_Xlength_error("map/set<T> too long");
        }
        ++v7[1];
        v12 = a5;
        *((_QWORD *)a5 + 1) = v10;
        if ( v10 == (_QWORD *)*v7 )
        {
          *(_QWORD *)(*v7 + 8LL) = v12;
          *(_QWORD *)*v7 = v12;
          *(_QWORD *)(*v7 + 16LL) = v12;
        }
        else
        {
          *v10 = v12;
          if ( v10 == *(_QWORD **)*v7 )
            *(_QWORD *)*v7 = v12;
        }
        v13 = v12;
        for ( i = v12[1]; ; i = v13[1] )
        {
          if ( *(_BYTE *)(i + 24) )
          {
            *(_BYTE *)(*(_QWORD *)(*v7 + 8LL) + 24LL) = 1;
            *(_QWORD *)a2 = v12;
            *(_BYTE *)(a2 + 8) = 1;
            return a2;
          }
          v16 = v13[1];
          v17 = *(__int64 **)(v16 + 8);
          v18 = *v17;
          if ( v16 == *v17 )
          {
            v18 = v17[2];
            if ( !*(_BYTE *)(v18 + 24) )
              goto LABEL_27;
            if ( v13 == *(_QWORD **)(v16 + 16) )
              std::_Tree<std::_Tmap_traits<std::wstring,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>>>,0>>::_Lrotate(
                v7,
                v16,
                a3);
            *(_BYTE *)(v13[1] + 24LL) = 1;
            *(_BYTE *)(*(_QWORD *)(v13[1] + 8LL) + 24LL) = 0;
            std::_Tree<std::_Tmap_traits<unsigned long,unsigned long,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::_Rrotate(
              v7,
              *(_QWORD *)(v13[1] + 8LL),
              a3);
          }
          else
          {
            if ( !*(_BYTE *)(v18 + 24) )
            {
LABEL_27:
              *(_BYTE *)(v16 + 24) = 1;
              *(_BYTE *)(v18 + 24) = 1;
              *(_BYTE *)(*(_QWORD *)(v13[1] + 8LL) + 24LL) = 0;
              v13 = *(_QWORD **)(v13[1] + 8LL);
              continue;
            }
            if ( v13 == *(_QWORD **)v16 )
              std::_Tree<std::_Tmap_traits<unsigned long,unsigned long,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::_Rrotate(
                v7,
                v16,
                a3);
            *(_BYTE *)(v13[1] + 24LL) = 1;
            *(_BYTE *)(*(_QWORD *)(v13[1] + 8LL) + 24LL) = 0;
            std::_Tree<std::_Tmap_traits<std::wstring,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>>>,0>>::_Lrotate(
              v7,
              *(_QWORD *)(v13[1] + 8LL),
              a3);
          }
        }
      }
      if ( *((_BYTE *)v10 + 25) )
      {
        v11 = (_QWORD *)v10[2];
      }
      else
      {
        v19 = *v10;
        if ( *(_BYTE *)(*v10 + 25LL) )
        {
          for ( j = v10[1]; !*(_BYTE *)(j + 25) && v11 == *(_QWORD **)j; j = *(_QWORD *)(j + 8) )
            v11 = (_QWORD *)j;
          if ( !*((_BYTE *)v11 + 25) )
            v11 = (_QWORD *)j;
        }
        else
        {
          do
          {
            v11 = (_QWORD *)v19;
            v19 = *(_QWORD *)(v19 + 16);
          }
          while ( !*(_BYTE *)(v19 + 25) );
        }
      }
    }
    if ( *((_DWORD *)v11 + 7) >= *a4 )
    {
      std::_Deallocate(a5, 1uLL, 0x28uLL);
      *(_QWORD *)a2 = v11;
      *(_BYTE *)(a2 + 8) = 0;
    }
    else
    {
      *(_QWORD *)a2 = *(_QWORD *)std::_Tree<std::_Tmap_traits<unsigned long,unsigned long,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::_Insert_at<std::pair<unsigned long const,unsigned long> &,std::_Tree_node<std::pair<unsigned long const,unsigned long>,void *> *>(
                                   (int)v7,
                                   (int)&v22,
                                   a3,
                                   (int)v10,
                                   v21,
                                   a5);
      *(_BYTE *)(a2 + 8) = 1;
    }
    result = a2;
  }
  catch ( ... )
  {
    std::_Deallocate(a5, 1uLL, 0x28uLL);
    throw;
  }
  return result;
}
