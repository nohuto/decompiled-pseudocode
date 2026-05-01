/*
 * XREFs of ?OnProcessTerminated@ResourceManager@ExecutionModel@@UEAAXK@Z @ 0x180037430
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpActivityHostFindByTypeAndIdentifier@@YAJW4_RM_ACTIVITY_HOST_TYPE@@PEAT_RM_ACTIVITY_HOST_IDENTIFIER@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180002D10 (-RmpActivityHostFindByTypeAndIdentifier@@YAJW4_RM_ACTIVITY_HOST_TYPE@@PEAT_RM_ACTIVITY_HOST_IDEN.c)
 *     ??0?$CComPtrBase@UIReclaimMemoryCallback@ExecutionModel@@@ATL@@IEAA@PEAUIReclaimMemoryCallback@ExecutionModel@@@Z @ 0x180004B3C (--0-$CComPtrBase@UIReclaimMemoryCallback@ExecutionModel@@@ATL@@IEAA@PEAUIReclaimMemoryCallback@E.c)
 *     _TlgWrite @ 0x180005FCC (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800073AC (_TlgKeywordOn.c)
 *     RmpActivityHostDelete @ 0x1800083A8 (RmpActivityHostDelete.c)
 *     RmpObjectRelease @ 0x180009F0C (RmpObjectRelease.c)
 *     ?RemoveExternalResources@ResourceManager@ExecutionModel@@QEAAXKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800117E0 (-RemoveExternalResources@ResourceManager@ExecutionModel@@QEAAXKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     memset_0 @ 0x180024EDE (memset_0.c)
 *     ?UnapplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJV?$CComPtr@VResourceSet@ExecutionModel@@@ATL@@_N@Z @ 0x180038EE0 (-UnapplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJV-$CComPtr@VResourceSet@Executio.c)
 *     RmpActivityHostOnHostTerminated @ 0x18003BE44 (RmpActivityHostOnHostTerminated.c)
 */

void __fastcall ExecutionModel::ResourceManager::OnProcessTerminated(ExecutionModel::ResourceManager *this, int a2)
{
  int v4; // eax
  PVOID **v5; // rbx
  __int64 v6; // rdx
  _QWORD **v7; // r9
  _QWORD *v8; // rax
  __int64 v9; // r8
  _QWORD *v10; // rdx
  const struct _TlgProvider_t *v11; // rcx
  const struct _TlgProvider_t *v12; // rcx
  const GUID *v13; // r8
  const GUID *v14; // r9
  PVOID P[2]; // [rsp+30h] [rbp-D0h] BYREF
  WCHAR v16[280]; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+270h] [rbp+170h] BYREF
  PVOID *v18; // [rsp+290h] [rbp+190h]
  int v19; // [rsp+298h] [rbp+198h]
  int v20; // [rsp+29Ch] [rbp+19Ch]

  P[0] = 0LL;
  RtlEnterCriticalSection(&RmpGlobalLock);
  memset_0(v16, 0, 0x228uLL);
  *(_DWORD *)v16 = a2;
  v4 = RmpActivityHostFindByTypeAndIdentifier(1, v16, (volatile signed __int32 **)P);
  v5 = (PVOID **)P[0];
  if ( v4 >= 0 )
  {
    v6 = *((_QWORD *)P[0] + 75);
    if ( v6 )
    {
      ATL::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>::CComPtrBase<ExecutionModel::IReclaimMemoryCallback>(
        P,
        v6);
      ExecutionModel::ResourceManager::UnapplyResourceSet_Legacy(this);
    }
    v7 = v5 + 76;
    while ( 1 )
    {
      v8 = *v7;
      if ( *v7 == v7 )
        break;
      v9 = *v8;
      v10 = (_QWORD *)v8[1];
      if ( *(_QWORD **)(*v8 + 8LL) != v8 || (_QWORD *)*v10 != v8 )
        __fastfail(3u);
      *v10 = v9;
      *(_QWORD *)(v9 + 8) = v10;
      *((_DWORD *)v8 - 2) = 3;
    }
    RmpActivityHostOnHostTerminated(v5);
    RmpActivityHostDelete(v5);
    if ( (unsigned int)dword_1800690A0 > 4 && TlgKeywordOn(v11, 1uLL) )
    {
      v20 = 0;
      v18 = P;
      LODWORD(P[0]) = a2;
      v19 = 4;
      TlgWrite(v12, &unk_18005AB05, v13, v14, 3u, &pData);
    }
  }
  ExecutionModel::ResourceManager::RemoveExternalResources(this, a2, (struct _RM_ACTIVITY_HOST *)v5);
  RtlLeaveCriticalSection(&RmpGlobalLock);
  if ( v5 )
    RmpObjectRelease((volatile signed __int32 *)v5);
}
