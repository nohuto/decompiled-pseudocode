/*
 * XREFs of ?RemoveAndDeleteHostResourceInfo@HostResources@ExecutionModel@@IEAAXPEAPEAVHostResourceInfo@2@@Z @ 0x18001A894
 * Callers:
 *     ?ReleaseResources@ResourceSetImpl@ExecutionModel@@UEAAJXZ @ 0x180013C80 (-ReleaseResources@ResourceSetImpl@ExecutionModel@@UEAAJXZ.c)
 *     ?CleanUpHostResourceInfo@HostResources@ExecutionModel@@QEAAJAEBU_AppModelActivationId@@_N@Z @ 0x18001A098 (-CleanUpHostResourceInfo@HostResources@ExecutionModel@@QEAAJAEBU_AppModelActivationId@@_N@Z.c)
 * Callees:
 *     ??$_DeleteNode@U?$_DlistNode@V?$CComImplPtr@UIUnknown@@VApplicationPackageInfo@ExecutionModel@@@@@utl@@@?$_ContainerBase@V?$CComImplPtr@UIUnknown@@VApplicationPackageInfo@ExecutionModel@@@@V?$allocator@V?$CComImplPtr@UIUnknown@@VApplicationPackageInfo@ExecutionModel@@@@@utl@@@utl@@IEAAXPEAU?$_DlistNode@V?$CComImplPtr@UIUnknown@@VApplicationPackageInfo@ExecutionModel@@@@@1@@Z @ 0x1800062D4 (--$_DeleteNode@U-$_DlistNode@V-$CComImplPtr@UIUnknown@@VApplicationPackageInfo@ExecutionModel@@@.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800077D4 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?Release@HostResourceInfo@ExecutionModel@@UEAAKXZ @ 0x180012CE0 (-Release@HostResourceInfo@ExecutionModel@@UEAAKXZ.c)
 *     ??$_EqualRangeImpl@_K@?$_HashTable@_KU?$pair@$$CB_KPEAVHostResourceInfo@ExecutionModel@@@utl@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KPEAVHostResourceInfo@ExecutionModel@@@utl@@@2@$0A@@utl@@AEBAXU?$integral_constant@_N$0A@@1@AEB_KAEAV?$_DlistIt@U?$_HashNode@U?$pair@$$CB_KPEAVHostResourceInfo@ExecutionModel@@@utl@@@utl@@@1@2AEA_K@Z @ 0x180019A70 (--$_EqualRangeImpl@_K@-$_HashTable@_KU-$pair@$$CB_KPEAVHostResourceInfo@ExecutionModel@@@utl@@U-.c)
 *     ?erase@?$_HashTable@_KU?$pair@$$CB_KPEAVHostResourceInfo@ExecutionModel@@@utl@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KPEAVHostResourceInfo@ExecutionModel@@@utl@@@2@$0A@@utl@@QEAA?AV?$_DlistIt@U?$_HashNode@U?$pair@$$CB_KPEAVHostResourceInfo@ExecutionModel@@@utl@@@utl@@@2@V?$_DlistConstIt@U?$_HashNode@U?$pair@$$CB_KPEAVHostResourceInfo@ExecutionModel@@@utl@@@utl@@@2@0@Z @ 0x180019C70 (-erase@-$_HashTable@_KU-$pair@$$CB_KPEAVHostResourceInfo@ExecutionModel@@@utl@@U-$hash@_K@2@U-$e.c)
 *     ?Release@ApplicationPackageInfo@ExecutionModel@@UEAAKXZ @ 0x18001B8E0 (-Release@ApplicationPackageInfo@ExecutionModel@@UEAAKXZ.c)
 *     ?RemovePackageHost@ApplicationPackageInfo@ExecutionModel@@QEAAJPEAVHostResourceInfo@2@@Z @ 0x18001BAFC (-RemovePackageHost@ApplicationPackageInfo@ExecutionModel@@QEAAJPEAVHostResourceInfo@2@@Z.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 */

void __fastcall ExecutionModel::HostResources::RemoveAndDeleteHostResourceInfo(
        ExecutionModel::HostResources *this,
        struct ExecutionModel::HostResourceInfo **a2)
{
  __int64 v4; // rax
  ExecutionModel::ApplicationPackageInfo *v5; // rcx
  struct IUnknown *v6; // rdx
  __int64 (__fastcall *v7)(ExecutionModel::HostResourceInfo *); // rsi
  ULONG (__stdcall *Release)(IUnknown *); // rdi
  char *i; // rdx
  _QWORD *v10; // rcx
  char *v11; // rax
  __int64 v12; // [rsp+30h] [rbp-10h] BYREF
  __int64 v13; // [rsp+38h] [rbp-8h] BYREF
  struct IUnknown *v14; // [rsp+68h] [rbp+28h] BYREF
  _QWORD *v15; // [rsp+70h] [rbp+30h] BYREF
  _QWORD *v16; // [rsp+78h] [rbp+38h] BYREF

  if ( a2 )
  {
    v14 = 0LL;
    if ( *a2 )
    {
      v4 = *((_QWORD *)*a2 + 6);
      v16 = 0LL;
      v15 = 0LL;
      v12 = v4;
      utl::_HashTable<unsigned __int64,utl::pair<unsigned __int64 const,ExecutionModel::HostResourceInfo *>,utl::hash<unsigned __int64>,utl::equal_to<unsigned __int64>,utl::allocator<utl::pair<unsigned __int64 const,ExecutionModel::HostResourceInfo *>>,0>::_EqualRangeImpl<unsigned __int64>(
        (__int64)this + 16,
        (__int64)a2,
        (unsigned __int16 *)&v12,
        &v16,
        &v15,
        &v13);
      utl::_HashTable<unsigned __int64,utl::pair<unsigned __int64 const,ExecutionModel::HostResourceInfo *>,utl::hash<unsigned __int64>,utl::equal_to<unsigned __int64>,utl::allocator<utl::pair<unsigned __int64 const,ExecutionModel::HostResourceInfo *>>,0>::erase(
        (__int64)this + 16,
        &v15,
        v16,
        v15);
      v5 = (ExecutionModel::ApplicationPackageInfo *)v14;
      v6 = (struct IUnknown *)*((_QWORD *)*a2 + 3);
      if ( v14 != v6 )
      {
        ATL::AtlComPtrAssign(&v14, v6);
        v5 = (ExecutionModel::ApplicationPackageInfo *)v14;
      }
      ExecutionModel::ApplicationPackageInfo::RemovePackageHost(v5, *a2);
      if ( (struct IUnknown *)v14[8].lpVtbl == &v14[8] )
      {
        for ( i = (char *)*((_QWORD *)this + 12); i != (char *)this + 96; i = *(char **)i )
        {
          if ( *((struct IUnknown **)i + 2) == v14 )
          {
            v10 = (_QWORD *)*((_QWORD *)i + 1);
            v11 = *(char **)i;
            *v10 = *(_QWORD *)i;
            *((_QWORD *)v11 + 1) = v10;
            utl::_ContainerBase<CComImplPtr<IUnknown,ExecutionModel::ApplicationPackageInfo>,utl::allocator<CComImplPtr<IUnknown,ExecutionModel::ApplicationPackageInfo>>>::_DeleteNode<utl::_DlistNode<CComImplPtr<IUnknown,ExecutionModel::ApplicationPackageInfo>>>(
              (__int64)v10,
              i);
            --*((_QWORD *)this + 14);
            break;
          }
        }
      }
      v7 = *(__int64 (__fastcall **)(ExecutionModel::HostResourceInfo *))(*(_QWORD *)*a2 + 16LL);
      if ( v7 == ExecutionModel::HostResourceInfo::Release )
        ExecutionModel::HostResourceInfo::Release(*a2);
      else
        v7(*a2);
      *a2 = 0LL;
      if ( v14 )
      {
        Release = v14->lpVtbl->Release;
        if ( (char *)Release == (char *)ExecutionModel::ApplicationPackageInfo::Release )
          ExecutionModel::ApplicationPackageInfo::Release((ExecutionModel::ApplicationPackageInfo *)v14);
        else
          ((void (__fastcall *)(struct IUnknown *))Release)(v14);
      }
    }
  }
}
