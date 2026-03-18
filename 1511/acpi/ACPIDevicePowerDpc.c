/*
 * XREFs of ACPIDevicePowerDpc @ 0x1C001C040
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDevicePowerProcessGenericPhase @ 0x1C001C470 (ACPIDevicePowerProcessGenericPhase.c)
 *     ACPIInternalMovePowerList @ 0x1C001C604 (ACPIInternalMovePowerList.c)
 *     ACPIDeviceCompleteRequest @ 0x1C001C684 (ACPIDeviceCompleteRequest.c)
 *     ACPIIsPowerRequestBlocked @ 0x1C001C808 (ACPIIsPowerRequestBlocked.c)
 *     ACPIDeviceRecordDependencies @ 0x1C001C82C (ACPIDeviceRecordDependencies.c)
 *     ACPIDevicePowerProcessPhase3 @ 0x1C001CA64 (ACPIDevicePowerProcessPhase3.c)
 *     ACPIDeviceRecordBlockedOnPhase3List @ 0x1C00395A4 (ACPIDeviceRecordBlockedOnPhase3List.c)
 *     ACPIIsPhase3ListEmptyOfUnblockedItems @ 0x1C0039670 (ACPIIsPhase3ListEmptyOfUnblockedItems.c)
 *     ACPIMovePowerListUnblockedItems @ 0x1C00398CC (ACPIMovePowerListUnblockedItems.c)
 */

void __fastcall ACPIDevicePowerDpc(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  int v4; // eax
  __int64 **v5; // rdx
  __int64 v6; // r8
  __int64 *v7; // r9
  __int64 *v8; // rcx
  PSLIST_ENTRY v9; // rcx
  int v10; // eax
  PSLIST_ENTRY *p_Next; // rbx
  __int64 *v12; // rcx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  __int64 v16; // rdi
  __int64 **v17; // rax
  __int64 v18; // rax
  __int64 i; // rcx
  int v20; // eax
  __int64 v21; // rcx
  _QWORD *v22; // rsi
  _QWORD *v23; // r14
  _QWORD *v24; // rbx
  __int64 v25; // rbp
  PSLIST_ENTRY v26; // rbx
  PSLIST_ENTRY v27; // rcx
  PSLIST_ENTRY ListEntry[7]; // [rsp+20h] [rbp-38h] BYREF

  ListEntry[1] = (PSLIST_ENTRY)ListEntry;
  ListEntry[0] = (PSLIST_ENTRY)ListEntry;
  KeAcquireSpinLockAtDpcLevel(&AcpiPowerQueueLock);
  v4 = AcpiPowerDpcFlags;
  while ( (AcpiPowerDpcFlags & 2) != 0 )
  {
    AcpiPowerDpcFlags = v4 & 0xFFFFFFFD;
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
    v8 = (__int64 *)AcpiPowerBlockedOnDependencyList;
    if ( (__int64 *)AcpiPowerBlockedOnDependencyList != &AcpiPowerBlockedOnDependencyList )
    {
      do
      {
        if ( !(unsigned __int8)ACPIIsPowerRequestBlocked(v8, v5, v6, *v8) )
        {
          v17 = (__int64 **)v12[1];
          if ( (__int64 *)v7[1] != v12 || *v17 != v12 )
            __fastfail(3u);
          *v17 = v7;
          v7[1] = (__int64)v17;
          v18 = v12[12];
          v5 = *(__int64 ***)(v18 + 8);
          *v12 = v18;
          v12[1] = (__int64)v5;
          if ( *v5 != (__int64 *)v18 )
            __fastfail(3u);
          *v5 = v12;
          *(_QWORD *)(v18 + 8) = v12;
          v12[12] = 0LL;
        }
        v8 = v7;
      }
      while ( v7 != &AcpiPowerBlockedOnDependencyList );
    }
    if ( (__int64 *)AcpiPowerPhase0List != &AcpiPowerPhase0List )
    {
      v10 = ACPIDevicePowerProcessGenericPhase(&AcpiPowerPhase0List, &AcpiDevicePowerProcessPhase0Dispatch, 5LL, 0LL);
      if ( v10 >= 0 && v10 != 259 )
        ACPIInternalMovePowerList(&AcpiPowerPhase0List, &AcpiPowerPhase1List);
    }
    if ( (__int64 *)AcpiPowerPhase1List == &AcpiPowerPhase1List )
      goto LABEL_12;
    if ( (__int64 *)AcpiPowerPhase0List == &AcpiPowerPhase0List )
    {
      v13 = ACPIDevicePowerProcessGenericPhase(&AcpiPowerPhase1List, &AcpiDevicePowerProcessPhase1Dispatch, 7LL, 0LL);
      if ( v13 >= 0 && v13 != 259 )
        ACPIInternalMovePowerList(&AcpiPowerPhase1List, &AcpiPowerPhase2List);
LABEL_12:
      if ( (__int64 *)AcpiPowerPhase0List == &AcpiPowerPhase0List )
      {
        if ( (__int64 *)AcpiPowerPhase2List != &AcpiPowerPhase2List
          && (__int64 *)AcpiPowerPhase1List == &AcpiPowerPhase1List )
        {
          v14 = ACPIDevicePowerProcessGenericPhase(
                  &AcpiPowerPhase2List,
                  &AcpiDevicePowerProcessPhase2Dispatch,
                  6LL,
                  0LL);
          if ( v14 >= 0 && v14 != 259 )
            ACPIInternalMovePowerList(&AcpiPowerPhase2List, &AcpiPowerPhase3List);
        }
        if ( (__int64 *)AcpiPowerPhase3List != &AcpiPowerPhase3List
          && (__int64 *)AcpiPowerPhase1List == &AcpiPowerPhase1List
          && (__int64 *)AcpiPowerPhase0List == &AcpiPowerPhase0List
          && (__int64 *)AcpiPowerPhase2List == &AcpiPowerPhase2List )
        {
          v15 = ACPIDevicePowerProcessPhase3();
          if ( v15 >= 0 )
          {
            if ( v15 == 259 )
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
      KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
      v16 = AcpiPowerNodeList;
      while ( (__int64 *)v16 != &AcpiPowerNodeList )
      {
        v20 = *(_DWORD *)(v16 + 16);
        v21 = v16;
        v16 = *(_QWORD *)v16;
        if ( (*(_QWORD *)&v20 & 0x10000LL) != 0 )
        {
          if ( (__int64 *)AcpiPowerPhase0List == &AcpiPowerPhase0List
            && (__int64 *)AcpiPowerPhase1List == &AcpiPowerPhase1List
            && (__int64 *)AcpiPowerPhase2List == &AcpiPowerPhase2List )
          {
            _InterlockedAnd64((volatile signed __int64 *)(v21 + 16), 0xFFFFFFFFFFFEFFFFuLL);
          }
          v22 = *(_QWORD **)(v21 + 48);
          v23 = (_QWORD *)(v21 + 48);
          while ( v22 != v23 )
          {
            v24 = v22 - 5;
            v22 = (_QWORD *)*v22;
            KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
            v25 = v24[4];
            v26 = AcpiPowerPhase4List;
            while ( v26 != (PSLIST_ENTRY)&AcpiPowerPhase4List )
            {
              v27 = v26;
              v26 = v26->Next;
              if ( *((_QWORD *)&v27[2].Next + 1) == v25 )
              {
                LODWORD(v27[16].Next) = -1072431071;
                ACPIDeviceCompleteRequest(v27);
              }
            }
            KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
          }
        }
      }
      KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
      ACPIInternalMovePowerList(&AcpiPowerPhase4List, &AcpiPowerPhase5List);
    }
    if ( (__int64 *)AcpiPowerPhase5List != &AcpiPowerPhase5List )
    {
      LOBYTE(v7) = 1;
      ACPIDevicePowerProcessGenericPhase(&AcpiPowerPhase5List, &AcpiDevicePowerProcessPhase5Dispatch, 9LL, v7);
    }
    KeAcquireSpinLockAtDpcLevel(&AcpiPowerQueueLock);
    v4 = AcpiPowerDpcFlags;
  }
  if ( (__int64 *)AcpiPowerPhase0List == &AcpiPowerPhase0List
    && (__int64 *)AcpiPowerBlockedOnDependencyList == &AcpiPowerBlockedOnDependencyList
    && (__int64 *)AcpiPowerPhase5List == &AcpiPowerPhase5List
    && (__int64 *)AcpiPowerPhase1List == &AcpiPowerPhase1List
    && (__int64 *)AcpiPowerPhase2List == &AcpiPowerPhase2List
    && (__int64 *)AcpiPowerPhase3List == &AcpiPowerPhase3List
    && AcpiPowerPhase4List == (PSLIST_ENTRY)&AcpiPowerPhase4List
    && (__int64 *)AcpiPowerSynchronizeList != &AcpiPowerSynchronizeList )
  {
    ACPIInternalMovePowerList(&AcpiPowerSynchronizeList, ListEntry);
    v4 = AcpiPowerDpcFlags;
  }
  AcpiPowerDpcFlags = v4 & 0xFFFFFFFE;
  KeReleaseSpinLockFromDpcLevel(&AcpiPowerQueueLock);
  v9 = ListEntry[0];
  if ( (PSLIST_ENTRY *)ListEntry[0] != ListEntry )
  {
    do
    {
      p_Next = &v9->Next->Next;
      ACPIDeviceCompleteRequest(v9);
      v9 = (PSLIST_ENTRY)p_Next;
    }
    while ( p_Next != ListEntry );
  }
}
