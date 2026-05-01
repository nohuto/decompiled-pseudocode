/*
 * XREFs of ?RmReleaseResources@ResourceManager@ExecutionModel@@QEAAJPEAUResourceHandle__@2@@Z @ 0x18000DC0C
 * Callers:
 *     RmgrSrv_RmReleaseResources @ 0x18001A790 (RmgrSrv_RmReleaseResources.c)
 *     ContextRmResourceHandle_rundown @ 0x180028650 (ContextRmResourceHandle_rundown.c)
 * Callees:
 *     ?ReleaseResourcesWithoutNotify@ExternalResourceSet@ExecutionModel@@QEAAXXZ @ 0x1800041DC (-ReleaseResourcesWithoutNotify@ExternalResourceSet@ExecutionModel@@QEAAXXZ.c)
 *     ?Release@ExternalResourceSet@ExecutionModel@@UEAAKXZ @ 0x180004270 (-Release@ExternalResourceSet@ExecutionModel@@UEAAKXZ.c)
 *     ?GetResourceSetFromHandle@ResourceManager@ExecutionModel@@QEAAJPEAUResourceHandle__@2@PEAPEAVExternalResourceSet@2@@Z @ 0x18000E360 (-GetResourceSetFromHandle@ResourceManager@ExecutionModel@@QEAAJPEAUResourceHandle__@2@PEAPEAVExt.c)
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::RmReleaseResources(
        ExecutionModel::ResourceManager *this,
        struct ExecutionModel::ResourceHandle__ *a2)
{
  ExecutionModel::ResourceManager *v2; // rbx
  ExecutionModel::ExternalResourceSet *v4; // rbx
  unsigned int (__fastcall *v5)(ExecutionModel::ExternalResourceSet *); // rax
  const struct _TlgProvider_t *cData; // rcx
  const GUID *v7; // r8
  const GUID *v8; // r9
  int ResourceSetFromHandle; // [rsp+30h] [rbp-9h] BYREF
  struct ExecutionModel::ExternalResourceSet *v11; // [rsp+38h] [rbp-1h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp+7h] BYREF
  int *p_ResourceSetFromHandle; // [rsp+60h] [rbp+27h]
  int v14; // [rsp+68h] [rbp+2Fh]
  int v15; // [rsp+6Ch] [rbp+33h]
  struct ExecutionModel::ExternalResourceSet **v16; // [rsp+70h] [rbp+37h]
  int v17; // [rsp+78h] [rbp+3Fh]
  int v18; // [rsp+7Ch] [rbp+43h]

  v2 = g_pResourceManager;
  RtlEnterCriticalSection(&RmpGlobalLock);
  ResourceSetFromHandle = ExecutionModel::ResourceManager::GetResourceSetFromHandle(v2, a2, &v11);
  if ( ResourceSetFromHandle >= 0 )
  {
    v4 = v11;
    ExecutionModel::ExternalResourceSet::ReleaseResourcesWithoutNotify((HANDLE *)v11);
    v5 = *(unsigned int (__fastcall **)(ExecutionModel::ExternalResourceSet *))(*(_QWORD *)v4 + 16LL);
    if ( v5 == ExecutionModel::ExternalResourceSet::Release )
      ExecutionModel::ExternalResourceSet::Release(v4);
    else
      v5(v4);
    ResourceSetFromHandle = 0;
  }
  RtlLeaveCriticalSection(&RmpGlobalLock);
  if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn((TraceLoggingHProvider)4, 9uLL) )
  {
    v15 = 0;
    v18 = 0;
    p_ResourceSetFromHandle = &ResourceSetFromHandle;
    v16 = &v11;
    v14 = (int)cData;
    v11 = a2;
    v17 = 8;
    TlgWrite(cData, &unk_18003FE22, v7, v8, (UINT32)cData, &pData);
  }
  return (unsigned int)ResourceSetFromHandle;
}
