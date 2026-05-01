/*
 * XREFs of ?RmReleaseResources@ResourceManager@ExecutionModel@@QEAAJPEAUResourceHandle__@2@@Z @ 0x18000BC10
 * Callers:
 *     RmgrSrv_RmReleaseResources @ 0x18001BB40 (RmgrSrv_RmReleaseResources.c)
 *     ContextRmResourceHandle_rundown @ 0x180029450 (ContextRmResourceHandle_rundown.c)
 * Callees:
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     ?GetResourceSetFromHandle@ResourceManager@ExecutionModel@@QEAAJPEAUResourceHandle__@2@PEAPEAVExternalResourceSet@2@@Z @ 0x18000C264 (-GetResourceSetFromHandle@ResourceManager@ExecutionModel@@QEAAJPEAUResourceHandle__@2@PEAPEAVExt.c)
 *     ?ReleaseResourcesWithoutNotify@ExternalResourceSet@ExecutionModel@@QEAAXXZ @ 0x180019204 (-ReleaseResourcesWithoutNotify@ExternalResourceSet@ExecutionModel@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180021800 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::RmReleaseResources(
        ExecutionModel::ResourceManager *this,
        struct ExecutionModel::ResourceHandle__ *a2)
{
  ExecutionModel::ResourceManager *v2; // rbx
  struct ExecutionModel::ExternalResourceSet *v4; // rbx
  const struct _TlgProvider_t *cData; // rcx
  const GUID *v6; // r8
  const GUID *v7; // r9
  int ResourceSetFromHandle; // [rsp+30h] [rbp-19h] BYREF
  struct ExecutionModel::ExternalResourceSet *v10; // [rsp+38h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  int *p_ResourceSetFromHandle; // [rsp+60h] [rbp+17h]
  int v13; // [rsp+68h] [rbp+1Fh]
  int v14; // [rsp+6Ch] [rbp+23h]
  struct ExecutionModel::ExternalResourceSet **v15; // [rsp+70h] [rbp+27h]
  int v16; // [rsp+78h] [rbp+2Fh]
  int v17; // [rsp+7Ch] [rbp+33h]

  v2 = g_pResourceManager;
  RtlEnterCriticalSection(&RmpGlobalLock);
  ResourceSetFromHandle = ExecutionModel::ResourceManager::GetResourceSetFromHandle(v2, a2, &v10);
  if ( ResourceSetFromHandle >= 0 )
  {
    v4 = v10;
    ExecutionModel::ExternalResourceSet::ReleaseResourcesWithoutNotify(v10);
    (*(void (__fastcall **)(struct ExecutionModel::ExternalResourceSet *))(*(_QWORD *)v4 + 16LL))(v4);
    ResourceSetFromHandle = 0;
  }
  RtlLeaveCriticalSection(&RmpGlobalLock);
  if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn((TraceLoggingHProvider)4, 9uLL) )
  {
    v14 = 0;
    v17 = 0;
    p_ResourceSetFromHandle = &ResourceSetFromHandle;
    v15 = &v10;
    v13 = (int)cData;
    v10 = a2;
    v16 = 8;
    TlgWrite(cData, &unk_18003FEDE, v6, v7, (UINT32)cData, &pData);
  }
  return (unsigned int)ResourceSetFromHandle;
}
