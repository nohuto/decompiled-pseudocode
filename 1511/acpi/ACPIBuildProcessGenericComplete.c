/*
 * XREFs of ACPIBuildProcessGenericComplete @ 0x1C001BE70
 * Callers:
 *     ACPIBuildDeviceDpc @ 0x1C001B910 (ACPIBuildDeviceDpc.c)
 *     ACPIBuildProcessSpecialSynchronizationList @ 0x1C001BCC8 (ACPIBuildProcessSpecialSynchronizationList.c)
 *     ACPIBuildProcessDeviceFailure @ 0x1C0035C60 (ACPIBuildProcessDeviceFailure.c)
 *     ACPIBuildProcessPowerResourceFailure @ 0x1C0035CF0 (ACPIBuildProcessPowerResourceFailure.c)
 *     ACPIBuildProcessThermalZoneFailure @ 0x1C00361A0 (ACPIBuildProcessThermalZoneFailure.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C000CE88 (AMLIDereferenceHandleEx.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024E60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ACPIBuildProcessGenericComplete(PSLIST_ENTRY ListEntry)
{
  _SLIST_ENTRY *Next; // rax
  __int64 v3; // rdi
  _SLIST_ENTRY *v4; // rdx
  PSLIST_ENTRY *v5; // rax
  volatile signed __int32 *v6; // rcx

  Next = ListEntry[4].Next;
  if ( Next )
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))Next)(
      *((_QWORD *)&ListEntry[2].Next + 1),
      *((_QWORD *)&ListEntry[4].Next + 1),
      LODWORD(ListEntry[3].Next));
  if ( (HIDWORD(ListEntry[1].Next) & 8) != 0 )
  {
    v3 = *((_QWORD *)&ListEntry[2].Next + 1);
    KeAcquireSpinLockAtDpcLevel(&AcpiDeviceTreeLock);
    _InterlockedDecrement((volatile signed __int32 *)(v3 + 676));
    KeReleaseSpinLockFromDpcLevel(&AcpiDeviceTreeLock);
  }
  KeAcquireSpinLockAtDpcLevel(&AcpiBuildQueueLock);
  v4 = ListEntry->Next;
  AcpiBuildDpcFlags |= 2u;
  v5 = (PSLIST_ENTRY *)*((_QWORD *)&ListEntry->Next + 1);
  if ( *(&v4->Next + 1) != ListEntry || *v5 != ListEntry )
    __fastfail(3u);
  *v5 = v4;
  *((_QWORD *)&v4->Next + 1) = v5;
  KeReleaseSpinLockFromDpcLevel(&AcpiBuildQueueLock);
  v6 = (volatile signed __int32 *)*((_QWORD *)&ListEntry[3].Next + 1);
  if ( v6 )
  {
    AMLIDereferenceHandleEx(v6);
    *((_QWORD *)&ListEntry[3].Next + 1) = 0LL;
  }
  ++BuildRequestLookAsideList.L.TotalFrees;
  if ( ExQueryDepthSList(&BuildRequestLookAsideList.L.ListHead) < BuildRequestLookAsideList.L.Depth )
  {
    ExpInterlockedPushEntrySList(&BuildRequestLookAsideList.L.ListHead, ListEntry);
  }
  else
  {
    ++BuildRequestLookAsideList.L.FreeMisses;
    ((void (__fastcall *)(PSLIST_ENTRY))BuildRequestLookAsideList.L.FreeEx)(ListEntry);
  }
  return 0LL;
}
