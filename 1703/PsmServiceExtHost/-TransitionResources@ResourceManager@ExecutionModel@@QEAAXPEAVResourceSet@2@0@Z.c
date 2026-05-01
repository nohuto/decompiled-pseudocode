/*
 * XREFs of ?TransitionResources@ResourceManager@ExecutionModel@@QEAAXPEAVResourceSet@2@0@Z @ 0x18000D334
 * Callers:
 *     ?ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000D438 (-ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIV.c)
 *     ?ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002AE68 (-ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTI.c)
 * Callees:
 *     ?UpdateMemoryUsageEstimates@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEA_K@Z @ 0x18000CB20 (-UpdateMemoryUsageEstimates@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEA_K@Z.c)
 *     ?IsFrozen@_ResourceSetInfo@ExecutionModel@@QEBA_NXZ @ 0x18000E31C (-IsFrozen@_ResourceSetInfo@ExecutionModel@@QEBA_NXZ.c)
 *     ?IsPaused@_ResourceSetInfo@ExecutionModel@@QEBA_NXZ @ 0x18000E344 (-IsPaused@_ResourceSetInfo@ExecutionModel@@QEBA_NXZ.c)
 *     ?ReturnResourceToParent@BaseResourceSet@ExecutionModel@@IEAAXW4Enum@ResourceType@2@_K@Z @ 0x18000EE50 (-ReturnResourceToParent@BaseResourceSet@ExecutionModel@@IEAAXW4Enum@ResourceType@2@_K@Z.c)
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
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // [rsp+38h] [rbp+10h] BYREF

  v3 = *((_DWORD *)a2 + 2);
  v15 = 0LL;
  *((_DWORD *)a2 + 458) = v3;
  ExecutionModel::ResourceManager::UpdateMemoryUsageEstimates(this, (const unsigned __int16 **)a2, &v15);
  v6 = *((_QWORD *)a3 + 226);
  if ( !v6 )
  {
    v6 = v15;
    if ( !v15 || *((_QWORD *)a2 + 28) <= v15 )
      v6 = *((_QWORD *)a2 + 28);
  }
  v7 = *((_QWORD *)a3 + 185) == 0LL;
  *((_QWORD *)a3 + 28) = v6;
  if ( v7 )
  {
    *((_QWORD *)a3 + 185) = *((_QWORD *)a2 + 185);
    *((_QWORD *)a3 + 179) = *((_QWORD *)a2 + 179);
    *((_QWORD *)a3 + 184) = *((_QWORD *)a2 + 184);
    *((_QWORD *)a3 + 221) = *((_QWORD *)a2 + 221);
  }
  *((_QWORD *)a2 + 28) = 0LL;
  v8 = *((_QWORD *)a3 + 227);
  if ( v8 )
  {
    v13 = *((_QWORD *)a2 + 31);
    if ( v13 > v8 )
      ExecutionModel::BaseResourceSet::ReturnResourceToParent(a3, 2LL, v13 - v8);
    v10 = *((_QWORD *)a3 + 227);
  }
  else
  {
    if ( ExecutionModel::_ResourceSetInfo::IsPaused((struct ExecutionModel::ResourceSet *)((char *)a3 + 1408))
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
  v11 = *((_QWORD *)a3 + 225);
  v12 = *((_QWORD *)a2 + 25);
  if ( v12 > v11 )
  {
    v14 = v12 - v11;
    if ( (*((_BYTE *)a2 + 1344) & 1) == 0 )
      *(_QWORD *)(*((_QWORD *)a2 + 23) + 200LL) += v14;
  }
  *((_QWORD *)a2 + 25) = 0LL;
  *((_QWORD *)a3 + 25) = *((_QWORD *)a3 + 225);
}
