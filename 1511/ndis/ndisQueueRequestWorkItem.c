/*
 * XREFs of ndisQueueRequestWorkItem @ 0x1C000A40C
 * Callers:
 *     ndisFOidRequestCompleteInternal @ 0x1C00066F0 (ndisFOidRequestCompleteInternal.c)
 *     ndisQueueOidRequest @ 0x1C0007420 (ndisQueueOidRequest.c)
 *     ndisMOidRequestCompleteInternal @ 0x1C0025A0C (ndisMOidRequestCompleteInternal.c)
 * Callees:
 *     ndisReferenceWithTag @ 0x1C0007F00 (ndisReferenceWithTag.c)
 *     ndisDereferenceMiniport @ 0x1C000B190 (ndisDereferenceMiniport.c)
 *     ndisReferenceRefNoCheck @ 0x1C000B3FC (ndisReferenceRefNoCheck.c)
 *     ndisDereferenceRef @ 0x1C001C6C4 (ndisDereferenceRef.c)
 *     ndisReferenceMiniportNoCheck @ 0x1C0024BB8 (ndisReferenceMiniportNoCheck.c)
 *     WPP_SF_qq @ 0x1C0026510 (WPP_SF_qq.c)
 *     memset @ 0x1C0026F40 (memset.c)
 *     WPP_SF_qD @ 0x1C0038424 (WPP_SF_qD.c)
 *     WPP_SF_qLq @ 0x1C00409D8 (WPP_SF_qLq.c)
 *     WPP_SF_qqd @ 0x1C004C3E8 (WPP_SF_qqd.c)
 */

__int64 __fastcall ndisQueueRequestWorkItem(_LIST_ENTRY *a1, __int64 a2, unsigned int a3)
{
  _LIST_ENTRY *v3; // rbx
  _LIST_ENTRY *v5; // r15
  _LIST_ENTRY *v7; // r13
  unsigned int v8; // edi
  _LIST_ENTRY *PoolWithTag; // rax
  _LIST_ENTRY *v10; // rsi
  __int64 v11; // rdx
  KSPIN_LOCK *p_Blink; // r13
  char v13; // r14
  KIRQL v14; // al
  unsigned __int16 Flink; // cx
  KIRQL v16; // dl
  __int64 v17; // rdx
  _LIST_ENTRY *v18; // rdx
  _LIST_ENTRY **v19; // rax
  _LIST_ENTRY *j; // rcx
  _LIST_ENTRY *v21; // rcx
  KSPIN_LOCK *v22; // rcx
  KIRQL v23; // bl
  struct _NDIS_REFCOUNT_BLOCK *Blink; // rcx
  _LIST_ENTRY *v27; // r14
  char v28; // dl
  _LIST_ENTRY **v29; // rax
  _LIST_ENTRY *i; // rcx
  _LIST_ENTRY *v31; // rcx
  _LIST_ENTRY *retaddr; // [rsp+68h] [rbp+0h]
  KIRQL NewIrql; // [rsp+88h] [rbp+20h]
  KIRQL NewIrqla; // [rsp+88h] [rbp+20h]
  KIRQL NewIrqlb; // [rsp+88h] [rbp+20h]

  v3 = 0LL;
  v5 = 0LL;
  v7 = a1;
  v8 = -1073741823;
  if ( (unsigned __int8)byte_1C0083712 >= 4u )
    WPP_SF_qLq(18LL, &WPP_7d93857a3aef6cac0cffd1e7320acdf9_Traceguids, a1, a3, a2);
  PoolWithTag = (_LIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x50uLL, 0x6977444Eu);
  v10 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v8 = -1073741670;
    goto LABEL_68;
  }
  memset(PoolWithTag, 0, 0x50uLL);
  if ( a3 == 17 )
  {
    v3 = v7;
  }
  else
  {
    if ( a3 != 5 )
    {
LABEL_67:
      ExFreePoolWithTag(v10, 0);
LABEL_68:
      if ( (unsigned __int8)byte_1C0083712 >= 4u )
        WPP_SF_qqd(20LL, &WPP_7d93857a3aef6cac0cffd1e7320acdf9_Traceguids, v7, a2, v8);
      return v8;
    }
    v5 = v7;
  }
  v10[3].Blink = v7;
  if ( v3 )
  {
    if ( !a2 )
    {
      LOBYTE(v11) = 69;
      ndisReferenceMiniportNoCheck(v3, v11);
      goto LABEL_50;
    }
    p_Blink = (KSPIN_LOCK *)&v3[281];
    v13 = 1;
    NewIrqlb = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&v3[281]);
    if ( !BYTE4(v3[281].Blink) )
    {
      Blink = (struct _NDIS_REFCOUNT_BLOCK *)v3[309].Blink;
      if ( Blink )
        ndisReferenceWithTag(Blink, 0x45u);
      if ( LODWORD(v3[281].Blink)++ != -1 )
        goto LABEL_36;
      LODWORD(v3[281].Blink) = -1;
    }
    v13 = 0;
LABEL_36:
    if ( (unsigned __int8)byte_1C008371B >= 4u )
      WPP_SF_qD(12LL, &WPP_16c28ebb9fa84dacc642b00af20fc2f4_Traceguids, v3, LODWORD(v3[281].Blink));
    v16 = NewIrqlb;
    goto LABEL_14;
  }
  if ( !v5 )
    goto LABEL_67;
  if ( a2 )
  {
    p_Blink = (KSPIN_LOCK *)&v5[19].Blink;
    v13 = 0;
    v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&v5[19].Blink);
    NewIrql = v14;
    if ( !BYTE2(v5[20].Flink) )
    {
      Flink = (unsigned __int16)v5[20].Flink;
      if ( Flink < 0xFFEBu )
      {
        LOWORD(v5[20].Flink) = Flink + 1;
        ndisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v5[20].Blink, 0xCu);
        v14 = NewIrql;
        v13 = 1;
      }
    }
    v16 = v14;
LABEL_14:
    KeReleaseSpinLock(p_Blink, v16);
    v7 = a1;
    goto LABEL_15;
  }
  LOBYTE(v11) = 12;
  ndisReferenceRefNoCheck(&v5[19].Blink, v11);
LABEL_50:
  v13 = 1;
LABEL_15:
  if ( v13 != 1 )
    goto LABEL_67;
  if ( a2 )
  {
    if ( v3 )
    {
      NewIrqla = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&v3[6]);
      v27 = (_LIST_ENTRY *)(a2 + 72);
      v3[32].Blink = (_LIST_ENTRY *)KeGetCurrentThread();
      LODWORD(v3[116].Flink) = 2295234;
      v28 = byte_1C0083712;
      if ( (unsigned __int8)byte_1C0083712 >= 4u )
      {
        WPP_SF_qq(21LL, &WPP_7d93857a3aef6cac0cffd1e7320acdf9_Traceguids, v3, a2);
        v28 = byte_1C0083712;
      }
      v27->Flink = 0LL;
      *(_QWORD *)(a2 + 80) = 0LL;
      if ( (HIDWORD(v3[7].Blink) & 0x100) == 0 )
      {
        v29 = &v3[137].Blink;
        for ( i = v3[137].Blink; i != (_LIST_ENTRY *)v29; i = i->Flink )
        {
          if ( i == v27 )
            goto LABEL_46;
        }
        v31 = v3[138].Flink;
        v8 = 0;
        v27->Flink = (_LIST_ENTRY *)v29;
        *(_QWORD *)(a2 + 80) = v31;
        if ( (_LIST_ENTRY **)v31->Flink != v29 )
          __fastfail(3u);
        v31->Flink = v27;
        v3[138].Flink = v27;
      }
LABEL_46:
      if ( (unsigned __int8)v28 >= 4u )
        WPP_SF_qqd(22LL, &WPP_7d93857a3aef6cac0cffd1e7320acdf9_Traceguids, v3, a2, v8);
      v3[32].Blink = 0LL;
      v22 = (KSPIN_LOCK *)&v3[6];
      LODWORD(v3[116].Flink) = 0;
    }
    else
    {
      NewIrqla = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&v5[2].Flink[6]);
      v5[2].Flink[32].Blink = (_LIST_ENTRY *)KeGetCurrentThread();
      LODWORD(v5[2].Flink[116].Flink) = 2295242;
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)&v5[9]);
      v18 = (_LIST_ENTRY *)(a2 + 72);
      v5[9].Blink = (_LIST_ENTRY *)KeGetCurrentThread();
      LODWORD(v5[10].Flink) = 2295243;
      *(_QWORD *)(a2 + 72) = 0LL;
      *(_QWORD *)(a2 + 80) = 0LL;
      if ( (HIDWORD(v5[2].Flink[7].Blink) & 0x100) == 0 )
      {
        v19 = &v5[10].Blink;
        for ( j = v5[10].Blink; j != (_LIST_ENTRY *)v19; j = j->Flink )
        {
          if ( j == v18 )
            goto LABEL_23;
        }
        v21 = v5[11].Flink;
        v8 = 0;
        v18->Flink = (_LIST_ENTRY *)v19;
        *(_QWORD *)(a2 + 80) = v21;
        if ( (_LIST_ENTRY **)v21->Flink != v19 )
          __fastfail(3u);
        v21->Flink = v18;
        v5[11].Flink = v18;
      }
LABEL_23:
      v5[9].Blink = 0LL;
      LODWORD(v5[10].Flink) = 0;
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)&v5[9]);
      v5[2].Flink[32].Blink = 0LL;
      LODWORD(v5[2].Flink[116].Flink) = 0;
      v22 = (KSPIN_LOCK *)&v5[2].Flink[6];
    }
    KeReleaseSpinLock(v22, NewIrqla);
  }
  else
  {
    v8 = 0;
  }
  if ( v8 )
  {
    if ( v3 )
    {
      LOBYTE(v17) = 69;
      ndisDereferenceMiniport(v3, v17);
    }
    else
    {
      ndisDereferenceRef((PKSPIN_LOCK)&v5[19].Blink);
    }
    goto LABEL_67;
  }
  v10[2].Blink = 0LL;
  v10[2].Flink = retaddr;
  v10->Flink = 0LL;
  v10[1].Flink = (_LIST_ENTRY *)ndisDoOidRequests;
  v10[1].Blink = v10;
  KeInsertQueue(&ndisWorkerQueue, v10);
  _InterlockedAdd(&ndisWorkerQueueItemCount, 1u);
  v23 = KeAcquireSpinLockRaiseToDpc(&ndisThreadPoolLock);
  if ( !LOBYTE(WPP_MAIN_CB.AlignmentRequirement) )
  {
    LOBYTE(WPP_MAIN_CB.AlignmentRequirement) = 1;
    KeSetTimer(&ndisThreadPoolTimer, *(LARGE_INTEGER *)&WPP_MAIN_CB.DeviceQueue.Type, 0LL);
  }
  KeReleaseSpinLock(&ndisThreadPoolLock, v23);
  v8 = 259;
  if ( (unsigned __int8)byte_1C0083712 >= 4u )
  {
    WPP_SF_qD(19LL, &WPP_7d93857a3aef6cac0cffd1e7320acdf9_Traceguids, v10, 259LL);
    goto LABEL_68;
  }
  return v8;
}
