/*
 * XREFs of ACPIDeviceCompleteRequest @ 0x1C001C43C
 * Callers:
 *     ACPIDevicePowerDpc @ 0x1C001BE00 (ACPIDevicePowerDpc.c)
 *     ACPIDevicePowerProcessGenericPhase @ 0x1C001C230 (ACPIDevicePowerProcessGenericPhase.c)
 *     ACPIDevicePowerProcessInvalid @ 0x1C0037FC0 (ACPIDevicePowerProcessInvalid.c)
 * Callees:
 *     ACPIDereferenceWaitWakePowerRequest @ 0x1C0006C14 (ACPIDereferenceWaitWakePowerRequest.c)
 *     ACPIPowerScheduleDpc @ 0x1C000AE54 (ACPIPowerScheduleDpc.c)
 *     ExFreeToNPagedLookasideList @ 0x1C0021420 (ExFreeToNPagedLookasideList.c)
 *     _guard_dispatch_icall_nop @ 0x1C00237F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ACPIDeviceCompleteRequest(PSLIST_ENTRY ListEntry)
{
  _SLIST_ENTRY *Next; // rbp
  __int64 v3; // rdi
  PSLIST_ENTRY v4; // rsi
  PSLIST_ENTRY v5; // rsi
  int v6; // eax
  int v7; // ecx
  KIRQL v8; // al
  _SLIST_ENTRY *v9; // rdx
  KIRQL v10; // r9
  PSLIST_ENTRY *v11; // rcx
  _SLIST_ENTRY *v12; // r8
  PSLIST_ENTRY *v13; // rdx
  _QWORD *v14; // rax
  _SLIST_ENTRY *v15; // rdx
  _SLIST_ENTRY *v16; // rcx
  _SLIST_ENTRY **v17; // rax
  _SLIST_ENTRY *v18; // rax
  _SLIST_ENTRY *v19; // r8
  _SLIST_ENTRY **v20; // rcx
  _SLIST_ENTRY *v21; // rdx
  _SLIST_ENTRY *v22; // rcx
  _SLIST_ENTRY **v23; // rax
  _SLIST_ENTRY *v24; // rax
  _SLIST_ENTRY *v25; // r8
  _SLIST_ENTRY **v26; // rcx
  KIRQL v27; // si
  int v28; // eax
  _SLIST_ENTRY *v29; // rcx
  PSLIST_ENTRY *v30; // rax
  __int64 **v31; // rax
  __int64 **v32; // rdx
  __int64 *v33; // rax

  Next = ListEntry[12].Next;
  v3 = *((_QWORD *)&ListEntry[2].Next + 1);
  if ( LODWORD(ListEntry[3].Next) )
  {
LABEL_13:
    if ( Next )
      ((void (__fastcall *)(__int64, _QWORD, _QWORD))Next)(
        v3,
        *((_QWORD *)&ListEntry[12].Next + 1),
        LODWORD(ListEntry[16].Next));
    v8 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerQueueLock);
    v9 = ListEntry->Next;
    v10 = v8;
    v11 = (PSLIST_ENTRY *)*((_QWORD *)&ListEntry->Next + 1);
    if ( *(&ListEntry->Next->Next + 1) != ListEntry || *v11 != ListEntry )
      __fastfail(3u);
    *v11 = v9;
    *((_QWORD *)&v9->Next + 1) = v11;
    v12 = ListEntry[1].Next;
    v13 = (PSLIST_ENTRY *)*((_QWORD *)&ListEntry[1].Next + 1);
    if ( *(&v12->Next + 1) != &ListEntry[1] || *v13 != &ListEntry[1] )
      __fastfail(3u);
    *v13 = v12;
    *((_QWORD *)&v12->Next + 1) = v13;
    if ( LODWORD(ListEntry[3].Next) != 4 )
    {
      v14 = (_QWORD *)(v3 + 528);
      if ( (_QWORD *)*v14 == v14 )
      {
        *(_QWORD *)(v3 + 520) = 0LL;
      }
      else
      {
        v32 = (__int64 **)qword_1C0059B48;
        v33 = (__int64 *)(*v14 - 16LL);
        *v33 = (__int64)&AcpiPowerQueueList;
        v33[1] = (__int64)v32;
        if ( *v32 != &AcpiPowerQueueList )
          __fastfail(3u);
        *v32 = v33;
        qword_1C0059B48 = (__int64)v33;
        *(_QWORD *)(v3 + 520) = v33;
      }
    }
    KeReleaseSpinLock(&AcpiPowerQueueLock, v10);
    if ( LODWORD(ListEntry[3].Next) == 2 )
    {
      ACPIDereferenceWaitWakePowerRequest((__int64)ListEntry);
    }
    else
    {
      ++dword_1C005A79C;
      if ( ExQueryDepthSList(&RequestLookAsideList) < (unsigned __int16)word_1C005A790 )
      {
        ExpInterlockedPushEntrySList(&RequestLookAsideList, ListEntry);
      }
      else
      {
        ++dword_1C005A7A0;
        ((void (__fastcall *)(PSLIST_ENTRY))qword_1C005A7B8)(ListEntry);
      }
    }
    return;
  }
  v4 = ListEntry + 4;
  while ( v4->Next != v4 )
  {
    v15 = v4->Next - 1;
    v16 = v15->Next;
    v17 = (_SLIST_ENTRY **)*((_QWORD *)&v15->Next + 1);
    if ( *(&v15->Next->Next + 1) != v15 || *v17 != v15 )
      __fastfail(3u);
    *v17 = v16;
    *((_QWORD *)&v16->Next + 1) = v17;
    v18 = v15 + 1;
    *((_QWORD *)&v15->Next + 1) = v15;
    v15->Next = v15;
    v19 = v15[1].Next;
    v20 = (_SLIST_ENTRY **)*((_QWORD *)&v15[1].Next + 1);
    if ( *(&v19->Next + 1) != &v15[1] || *v20 != v18 )
      __fastfail(3u);
    *v20 = v19;
    *((_QWORD *)&v19->Next + 1) = v20;
    *((_QWORD *)&v15[1].Next + 1) = v15 + 1;
    v18->Next = v18;
    ExFreeToNPagedLookasideList(&RequestDependencyLookAsideList, v15);
  }
  v5 = ListEntry + 5;
  while ( v5->Next != v5 )
  {
    v21 = v5->Next;
    v22 = v5->Next->Next;
    v23 = (_SLIST_ENTRY **)*((_QWORD *)&v5->Next->Next + 1);
    if ( (_SLIST_ENTRY *)*((_QWORD *)&v22->Next + 1) != v5->Next || *v23 != v21 )
      __fastfail(3u);
    *v23 = v22;
    *((_QWORD *)&v22->Next + 1) = v23;
    v24 = v21 + 1;
    *((_QWORD *)&v21->Next + 1) = v21;
    v21->Next = v21;
    v25 = v21[1].Next;
    v26 = (_SLIST_ENTRY **)*((_QWORD *)&v21[1].Next + 1);
    if ( *(&v25->Next + 1) != &v21[1] || *v26 != v24 )
      __fastfail(3u);
    *v26 = v25;
    *((_QWORD *)&v25->Next + 1) = v26;
    *((_QWORD *)&v21[1].Next + 1) = v21 + 1;
    v24->Next = v24;
    ExFreeToNPagedLookasideList(&RequestDependencyLookAsideList, v21);
  }
  v6 = *(_DWORD *)(v3 + 328);
  if ( !v6 )
  {
LABEL_11:
    v7 = *((_DWORD *)&ListEntry[3].Next + 2);
    if ( (v7 & 0x2000000) != 0 )
    {
      *((_DWORD *)&ListEntry[3].Next + 2) = v7 & 0xFDFFFFFF;
      _InterlockedDecrement(&AcpiPowerCurrentPagingPathTransitions);
    }
    goto LABEL_13;
  }
  if ( BYTE4(ListEntry[3].Next) || SLODWORD(ListEntry[16].Next) >= 0 )
  {
    if ( v6 < *((_DWORD *)&ListEntry[6].Next + 2) )
      LODWORD(ListEntry[16].Next) = 0;
    goto LABEL_11;
  }
  v27 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerQueueLock);
  v28 = *(_DWORD *)(v3 + 328);
  *((_DWORD *)&ListEntry[6].Next + 3) = 0;
  *((_DWORD *)&ListEntry[6].Next + 2) = v28;
  BYTE4(ListEntry[3].Next) = 1;
  v29 = ListEntry->Next;
  v30 = (PSLIST_ENTRY *)*((_QWORD *)&ListEntry->Next + 1);
  if ( *(&ListEntry->Next->Next + 1) != ListEntry || *v30 != ListEntry )
    __fastfail(3u);
  *v30 = v29;
  *((_QWORD *)&v29->Next + 1) = v30;
  v31 = (__int64 **)qword_1C0059B48;
  ListEntry->Next = (_SLIST_ENTRY *)&AcpiPowerQueueList;
  *((_QWORD *)&ListEntry->Next + 1) = v31;
  if ( *v31 != &AcpiPowerQueueList )
    __fastfail(3u);
  *v31 = (__int64 *)ListEntry;
  qword_1C0059B48 = (__int64)ListEntry;
  ACPIPowerScheduleDpc();
  KeReleaseSpinLock(&AcpiPowerQueueLock, v27);
}
