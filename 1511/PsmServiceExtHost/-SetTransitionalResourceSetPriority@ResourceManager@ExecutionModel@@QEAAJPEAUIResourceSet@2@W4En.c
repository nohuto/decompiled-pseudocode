/*
 * XREFs of ?SetTransitionalResourceSetPriority@ResourceManager@ExecutionModel@@QEAAJPEAUIResourceSet@2@W4Enum@Priority@2@@Z @ 0x18000F1E4
 * Callers:
 *     ?AcquireResourceSetHelperPhase2@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAUIResourceSetCallback@2@PEAXPEBGPEAT_RM_SID@@KK_KKPEA_NPEAUIResourceSet@2@PEAPEAU62@@Z @ 0x180011420 (-AcquireResourceSetHelperPhase2@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU.c)
 * Callees:
 *     ?Release@ExternalResourceSet@ExecutionModel@@UEAAKXZ @ 0x180003050 (-Release@ExternalResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ??0?$CComPtrBase@UIReclaimMemoryCallback@ExecutionModel@@@ATL@@IEAA@PEAUIReclaimMemoryCallback@ExecutionModel@@@Z @ 0x180006624 (--0-$CComPtrBase@UIReclaimMemoryCallback@ExecutionModel@@@ATL@@IEAA@PEAUIReclaimMemoryCallback@E.c)
 *     ?Release@BaseResourceSet@ExecutionModel@@UEAAKXZ @ 0x18000B3D0 (-Release@BaseResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?Release@ResourceSet@ExecutionModel@@UEAAKXZ @ 0x18000DE10 (-Release@ResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?AddToListPrioritized@BaseResourceSet@ExecutionModel@@CAJPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@_N@Z @ 0x18001FC64 (-AddToListPrioritized@BaseResourceSet@ExecutionModel@@CAJPEAV-$list@V-$CComPtr@VBaseResourceSet@.c)
 *     ?erase@?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@QEAA?AV?$_DlistIt@U?$_DlistNode@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@2@V?$_DlistConstIt@U?$_DlistNode@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@2@@Z @ 0x18001FD2C (-erase@-$list@V-$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V-$allocator@V-$CComPtr@VBaseRes.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::SetTransitionalResourceSetPriority(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // r14d
  ExecutionModel::BaseResourceSet *v4; // rdi
  __int64 v6; // rax
  _DWORD *v7; // rbp
  __int64 (__fastcall *v8)(ExecutionModel::BaseResourceSet *); // rbx
  ExecutionModel::BaseResourceSet *v10; // rbx
  _QWORD *v11; // rsi
  _QWORD *v12; // r8
  __int64 (__fastcall *v13)(ExecutionModel::BaseResourceSet *); // rsi
  ExecutionModel::BaseResourceSet *v14; // [rsp+58h] [rbp+10h] BYREF

  v3 = 0;
  v4 = 0LL;
  if ( a2 )
  {
    v6 = *(_QWORD *)(a1 + 184);
    v7 = (_DWORD *)(a2 - 1368);
    if ( v6 )
    {
      v4 = *(ExecutionModel::BaseResourceSet **)(a1 + 184);
      (*(void (__fastcall **)(ExecutionModel::BaseResourceSet *))(*(_QWORD *)v6 + 8LL))(v4);
    }
    if ( v7[338] && v7[340] > a3 )
    {
      v7[340] = a3;
      v7[52] = a3;
      v7[58] = a3;
      v7[64] = a3;
      ATL::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>(
        &v14,
        (__int64)v7);
      v10 = v14;
      v11 = (_QWORD *)*((_QWORD *)v4 + 20);
      while ( v11 != (_QWORD *)((char *)v4 + 160) )
      {
        if ( (ExecutionModel::BaseResourceSet *)v11[2] == v10 )
        {
          v12 = v11;
          v11 = (_QWORD *)*v11;
          utl::list<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::erase(
            (char *)v4 + 160,
            &v14,
            v12);
        }
        else
        {
          v11 = (_QWORD *)*v11;
        }
      }
      if ( v10 )
      {
        v13 = *(__int64 (__fastcall **)(ExecutionModel::BaseResourceSet *))(*(_QWORD *)v10 + 16LL);
        if ( v13 == ExecutionModel::ResourceSet::Release )
        {
          ExecutionModel::ResourceSet::Release(v10);
        }
        else if ( v13 == ExecutionModel::BaseResourceSet::Release )
        {
          ExecutionModel::BaseResourceSet::Release(v10);
        }
        else if ( (char *)v13 == (char *)ExecutionModel::ExternalResourceSet::Release )
        {
          ExecutionModel::ExternalResourceSet::Release(v10);
        }
        else
        {
          v13(v10);
        }
      }
      ExecutionModel::BaseResourceSet::AddToListPrioritized((char *)v4 + 160, v7);
    }
  }
  else
  {
    v3 = -2147024809;
  }
  if ( v4 )
  {
    v8 = *(__int64 (__fastcall **)(ExecutionModel::BaseResourceSet *))(*(_QWORD *)v4 + 16LL);
    if ( v8 == ExecutionModel::BaseResourceSet::Release )
      ExecutionModel::BaseResourceSet::Release(v4);
    else
      v8(v4);
  }
  return v3;
}
