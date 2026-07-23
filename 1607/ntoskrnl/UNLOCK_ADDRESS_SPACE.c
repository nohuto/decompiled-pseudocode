/*
 * XREFs of UNLOCK_ADDRESS_SPACE @ 0x14002CB50
 * Callers:
 *     MiWaitForForkToComplete @ 0x1400018F0 (MiWaitForForkToComplete.c)
 *     MiBeginProcessClean @ 0x140075668 (MiBeginProcessClean.c)
 *     MiDeleteFinalPageTables @ 0x140075B18 (MiDeleteFinalPageTables.c)
 *     MiReleaseCommitForResetPages @ 0x1401E0760 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x1401E09C4 (MiReleaseOutSwappedProcessCommit.c)
 *     MiMapViewOfImageSection @ 0x140428990 (MiMapViewOfImageSection.c)
 *     MiPrepareVadDelete @ 0x14042D054 (MiPrepareVadDelete.c)
 *     MiAllocateVirtualMemory @ 0x14042FD50 (MiAllocateVirtualMemory.c)
 *     NtFreeVirtualMemory @ 0x140432C90 (NtFreeVirtualMemory.c)
 *     MiMapViewOfDataSection @ 0x140434390 (MiMapViewOfDataSection.c)
 *     MmCleanProcessAddressSpace @ 0x14045DCCC (MmCleanProcessAddressSpace.c)
 *     MiInitializeVadBitMap @ 0x14046C79C (MiInitializeVadBitMap.c)
 *     MiCreatePebOrTeb @ 0x1404EE1C0 (MiCreatePebOrTeb.c)
 *     MmCopyVirtualMemory @ 0x1404EEDF0 (MmCopyVirtualMemory.c)
 *     MiMapLockedPagesInUserSpace @ 0x140528B40 (MiMapLockedPagesInUserSpace.c)
 *     MiMapViewOfPhysicalSection @ 0x140573180 (MiMapViewOfPhysicalSection.c)
 *     MmCreateShadowMapping @ 0x14065BD7C (MmCreateShadowMapping.c)
 *     MmDeleteShadowMapping @ 0x14065BEE8 (MmDeleteShadowMapping.c)
 *     MiResizeAweBitMap @ 0x14065C910 (MiResizeAweBitMap.c)
 *     NtFreeUserPhysicalPages @ 0x14065D304 (NtFreeUserPhysicalPages.c)
 *     MiAllocateEnclaveVad @ 0x14065E5A8 (MiAllocateEnclaveVad.c)
 * Callees:
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400C5C80 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall UNLOCK_ADDRESS_SPACE(__int64 a1, __int64 a2)
{
  ULONG_PTR v2; // rdi
  __int64 result; // rax

  *(_BYTE *)(a1 + 1736) &= ~1u;
  v2 = a2 + 872;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 872), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a2 + 872);
  KeAbPostRelease(v2);
  result = (unsigned int)((__int16)(*(_WORD *)(a1 + 486))++ + 1);
  if ( !(_WORD)result && *(_QWORD *)(a1 + 152) != a1 + 152 )
    return KiCheckForKernelApcDelivery();
  return result;
}
