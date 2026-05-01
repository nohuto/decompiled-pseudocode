/*
 * XREFs of ?RmGetNotification@ResourceManager@ExecutionModel@@UEAAJPEAUResourceHandle__@2@PEAUExternalResourceNotification@2@@Z @ 0x1800388D0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180005FCC (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800073AC (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     ?GetResourceSetFromHandle@ResourceManager@ExecutionModel@@QEAAJPEAUResourceHandle__@2@PEAPEAVExternalResourceSet@2@@Z @ 0x180036200 (-GetResourceSetFromHandle@ResourceManager@ExecutionModel@@QEAAJPEAUResourceHandle__@2@PEAPEAVExt.c)
 *     ?GetNextMessage@ExternalResourceSet@ExecutionModel@@QEAAJPEAUExternalResourceNotification@2@@Z @ 0x18003F70C (-GetNextMessage@ExternalResourceSet@ExecutionModel@@QEAAJPEAUExternalResourceNotification@2@@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::RmGetNotification(
        ExecutionModel::ResourceManager *this,
        struct ExecutionModel::ResourceHandle__ *a2,
        struct ExecutionModel::ExternalResourceNotification *a3)
{
  const struct _TlgProvider_t *v6; // rcx
  const GUID *v7; // r8
  const GUID *v8; // r9
  int ResourceSetFromHandle; // [rsp+30h] [rbp-39h] BYREF
  struct ExecutionModel::ExternalResourceSet *v11; // [rsp+38h] [rbp-31h] BYREF
  struct ExecutionModel::ResourceHandle__ *v12; // [rsp+40h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-19h] BYREF
  int *p_ResourceSetFromHandle; // [rsp+70h] [rbp+7h]
  int v15; // [rsp+78h] [rbp+Fh]
  int v16; // [rsp+7Ch] [rbp+13h]
  struct ExecutionModel::ResourceHandle__ **v17; // [rsp+80h] [rbp+17h]
  int v18; // [rsp+88h] [rbp+1Fh]
  int v19; // [rsp+8Ch] [rbp+23h]
  struct ExecutionModel::ExternalResourceSet **v20; // [rsp+90h] [rbp+27h]
  int v21; // [rsp+98h] [rbp+2Fh]
  int v22; // [rsp+9Ch] [rbp+33h]

  RtlEnterCriticalSection(&RmpGlobalLock);
  v11 = 0LL;
  ResourceSetFromHandle = ExecutionModel::ResourceManager::GetResourceSetFromHandle(this, a2, &v11);
  if ( ResourceSetFromHandle >= 0 )
    ResourceSetFromHandle = ExecutionModel::ExternalResourceSet::GetNextMessage(v11, a3);
  RtlLeaveCriticalSection(&RmpGlobalLock);
  if ( (unsigned int)dword_1800690A0 > 4 && TlgKeywordOn((TraceLoggingHProvider)4, 1uLL) )
  {
    v16 = 0;
    v19 = 0;
    v22 = 0;
    p_ResourceSetFromHandle = &ResourceSetFromHandle;
    v17 = &v12;
    LODWORD(v11) = *(_DWORD *)a3;
    v20 = &v11;
    v15 = (int)v6;
    v12 = a2;
    v18 = 8;
    v21 = (int)v6;
    TlgWrite(v6, &unk_18005A4F2, v7, v8, 5u, &pData);
  }
  return (unsigned int)ResourceSetFromHandle;
}
