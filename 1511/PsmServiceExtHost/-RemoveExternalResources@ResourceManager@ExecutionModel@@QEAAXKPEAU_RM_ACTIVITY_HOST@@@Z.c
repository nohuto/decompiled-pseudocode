/*
 * XREFs of ?RemoveExternalResources@ResourceManager@ExecutionModel@@QEAAXKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000FD60
 * Callers:
 *     ?OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEBGPEAT_RM_SID@@KK_K@Z @ 0x18000FDA0 (-OnApplicationTerminated@ResourceManager@ExecutionModel@@QEAAXPEBGPEAT_RM_SID@@KK_K@Z.c)
 *     ?OnProcessTerminated@ResourceManager@ExecutionModel@@UEAAXK@Z @ 0x18003D6D0 (-OnProcessTerminated@ResourceManager@ExecutionModel@@UEAAXK@Z.c)
 * Callees:
 *     ?erase@?$_HashTable@PEAUResourceHandle__@ExecutionModel@@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@U?$hash@PEAUResourceHandle__@ExecutionModel@@@4@U?$equal_to@PEAUResourceHandle__@ExecutionModel@@@4@V?$allocator@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@@4@$0A@@utl@@QEAA?AV?$_DlistIt@U?$_HashNode@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@2@V?$_DlistConstIt@U?$_HashNode@U?$pair@QEAUResourceHandle__@ExecutionModel@@V?$CComPtr@VExternalResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@2@0@Z @ 0x180002B30 (-erase@-$_HashTable@PEAUResourceHandle__@ExecutionModel@@U-$pair@QEAUResourceHandle__@ExecutionM.c)
 *     ?ReleaseResourcesWithoutNotify@ExternalResourceSet@ExecutionModel@@QEAAXXZ @ 0x180002FC4 (-ReleaseResourcesWithoutNotify@ExternalResourceSet@ExecutionModel@@QEAAXXZ.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 */

void __fastcall ExecutionModel::ResourceManager::RemoveExternalResources(
        ExecutionModel::ResourceManager *this,
        int a2,
        struct _RM_ACTIVITY_HOST *a3)
{
  char *v3; // r14
  char *v5; // rbx
  HANDLE *v7; // rsi
  char v8; // [rsp+50h] [rbp+8h] BYREF
  char *v9; // [rsp+68h] [rbp+20h] BYREF

  v3 = (char *)this + 216;
  v5 = (char *)*((_QWORD *)this + 27);
  while ( v3 != v5 )
  {
    v7 = (HANDLE *)*((_QWORD *)v5 + 4);
    if ( *((_DWORD *)v7 + 2) == a2 && a2 || a3 && a3 == v7[184] )
    {
      if ( (*((int (__fastcall **)(_QWORD *, char *))*v7 + 10))(*((_QWORD **)v5 + 4), &v8) < 0 || !v8 )
      {
        (*((void (__fastcall **)(HANDLE *, __int64))*v7 + 6))(v7, 2LL);
        goto LABEL_11;
      }
      ExecutionModel::ExternalResourceSet::ReleaseResourcesWithoutNotify(v7);
      utl::_HashTable<ExecutionModel::ResourceHandle__ *,utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>,utl::hash<ExecutionModel::ResourceHandle__ *>,utl::equal_to<ExecutionModel::ResourceHandle__ *>,utl::allocator<utl::pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet>>>,0>::erase(
        (__int64)v3,
        &v9,
        v5,
        *(_QWORD **)v5);
      v5 = v9;
      (*((void (__fastcall **)(HANDLE *))*v7 + 2))(v7);
    }
    else
    {
LABEL_11:
      v5 = *(char **)v5;
    }
  }
}
