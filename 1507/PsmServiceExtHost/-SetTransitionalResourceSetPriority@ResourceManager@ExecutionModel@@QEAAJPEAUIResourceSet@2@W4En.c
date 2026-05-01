/*
 * XREFs of ?SetTransitionalResourceSetPriority@ResourceManager@ExecutionModel@@QEAAJPEAUIResourceSet@2@W4Enum@Priority@2@@Z @ 0x180010F54
 * Callers:
 *     ?ReleaseResourcesForceOptionally@ResourceSet@ExecutionModel@@AEAAJ_N@Z @ 0x180010120 (-ReleaseResourcesForceOptionally@ResourceSet@ExecutionModel@@AEAAJ_N@Z.c)
 *     ?ReleaseResourcesInternal@ResourceSet@ExecutionModel@@EEAAJXZ @ 0x180010550 (-ReleaseResourcesInternal@ResourceSet@ExecutionModel@@EEAAJXZ.c)
 *     ?AcquireResourceSetHelperPhase2@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAUIResourceSetCallback@2@PEAXPEBGPEAT_RM_SID@@KK_KKPEA_NPEAUIResourceSet@2@PEAPEAU62@@Z @ 0x180012E10 (-AcquireResourceSetHelperPhase2@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU.c)
 * Callees:
 *     ??0?$CComPtrBase@UIReclaimMemoryCallback@ExecutionModel@@@ATL@@IEAA@PEAUIReclaimMemoryCallback@ExecutionModel@@@Z @ 0x180004B3C (--0-$CComPtrBase@UIReclaimMemoryCallback@ExecutionModel@@@ATL@@IEAA@PEAUIReclaimMemoryCallback@E.c)
 *     ?AddToListPrioritized@BaseResourceSet@ExecutionModel@@CAJPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@_N@Z @ 0x180004E9C (-AddToListPrioritized@BaseResourceSet@ExecutionModel@@CAJPEAV-$list@V-$CComPtr@VBaseResourceSet@.c)
 *     ?erase@?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@QEAA?AV?$_DlistIt@U?$_DlistNode@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@2@V?$_DlistConstIt@U?$_DlistNode@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@2@@Z @ 0x180004F64 (-erase@-$list@V-$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V-$allocator@V-$CComPtr@VBaseRes.c)
 *     ?Release@BaseResourceSet@ExecutionModel@@UEAAKXZ @ 0x18000DE20 (-Release@BaseResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x180010230 (-Release@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800172A0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::SetTransitionalResourceSetPriority(__int64 a1, __int64 a2, int a3)
{
  ExecutionModel::BaseResourceSet *v3; // rbx
  unsigned int v4; // r14d
  _DWORD *v6; // rbp
  struct IUnknown *v7; // rdx
  __int64 (__fastcall *v8)(ExecutionModel::BaseResourceSet *); // rdi
  ExecutionModel::BaseResourceSet *v10; // rsi
  __int64 *v11; // rdi
  __int64 (__fastcall *v12)(ExecutionModel::BaseResourceSet *); // rdi
  __int64 *v13; // r8
  ExecutionModel::BaseResourceSet *v14; // [rsp+58h] [rbp+10h] BYREF

  v3 = 0LL;
  v4 = 0;
  v14 = 0LL;
  if ( a2 )
  {
    v6 = (_DWORD *)(a2 - 1368);
    v7 = *(struct IUnknown **)(a1 + 184);
    if ( v7 )
    {
      ATL::AtlComPtrAssign((struct IUnknown **)&v14, v7);
      v3 = v14;
    }
    if ( v6[338] && v6[340] > a3 )
    {
      v6[340] = a3;
      v6[52] = a3;
      v6[58] = a3;
      v6[64] = a3;
      ATL::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>(
        &v14,
        (__int64)v6);
      v10 = v14;
      v11 = (__int64 *)*((_QWORD *)v3 + 20);
      while ( v11 != (__int64 *)((char *)v3 + 160) )
      {
        if ( (ExecutionModel::BaseResourceSet *)v11[2] == v10 )
        {
          v13 = v11;
          v11 = (__int64 *)*v11;
          utl::list<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::erase(
            (__int64)v3 + 160,
            &v14,
            v13);
        }
        else
        {
          v11 = (__int64 *)*v11;
        }
      }
      if ( v10 )
      {
        v12 = *(__int64 (__fastcall **)(ExecutionModel::BaseResourceSet *))(*(_QWORD *)v10 + 16LL);
        if ( v12 == ExecutionModel::ResourceSet::Release )
        {
          ExecutionModel::ResourceSet::Release(v10);
        }
        else if ( v12 == ExecutionModel::BaseResourceSet::Release )
        {
          ExecutionModel::BaseResourceSet::Release(v10);
        }
        else
        {
          v12(v10);
        }
      }
      ExecutionModel::BaseResourceSet::AddToListPrioritized((__int64)v3 + 160, (__int64)v6);
    }
  }
  else
  {
    v4 = -2147024809;
  }
  if ( v3 )
  {
    v8 = *(__int64 (__fastcall **)(ExecutionModel::BaseResourceSet *))(*(_QWORD *)v3 + 16LL);
    if ( v8 == ExecutionModel::BaseResourceSet::Release )
      ExecutionModel::BaseResourceSet::Release(v3);
    else
      v8(v3);
  }
  return v4;
}
