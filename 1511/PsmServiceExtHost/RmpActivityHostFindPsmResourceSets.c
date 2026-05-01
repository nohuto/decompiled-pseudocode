/*
 * XREFs of RmpActivityHostFindPsmResourceSets @ 0x180002984
 * Callers:
 *     ?RmAccessCheckEx@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z @ 0x180002114 (-RmAccessCheckEx@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z.c)
 *     ?GetApplicationCommitMemoryLevel@ResourceManager@ExecutionModel@@UEAAJKPEAW4RmCommitLevel@@@Z @ 0x18003C8F0 (-GetApplicationCommitMemoryLevel@ResourceManager@ExecutionModel@@UEAAJKPEAW4RmCommitLevel@@@Z.c)
 *     ?IsForegroundProcess@ResourceManager@ExecutionModel@@QEAAHK@Z @ 0x18003CE94 (-IsForegroundProcess@ResourceManager@ExecutionModel@@QEAAHK@Z.c)
 *     ?ReclaimMemory@ResourceManager@ExecutionModel@@QEAAJXZ @ 0x18003D984 (-ReclaimMemory@ResourceManager@ExecutionModel@@QEAAJXZ.c)
 *     ?GetResourceSetTypeFromPSMKey@ResourceManager@ExecutionModel@@UEAAJPEBGPEAXKK_KPEAW4Enum@ResourceSetType@2@@Z @ 0x1800440F0 (-GetResourceSetTypeFromPSMKey@ResourceManager@ExecutionModel@@UEAAJPEBGPEAXKK_KPEAW4Enum@Resourc.c)
 * Callees:
 *     RmpPsmAppInstanceIdInitializeFromCStr @ 0x180002A70 (RmpPsmAppInstanceIdInitializeFromCStr.c)
 *     RmpObjectRelease @ 0x18001BBFC (RmpObjectRelease.c)
 *     ?RmpActivityHostFindByTypeAndIdentifier@@YAJW4_RM_ACTIVITY_HOST_TYPE@@PEAT_RM_ACTIVITY_HOST_IDENTIFIER@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001F5B0 (-RmpActivityHostFindByTypeAndIdentifier@@YAJW4_RM_ACTIVITY_HOST_TYPE@@PEAT_RM_ACTIVITY_HOST_IDEN.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     memset_0 @ 0x18002BC7E (memset_0.c)
 */

__int64 __fastcall RmpActivityHostFindPsmResourceSets(wchar_t **a1, void *a2, __int64 a3, int a4, __int64 a5)
{
  __int64 v8; // r14
  PVOID v9; // rbx
  PVOID P[2]; // [rsp+30h] [rbp-268h] BYREF
  wchar_t Destination[280]; // [rsp+40h] [rbp-258h] BYREF

  v8 = 0LL;
  memset_0(Destination, 0, 0x228uLL);
  RmpPsmAppInstanceIdInitializeFromCStr(Destination, *a1, a2, a4, a5);
  if ( (int)RmpActivityHostFindByTypeAndIdentifier(0LL, Destination, P) >= 0 )
  {
    RtlEnterCriticalSection(&RmpGlobalLock);
    v9 = P[0];
    if ( *((int *)P[0] + 5) >= 0 )
      v8 = *((_QWORD *)P[0] + 75);
    RtlLeaveCriticalSection(&RmpGlobalLock);
    RmpObjectRelease(v9);
  }
  return v8;
}
