/*
 * XREFs of ?RmpActivityHostFindProcessResourceSet@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_SERVICE_GLOBALS@@K@Z @ 0x180018D40
 * Callers:
 *     ?RmAccessCheckEx@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z @ 0x18000C778 (-RmAccessCheckEx@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z.c)
 *     ?ApplyTerminalResourceSet@ResourceManager@ExecutionModel@@QEAAJK@Z @ 0x18002B19C (-ApplyTerminalResourceSet@ResourceManager@ExecutionModel@@QEAAJK@Z.c)
 *     ?GetProcessMemoryCaps@ResourceManager@ExecutionModel@@QEAAJKPEA_K0@Z @ 0x18002B37C (-GetProcessMemoryCaps@ResourceManager@ExecutionModel@@QEAAJKPEA_K0@Z.c)
 *     ?GetResourceManagementValue@ResourceManager@ExecutionModel@@QEAAJKKPEA_K@Z @ 0x18002B408 (-GetResourceManagementValue@ResourceManager@ExecutionModel@@QEAAJKKPEA_K@Z.c)
 * Callees:
 *     ?RmpActivityHostGetFirstResourceSet@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@W4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x18001287C (-RmpActivityHostGetFirstResourceSet@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@W4.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180014210 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpActivityHostFindByTypeAndIdentifier@@YAJPEAU_RM_SERVICE_GLOBALS@@W4_RM_ACTIVITY_HOST_TYPE@@PEAT_RM_ACTIVITY_HOST_IDENTIFIER@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800153D0 (-RmpActivityHostFindByTypeAndIdentifier@@YAJPEAU_RM_SERVICE_GLOBALS@@W4_RM_ACTIVITY_HOST_TYPE@@P.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800217E2 (memset_0.c)
 */

struct ExecutionModel::ResourceSet *__fastcall RmpActivityHostFindProcessResourceSet(
        struct _RM_SERVICE_GLOBALS *a1,
        int a2)
{
  __int64 FirstResourceSet; // rsi
  struct _RM_OBJECT_HEADER *v6; // rbx
  struct _RM_OBJECT_HEADER *v7; // [rsp+20h] [rbp-258h] BYREF
  unsigned __int8 v8[560]; // [rsp+30h] [rbp-248h] BYREF

  FirstResourceSet = 0LL;
  memset_0(v8, 0, 0x228uLL);
  *(_DWORD *)v8 = a2;
  if ( (int)RmpActivityHostFindByTypeAndIdentifier((__int64)a1, 1, v8, (__int64 *)&v7) >= 0 )
  {
    RtlEnterCriticalSection(&RmpGlobalLock);
    v6 = v7;
    if ( *((int *)v7 + 5) >= 0 )
      FirstResourceSet = RmpActivityHostGetFirstResourceSet((__int64)v7, 1);
    RtlLeaveCriticalSection(&RmpGlobalLock);
    RmpObjectRelease(v6);
  }
  return (struct ExecutionModel::ResourceSet *)FirstResourceSet;
}
