/*
 * XREFs of ACPIDevicePowerDpc @ 0x1C0011020
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDevicePowerProcessBlockedItems @ 0x1C000E230 (ACPIDevicePowerProcessBlockedItems.c)
 *     WPP_RECORDER_SF_ @ 0x1C000E748 (WPP_RECORDER_SF_.c)
 *     ACPIDeviceCompleteRequest @ 0x1C00109E0 (ACPIDeviceCompleteRequest.c)
 *     ACPIDevicePowerProcessGenericPhase @ 0x1C0012650 (ACPIDevicePowerProcessGenericPhase.c)
 *     ACPIInternalMovePowerList @ 0x1C00133A4 (ACPIInternalMovePowerList.c)
 *     ACPIDeviceRecordDependencies @ 0x1C0025914 (ACPIDeviceRecordDependencies.c)
 *     ACPIDevicePowerProcessPhase3 @ 0x1C0027690 (ACPIDevicePowerProcessPhase3.c)
 *     ACPIDevicePowerProcessPhase4 @ 0x1C0028488 (ACPIDevicePowerProcessPhase4.c)
 *     ACPIDeviceRecordBlockedOnPhase3List @ 0x1C004AC1C (ACPIDeviceRecordBlockedOnPhase3List.c)
 *     ACPIIsPhase3ListEmptyOfUnblockedItems @ 0x1C004ACE8 (ACPIIsPhase3ListEmptyOfUnblockedItems.c)
 *     ACPIMovePowerListUnblockedItems @ 0x1C004B174 (ACPIMovePowerListUnblockedItems.c)
 */

void __fastcall ACPIDevicePowerDpc(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  int v4; // edx
  int v5; // eax
  __int64 v6; // r9
  PSLIST_ENTRY v7; // rcx
  int v8; // eax
  PSLIST_ENTRY *p_Next; // rbx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  __int64 i; // rcx
  PSLIST_ENTRY ListEntry[2]; // [rsp+30h] [rbp-38h] BYREF

  ListEntry[1] = (PSLIST_ENTRY)ListEntry;
  ListEntry[0] = (PSLIST_ENTRY)ListEntry;
  KeAcquireSpinLockAtDpcLevel(&AcpiPowerQueueLock);
  v5 = AcpiPowerDpcFlags;
  while ( (AcpiPowerDpcFlags & 2) != 0 )
  {
    AcpiPowerDpcFlags = v5 & 0xFFFFFFFD;
    if ( (__int64 *)AcpiPowerQueueList != &AcpiPowerQueueList )
      ACPIInternalMovePowerList(&AcpiPowerQueueList, ListEntry);
    KeReleaseSpinLockFromDpcLevel(&AcpiPowerQueueLock);
    if ( (__int64 *)AcpiPowerPhase3List == &AcpiPowerPhase3List )
    {
      if ( (__int64 *)AcpiPowerBlockedOnPhase3List != &AcpiPowerBlockedOnPhase3List )
        ACPIInternalMovePowerList(&AcpiPowerBlockedOnPhase3List, ListEntry);
    }
    else
    {
      if ( (PSLIST_ENTRY *)ListEntry[0] == ListEntry )
        goto LABEL_9;
      ACPIDeviceRecordBlockedOnPhase3List(ListEntry);
    }
    if ( (PSLIST_ENTRY *)ListEntry[0] != ListEntry )
    {
      ACPIDeviceRecordDependencies(ListEntry);
      ACPIInternalMovePowerList(ListEntry, &AcpiPowerPhase0List);
    }
LABEL_9:
    if ( (__int64 *)AcpiPowerBlockedOnDependencyList != &AcpiPowerBlockedOnDependencyList )
      ACPIDevicePowerProcessBlockedItems();
    if ( (__int64 *)AcpiPowerPhase0List != &AcpiPowerPhase0List )
    {
      v8 = ACPIDevicePowerProcessGenericPhase(&AcpiPowerPhase0List, &AcpiDevicePowerProcessPhase0Dispatch, 5LL, 0LL);
      if ( v8 >= 0 && v8 != 259 )
        ACPIInternalMovePowerList(&AcpiPowerPhase0List, &AcpiPowerPhase1List);
    }
    if ( (__int64 *)AcpiPowerPhase1List == &AcpiPowerPhase1List )
      goto LABEL_13;
    if ( (__int64 *)AcpiPowerPhase0List == &AcpiPowerPhase0List )
    {
      v10 = ACPIDevicePowerProcessGenericPhase(&AcpiPowerPhase1List, &AcpiDevicePowerProcessPhase1Dispatch, 7LL, 0LL);
      if ( v10 >= 0 && v10 != 259 )
        ACPIInternalMovePowerList(&AcpiPowerPhase1List, &AcpiPowerPhase2List);
LABEL_13:
      if ( (__int64 *)AcpiPowerPhase0List == &AcpiPowerPhase0List )
      {
        if ( (__int64 *)AcpiPowerPhase2List != &AcpiPowerPhase2List
          && (__int64 *)AcpiPowerPhase1List == &AcpiPowerPhase1List )
        {
          v11 = ACPIDevicePowerProcessGenericPhase(
                  &AcpiPowerPhase2List,
                  &AcpiDevicePowerProcessPhase2Dispatch,
                  6LL,
                  0LL);
          if ( v11 >= 0 && v11 != 259 )
            ACPIInternalMovePowerList(&AcpiPowerPhase2List, &AcpiPowerPhase3List);
        }
        if ( (__int64 *)AcpiPowerPhase3List != &AcpiPowerPhase3List
          && (__int64 *)AcpiPowerPhase1List == &AcpiPowerPhase1List
          && (__int64 *)AcpiPowerPhase0List == &AcpiPowerPhase0List
          && (__int64 *)AcpiPowerPhase2List == &AcpiPowerPhase2List )
        {
          v12 = ACPIDevicePowerProcessPhase3();
          if ( v12 >= 0 )
          {
            if ( v12 == 259 )
            {
              if ( (unsigned __int8)ACPIIsPhase3ListEmptyOfUnblockedItems() )
              {
                ACPIMovePowerListUnblockedItems(&AcpiPowerPhase3List);
                for ( i = AcpiPowerPhase3List; (__int64 *)i != &AcpiPowerPhase3List; i = *(_QWORD *)i )
                  *(_DWORD *)(i + 56) &= 0xEEFFFFFF;
              }
            }
            else
            {
              ACPIInternalMovePowerList(&AcpiPowerPhase3List, &AcpiPowerPhase4List);
            }
          }
        }
      }
    }
    if ( AcpiPowerPhase4List != (PSLIST_ENTRY)&AcpiPowerPhase4List )
    {
      v13 = ACPIDevicePowerProcessPhase4();
      if ( v13 >= 0 && v13 != 259 )
        ACPIInternalMovePowerList(&AcpiPowerPhase4List, &AcpiPowerPhase5List);
    }
    if ( (__int64 *)AcpiPowerPhase5List != &AcpiPowerPhase5List )
    {
      LOBYTE(v6) = 1;
      ACPIDevicePowerProcessGenericPhase(&AcpiPowerPhase5List, &AcpiDevicePowerProcessPhase5Dispatch, 9LL, v6);
    }
    KeAcquireSpinLockAtDpcLevel(&AcpiPowerQueueLock);
    v5 = AcpiPowerDpcFlags;
  }
  if ( (__int64 *)AcpiPowerBlockedOnDependencyList == &AcpiPowerBlockedOnDependencyList
    && (__int64 *)AcpiPowerPhase0List == &AcpiPowerPhase0List
    && (__int64 *)AcpiPowerPhase5List == &AcpiPowerPhase5List
    && (__int64 *)AcpiPowerPhase1List == &AcpiPowerPhase1List
    && (__int64 *)AcpiPowerPhase2List == &AcpiPowerPhase2List
    && (__int64 *)AcpiPowerPhase3List == &AcpiPowerPhase3List
    && AcpiPowerPhase4List == (PSLIST_ENTRY)&AcpiPowerPhase4List )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v4,
      10,
      50,
      (__int64)&WPP_1563d0135a0a38916c89783620a3f0f9_Traceguids);
    if ( (__int64 *)AcpiPowerSynchronizeList != &AcpiPowerSynchronizeList )
      ACPIInternalMovePowerList(&AcpiPowerSynchronizeList, ListEntry);
    v5 = AcpiPowerDpcFlags;
  }
  AcpiPowerDpcFlags = v5 & 0xFFFFFFFE;
  KeReleaseSpinLockFromDpcLevel(&AcpiPowerQueueLock);
  v7 = ListEntry[0];
  if ( (PSLIST_ENTRY *)ListEntry[0] != ListEntry )
  {
    do
    {
      p_Next = &v7->Next->Next;
      ACPIDeviceCompleteRequest(v7);
      v7 = (PSLIST_ENTRY)p_Next;
    }
    while ( p_Next != ListEntry );
  }
}
