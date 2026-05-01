/*
 * XREFs of ?TransitionResources@ResourceManager@ExecutionModel@@QEAAXPEAVResourceSet@2@0@Z @ 0x18000F710
 * Callers:
 *     ?ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000F850 (-ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIV.c)
 *     ?ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002BBC4 (-ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTI.c)
 * Callees:
 *     ?UpdateMemoryUsageEstimates@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEA_K@Z @ 0x18000EBB0 (-UpdateMemoryUsageEstimates@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEA_K@Z.c)
 *     ?IsFrozen@_ResourceSetInfo@ExecutionModel@@QEBA_NXZ @ 0x180010720 (-IsFrozen@_ResourceSetInfo@ExecutionModel@@QEBA_NXZ.c)
 *     ?IsPaused@_ResourceSetInfo@ExecutionModel@@QEBA_NXZ @ 0x180010750 (-IsPaused@_ResourceSetInfo@ExecutionModel@@QEBA_NXZ.c)
 *     ?ReturnResourceToParent@BaseResourceSet@ExecutionModel@@IEAAXW4Enum@ResourceType@2@_K@Z @ 0x180011590 (-ReturnResourceToParent@BaseResourceSet@ExecutionModel@@IEAAXW4Enum@ResourceType@2@_K@Z.c)
 *     ?AddBGResourceSetForSharing@ResourceSet@ExecutionModel@@AEAAJPEAV12@H@Z @ 0x1800354F0 (-AddBGResourceSetForSharing@ResourceSet@ExecutionModel@@AEAAJPEAV12@H@Z.c)
 *     ?AddFGResourceSetForSharing@ResourceSet@ExecutionModel@@AEAAJPEAV12@H@Z @ 0x1800355BC (-AddFGResourceSetForSharing@ResourceSet@ExecutionModel@@AEAAJPEAV12@H@Z.c)
 *     ?RemoveFGResourceSetForSharing@ResourceSet@ExecutionModel@@AEAAJPEAV12@@Z @ 0x180035E94 (-RemoveFGResourceSetForSharing@ResourceSet@ExecutionModel@@AEAAJPEAV12@@Z.c)
 *     ?erase@?$list@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@QEAA?AV?$_DlistIt@U?$_DlistNode@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@utl@@@2@V?$_DlistConstIt@U?$_DlistNode@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@utl@@@2@@Z @ 0x180036500 (-erase@-$list@V-$CComPtr@VResourceSet@ExecutionModel@@@ATL@@V-$allocator@V-$CComPtr@VResourceSet.c)
 */

void __fastcall ExecutionModel::ResourceManager::TransitionResources(
        __int64 **this,
        struct ExecutionModel::ResourceSet *a2,
        struct ExecutionModel::ResourceSet *a3)
{
  int v3; // eax
  unsigned __int64 v6; // rax
  bool v7; // zf
  unsigned __int64 v8; // rax
  ExecutionModel::_ResourceSetInfo *v9; // rdx
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rcx
  _QWORD *v14; // rsi
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // [rsp+38h] [rbp+10h] BYREF

  v3 = *((_DWORD *)a2 + 2);
  v16 = 0LL;
  *((_DWORD *)a2 + 460) = v3;
  ExecutionModel::ResourceManager::UpdateMemoryUsageEstimates(this, a2, &v16);
  v6 = *((_QWORD *)a3 + 227);
  if ( !v6 )
  {
    v6 = v16;
    if ( !v16 || *((_QWORD *)a2 + 28) <= v16 )
      v6 = *((_QWORD *)a2 + 28);
  }
  v7 = *((_QWORD *)a3 + 186) == 0LL;
  *((_QWORD *)a3 + 28) = v6;
  if ( v7 )
  {
    *((_QWORD *)a3 + 186) = *((_QWORD *)a2 + 186);
    *((_QWORD *)a3 + 180) = *((_QWORD *)a2 + 180);
    *((_QWORD *)a3 + 185) = *((_QWORD *)a2 + 185);
    *((_QWORD *)a3 + 222) = *((_QWORD *)a2 + 222);
  }
  *((_QWORD *)a2 + 28) = 0LL;
  v8 = *((_QWORD *)a3 + 228);
  if ( v8 )
  {
    v15 = *((_QWORD *)a2 + 31);
    if ( v15 > v8 )
      ExecutionModel::BaseResourceSet::ReturnResourceToParent(a3, 2LL, v15 - v8);
    v10 = *((_QWORD *)a3 + 228);
  }
  else
  {
    if ( ExecutionModel::_ResourceSetInfo::IsPaused((struct ExecutionModel::ResourceSet *)((char *)a3 + 1416))
      || ExecutionModel::_ResourceSetInfo::IsFrozen(v9) )
    {
      ExecutionModel::BaseResourceSet::ReturnResourceToParent(a3, 2LL, *((_QWORD *)a2 + 31));
      *((_QWORD *)a3 + 31) = 0LL;
      goto LABEL_12;
    }
    v10 = *((_QWORD *)a2 + 31);
  }
  *((_QWORD *)a3 + 31) = v10;
LABEL_12:
  *((_QWORD *)a2 + 31) = 0LL;
  v11 = *((_QWORD *)a3 + 226);
  v12 = *((_QWORD *)a2 + 25);
  if ( v12 > v11 )
  {
    v13 = v12 - v11;
    if ( (*((_BYTE *)a2 + 1344) & 1) == 0 )
      *(_QWORD *)(*((_QWORD *)a2 + 23) + 200LL) += v13;
  }
  *((_QWORD *)a2 + 25) = 0LL;
  v14 = (_QWORD *)((char *)a2 + 1872);
  *((_QWORD *)a3 + 25) = *((_QWORD *)a3 + 226);
  while ( (_QWORD *)*v14 != v14 )
  {
    ExecutionModel::ResourceSet::AddBGResourceSetForSharing(
      a3,
      *(struct ExecutionModel::ResourceSet **)(*v14 + 16LL),
      1);
    ExecutionModel::ResourceSet::AddFGResourceSetForSharing(*(ExecutionModel::ResourceSet **)(*v14 + 16LL), a3, 0);
    ExecutionModel::ResourceSet::RemoveFGResourceSetForSharing(*(ExecutionModel::ResourceSet **)(*v14 + 16LL), a2);
    utl::list<ATL::CComPtr<ExecutionModel::ResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::ResourceSet>>>::erase(
      (char *)a2 + 1872,
      &v16,
      *v14);
  }
  *((_QWORD *)a2 + 231) = 0LL;
  ExecutionModel::ResourceSet::TransitionFGSharedResources(a2, a3);
}
