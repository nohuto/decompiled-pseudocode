/*
 * XREFs of LdrpPrepareModuleForExecution @ 0x18002DA78
 * Callers:
 *     LdrpLoadDllInternal @ 0x180018D20 (LdrpLoadDllInternal.c)
 *     LdrpInitializeProcess @ 0x180091E24 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrpAcquireLoaderLock @ 0x18002D50C (LdrpAcquireLoaderLock.c)
 *     LdrpReleaseLoaderLock @ 0x18002D54C (LdrpReleaseLoaderLock.c)
 *     LdrpDynamicShimModule @ 0x18002D724 (LdrpDynamicShimModule.c)
 *     LdrpNotifyLoadOfGraph @ 0x18002E458 (LdrpNotifyLoadOfGraph.c)
 *     LdrpInitializeGraphRecurse @ 0x1800722A8 (LdrpInitializeGraphRecurse.c)
 *     LdrpCondenseGraph @ 0x180074614 (LdrpCondenseGraph.c)
 *     LdrpAddNodeServiceTag @ 0x18008016C (LdrpAddNodeServiceTag.c)
 *     LdrpLogDbgPrint @ 0x1800D063C (LdrpLogDbgPrint.c)
 */

__int64 __fastcall LdrpPrepareModuleForExecution(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  char v10; // al
  char v11; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0;
  if ( LdrpDllNotificationLock.OwningThread == NtCurrentTeb()->ClientId.UniqueThread )
    return (unsigned int)v2;
  v5 = *(_QWORD *)(a1 + 152);
  switch ( *(_DWORD *)(v5 + 56) )
  {
    case 5:
      LdrpCondenseGraph(v5);
      break;
    case 6:
      break;
    case 7:
      goto LABEL_9;
    default:
      if ( (unsigned int)(*(_DWORD *)(v5 + 56) - 8) >= 2 )
        return (unsigned int)-1073741595;
      return (unsigned int)v2;
  }
  if ( (*(_BYTE *)(a1 + 104) & 0x20) == 0 && LODWORD(NtCurrentTeb()->SubProcessTag) )
    LdrpAddNodeServiceTag(*(_QWORD *)(a1 + 152));
  v2 = LdrpNotifyLoadOfGraph(*(_QWORD *)(a1 + 152));
  if ( v2 >= 0 )
  {
    v2 = LdrpDynamicShimModule(*(_QWORD **)(a1 + 152));
    if ( v2 >= 0 )
    {
LABEL_9:
      v6 = *(_QWORD *)(a1 + 176);
      if ( v6 && (*(_BYTE *)(v6 + 24) & 1) == 0 )
      {
        LdrpAcquireLoaderLock();
        v7 = *(_QWORD *)(a1 + 152);
        v11 = 0;
        v2 = LdrpInitializeGraphRecurse(v7, a2, &v11);
        LdrpReleaseLoaderLock(v8, 2, v2);
      }
      return (unsigned int)v2;
    }
    v10 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
        1683,
        (unsigned int)"LdrpPrepareModuleForExecution",
        1,
        (__int64)"Failed to load for appcompat reasons\n");
      v10 = LdrpDebugFlags;
    }
    if ( (v10 & 0x40) != 0 )
      __debugbreak();
  }
  return (unsigned int)v2;
}
