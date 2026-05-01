/*
 * XREFs of ?TransitionResources@ResourceManager@ExecutionModel@@QEAAXPEAVResourceSet@2@0@Z @ 0x1800101DC
 * Callers:
 *     ?ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180010680 (-ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIV.c)
 *     ?ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18003B580 (-ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTI.c)
 * Callees:
 *     ?ReturnResourceToParent@BaseResourceSet@ExecutionModel@@IEAAXW4Enum@ResourceType@2@_K@Z @ 0x180003554 (-ReturnResourceToParent@BaseResourceSet@ExecutionModel@@IEAAXW4Enum@ResourceType@2@_K@Z.c)
 *     ?IsFrozen@_ResourceSetInfo@ExecutionModel@@QEBA_NXZ @ 0x18000919C (-IsFrozen@_ResourceSetInfo@ExecutionModel@@QEBA_NXZ.c)
 *     ?erase@?$list@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@QEAA?AV?$_DlistIt@U?$_DlistNode@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@utl@@@2@V?$_DlistConstIt@U?$_DlistNode@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@utl@@@2@@Z @ 0x18000B280 (-erase@-$list@V-$CComPtr@VResourceSet@ExecutionModel@@@ATL@@V-$allocator@V-$CComPtr@VResourceSet.c)
 *     ?AddBGResourceSetForSharing@ResourceSet@ExecutionModel@@AEAAJPEAV12@H@Z @ 0x18000D90C (-AddBGResourceSetForSharing@ResourceSet@ExecutionModel@@AEAAJPEAV12@H@Z.c)
 *     ?AddFGResourceSetForSharing@ResourceSet@ExecutionModel@@AEAAJPEAV12@H@Z @ 0x18000D9EC (-AddFGResourceSetForSharing@ResourceSet@ExecutionModel@@AEAAJPEAV12@H@Z.c)
 *     ?RemoveFGResourceSetForSharing@ResourceSet@ExecutionModel@@AEAAJPEAV12@@Z @ 0x18000E560 (-RemoveFGResourceSetForSharing@ResourceSet@ExecutionModel@@AEAAJPEAV12@@Z.c)
 *     ?UpdateMemoryUsageEstimates@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEA_K@Z @ 0x18000F6F0 (-UpdateMemoryUsageEstimates@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEA_K@Z.c)
 *     ?ReplenishIoCounterPool@ResourceManager@ExecutionModel@@QEAAX_K@Z @ 0x18003DD2C (-ReplenishIoCounterPool@ResourceManager@ExecutionModel@@QEAAX_K@Z.c)
 */

void __fastcall ExecutionModel::ResourceManager::TransitionResources(
        ExecutionModel::ResourceManager *this,
        struct ExecutionModel::ResourceSet *a2,
        struct ExecutionModel::ResourceSet *a3)
{
  int v3; // eax
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rsi
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  ExecutionModel::_ResourceSetInfo *v10; // rcx
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rcx
  __int64 **v15; // rsi
  __int64 v16; // rdx
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // [rsp+38h] [rbp+10h] BYREF

  v3 = *((_DWORD *)a2 + 2);
  v21 = 0LL;
  *((_DWORD *)a2 + 460) = v3;
  ExecutionModel::ResourceManager::UpdateMemoryUsageEstimates(this, a2, &v21);
  v6 = *((_QWORD *)a3 + 224);
  if ( v6 )
  {
    if ( (*((_BYTE *)RmSvcGlobals + 1580) & 4) != 0 )
    {
      v17 = *((_QWORD *)a2 + 28);
      if ( v17 > v6 )
        ExecutionModel::BaseResourceSet::ReturnResourceToParent((__int64)a3, 1u, v17 - v6);
    }
    v8 = *((_QWORD *)a3 + 224);
    goto LABEL_4;
  }
  v7 = v21;
  if ( !v21 || (v18 = *((_QWORD *)a2 + 28), v18 <= v21) )
  {
    v8 = *((_QWORD *)a2 + 28);
LABEL_4:
    *((_QWORD *)a3 + 28) = v8;
    goto LABEL_5;
  }
  if ( (*((_BYTE *)RmSvcGlobals + 1580) & 4) != 0 )
    ExecutionModel::BaseResourceSet::ReturnResourceToParent((__int64)a3, 1u, v18 - v21);
  *((_QWORD *)a3 + 28) = v7;
LABEL_5:
  if ( !*((_QWORD *)a3 + 183) )
  {
    *((_QWORD *)a3 + 183) = *((_QWORD *)a2 + 183);
    *((_QWORD *)a3 + 182) = *((_QWORD *)a2 + 182);
    *((_QWORD *)a3 + 219) = *((_QWORD *)a2 + 219);
  }
  *((_QWORD *)a2 + 28) = 0LL;
  *((_QWORD *)a2 + 183) = 0LL;
  *((_QWORD *)a2 + 182) = 0LL;
  *((_QWORD *)a2 + 219) = 0LL;
  *((_QWORD *)a2 + 229) = 0LL;
  v9 = *((_QWORD *)a3 + 225);
  if ( v9 )
  {
    v19 = *((_QWORD *)a2 + 31);
    if ( v19 > v9 )
    {
      v20 = v19 - v9;
      if ( (*((_BYTE *)a3 + 1344) & 4) == 0 )
        ExecutionModel::ResourceManager::ReplenishIoCounterPool(*((ExecutionModel::ResourceManager **)a3 + 3), v20);
    }
    v11 = *((_QWORD *)a3 + 225);
    goto LABEL_12;
  }
  v10 = (struct ExecutionModel::ResourceSet *)((char *)a3 + 1408);
  if ( (*((_BYTE *)a3 + 1434) & 4) == 0 )
  {
    if ( *(_DWORD *)v10 > 0x27u || (v16 = 0x8800001000LL, !_bittest64(&v16, *(int *)v10)) )
    {
      if ( !ExecutionModel::_ResourceSetInfo::IsFrozen(v10) )
      {
        v11 = *((_QWORD *)a2 + 31);
LABEL_12:
        *((_QWORD *)a3 + 31) = v11;
        goto LABEL_13;
      }
    }
  }
  if ( (*((_BYTE *)a3 + 1344) & 4) == 0 )
    ExecutionModel::ResourceManager::ReplenishIoCounterPool(
      *((ExecutionModel::ResourceManager **)a3 + 3),
      *((_QWORD *)a2 + 31));
  *((_QWORD *)a3 + 31) = 0LL;
LABEL_13:
  *((_QWORD *)a2 + 31) = 0LL;
  v12 = *((_QWORD *)a3 + 223);
  v13 = *((_QWORD *)a2 + 25);
  if ( v13 > v12 )
  {
    v14 = v13 - v12;
    if ( (*((_BYTE *)a2 + 1344) & 1) == 0 )
      *(_QWORD *)(*((_QWORD *)a2 + 23) + 200LL) += v14;
  }
  *((_QWORD *)a2 + 25) = 0LL;
  v15 = (__int64 **)((char *)a2 + 1864);
  *((_QWORD *)a3 + 25) = *((_QWORD *)a3 + 223);
  while ( *v15 != (__int64 *)v15 )
  {
    ExecutionModel::ResourceSet::AddBGResourceSetForSharing(
      (ExecutionModel::ResourceSet **)a3,
      (struct ExecutionModel::ResourceSet *)(*v15)[2],
      1);
    ExecutionModel::ResourceSet::AddFGResourceSetForSharing((ExecutionModel::ResourceSet *)(*v15)[2], a3, 0);
    ExecutionModel::ResourceSet::RemoveFGResourceSetForSharing((ExecutionModel::ResourceSet *)(*v15)[2], a2);
    utl::list<ATL::CComPtr<ExecutionModel::ResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::ResourceSet>>>::erase(
      (__int64)a2 + 1864,
      &v21,
      *v15);
  }
  *((_QWORD *)a2 + 231) = 0LL;
  ExecutionModel::ResourceSet::TransitionFGSharedResources(a2, a3);
}
