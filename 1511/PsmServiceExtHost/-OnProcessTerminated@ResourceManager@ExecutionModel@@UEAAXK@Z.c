/*
 * XREFs of ?OnProcessTerminated@ResourceManager@ExecutionModel@@UEAAXK@Z @ 0x18003D6D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CComPtrBase@UIReclaimMemoryCallback@ExecutionModel@@@ATL@@IEAA@PEAUIReclaimMemoryCallback@ExecutionModel@@@Z @ 0x180006624 (--0-$CComPtrBase@UIReclaimMemoryCallback@ExecutionModel@@@ATL@@IEAA@PEAUIReclaimMemoryCallback@E.c)
 *     RmpActivityHostDelete @ 0x180007508 (RmpActivityHostDelete.c)
 *     ?RemoveExternalResources@ResourceManager@ExecutionModel@@QEAAXKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000FD60 (-RemoveExternalResources@ResourceManager@ExecutionModel@@QEAAXKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     RmpObjectRelease @ 0x18001BBFC (RmpObjectRelease.c)
 *     _TlgWrite @ 0x18001CC7C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18001CED4 (_TlgKeywordOn.c)
 *     ?RmpActivityHostFindByTypeAndIdentifier@@YAJW4_RM_ACTIVITY_HOST_TYPE@@PEAT_RM_ACTIVITY_HOST_IDENTIFIER@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001F5B0 (-RmpActivityHostFindByTypeAndIdentifier@@YAJW4_RM_ACTIVITY_HOST_TYPE@@PEAT_RM_ACTIVITY_HOST_IDEN.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     memset_0 @ 0x18002BC7E (memset_0.c)
 *     ?UnapplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAXV?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@_N@Z @ 0x18003E488 (-UnapplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAXV-$CComPtr@VResourceSet@Executio.c)
 *     RmpActivityHostOnHostTerminated @ 0x180041160 (RmpActivityHostOnHostTerminated.c)
 *     RmpActivityHostRemoveAllAcquiredResourceSets @ 0x18004118C (RmpActivityHostRemoveAllAcquiredResourceSets.c)
 */

void __fastcall ExecutionModel::ResourceManager::OnProcessTerminated(ExecutionModel::ResourceManager *this, int a2)
{
  int v4; // eax
  PVOID **v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rcx
  const struct _TlgProvider_t *v9; // rcx
  const struct _TlgProvider_t *v10; // rcx
  const GUID *v11; // r8
  const GUID *v12; // r9
  PVOID P[2]; // [rsp+30h] [rbp-D0h] BYREF
  WCHAR v14[280]; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+270h] [rbp+170h] BYREF
  PVOID *v16; // [rsp+290h] [rbp+190h]
  int v17; // [rsp+298h] [rbp+198h]
  int v18; // [rsp+29Ch] [rbp+19Ch]

  P[0] = 0LL;
  RtlEnterCriticalSection(&RmpGlobalLock);
  memset_0(v14, 0, 0x228uLL);
  *(_DWORD *)v14 = a2;
  v4 = RmpActivityHostFindByTypeAndIdentifier(1, v14, (volatile signed __int32 **)P);
  v5 = (PVOID **)P[0];
  if ( v4 >= 0 )
  {
    v6 = *((_QWORD *)P[0] + 75);
    if ( v6 )
    {
      ATL::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>(
        P,
        v6);
      LOBYTE(v7) = 1;
      ExecutionModel::ResourceManager::UnapplyResourceSet_Legacy(v8, P, v7);
    }
    RmpActivityHostRemoveAllAcquiredResourceSets(v5);
    RmpActivityHostOnHostTerminated(v5);
    RmpActivityHostDelete(v5);
    if ( (unsigned int)dword_180071060 > 4 && TlgKeywordOn(v9, 1uLL) )
    {
      v18 = 0;
      v16 = P;
      LODWORD(P[0]) = a2;
      v17 = 4;
      TlgWrite(v10, &unk_1800623ED, v11, v12, 3u, &pData);
    }
  }
  ExecutionModel::ResourceManager::RemoveExternalResources(this, a2, (struct _RM_ACTIVITY_HOST *)v5);
  RtlLeaveCriticalSection(&RmpGlobalLock);
  if ( v5 )
    RmpObjectRelease((volatile signed __int32 *)v5);
}
