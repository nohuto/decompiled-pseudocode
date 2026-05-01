/*
 * XREFs of ?RemoveExternalResources@ResourceManager@ExecutionModel@@QEAAXKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800117E0
 * Callers:
 *     ?OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEBGPEAT_RM_SID@@KK_K@Z @ 0x180011820 (-OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEBGPEAT_RM_SID@@KK_K@Z.c)
 *     ?OnProcessTerminated@ResourceManager@ExecutionModel@@UEAAXK@Z @ 0x180037430 (-OnProcessTerminated@ResourceManager@ExecutionModel@@UEAAXK@Z.c)
 * Callees:
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     ?erase@?$_HashTable@PEAUResourceHandle__@ExecutionModel@@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@U?$hash@PEAUResourceHandle__@ExecutionModel@@@4@U?$equal_to@PEAUResourceHandle__@ExecutionModel@@@4@V?$allocator@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@@4@$0A@@utl@@QEAA?AV?$_DlistIt@U?$_HashNode@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@2@V?$_DlistConstIt@U?$_HashNode@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@2@0@Z @ 0x180033734 (-erase@-$_HashTable@PEAUResourceHandle__@ExecutionModel@@U-$pair@QEAUResourceHandle__@ExecutionM.c)
 *     ?ReleaseResourcesWithoutNotify@ExternalResourceSet@ExecutionModel@@QEAAJXZ @ 0x18003FEAC (-ReleaseResourcesWithoutNotify@ExternalResourceSet@ExecutionModel@@QEAAJXZ.c)
 */

void __fastcall ExecutionModel::ResourceManager::RemoveExternalResources(
        ExecutionModel::ResourceManager *this,
        int a2,
        struct _RM_ACTIVITY_HOST *a3)
{
  char *v3; // r14
  char *v5; // rbx
  __int64 v7; // rsi
  char v8; // [rsp+50h] [rbp+8h] BYREF
  char *v9; // [rsp+68h] [rbp+20h] BYREF

  v3 = (char *)this + 200;
  v5 = (char *)*((_QWORD *)this + 25);
  while ( v3 != v5 )
  {
    v7 = *((_QWORD *)v5 + 4);
    if ( *(_DWORD *)(v7 + 8) == a2 && a2 || a3 && a3 == *(struct _RM_ACTIVITY_HOST **)(v7 + 1472) )
    {
      if ( (*(int (__fastcall **)(_QWORD, char *))(*(_QWORD *)v7 + 80LL))(*((_QWORD *)v5 + 4), &v8) < 0 || !v8 )
      {
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 48LL))(v7, 2LL);
        goto LABEL_11;
      }
      ExecutionModel::ExternalResourceSet::ReleaseResourcesWithoutNotify((ExecutionModel::ExternalResourceSet *)v7);
      utl::_HashTable<ExecutionModel::ResourceHandle__ *,utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>,utl::hash<ExecutionModel::ResourceHandle__ *>,utl::equal_to<ExecutionModel::ResourceHandle__ *>,utl::allocator<utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>>,0>::erase(
        v3,
        &v9,
        v5,
        *(_QWORD *)v5);
      v5 = v9;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    else
    {
LABEL_11:
      v5 = *(char **)v5;
    }
  }
}
