/*
 * XREFs of ACPIBuildDeviceDpc @ 0x1C001B910
 * Callers:
 *     <none>
 * Callees:
 *     ACPIPowerScheduleDpc @ 0x1C000AF24 (ACPIPowerScheduleDpc.c)
 *     ACPIBuildProcessSpecialSynchronizationList @ 0x1C001BCC8 (ACPIBuildProcessSpecialSynchronizationList.c)
 *     ACPIBuildProcessQueueList @ 0x1C001BDE0 (ACPIBuildProcessQueueList.c)
 *     ACPIBuildProcessGenericComplete @ 0x1C001BE70 (ACPIBuildProcessGenericComplete.c)
 *     ACPIBuildProcessGenericList @ 0x1C001BF7C (ACPIBuildProcessGenericList.c)
 *     ACPIInternalMoveList @ 0x1C001C65C (ACPIInternalMoveList.c)
 *     ACPIBuildSynchronizationRequestInternal @ 0x1C0021214 (ACPIBuildSynchronizationRequestInternal.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024E60 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ACPIBuildDeviceDpc(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  int v4; // eax
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rsi
  unsigned __int32 v8; // eax
  void (__fastcall *v9)(__int64); // rdx
  __int64 *v10; // rax
  PSLIST_ENTRY v11; // rbx
  signed __int32 v12; // edi
  char v13; // bp
  __int64 v14; // rsi
  unsigned __int32 v15; // eax
  __int64 (__fastcall *v16)(PSLIST_ENTRY); // rdx
  int v17; // ebx
  signed __int32 v18; // ebx
  struct _SLIST_ENTRY *v19; // rcx
  int v20; // r9d

  KeAcquireSpinLockAtDpcLevel(&AcpiBuildQueueLock);
  v4 = AcpiBuildDpcFlags;
  if ( (AcpiBuildDpcFlags & 2) == 0 )
    goto LABEL_23;
  do
  {
    AcpiBuildDpcFlags = v4 & 0xFFFFFFFD;
    if ( (__int64 *)AcpiBuildQueueList != &AcpiBuildQueueList )
      ACPIBuildProcessQueueList();
    KeReleaseSpinLockFromDpcLevel(&AcpiBuildQueueLock);
    v5 = AcpiBuildRunMethodList;
    if ( (__int64 *)AcpiBuildRunMethodList == &AcpiBuildRunMethodList )
    {
      if ( (__int64 *)AcpiBuildOperationRegionList != &AcpiBuildOperationRegionList )
        ACPIBuildProcessGenericList(&AcpiBuildOperationRegionList, &AcpiBuildOperationRegionDispatch, 4LL);
      if ( (__int64 *)AcpiBuildPowerResourceList == &AcpiBuildPowerResourceList
        || (unsigned int)ACPIBuildProcessGenericList(&AcpiBuildPowerResourceList, &AcpiBuildPowerResourceDispatch, 7LL) != 259 )
      {
        if ( (__int64 *)AcpiBuildDelayedDependencyList != &AcpiBuildDelayedDependencyList )
        {
          ACPIBuildProcessGenericList(&AcpiBuildDelayedDependencyList, &AcpiBuildDelayedDependencyDispatch, 5LL);
          if ( (__int64 *)AcpiBuildDelayedDependencyList == &AcpiBuildDelayedDependencyList
            && (AcpiOverrideAttributes & 0x80000) != 0 )
          {
            ACPIBuildSynchronizationRequestInternal(
              RootDeviceExtension,
              (unsigned int)ACPIBuildIssueNotifyInvalidateRelations,
              RootDeviceExtension,
              v20,
              0);
          }
        }
        v6 = AcpiBuildDeviceList;
        if ( (__int64 *)AcpiBuildDeviceList != &AcpiBuildDeviceList )
        {
          do
          {
            v7 = *(_QWORD *)v6;
            v8 = _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 24), 1, 1);
            if ( v8 >= 0x22 )
              KeBugCheckEx(0xA3u, 1uLL, 0x10202AuLL, 0LL, 0LL);
            v9 = (void (__fastcall *)(__int64))*(&AcpiBuildDeviceDispatch + v8);
            if ( v9 )
            {
              if ( v8 != 2 )
                *(_DWORD *)(v6 + 28) = v8;
              v12 = _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 24), 1, v8);
              v9(v6);
              if ( (v12 & 0xFFFFFFFD) != 0 )
                continue;
            }
            v6 = v7;
          }
          while ( (__int64 *)v6 != &AcpiBuildDeviceList );
          v6 = AcpiBuildDeviceList;
        }
        v10 = (__int64 *)AcpiBuildThermalZoneList;
        if ( (__int64 *)AcpiBuildThermalZoneList != &AcpiBuildThermalZoneList )
        {
          ACPIBuildProcessGenericList(&AcpiBuildThermalZoneList, &AcpiBuildThermalZoneDispatch, 8LL);
          v10 = (__int64 *)AcpiBuildThermalZoneList;
          v6 = AcpiBuildDeviceList;
        }
        if ( (__int64 *)v6 == &AcpiBuildDeviceList
          && (__int64 *)AcpiBuildOperationRegionList == &AcpiBuildOperationRegionList
          && (__int64 *)AcpiBuildPowerResourceList == &AcpiBuildPowerResourceList
          && (__int64 *)AcpiBuildRunMethodList == &AcpiBuildRunMethodList
          && v10 == &AcpiBuildThermalZoneList )
        {
          KeAcquireSpinLockAtDpcLevel(&AcpiPowerQueueLock);
          if ( (__int64 *)AcpiPowerDelayedQueueList != &AcpiPowerDelayedQueueList )
          {
            ACPIInternalMoveList(&AcpiPowerDelayedQueueList, &AcpiPowerQueueList);
            ACPIPowerScheduleDpc();
          }
          KeReleaseSpinLockFromDpcLevel(&AcpiPowerQueueLock);
        }
        v11 = AcpiBuildSynchronizationList;
        while ( v11 != (PSLIST_ENTRY)&AcpiBuildSynchronizationList )
        {
          v19 = v11;
          v11 = v11->Next;
          if ( v19[5].Next->Next == v19[5].Next )
            ACPIBuildProcessGenericComplete(v19);
        }
        if ( AcpiBuildSpecialSynchronizationList != (PSLIST_ENTRY)&AcpiBuildSpecialSynchronizationList )
          ACPIBuildProcessSpecialSynchronizationList();
      }
      KeAcquireSpinLockAtDpcLevel(&AcpiBuildQueueLock);
      v4 = AcpiBuildDpcFlags;
      continue;
    }
    v13 = 1;
    do
    {
      v14 = *(_QWORD *)v5;
      v15 = _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 24), 1, 1);
      if ( v15 >= 0xA )
        KeBugCheckEx(0xA3u, 1uLL, 0x10202AuLL, 0LL, 0LL);
      v16 = AcpiBuildRunMethodDispatch[v15];
      if ( !v16 )
      {
        v13 = 0;
LABEL_32:
        v5 = v14;
        continue;
      }
      if ( v15 != 2 )
        *(_DWORD *)(v5 + 28) = v15;
      v18 = _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 24), 1, v15);
      v16((PSLIST_ENTRY)v5);
      if ( (v18 & 0xFFFFFFFD) == 0 )
        goto LABEL_32;
    }
    while ( (__int64 *)v5 != &AcpiBuildRunMethodList );
    if ( v13 )
      v17 = 0;
    else
      v17 = 259;
    KeAcquireSpinLockAtDpcLevel(&AcpiBuildQueueLock);
    v4 = AcpiBuildDpcFlags;
    if ( v17 != 259 )
      v4 = AcpiBuildDpcFlags | 2;
  }
  while ( (v4 & 2) != 0 );
LABEL_23:
  AcpiBuildDpcFlags = v4 & 0xFFFFFFFE;
  KeReleaseSpinLockFromDpcLevel(&AcpiBuildQueueLock);
}
