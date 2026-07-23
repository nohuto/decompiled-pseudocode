/*
 * XREFs of LdrpPrepareModuleForExecution @ 0x18000BAC0
 * Callers:
 *     LdrpLoadDllInternal @ 0x180011D2C (LdrpLoadDllInternal.c)
 *     LdrpInitializeProcess @ 0x18008E534 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrpAcquireLoaderLock @ 0x18000A414 (LdrpAcquireLoaderLock.c)
 *     LdrpReleaseLoaderLock @ 0x18000A454 (LdrpReleaseLoaderLock.c)
 *     LdrpDynamicShimModule @ 0x18000A5AC (LdrpDynamicShimModule.c)
 *     LdrpNotifyLoadOfGraph @ 0x18000EC4C (LdrpNotifyLoadOfGraph.c)
 *     LdrpInitializeGraphRecurse @ 0x180071E9C (LdrpInitializeGraphRecurse.c)
 *     LdrpCondenseGraph @ 0x180074AFC (LdrpCondenseGraph.c)
 *     LdrpAddNodeServiceTag @ 0x18007B2D4 (LdrpAddNodeServiceTag.c)
 *     LdrpLogDbgPrint @ 0x1800C9198 (LdrpLogDbgPrint.c)
 */

__int64 __fastcall LdrpPrepareModuleForExecution(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx
  char v9; // al
  char v10; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0;
  if ( LdrpDllNotificationLock.OwningThread == NtCurrentTeb()->ClientId.UniqueThread )
    return (unsigned int)v2;
  switch ( *(_DWORD *)(*(_QWORD *)(a1 + 152) + 56LL) )
  {
    case 5:
      LdrpCondenseGraph();
      break;
    case 6:
      break;
    case 7:
      goto LABEL_9;
    default:
      if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 152) + 56LL) - 8) >= 2 )
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
      v5 = *(_QWORD *)(a1 + 176);
      if ( v5 && (*(_BYTE *)(v5 + 24) & 1) == 0 )
      {
        LdrpAcquireLoaderLock();
        v6 = *(_QWORD *)(a1 + 152);
        v10 = 0;
        v2 = LdrpInitializeGraphRecurse(v6, a2, &v10);
        LdrpReleaseLoaderLock(v7, 2, v2);
      }
      return (unsigned int)v2;
    }
    v9 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 3) != 0 )
    {
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
        1683,
        (unsigned int)"LdrpPrepareModuleForExecution",
        1,
        (__int64)"Failed to load for appcompat reasons\n");
      v9 = LdrpDebugFlags;
    }
    if ( (v9 & 0x40) != 0 )
      __debugbreak();
  }
  return (unsigned int)v2;
}
