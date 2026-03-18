/*
 * XREFs of ACPIBuildDeviceDpc @ 0x1C0011D70
 * Callers:
 *     <none>
 * Callees:
 *     ACPIPowerScheduleDpc @ 0x1C0010384 (ACPIPowerScheduleDpc.c)
 *     ACPIBuildProcessSpecialSynchronizationList @ 0x1C0012E74 (ACPIBuildProcessSpecialSynchronizationList.c)
 *     ACPIBuildProcessSynchronizationList @ 0x1C0025CA4 (ACPIBuildProcessSynchronizationList.c)
 *     ACPIBuildProcessGenericList @ 0x1C0026060 (ACPIBuildProcessGenericList.c)
 *     ACPIBuildSynchronizationRequestInternal @ 0x1C0028220 (ACPIBuildSynchronizationRequestInternal.c)
 *     ACPIInternalMoveList @ 0x1C002AC40 (ACPIInternalMoveList.c)
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ACPIBuildDeviceDpc(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rsi
  unsigned __int32 v9; // eax
  void (__fastcall *v10)(__int64); // rdx
  __int64 *v11; // rax
  signed __int32 v12; // edi
  char v13; // bp
  __int64 v14; // rsi
  unsigned __int32 v15; // eax
  __int64 (__fastcall *v16)(PSLIST_ENTRY); // rdx
  int v17; // ebx
  signed __int32 v18; // ebx
  __int64 *v19; // rdx
  __int64 **v20; // rax
  __int64 v21; // rax
  __int64 *v22; // r8
  int v23; // r9d

  KeAcquireSpinLockAtDpcLevel(&AcpiBuildQueueLock);
  v4 = AcpiBuildDpcFlags;
  if ( (AcpiBuildDpcFlags & 2) == 0 )
    goto LABEL_23;
  do
  {
    v5 = AcpiBuildQueueList;
    AcpiBuildDpcFlags = v4 & 0xFFFFFFFD;
    if ( (__int64 *)AcpiBuildQueueList != &AcpiBuildQueueList )
    {
      do
      {
        v19 = *(__int64 **)v5;
        if ( (*(_DWORD *)(v5 + 20) & 0x40) == 0 )
        {
          v20 = *(__int64 ***)(v5 + 8);
          if ( v19[1] != v5 || *v20 != (__int64 *)v5 )
            __fastfail(3u);
          *v20 = v19;
          v19[1] = (__int64)v20;
          v21 = *(_QWORD *)(v5 + 128);
          v22 = *(__int64 **)(v21 + 8);
          if ( *v22 != v21 )
            __fastfail(3u);
          *(_QWORD *)v5 = v21;
          *(_QWORD *)(v5 + 8) = v22;
          *v22 = v5;
          *(_QWORD *)(v21 + 8) = v5;
          *(_DWORD *)(v5 + 20) &= ~0x1000u;
          *(_QWORD *)(v5 + 128) = 0LL;
        }
        v5 = (__int64)v19;
      }
      while ( v19 != &AcpiBuildQueueList );
    }
    KeReleaseSpinLockFromDpcLevel(&AcpiBuildQueueLock);
    v6 = AcpiBuildRunMethodList;
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
              v23,
              0);
          }
        }
        v7 = AcpiBuildDeviceList;
        if ( (__int64 *)AcpiBuildDeviceList != &AcpiBuildDeviceList )
        {
          do
          {
            v8 = *(_QWORD *)v7;
            v9 = _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 24), 1, 1);
            if ( v9 >= 0x22 )
              KeBugCheckEx(0xA3u, 1uLL, 0x10205FuLL, 0LL, 0LL);
            v10 = (void (__fastcall *)(__int64))*(&AcpiBuildDeviceDispatch + v9);
            if ( v10 )
            {
              if ( v9 != 2 )
                *(_DWORD *)(v7 + 28) = v9;
              v12 = _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 24), 1, v9);
              v10(v7);
              if ( (v12 & 0xFFFFFFFD) != 0 )
                continue;
            }
            v7 = v8;
          }
          while ( (__int64 *)v7 != &AcpiBuildDeviceList );
          v7 = AcpiBuildDeviceList;
        }
        v11 = (__int64 *)AcpiBuildThermalZoneList;
        if ( (__int64 *)AcpiBuildThermalZoneList != &AcpiBuildThermalZoneList )
        {
          ACPIBuildProcessGenericList(&AcpiBuildThermalZoneList, &AcpiBuildThermalZoneDispatch, 8LL);
          v11 = (__int64 *)AcpiBuildThermalZoneList;
          v7 = AcpiBuildDeviceList;
        }
        if ( (__int64 *)v7 == &AcpiBuildDeviceList
          && (__int64 *)AcpiBuildOperationRegionList == &AcpiBuildOperationRegionList
          && (__int64 *)AcpiBuildPowerResourceList == &AcpiBuildPowerResourceList
          && (__int64 *)AcpiBuildRunMethodList == &AcpiBuildRunMethodList
          && v11 == &AcpiBuildThermalZoneList )
        {
          KeAcquireSpinLockAtDpcLevel(&AcpiPowerQueueLock);
          if ( (__int64 *)AcpiPowerDelayedQueueList != &AcpiPowerDelayedQueueList )
          {
            ACPIInternalMoveList(&AcpiPowerDelayedQueueList, &AcpiPowerQueueList);
            ACPIPowerScheduleDpc();
          }
          KeReleaseSpinLockFromDpcLevel(&AcpiPowerQueueLock);
        }
        if ( AcpiBuildSynchronizationList != (PSLIST_ENTRY)&AcpiBuildSynchronizationList )
          ACPIBuildProcessSynchronizationList();
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
      v14 = *(_QWORD *)v6;
      v15 = _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 24), 1, 1);
      if ( v15 >= 0xA )
        KeBugCheckEx(0xA3u, 1uLL, 0x10205FuLL, 0LL, 0LL);
      v16 = AcpiBuildRunMethodDispatch[v15];
      if ( !v16 )
      {
        v13 = 0;
LABEL_32:
        v6 = v14;
        continue;
      }
      if ( v15 != 2 )
        *(_DWORD *)(v6 + 28) = v15;
      v18 = _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 24), 1, v15);
      v16((PSLIST_ENTRY)v6);
      if ( (v18 & 0xFFFFFFFD) == 0 )
        goto LABEL_32;
    }
    while ( (__int64 *)v6 != &AcpiBuildRunMethodList );
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
