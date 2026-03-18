/*
 * XREFs of UNLOCK_ADDRESS_SPACE @ 0x14002CFD0
 * Callers:
 *     MiWaitForForkToComplete @ 0x1400018F0 (MiWaitForForkToComplete.c)
 *     MiBeginProcessClean @ 0x1400755E8 (MiBeginProcessClean.c)
 *     MiDeleteFinalPageTables @ 0x140075A98 (MiDeleteFinalPageTables.c)
 *     MiReleaseCommitForResetPages @ 0x1401E0934 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x1401E0B98 (MiReleaseOutSwappedProcessCommit.c)
 *     MiMapViewOfImageSection @ 0x140429AC0 (MiMapViewOfImageSection.c)
 *     MiPrepareVadDelete @ 0x14042E184 (MiPrepareVadDelete.c)
 *     MiAllocateVirtualMemory @ 0x140430E80 (MiAllocateVirtualMemory.c)
 *     NtFreeVirtualMemory @ 0x140433DC0 (NtFreeVirtualMemory.c)
 *     MiMapViewOfDataSection @ 0x1404354C0 (MiMapViewOfDataSection.c)
 *     MmCleanProcessAddressSpace @ 0x14045EDFC (MmCleanProcessAddressSpace.c)
 *     MiInitializeVadBitMap @ 0x14046D8CC (MiInitializeVadBitMap.c)
 *     MiCreatePebOrTeb @ 0x14050B230 (MiCreatePebOrTeb.c)
 *     MmCopyVirtualMemory @ 0x14050BE60 (MmCopyVirtualMemory.c)
 *     MiMapLockedPagesInUserSpace @ 0x140528600 (MiMapLockedPagesInUserSpace.c)
 *     MiMapViewOfPhysicalSection @ 0x140572C40 (MiMapViewOfPhysicalSection.c)
 *     MmCreateShadowMapping @ 0x14065BC98 (MmCreateShadowMapping.c)
 *     MmDeleteShadowMapping @ 0x14065BE04 (MmDeleteShadowMapping.c)
 *     MiResizeAweBitMap @ 0x14065C82C (MiResizeAweBitMap.c)
 *     NtFreeUserPhysicalPages @ 0x14065D220 (NtFreeUserPhysicalPages.c)
 *     MiAllocateEnclaveVad @ 0x14065E4C4 (MiAllocateEnclaveVad.c)
 * Callees:
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400C7DE0 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1400C8738 (ExfTryToWakePushLock.c)
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
