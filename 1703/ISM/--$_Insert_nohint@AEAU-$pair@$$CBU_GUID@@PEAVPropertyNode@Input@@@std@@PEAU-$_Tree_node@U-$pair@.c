/*
 * XREFs of ??$_Insert_nohint@AEAU?$pair@$$CBU_GUID@@PEAVPropertyNode@Input@@@std@@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@PEAVPropertyNode@Input@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@U_GUID@@PEAVPropertyNode@Input@@U?$KeyCompareTrait@U_GUID@@@3@V?$allocator@U?$pair@$$CBU_GUID@@PEAVPropertyNode@Input@@@std@@@std@@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@PEAVPropertyNode@Input@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBU_GUID@@PEAVPropertyNode@Input@@@1@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@PEAVPropertyNode@Input@@@std@@PEAX@1@@Z @ 0x180028DD8
 * Callers:
 *     ?Insert@PropertyMap@Input@@IEAAJPEAVPropertyNode@2@@Z @ 0x180027E34 (-Insert@PropertyMap@Input@@IEAAJPEAVPropertyNode@2@@Z.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180001914 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ??$_Insert_at@AEAU?$pair@$$CBU_GUID@@PEAVPropertyNode@Input@@@std@@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@PEAVPropertyNode@Input@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@U_GUID@@PEAVPropertyNode@Input@@U?$KeyCompareTrait@U_GUID@@@3@V?$allocator@U?$pair@$$CBU_GUID@@PEAVPropertyNode@Input@@@std@@@std@@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@PEAVPropertyNode@Input@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@PEAVPropertyNode@Input@@@std@@PEAX@1@AEAU?$pair@$$CBU_GUID@@PEAVPropertyNode@Input@@@1@1@Z @ 0x180029030 (--$_Insert_at@AEAU-$pair@$$CBU_GUID@@PEAVPropertyNode@Input@@@std@@PEAU-$_Tree_node@U-$pair@$$CB.c)
 *     memcmp_0 @ 0x18009EAF2 (memcmp_0.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<_GUID,Input::PropertyNode *,Input::KeyCompareTrait<_GUID>,std::allocator<std::pair<_GUID const,Input::PropertyNode *>>,0>>::_Insert_nohint<std::pair<_GUID const,Input::PropertyNode *> &,std::_Tree_node<std::pair<_GUID const,Input::PropertyNode *>,void *> *>(
        __int64 ***a1,
        __int64 a2,
        __int64 a3,
        const void *a4,
        void *a5)
{
  int v7; // r12d
  __int64 **v8; // r14
  __int64 *v9; // rsi
  int v10; // eax
  bool v11; // r15
  __int64 *v12; // rbx
  __int64 *v13; // rbx
  __int64 v14; // rcx
  __int64 result; // rax
  __int64 *v16; // rax
  __int64 *i; // rax
  char v18; // [rsp+70h] [rbp+8h] BYREF

  v7 = (int)a1;
  try
  {
    v8 = *a1;
    v12 = (*a1)[1];
    v9 = (__int64 *)*a1;
    v11 = 1;
    while ( !*((_BYTE *)v12 + 25) )
    {
      v9 = v12;
      v10 = memcmp_0(a4, v12 + 4, 0x10uLL);
      v11 = v10 < 0;
      if ( v10 >= 0 )
        v12 = (__int64 *)v12[2];
      else
        v12 = (__int64 *)*v12;
    }
    v13 = v9;
    if ( v11 )
    {
      if ( v9 == *v8 )
      {
        *(_QWORD *)a2 = *(_QWORD *)std::_Tree<std::_Tmap_traits<_GUID,Input::PropertyNode *,Input::KeyCompareTrait<_GUID>,std::allocator<std::pair<_GUID const,Input::PropertyNode *>>,0>>::_Insert_at<std::pair<_GUID const,Input::PropertyNode *> &,std::_Tree_node<std::pair<_GUID const,Input::PropertyNode *>,void *> *>(
                                     v7,
                                     (unsigned int)&v18,
                                     1,
                                     (_DWORD)v9);
        *(_BYTE *)(a2 + 8) = 1;
        return a2;
      }
      if ( *((_BYTE *)v9 + 25) )
      {
        v13 = (__int64 *)v9[2];
      }
      else
      {
        v16 = (__int64 *)*v9;
        if ( *(_BYTE *)(*v9 + 25) )
        {
          for ( i = (__int64 *)v9[1]; !*((_BYTE *)i + 25) && v13 == (__int64 *)*i; i = (__int64 *)i[1] )
            v13 = i;
          if ( !*((_BYTE *)v13 + 25) )
            v13 = i;
        }
        else
        {
          do
          {
            v13 = v16;
            v16 = (__int64 *)v16[2];
          }
          while ( !*((_BYTE *)v16 + 25) );
        }
      }
    }
    if ( memcmp_0(v13 + 4, a4, 0x10uLL) >= 0 )
    {
      std::_Deallocate((char *)a5, 1uLL, 0x38uLL);
      *(_QWORD *)a2 = v13;
      *(_BYTE *)(a2 + 8) = 0;
    }
    else
    {
      *(_QWORD *)a2 = *(_QWORD *)std::_Tree<std::_Tmap_traits<_GUID,Input::PropertyNode *,Input::KeyCompareTrait<_GUID>,std::allocator<std::pair<_GUID const,Input::PropertyNode *>>,0>>::_Insert_at<std::pair<_GUID const,Input::PropertyNode *> &,std::_Tree_node<std::pair<_GUID const,Input::PropertyNode *>,void *> *>(
                                   v7,
                                   (unsigned int)&v18,
                                   v11,
                                   (_DWORD)v9);
      *(_BYTE *)(a2 + 8) = 1;
    }
    result = a2;
  }
  catch ( ... )
  {
    std::_Wrap_alloc<std::allocator<std::_Tree_node<std::pair<_GUID const,Input::PropertyNode *>,void *>>>::deallocate(
      v14,
      (char *)a5);
    throw;
  }
  return result;
}
