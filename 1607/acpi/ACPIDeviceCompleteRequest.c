/*
 * XREFs of ACPIDeviceCompleteRequest @ 0x1C00109E0
 * Callers:
 *     ACPIDevicePowerDpc @ 0x1C0011020 (ACPIDevicePowerDpc.c)
 *     ACPIDevicePowerProcessGenericPhase @ 0x1C0012650 (ACPIDevicePowerProcessGenericPhase.c)
 *     ACPIDevicePowerProcessPhase4 @ 0x1C0028488 (ACPIDevicePowerProcessPhase4.c)
 *     ACPIDevicePowerProcessInvalid @ 0x1C0049C20 (ACPIDevicePowerProcessInvalid.c)
 * Callees:
 *     ACPIDereferenceWaitWakePowerRequest @ 0x1C00062E4 (ACPIDereferenceWaitWakePowerRequest.c)
 *     ExFreeToNPagedLookasideList @ 0x1C000746C (ExFreeToNPagedLookasideList.c)
 *     ACPIPowerScheduleDpc @ 0x1C0010384 (ACPIPowerScheduleDpc.c)
 *     WPP_RECORDER_SF_qLqss @ 0x1C001341C (WPP_RECORDER_SF_qLqss.c)
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ACPIDeviceCompleteRequest(PSLIST_ENTRY ListEntry)
{
  __int64 v1; // rdi
  __int64 *v2; // rax
  _SLIST_ENTRY *Next; // rbp
  char v4; // r8
  __int64 *v6; // rdx
  __int64 v7; // rcx
  PSLIST_ENTRY v8; // rsi
  PSLIST_ENTRY v9; // rsi
  int v10; // eax
  int v11; // ecx
  KIRQL v12; // al
  _SLIST_ENTRY *v13; // rdx
  KIRQL v14; // r9
  PSLIST_ENTRY *v15; // rcx
  _SLIST_ENTRY *v16; // r8
  PSLIST_ENTRY *v17; // rdx
  _QWORD *v18; // rax
  _SLIST_ENTRY *v19; // rdx
  _SLIST_ENTRY *v20; // rcx
  _SLIST_ENTRY **v21; // rax
  _SLIST_ENTRY *v22; // rax
  _SLIST_ENTRY *v23; // r8
  _SLIST_ENTRY **v24; // rcx
  _SLIST_ENTRY *v25; // rdx
  _SLIST_ENTRY *v26; // rcx
  _SLIST_ENTRY **v27; // rax
  _SLIST_ENTRY *v28; // rax
  _SLIST_ENTRY *v29; // r8
  _SLIST_ENTRY **v30; // rcx
  KIRQL v31; // si
  int v32; // eax
  _SLIST_ENTRY *v33; // rcx
  PSLIST_ENTRY *v34; // rax
  _QWORD *v35; // rax
  _QWORD *v36; // rdx
  _QWORD *v37; // rax
  __int64 v38; // [rsp+48h] [rbp-10h]

  v1 = *((_QWORD *)&ListEntry[2].Next + 1);
  v2 = qword_1C002C340;
  Next = ListEntry[12].Next;
  v4 = 0;
  v6 = qword_1C002C340;
  if ( v1 )
  {
    v7 = *(_QWORD *)(v1 + 8);
    v4 = v1;
    if ( (v7 & 0x200000000000LL) != 0 )
    {
      v2 = *(__int64 **)(v1 + 560);
      if ( (v7 & 0x400000000000LL) != 0 )
        v6 = *(__int64 **)(v1 + 568);
    }
  }
  v38 = (__int64)v6;
  LOBYTE(v6) = 4;
  WPP_RECORDER_SF_qLqss(
    WPP_GLOBAL_Control->DeviceExtension,
    (_DWORD)v6,
    10,
    18,
    (__int64)&WPP_1563d0135a0a38916c89783620a3f0f9_Traceguids,
    (char)ListEntry,
    (char)ListEntry[16].Next,
    v4,
    (__int64)v2,
    v38);
  if ( LODWORD(ListEntry[3].Next) )
    goto LABEL_15;
  v8 = ListEntry + 4;
  while ( v8->Next != v8 )
  {
    v19 = v8->Next - 1;
    v20 = v19->Next;
    v21 = (_SLIST_ENTRY **)*((_QWORD *)&v19->Next + 1);
    if ( *(&v19->Next->Next + 1) != v19 || *v21 != v19 )
      __fastfail(3u);
    *v21 = v20;
    *((_QWORD *)&v20->Next + 1) = v21;
    v22 = v19 + 1;
    *((_QWORD *)&v19->Next + 1) = v19;
    v19->Next = v19;
    v23 = v19[1].Next;
    v24 = (_SLIST_ENTRY **)*((_QWORD *)&v19[1].Next + 1);
    if ( *(&v23->Next + 1) != &v19[1] || *v24 != v22 )
      __fastfail(3u);
    *v24 = v23;
    *((_QWORD *)&v23->Next + 1) = v24;
    *((_QWORD *)&v19[1].Next + 1) = v19 + 1;
    v22->Next = v22;
    ExFreeToNPagedLookasideList(&RequestDependencyLookAsideList, v19);
  }
  v9 = ListEntry + 5;
  while ( v9->Next != v9 )
  {
    v25 = v9->Next;
    v26 = v9->Next->Next;
    v27 = (_SLIST_ENTRY **)*((_QWORD *)&v9->Next->Next + 1);
    if ( (_SLIST_ENTRY *)*((_QWORD *)&v26->Next + 1) != v9->Next || *v27 != v25 )
      __fastfail(3u);
    *v27 = v26;
    *((_QWORD *)&v26->Next + 1) = v27;
    v28 = v25 + 1;
    *((_QWORD *)&v25->Next + 1) = v25;
    v25->Next = v25;
    v29 = v25[1].Next;
    v30 = (_SLIST_ENTRY **)*((_QWORD *)&v25[1].Next + 1);
    if ( *(&v29->Next + 1) != &v25[1] || *v30 != v28 )
      __fastfail(3u);
    *v30 = v29;
    *((_QWORD *)&v29->Next + 1) = v30;
    *((_QWORD *)&v25[1].Next + 1) = v25 + 1;
    v28->Next = v28;
    ExFreeToNPagedLookasideList(&RequestDependencyLookAsideList, v25);
  }
  v10 = *(_DWORD *)(v1 + 336);
  if ( !v10 )
  {
LABEL_13:
    v11 = *((_DWORD *)&ListEntry[3].Next + 2);
    if ( (v11 & 0x2000000) != 0 )
    {
      *((_DWORD *)&ListEntry[3].Next + 2) = v11 & 0xFDFFFFFF;
      _InterlockedDecrement(&AcpiPowerCurrentPagingPathTransitions);
    }
LABEL_15:
    if ( Next )
      ((void (__fastcall *)(__int64, _QWORD, _QWORD))Next)(
        v1,
        *((_QWORD *)&ListEntry[12].Next + 1),
        LODWORD(ListEntry[16].Next));
    v12 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerQueueLock);
    v13 = ListEntry->Next;
    v14 = v12;
    v15 = (PSLIST_ENTRY *)*((_QWORD *)&ListEntry->Next + 1);
    if ( *(&ListEntry->Next->Next + 1) != ListEntry || *v15 != ListEntry )
      __fastfail(3u);
    *v15 = v13;
    *((_QWORD *)&v13->Next + 1) = v15;
    v16 = ListEntry[1].Next;
    v17 = (PSLIST_ENTRY *)*((_QWORD *)&ListEntry[1].Next + 1);
    if ( *(&v16->Next + 1) != &ListEntry[1] || *v17 != &ListEntry[1] )
      __fastfail(3u);
    *v17 = v16;
    *((_QWORD *)&v16->Next + 1) = v17;
    if ( LODWORD(ListEntry[3].Next) != 4 )
    {
      v18 = (_QWORD *)(v1 + 536);
      if ( (_QWORD *)*v18 == v18 )
      {
        *(_QWORD *)(v1 + 528) = 0LL;
      }
      else
      {
        v36 = (_QWORD *)qword_1C0073F48;
        v37 = (_QWORD *)(*v18 - 16LL);
        if ( *(__int64 **)qword_1C0073F48 != &AcpiPowerQueueList )
          __fastfail(3u);
        *v37 = &AcpiPowerQueueList;
        v37[1] = v36;
        *v36 = v37;
        qword_1C0073F48 = (__int64)v37;
        *(_QWORD *)(v1 + 528) = v37;
      }
    }
    KeReleaseSpinLock(&AcpiPowerQueueLock, v14);
    if ( LODWORD(ListEntry[3].Next) == 2 )
    {
      ACPIDereferenceWaitWakePowerRequest((__int64)ListEntry);
    }
    else
    {
      ++dword_1C0074C1C;
      if ( ExQueryDepthSList(&RequestLookAsideList) < (unsigned __int16)word_1C0074C10 )
      {
        ExpInterlockedPushEntrySList(&RequestLookAsideList, ListEntry);
      }
      else
      {
        ++dword_1C0074C20;
        ((void (__fastcall *)(PSLIST_ENTRY))qword_1C0074C38)(ListEntry);
      }
    }
    return;
  }
  if ( BYTE4(ListEntry[3].Next) || SLODWORD(ListEntry[16].Next) >= 0 )
  {
    if ( v10 < *((_DWORD *)&ListEntry[6].Next + 2) )
      LODWORD(ListEntry[16].Next) = 0;
    goto LABEL_13;
  }
  v31 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerQueueLock);
  v32 = *(_DWORD *)(v1 + 336);
  *((_DWORD *)&ListEntry[6].Next + 3) = 0;
  *((_DWORD *)&ListEntry[6].Next + 2) = v32;
  BYTE4(ListEntry[3].Next) = 1;
  v33 = ListEntry->Next;
  v34 = (PSLIST_ENTRY *)*((_QWORD *)&ListEntry->Next + 1);
  if ( *(&ListEntry->Next->Next + 1) != ListEntry || *v34 != ListEntry )
    __fastfail(3u);
  *v34 = v33;
  *((_QWORD *)&v33->Next + 1) = v34;
  v35 = (_QWORD *)qword_1C0073F48;
  if ( *(__int64 **)qword_1C0073F48 != &AcpiPowerQueueList )
    __fastfail(3u);
  ListEntry->Next = (_SLIST_ENTRY *)&AcpiPowerQueueList;
  *((_QWORD *)&ListEntry->Next + 1) = v35;
  *v35 = ListEntry;
  qword_1C0073F48 = (__int64)ListEntry;
  ACPIPowerScheduleDpc();
  KeReleaseSpinLock(&AcpiPowerQueueLock, v31);
}
