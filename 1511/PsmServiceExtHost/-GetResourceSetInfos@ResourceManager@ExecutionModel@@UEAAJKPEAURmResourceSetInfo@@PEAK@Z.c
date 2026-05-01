/*
 * XREFs of ?GetResourceSetInfos@ResourceManager@ExecutionModel@@UEAAJKPEAURmResourceSetInfo@@PEAK@Z @ 0x180043DF0
 * Callers:
 *     <none>
 * Callees:
 *     ?_FreeBuckets@?$_HashTable@PEAUResourceHandle__@ExecutionModel@@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@U?$hash@PEAUResourceHandle__@ExecutionModel@@@4@U?$equal_to@PEAUResourceHandle__@ExecutionModel@@@4@V?$allocator@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@@4@$0A@@utl@@AEAAXXZ @ 0x180005434 (-_FreeBuckets@-$_HashTable@PEAUResourceHandle__@ExecutionModel@@U-$pair@QEAUResourceHandle__@Exe.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002BB10 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18002BC7E (memset_0.c)
 *     ??1?$_ContainerAllocation@V?$allocator@G@utl@@@utl@@QEAA@XZ @ 0x1800366D0 (--1-$_ContainerAllocation@V-$allocator@G@utl@@@utl@@QEAA@XZ.c)
 *     ??$_EqualRangeImpl@K@?$_HashTable@KU?$pair@$$CBKV?$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@U?$hash@K@2@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKV?$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@@2@$0A@@utl@@AEBAXU?$integral_constant@_N$0A@@1@AEBKAEAV?$_DlistIt@U?$_HashNode@U?$pair@$$CBKV?$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@@utl@@@1@2AEA_K@Z @ 0x180038904 (--$_EqualRangeImpl@K@-$_HashTable@KU-$pair@$$CBKV-$CComPtr@VResourceSetServerProxy@@@ATL@@@utl@@.c)
 *     ??$_NewNode@U?$_HashNode@U?$pair@$$CBKK@utl@@@utl@@@?$_ContainerBase@U?$pair@$$CBKK@utl@@V?$allocator@U?$pair@$$CBKK@utl@@@2@@utl@@IEAA?AV?$_ContainerAllocation@V?$allocator@U?$_HashNode@U?$pair@$$CBKK@utl@@@utl@@@utl@@@1@XZ @ 0x1800436E0 (--$_NewNode@U-$_HashNode@U-$pair@$$CBKK@utl@@@utl@@@-$_ContainerBase@U-$pair@$$CBKK@utl@@V-$allo.c)
 *     ?RecursiveGetResourceSetInfos@ResourceManager@ExecutionModel@@QEAAJPEAVBaseResourceSet@2@KPEAURmResourceSetInfo@@PEAK@Z @ 0x180044284 (-RecursiveGetResourceSetInfos@ResourceManager@ExecutionModel@@QEAAJPEAVBaseResourceSet@2@KPEAURm.c)
 *     ?_EmplaceImpl@?$_HashTable@KU?$pair@$$CBKK@utl@@U?$hash@K@2@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKK@utl@@@2@$0A@@utl@@AEAA?AU?$pair@V?$_DlistIt@U?$_HashNode@U?$pair@$$CBKK@utl@@@utl@@@utl@@_N@2@U?$integral_constant@_N$0A@@2@V?$_DlistConstIt@U?$_HashNode@U?$pair@$$CBKK@utl@@@utl@@@2@PEAU?$_HashNode@U?$pair@$$CBKK@utl@@@2@@Z @ 0x1800443BC (-_EmplaceImpl@-$_HashTable@KU-$pair@$$CBKK@utl@@U-$hash@K@2@U-$equal_to@K@2@V-$allocator@U-$pair.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::GetResourceSetInfos(
        ExecutionModel::ResourceManager *this,
        unsigned int a2,
        struct RmResourceSetInfo *a3,
        unsigned int *a4)
{
  ExecutionModel::ResourceManager *v6; // rsi
  __int64 v8; // rdi
  struct ExecutionModel::BaseResourceSet **v9; // r14
  __int64 v10; // rcx
  int ResourceSetInfos; // esi
  _DWORD *v12; // rdi
  int v13; // r8d
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int i; // r14d
  _DWORD *v17; // rdi
  int v18; // r8d
  unsigned int v19; // edi
  __int64 v20; // r13
  unsigned int v21; // r14d
  __int64 v22; // rcx
  void *v23; // rcx
  _QWORD *v24; // rdx
  __int64 v25; // rax
  void *v26; // rcx
  _QWORD *v27; // rdx
  __int64 v28; // rax
  void *v29; // rcx
  _QWORD *v30; // rdx
  __int64 v31; // rax
  void *Block[3]; // [rsp+30h] [rbp-39h] BYREF
  __int64 v34; // [rsp+48h] [rbp-21h]
  __int16 v35; // [rsp+50h] [rbp-19h]
  void *v36[2]; // [rsp+58h] [rbp-11h] BYREF
  __int64 v37; // [rsp+68h] [rbp-1h] BYREF
  unsigned __int16 *v38; // [rsp+70h] [rbp+7h]
  __int64 v39; // [rsp+78h] [rbp+Fh] BYREF
  _QWORD v40[8]; // [rsp+80h] [rbp+17h] BYREF
  void **v42; // [rsp+E8h] [rbp+7Fh] BYREF

  v6 = this;
  *a4 = 0;
  memset_0(a3, 0, 2136LL * a2);
  RtlEnterCriticalSection(&RmpGlobalLock);
  v8 = 0LL;
  v9 = (struct ExecutionModel::BaseResourceSet **)((char *)v6 + 176);
  while ( 1 )
  {
    ResourceSetInfos = ExecutionModel::ResourceManager::RecursiveGetResourceSetInfos(v6, *v9, a2, a3, a4);
    if ( ResourceSetInfos < 0 )
      break;
    ++v8;
    ++v9;
    if ( v8 >= 2 )
    {
      if ( a3 )
      {
        Block[2] = 0LL;
        Block[0] = Block;
        v34 = 0LL;
        Block[1] = Block;
        v35 = 2048;
        utl::_ContainerBase<utl::pair<unsigned long const,unsigned long>,utl::allocator<utl::pair<unsigned long const,unsigned long>>>::_NewNode<utl::_HashNode<utl::pair<unsigned long const,unsigned long>>>(
          v10,
          v36);
        v12 = v36[0];
        if ( v36[0] )
        {
          *((_DWORD *)v36[0] + 6) = 0;
          v12[7] = -1;
          v36[0] = 0LL;
        }
        else
        {
          v12 = 0LL;
        }
        utl::_ContainerAllocation<utl::allocator<unsigned short>>::~_ContainerAllocation<utl::allocator<unsigned short>>(v36);
        utl::_HashTable<unsigned long,utl::pair<unsigned long const,unsigned long>,utl::hash<unsigned long>,utl::equal_to<unsigned long>,utl::allocator<utl::pair<unsigned long const,unsigned long>>,0>::_EmplaceImpl(
          (int)Block,
          (int)v36,
          v13,
          0,
          v12);
        for ( i = 0; i < *a4; ++i )
        {
          utl::_ContainerBase<utl::pair<unsigned long const,unsigned long>,utl::allocator<utl::pair<unsigned long const,unsigned long>>>::_NewNode<utl::_HashNode<utl::pair<unsigned long const,unsigned long>>>(
            v15,
            v36);
          v17 = v36[0];
          if ( v36[0] )
          {
            *((_DWORD *)v36[0] + 6) = *((_DWORD *)a3 + 534 * i + 529);
            v17[7] = i;
            v36[0] = 0LL;
          }
          else
          {
            v17 = 0LL;
          }
          utl::_ContainerAllocation<utl::allocator<unsigned short>>::~_ContainerAllocation<utl::allocator<unsigned short>>(v36);
          utl::_HashTable<unsigned long,utl::pair<unsigned long const,unsigned long>,utl::hash<unsigned long>,utl::equal_to<unsigned long>,utl::allocator<utl::pair<unsigned long const,unsigned long>>,0>::_EmplaceImpl(
            (int)Block,
            (int)v40,
            v18,
            0,
            v17);
        }
        v19 = 0;
        if ( *a4 )
        {
          while ( 1 )
          {
            v20 = 2136LL * v19;
            v42 = 0LL;
            utl::_HashTable<unsigned long,utl::pair<unsigned long const,ATL::CComPtr<ResourceSetServerProxy>>,utl::hash<unsigned long>,utl::equal_to<unsigned long>,utl::allocator<utl::pair<unsigned long const,ATL::CComPtr<ResourceSetServerProxy>>>,0>::_EqualRangeImpl<unsigned long>(
              (__int64)Block,
              v14,
              (unsigned __int16 *)((char *)a3 + v20 + 684),
              (__int64 **)&v42,
              &v37,
              &v39);
            if ( v42 == Block )
            {
              ResourceSetInfos = -2147467259;
              while ( 1 )
              {
                v29 = Block[0];
                if ( Block[0] == Block )
                  break;
                v30 = (_QWORD *)*((_QWORD *)Block[0] + 1);
                v31 = *(_QWORD *)Block[0];
                *v30 = *(_QWORD *)Block[0];
                *(_QWORD *)(v31 + 8) = v30;
                operator delete(v29);
              }
              goto LABEL_29;
            }
            *(_DWORD *)((char *)a3 + v20 + 684) = *((_DWORD *)v42 + 7);
            v21 = 0;
            if ( *(_DWORD *)((char *)a3 + v20 + 480) )
              break;
LABEL_20:
            if ( ++v19 >= *a4 )
              goto LABEL_21;
          }
          v22 = 534LL * v19;
          v37 = v22;
          while ( 1 )
          {
            v42 = 0LL;
            v38 = (unsigned __int16 *)((char *)a3 + 4 * v22 + 4 * v21 + 484);
            utl::_HashTable<unsigned long,utl::pair<unsigned long const,ATL::CComPtr<ResourceSetServerProxy>>,utl::hash<unsigned long>,utl::equal_to<unsigned long>,utl::allocator<utl::pair<unsigned long const,ATL::CComPtr<ResourceSetServerProxy>>>,0>::_EqualRangeImpl<unsigned long>(
              (__int64)Block,
              v14,
              v38,
              (__int64 **)&v42,
              (__int64 *)v36,
              v40);
            if ( v42 == Block )
              break;
            ++v21;
            *(_DWORD *)v38 = *((_DWORD *)v42 + 7);
            v22 = v37;
            if ( v21 >= *(_DWORD *)((char *)a3 + v20 + 480) )
              goto LABEL_20;
          }
          ResourceSetInfos = -2147467259;
          while ( 1 )
          {
            v26 = Block[0];
            if ( Block[0] == Block )
              break;
            v27 = (_QWORD *)*((_QWORD *)Block[0] + 1);
            v28 = *(_QWORD *)Block[0];
            *v27 = *(_QWORD *)Block[0];
            *(_QWORD *)(v28 + 8) = v27;
            operator delete(v26);
          }
        }
        else
        {
LABEL_21:
          while ( 1 )
          {
            v23 = Block[0];
            if ( Block[0] == Block )
              break;
            v24 = (_QWORD *)*((_QWORD *)Block[0] + 1);
            v25 = *(_QWORD *)Block[0];
            *v24 = *(_QWORD *)Block[0];
            *(_QWORD *)(v25 + 8) = v24;
            operator delete(v23);
          }
        }
LABEL_29:
        v34 = 0LL;
        utl::_HashTable<ExecutionModel::ResourceHandle__ *,utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>,utl::hash<ExecutionModel::ResourceHandle__ *>,utl::equal_to<ExecutionModel::ResourceHandle__ *>,utl::allocator<utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>>,0>::_FreeBuckets((__int64)Block);
      }
      break;
    }
    v6 = this;
  }
  RtlLeaveCriticalSection(&RmpGlobalLock);
  return (unsigned int)ResourceSetInfos;
}
