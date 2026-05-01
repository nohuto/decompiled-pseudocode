/*
 * XREFs of ?RevokeResourceList@BaseResourceSet@ExecutionModel@@AEAAXPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@W4Enum@Priority@2@W4_RM_REVOKE_REASON@@@Z @ 0x18000382C
 * Callers:
 *     ?AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@PEBU_ResourceSetInfo@2@KPEBU_ResourceInfo@2@W4Enum@Priority@2@K_NW4_RM_REVOKE_REASON@@W46PendType@2@PEA_NPEAVResourceManager@2@P6AJPEAPEAV12@@ZW4_RM_ACQUIRE_PEND_POLICY@@9@Z @ 0x18000B760 (-AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@PEBU_ResourceSetIn.c)
 *     ?CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAJXZ @ 0x18000C690 (-CheckAllPendingRequests@BaseResourceSet@ExecutionModel@@AEAAJXZ.c)
 * Callees:
 *     ?Release@ExternalResourceSet@ExecutionModel@@UEAAKXZ @ 0x180003050 (-Release@ExternalResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?SendReleaseRequest@BaseResourceSet@ExecutionModel@@QEAAXW4_RM_REVOKE_REASON@@@Z @ 0x1800039C4 (-SendReleaseRequest@BaseResourceSet@ExecutionModel@@QEAAXW4_RM_REVOKE_REASON@@@Z.c)
 *     ??0?$CComPtrBase@UIReclaimMemoryCallback@ExecutionModel@@@ATL@@IEAA@PEAUIReclaimMemoryCallback@ExecutionModel@@@Z @ 0x180006624 (--0-$CComPtrBase@UIReclaimMemoryCallback@ExecutionModel@@@ATL@@IEAA@PEAUIReclaimMemoryCallback@E.c)
 *     ?Release@BaseResourceSet@ExecutionModel@@UEAAKXZ @ 0x18000B3D0 (-Release@BaseResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x18000DE10 (-Release@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?erase@?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@QEAA?AV?$_DlistIt@U?$_DlistNode@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@2@V?$_DlistConstIt@U?$_DlistNode@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@2@@Z @ 0x18001FD2C (-erase@-$list@V-$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V-$allocator@V-$CComPtr@VBaseRes.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 */

void __fastcall ExecutionModel::BaseResourceSet::RevokeResourceList(
        ExecutionModel::BaseResourceSet *a1,
        _QWORD *a2,
        int a3,
        unsigned int a4)
{
  _QWORD *i; // rdi
  _QWORD *v7; // rdi
  unsigned int v8; // r15d
  ExecutionModel::BaseResourceSet *v9; // rbx
  unsigned int (__fastcall *v10)(ExecutionModel::BaseResourceSet *__hidden); // rsi
  ExecutionModel::BaseResourceSet *v11; // rbx
  unsigned int (__fastcall *v12)(ExecutionModel::BaseResourceSet *__hidden); // rsi
  ExecutionModel::BaseResourceSet *v13; // [rsp+60h] [rbp+8h] BYREF
  char v14; // [rsp+68h] [rbp+10h] BYREF
  unsigned int v15; // [rsp+78h] [rbp+20h]

  v15 = a4;
  v13 = a1;
  for ( i = (_QWORD *)*a2; i != a2; i = (_QWORD *)*i )
  {
    ATL::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>(
      &v13,
      i[2]);
    v11 = v13;
    if ( *((_DWORD *)v13 + 340) < a3 )
      i = *(_QWORD **)utl::list<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::erase(
                        a2,
                        &v14,
                        i);
    else
      *((_DWORD *)v13 + 339) &= ~2u;
    v12 = *(unsigned int (__fastcall **)(ExecutionModel::BaseResourceSet *__hidden))(*(_QWORD *)v11 + 16LL);
    if ( v12 == ExecutionModel::ResourceSet::Release )
    {
      ExecutionModel::ResourceSet::Release(v11);
    }
    else if ( v12 == ExecutionModel::BaseResourceSet::Release )
    {
      ExecutionModel::BaseResourceSet::Release(v11);
    }
    else if ( v12 == ExecutionModel::ExternalResourceSet::Release )
    {
      ExecutionModel::ExternalResourceSet::Release(v11);
    }
    else
    {
      v12(v11);
    }
  }
  v7 = (_QWORD *)*a2;
  v8 = v15;
  while ( v7 != a2 )
  {
    ATL::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>(
      &v13,
      v7[2]);
    v9 = v13;
    ExecutionModel::BaseResourceSet::SendReleaseRequest(v13, v8);
    if ( v9 )
    {
      v10 = *(unsigned int (__fastcall **)(ExecutionModel::BaseResourceSet *__hidden))(*(_QWORD *)v9 + 16LL);
      if ( v10 == ExecutionModel::ResourceSet::Release )
      {
        ExecutionModel::ResourceSet::Release(v9);
      }
      else if ( v10 == ExecutionModel::BaseResourceSet::Release )
      {
        ExecutionModel::BaseResourceSet::Release(v9);
      }
      else if ( v10 == ExecutionModel::ExternalResourceSet::Release )
      {
        ExecutionModel::ExternalResourceSet::Release(v9);
      }
      else
      {
        v10(v9);
      }
    }
    v7 = (_QWORD *)*v7;
  }
}
