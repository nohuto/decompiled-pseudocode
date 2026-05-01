/*
 * XREFs of ?TransitionResources@ResourceManager@ExecutionModel@@QEAAXPEAVResourceSet@2@0@Z @ 0x180011B24
 * Callers:
 *     ?ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180012140 (-ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIV.c)
 *     ?ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180034400 (-ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTI.c)
 * Callees:
 *     ?IsFrozen@_ResourceSetInfo@ExecutionModel@@QEBA_NXZ @ 0x18000AE28 (-IsFrozen@_ResourceSetInfo@ExecutionModel@@QEBA_NXZ.c)
 *     ?erase@?$list@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@QEAA?AV?$_DlistIt@U?$_DlistNode@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@utl@@@2@V?$_DlistConstIt@U?$_DlistNode@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@utl@@@2@@Z @ 0x18000D87C (-erase@-$list@V-$CComPtr@VResourceSet@ExecutionModel@@@ATL@@V-$allocator@V-$CComPtr@VResourceSet.c)
 *     ?ReturnResourceToParent@BaseResourceSet@ExecutionModel@@IEAAXW4Enum@ResourceType@2@_K@Z @ 0x18000E660 (-ReturnResourceToParent@BaseResourceSet@ExecutionModel@@IEAAXW4Enum@ResourceType@2@_K@Z.c)
 *     ?AddBGResourceSetForSharing@ResourceSet@ExecutionModel@@AEAAJPEAV12@H@Z @ 0x18000FDD8 (-AddBGResourceSetForSharing@ResourceSet@ExecutionModel@@AEAAJPEAV12@H@Z.c)
 *     ?AddFGResourceSetForSharing@ResourceSet@ExecutionModel@@AEAAJPEAV12@H@Z @ 0x18000FEB8 (-AddFGResourceSetForSharing@ResourceSet@ExecutionModel@@AEAAJPEAV12@H@Z.c)
 *     ?RemoveFGResourceSetForSharing@ResourceSet@ExecutionModel@@AEAAJPEAV12@@Z @ 0x1800103D4 (-RemoveFGResourceSetForSharing@ResourceSet@ExecutionModel@@AEAAJPEAV12@@Z.c)
 *     ?UpdateMemoryUsageEstimates@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEA_K@Z @ 0x180011440 (-UpdateMemoryUsageEstimates@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEA_K@Z.c)
 */

void __fastcall ExecutionModel::ResourceManager::TransitionResources(
        ExecutionModel::ResourceManager *this,
        struct ExecutionModel::ResourceSet *a2,
        struct ExecutionModel::ResourceSet *a3)
{
  int v3; // eax
  unsigned __int64 v6; // rax
  char v7; // r11
  ExecutionModel::ResourceSet *v8; // r10
  __int64 v9; // rax
  unsigned __int64 v10; // rax
  ExecutionModel::_ResourceSetInfo *v11; // rcx
  __int64 v12; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // r8
  ExecutionModel::ResourceSet ***v15; // rsi
  __int64 v16; // rdx
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // r8
  ExecutionModel::ResourceSet *v20; // [rsp+38h] [rbp+10h] BYREF

  v3 = *((_DWORD *)a2 + 2);
  v20 = 0LL;
  *((_DWORD *)a2 + 458) = v3;
  ExecutionModel::ResourceManager::UpdateMemoryUsageEstimates(this, a2, (unsigned __int64 *)&v20);
  v6 = *((_QWORD *)a3 + 223);
  v7 = 4;
  if ( v6 )
  {
    if ( (*((_BYTE *)RmSvcGlobals + 1660) & 4) != 0 )
    {
      v17 = *((_QWORD *)a2 + 28);
      if ( v17 > v6 )
        ExecutionModel::BaseResourceSet::ReturnResourceToParent((__int64)a3, 1u, v17 - v6);
    }
    v9 = *((_QWORD *)a3 + 223);
    goto LABEL_4;
  }
  v8 = v20;
  if ( !v20 || (v18 = *((_QWORD *)a2 + 28), v18 <= (unsigned __int64)v20) )
  {
    v9 = *((_QWORD *)a2 + 28);
LABEL_4:
    *((_QWORD *)a3 + 28) = v9;
    goto LABEL_5;
  }
  if ( (*((_BYTE *)RmSvcGlobals + 1660) & 4) != 0 )
    ExecutionModel::BaseResourceSet::ReturnResourceToParent((__int64)a3, 1u, v18 - (_QWORD)v20);
  *((_QWORD *)a3 + 28) = v8;
LABEL_5:
  if ( !*((_QWORD *)a3 + 182) )
  {
    *((_QWORD *)a3 + 182) = *((_QWORD *)a2 + 182);
    *((_QWORD *)a3 + 181) = *((_QWORD *)a2 + 181);
    *((_QWORD *)a3 + 218) = *((_QWORD *)a2 + 218);
  }
  *((_QWORD *)a2 + 28) = 0LL;
  *((_QWORD *)a2 + 182) = 0LL;
  *((_QWORD *)a2 + 181) = 0LL;
  *((_QWORD *)a2 + 218) = 0LL;
  *((_QWORD *)a2 + 228) = 0LL;
  v10 = *((_QWORD *)a3 + 224);
  if ( v10 )
  {
    v19 = *((_QWORD *)a2 + 31);
    if ( v19 > v10 )
      ExecutionModel::BaseResourceSet::ReturnResourceToParent((__int64)a3, 2u, v19 - v10);
    v12 = *((_QWORD *)a3 + 224);
    goto LABEL_12;
  }
  v11 = (struct ExecutionModel::ResourceSet *)((char *)a3 + 1408);
  if ( ((unsigned __int8)v7 & *((_BYTE *)a3 + 1434)) == 0 )
  {
    if ( *(_DWORD *)v11 > 0x27u || (v16 = 0x8800001000LL, !_bittest64(&v16, *(int *)v11)) )
    {
      if ( !ExecutionModel::_ResourceSetInfo::IsFrozen(v11) )
      {
        v12 = *((_QWORD *)a2 + 31);
LABEL_12:
        *((_QWORD *)a3 + 31) = v12;
        goto LABEL_13;
      }
    }
  }
  ExecutionModel::BaseResourceSet::ReturnResourceToParent((__int64)a3, 2u, *((_QWORD *)a2 + 31));
  *((_QWORD *)a3 + 31) = 0LL;
LABEL_13:
  *((_QWORD *)a2 + 31) = 0LL;
  v13 = *((_QWORD *)a3 + 222);
  v14 = *((_QWORD *)a2 + 25);
  if ( v14 > v13 )
    ExecutionModel::BaseResourceSet::ReturnResourceToParent((__int64)a2, 0, v14 - v13);
  *((_QWORD *)a2 + 25) = 0LL;
  v15 = (ExecutionModel::ResourceSet ***)((char *)a2 + 1856);
  *((_QWORD *)a3 + 25) = *((_QWORD *)a3 + 222);
  while ( *v15 != (ExecutionModel::ResourceSet **)v15 )
  {
    ExecutionModel::ResourceSet::AddBGResourceSetForSharing((ExecutionModel::ResourceSet **)a3, (*v15)[2], 1);
    ExecutionModel::ResourceSet::AddFGResourceSetForSharing((*v15)[2], a3, 0);
    ExecutionModel::ResourceSet::RemoveFGResourceSetForSharing((*v15)[2], a2);
    utl::list<ATL::CComPtr<ExecutionModel::ResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::ResourceSet>>>::erase(
      (__int64)a2 + 1856,
      &v20,
      *v15);
  }
  *((_QWORD *)a2 + 230) = 0LL;
  ExecutionModel::ResourceSet::TransitionFGSharedResources(a2, a3);
}
