/*
 * XREFs of ?RmGetNotification@ResourceManager@ExecutionModel@@QEAAJPEAUResourceHandle__@2@PEAUExternalResourceNotification@2@@Z @ 0x18001C140
 * Callers:
 *     RmgrSrv_RmGetNotification @ 0x18001C030 (RmgrSrv_RmGetNotification.c)
 * Callees:
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     ?GetResourceSetFromHandle@ResourceManager@ExecutionModel@@QEAAJPEAUResourceHandle__@2@PEAPEAVExternalResourceSet@2@@Z @ 0x18000C264 (-GetResourceSetFromHandle@ResourceManager@ExecutionModel@@QEAAJPEAUResourceHandle__@2@PEAPEAVExt.c)
 *     ?GetNextMessage@ExternalResourceSet@ExecutionModel@@QEAAJPEAUExternalResourceNotification@2@@Z @ 0x18001C2D8 (-GetNextMessage@ExternalResourceSet@ExecutionModel@@QEAAJPEAUExternalResourceNotification@2@@Z.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180021800 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::RmGetNotification(
        ExecutionModel::ResourceManager *this,
        struct ExecutionModel::ResourceHandle__ *a2,
        struct ExecutionModel::ExternalResourceNotification *a3)
{
  ExecutionModel::ResourceManager *v3; // rbx
  int ResourceSetFromHandle; // eax
  ExecutionModel::ExternalResourceSet *v7; // rbx
  int NextMessage; // eax
  const struct _TlgProvider_t *v9; // rcx
  const GUID *v10; // r8
  const GUID *v11; // r9
  unsigned int v13; // [rsp+30h] [rbp-49h] BYREF
  ExecutionModel::ExternalResourceSet *v14; // [rsp+38h] [rbp-41h] BYREF
  struct ExecutionModel::ResourceHandle__ *v15; // [rsp+40h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-29h] BYREF
  unsigned int *v17; // [rsp+70h] [rbp-9h]
  const struct _TlgProvider_t *v18; // [rsp+78h] [rbp-1h]
  struct ExecutionModel::ResourceHandle__ **v19; // [rsp+80h] [rbp+7h]
  __int64 v20; // [rsp+88h] [rbp+Fh]
  ExecutionModel::ExternalResourceSet **v21; // [rsp+90h] [rbp+17h]
  const struct _TlgProvider_t *v22; // [rsp+98h] [rbp+1Fh]

  v3 = g_pResourceManager;
  v14 = 0LL;
  RtlEnterCriticalSection(&RmpGlobalLock);
  ResourceSetFromHandle = ExecutionModel::ResourceManager::GetResourceSetFromHandle(v3, a2, &v14);
  v7 = v14;
  v13 = ResourceSetFromHandle;
  if ( ResourceSetFromHandle >= 0 )
  {
    NextMessage = ExecutionModel::ExternalResourceSet::GetNextMessage(v14, a3);
    if ( NextMessage >= 0 )
      NextMessage = 0;
    v13 = NextMessage;
  }
  RtlLeaveCriticalSection(&RmpGlobalLock);
  if ( v7 )
    (*(void (__fastcall **)(ExecutionModel::ExternalResourceSet *))(*(_QWORD *)v7 + 16LL))(v7);
  if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn((TraceLoggingHProvider)4, 1uLL) )
  {
    v18 = v9;
    v17 = &v13;
    v19 = &v15;
    LODWORD(v14) = *(_DWORD *)a3;
    v21 = &v14;
    v15 = a2;
    v20 = 8LL;
    v22 = v9;
    TlgWrite(v9, &unk_18003FC09, v10, v11, 5u, &pData);
  }
  return v13;
}
