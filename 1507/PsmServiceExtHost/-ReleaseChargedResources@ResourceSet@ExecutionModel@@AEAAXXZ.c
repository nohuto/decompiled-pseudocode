/*
 * XREFs of ?ReleaseChargedResources@ResourceSet@ExecutionModel@@AEAAXXZ @ 0x180040C3C
 * Callers:
 *     ?ReleaseResourcesForceOptionally@ResourceSet@ExecutionModel@@AEAAJ_N@Z @ 0x180010120 (-ReleaseResourcesForceOptionally@ResourceSet@ExecutionModel@@AEAAJ_N@Z.c)
 *     ?ReleaseResourcesInternal@ResourceSet@ExecutionModel@@EEAAJXZ @ 0x180010550 (-ReleaseResourcesInternal@ResourceSet@ExecutionModel@@EEAAJXZ.c)
 * Callees:
 *     ??0?$CComPtrBase@UIReclaimMemoryCallback@ExecutionModel@@@ATL@@IEAA@PEAUIReclaimMemoryCallback@ExecutionModel@@@Z @ 0x180004B3C (--0-$CComPtrBase@UIReclaimMemoryCallback@ExecutionModel@@@ATL@@IEAA@PEAUIReclaimMemoryCallback@E.c)
 *     _TlgWrite @ 0x180005FCC (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800073AC (_TlgKeywordOn.c)
 *     ?ReturnResourceToParent@BaseResourceSet@ExecutionModel@@IEAAXW4Enum@ResourceType@2@_K@Z @ 0x18000E660 (-ReturnResourceToParent@BaseResourceSet@ExecutionModel@@IEAAXW4Enum@ResourceType@2@_K@Z.c)
 *     ?RemoveFGResourceSetForSharing@ResourceSet@ExecutionModel@@AEAAJPEAV12@@Z @ 0x1800103D4 (-RemoveFGResourceSetForSharing@ResourceSet@ExecutionModel@@AEAAJPEAV12@@Z.c)
 *     ?CheckPendingInternalResourceRequestsAsync@ResourceManager@ExecutionModel@@QEAAXXZ @ 0x180012DDC (-CheckPendingInternalResourceRequestsAsync@ResourceManager@ExecutionModel@@QEAAXXZ.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800172A0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     ?pop_front@?$list@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@QEAAXXZ @ 0x18002F178 (-pop_front@-$list@V-$CComPtr@VResourceSet@ExecutionModel@@@ATL@@V-$allocator@V-$CComPtr@VResourc.c)
 *     ??1?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@QEAA@XZ @ 0x18002F1C0 (--1-$CComPtr@VResourceSet@ExecutionModel@@@ATL@@QEAA@XZ.c)
 *     ?RemoveBGResourceSetForSharing@ResourceSet@ExecutionModel@@AEAAJPEAV12@@Z @ 0x180040F24 (-RemoveBGResourceSetForSharing@ResourceSet@ExecutionModel@@AEAAJPEAV12@@Z.c)
 */

void __fastcall ExecutionModel::ResourceSet::ReleaseChargedResources(ExecutionModel::ResourceSet *this)
{
  struct IUnknown **v1; // r14
  __int64 v3; // rdi
  __int64 v4; // r8
  char *v5; // rbx
  char *v6; // rbx
  const struct _TlgProvider_t *cData; // rcx
  const GUID *v8; // r8
  const GUID *v9; // r9
  ExecutionModel::ResourceSet *v10; // [rsp+30h] [rbp-19h] BYREF
  ExecutionModel::ResourceSet *v11; // [rsp+38h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  ExecutionModel::ResourceSet **v13; // [rsp+60h] [rbp+17h]
  int v14; // [rsp+68h] [rbp+1Fh]
  int v15; // [rsp+6Ch] [rbp+23h]
  ExecutionModel::ResourceSet **v16; // [rsp+70h] [rbp+27h]
  int v17; // [rsp+78h] [rbp+2Fh]
  int v18; // [rsp+7Ch] [rbp+33h]

  v1 = (struct IUnknown **)((char *)this + 1816);
  v3 = *((_QWORD *)this + 227);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v3 - 1368) + 32LL))(v3 - 1368);
    if ( *v1 )
      ATL::AtlComPtrAssign(v1, 0LL);
  }
  v4 = *((_QWORD *)this + 31);
  if ( v4 )
  {
    ExecutionModel::BaseResourceSet::ReturnResourceToParent((__int64)this, 2u, v4);
    *((_QWORD *)this + 31) = 0LL;
    ExecutionModel::ResourceManager::CheckPendingInternalResourceRequestsAsync(*((ExecutionModel::ResourceManager **)this
                                                                               + 3));
  }
  v5 = (char *)this + 1880;
  while ( *(char **)v5 != v5 )
  {
    ATL::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>(
      &v10,
      *(_QWORD *)(*(_QWORD *)v5 + 16LL));
    utl::list<ATL::CComPtr<ExecutionModel::ResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::ResourceSet>>>::pop_front((ExecutionModel::ResourceSet ***)this + 235);
    ExecutionModel::ResourceSet::RemoveBGResourceSetForSharing(v10, this);
    ATL::CComPtr<ExecutionModel::ResourceSet>::~CComPtr<ExecutionModel::ResourceSet>(&v10);
  }
  v6 = (char *)this + 1856;
  while ( *(char **)v6 != v6 )
  {
    ExecutionModel::ResourceSet::RemoveFGResourceSetForSharing(
      *(ExecutionModel::ResourceSet **)(*(_QWORD *)v6 + 16LL),
      this);
    utl::list<ATL::CComPtr<ExecutionModel::ResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::ResourceSet>>>::pop_front((ExecutionModel::ResourceSet ***)this + 232);
  }
  if ( (unsigned int)dword_1800690A0 > 4 )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)4, 9uLL) )
    {
      v15 = 0;
      v18 = 0;
      v13 = &v11;
      LODWORD(v10) = *((_DWORD *)this + 352);
      v16 = &v10;
      v11 = this;
      v14 = 8;
      v17 = (int)cData;
      TlgWrite(cData, &unk_18005C423, v8, v9, (UINT32)cData, &pData);
    }
  }
}
