/*
 * XREFs of UNLOCK_ADDRESS_SPACE @ 0x14002E2D0
 * Callers:
 *     MiDeleteFinalPageTables @ 0x1400055B8 (MiDeleteFinalPageTables.c)
 *     MiBeginProcessClean @ 0x14001BE64 (MiBeginProcessClean.c)
 *     MiWaitForForkToComplete @ 0x14012FC18 (MiWaitForForkToComplete.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x1401D059C (MiReleaseOutSwappedProcessCommit.c)
 *     MmCleanProcessAddressSpace @ 0x1403E7980 (MmCleanProcessAddressSpace.c)
 *     MiCreatePebOrTeb @ 0x1403F2500 (MiCreatePebOrTeb.c)
 *     MiMapViewOfImageSection @ 0x1403F5860 (MiMapViewOfImageSection.c)
 *     MiMapViewOfDataSection @ 0x140416C00 (MiMapViewOfDataSection.c)
 *     NtFreeVirtualMemory @ 0x140417AA0 (NtFreeVirtualMemory.c)
 *     MiAllocateVirtualMemory @ 0x140419B20 (MiAllocateVirtualMemory.c)
 *     MiInitializeVadBitMap @ 0x140462CA0 (MiInitializeVadBitMap.c)
 *     MiFindNextEnclaveBoundary @ 0x14047B340 (MiFindNextEnclaveBoundary.c)
 *     MiPrepareVadDelete @ 0x14049CCA4 (MiPrepareVadDelete.c)
 *     MiMapLockedPagesInUserSpace @ 0x1404E65E0 (MiMapLockedPagesInUserSpace.c)
 *     MiMapViewOfPhysicalSection @ 0x14053B280 (MiMapViewOfPhysicalSection.c)
 *     MmCreateShadowMapping @ 0x1406264D0 (MmCreateShadowMapping.c)
 *     MmDeleteShadowMapping @ 0x140626638 (MmDeleteShadowMapping.c)
 *     MiResizeAweBitMap @ 0x1406270C0 (MiResizeAweBitMap.c)
 *     NtFreeUserPhysicalPages @ 0x140627AE0 (NtFreeUserPhysicalPages.c)
 *     MiAllocateEnclaveVad @ 0x140628DA0 (MiAllocateEnclaveVad.c)
 *     MiScrubProcesses @ 0x14062CF2C (MiScrubProcesses.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x140020550 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 */

__int64 __fastcall UNLOCK_ADDRESS_SPACE(__int64 a1, __int64 a2)
{
  ULONG_PTR v2; // rdi
  __int64 v4; // rcx
  __int64 result; // rax

  *(_BYTE *)(a1 + 1732) &= ~1u;
  v2 = a2 + 872;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 872), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a2 + 872);
  KeAbPostRelease(v2);
  result = (unsigned int)((__int16)(*(_WORD *)(a1 + 486))++ + 1);
  if ( !(_WORD)result && *(_QWORD *)(a1 + 152) != a1 + 152 )
    return KiCheckForKernelApcDelivery(v4);
  return result;
}
