/*
 * XREFs of ?RmAvailabilityCheck@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@K@Z @ 0x18002B924
 * Callers:
 *     RmgrSrv_RmAvailabilityCheck @ 0x1800295D0 (RmgrSrv_RmAvailabilityCheck.c)
 * Callees:
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     ?RmAccessCheckEx@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z @ 0x18000C778 (-RmAccessCheckEx@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     ?AvailabilityCheck@ExternalResourceSet@ExecutionModel@@SAJPEAVResourceManager@2@PEAVBaseResourceSet@2@KPEAU_ResourceInfo@2@W4Enum@Priority@2@KPEA_N@Z @ 0x180034994 (-AvailabilityCheck@ExternalResourceSet@ExecutionModel@@SAJPEAVResourceManager@2@PEAVBaseResource.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::RmAvailabilityCheck(
        __int64 a1,
        unsigned int a2,
        int *a3,
        int a4,
        unsigned int a5)
{
  ExecutionModel::ResourceManager *v5; // r13
  unsigned int v9; // ebx
  int *v10; // rdi
  int v11; // eax
  const struct _TlgProvider_t *v12; // rcx
  const GUID *v13; // r8
  const GUID *v14; // r9
  char v16[4]; // [rsp+40h] [rbp-81h] BYREF
  int v17; // [rsp+44h] [rbp-7Dh] BYREF
  unsigned int v18; // [rsp+48h] [rbp-79h] BYREF
  unsigned int v19; // [rsp+4Ch] [rbp-75h] BYREF
  int v20; // [rsp+50h] [rbp-71h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-61h] BYREF
  int *v22; // [rsp+80h] [rbp-41h]
  const struct _TlgProvider_t *v23; // [rsp+88h] [rbp-39h]
  unsigned int *v24; // [rsp+90h] [rbp-31h]
  const struct _TlgProvider_t *v25; // [rsp+98h] [rbp-29h]
  int *v26; // [rsp+A0h] [rbp-21h]
  const struct _TlgProvider_t *v27; // [rsp+A8h] [rbp-19h]
  int *v28; // [rsp+B0h] [rbp-11h]
  const struct _TlgProvider_t *v29; // [rsp+B8h] [rbp-9h]

  v5 = g_pResourceManager;
  RtlEnterCriticalSection(&RmpGlobalLock);
  v17 = 0;
  v16[0] = 0;
  if ( a3 )
  {
    v9 = 0;
    if ( a2 )
    {
      v10 = a3;
      while ( 1 )
      {
        v17 = ExecutionModel::ResourceManager::RmAccessCheckEx((struct _RM_SERVICE_GLOBALS **)v5, *v10, a5, 1);
        if ( v17 < 0 )
          break;
        ++v9;
        v10 += 6;
        if ( v9 >= a2 )
          goto LABEL_7;
      }
    }
    else
    {
LABEL_7:
      v11 = ExecutionModel::ExternalResourceSet::AvailabilityCheck(v5, *((_QWORD *)v5 + 12), a2, a3, a4, a5, v16);
      v17 = v11;
      if ( v11 >= 0 )
      {
        if ( !v16[0] )
          v11 = -2147467259;
        v17 = v11;
      }
    }
  }
  else
  {
    v17 = -2147024882;
  }
  RtlLeaveCriticalSection(&RmpGlobalLock);
  if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn((TraceLoggingHProvider)4, 1uLL) )
  {
    v23 = v12;
    v22 = &v17;
    v24 = &v18;
    v26 = (int *)&v19;
    v28 = &v20;
    v18 = a5;
    v25 = v12;
    v19 = a2;
    v27 = v12;
    v20 = a4;
    v29 = v12;
    TlgWrite(v12, &unk_18003FD64, v13, v14, 6u, &pData);
  }
  return (unsigned int)v17;
}
