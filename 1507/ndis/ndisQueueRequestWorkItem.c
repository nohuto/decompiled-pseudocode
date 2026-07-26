/*
 * XREFs of ndisQueueRequestWorkItem @ 0x1C000895C
 * Callers:
 *     ndisFOidRequestCompleteInternal @ 0x1C0004BD0 (ndisFOidRequestCompleteInternal.c)
 *     ndisQueueOidRequest @ 0x1C0005360 (ndisQueueOidRequest.c)
 *     ndisMOidRequestCompleteInternal @ 0x1C0040E6C (ndisMOidRequestCompleteInternal.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0003280 (ndisDereferenceMiniport.c)
 *     ndisReferenceWithTag @ 0x1C00068E0 (ndisReferenceWithTag.c)
 *     ndisDereferenceRef @ 0x1C00172CC (ndisDereferenceRef.c)
 *     ndisReferenceMiniport @ 0x1C0019084 (ndisReferenceMiniport.c)
 *     ndisReferenceMiniportNoCheck @ 0x1C001BCC4 (ndisReferenceMiniportNoCheck.c)
 *     ndisMQueueOidRequest @ 0x1C001EE70 (ndisMQueueOidRequest.c)
 *     memset @ 0x1C0023A40 (memset.c)
 *     WPP_SF_qLq @ 0x1C003F298 (WPP_SF_qLq.c)
 *     WPP_SF_qD @ 0x1C003F388 (WPP_SF_qD.c)
 *     WPP_SF_qqd @ 0x1C004BBA8 (WPP_SF_qqd.c)
 */

__int64 __fastcall ndisQueueRequestWorkItem(_LIST_ENTRY *a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r14
  _LIST_ENTRY *v5; // r15
  unsigned int v8; // ebp
  _LIST_ENTRY *PoolWithTag; // rax
  _LIST_ENTRY *v10; // rsi
  __int64 v11; // rdx
  KSPIN_LOCK *p_Blink; // rcx
  char v13; // bl
  KIRQL v14; // al
  unsigned __int16 Flink; // cx
  KIRQL v16; // di
  _LIST_ENTRY *v17; // rdx
  _LIST_ENTRY **v18; // rax
  _LIST_ENTRY *i; // rcx
  _LIST_ENTRY *v20; // rcx
  KIRQL v21; // dl
  KSPIN_LOCK *v22; // rcx
  KIRQL v23; // bl
  KIRQL v25; // al
  struct _NDIS_REFCOUNT_BLOCK *Blink; // rcx
  KIRQL v27; // bl
  KIRQL v28; // bl
  unsigned int v29; // eax
  _LIST_ENTRY *retaddr; // [rsp+58h] [rbp+0h]
  KIRQL v31; // [rsp+78h] [rbp+20h]

  v3 = 0LL;
  v5 = 0LL;
  v8 = -1073741823;
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
    WPP_SF_qLq(18LL, &WPP_72ef677eb8bc3e91e72369ca310d6849_Traceguids, a1, a3, a2);
  PoolWithTag = (_LIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x50uLL, 0x6977444Eu);
  v10 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v8 = -1073741670;
    goto LABEL_47;
  }
  memset(PoolWithTag, 0, 0x50uLL);
  if ( a3 == 17 )
  {
    v3 = (__int64)a1;
  }
  else
  {
    if ( a3 != 5 )
      goto LABEL_46;
    v5 = a1;
  }
  v10[3].Blink = a1;
  if ( v3 )
  {
    LOBYTE(v11) = 69;
    if ( a2 )
    {
      v13 = ndisReferenceMiniport(v3, v11);
      goto LABEL_14;
    }
    ndisReferenceMiniportNoCheck(v3, v11);
LABEL_30:
    v13 = 1;
    goto LABEL_14;
  }
  if ( !v5 )
    goto LABEL_46;
  p_Blink = (KSPIN_LOCK *)&v5[19].Blink;
  if ( !a2 )
  {
    v25 = KeAcquireSpinLockRaiseToDpc(p_Blink);
    Blink = (struct _NDIS_REFCOUNT_BLOCK *)v5[20].Blink;
    v27 = v25;
    ++LOWORD(v5[20].Flink);
    ndisReferenceWithTag(Blink, 0xCu);
    KeReleaseSpinLock((PKSPIN_LOCK)&v5[19].Blink, v27);
    goto LABEL_30;
  }
  v13 = 0;
  v14 = KeAcquireSpinLockRaiseToDpc(p_Blink);
  v31 = v14;
  if ( !BYTE2(v5[20].Flink) )
  {
    Flink = (unsigned __int16)v5[20].Flink;
    if ( Flink < 0xFFEBu )
    {
      v13 = 1;
      LOWORD(v5[20].Flink) = Flink + 1;
      ndisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)v5[20].Blink, 0xCu);
      v14 = v31;
    }
  }
  KeReleaseSpinLock((PKSPIN_LOCK)&v5[19].Blink, v14);
LABEL_14:
  if ( v13 != 1 )
  {
    if ( v13 )
    {
LABEL_43:
      if ( v3 )
        ndisDereferenceMiniport(v3, 0x45u);
      else
        ndisDereferenceRef((PKSPIN_LOCK)&v5[19].Blink);
    }
LABEL_46:
    ExFreePoolWithTag(v10, 0);
LABEL_47:
    if ( (unsigned __int8)byte_1C0085312 >= 4u )
      WPP_SF_qqd(20LL, &WPP_72ef677eb8bc3e91e72369ca310d6849_Traceguids, a1, a2, v8);
    return v8;
  }
  if ( a2 )
  {
    if ( v3 )
    {
      v28 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 96));
      *(_QWORD *)(v3 + 520) = KeGetCurrentThread();
      *(_DWORD *)(v3 + 1856) = 2295234;
      v29 = ndisMQueueOidRequest(v3, a2);
      *(_QWORD *)(v3 + 520) = 0LL;
      v22 = (KSPIN_LOCK *)(v3 + 96);
      *(_DWORD *)(v3 + 1856) = 0;
      v8 = v29;
      v21 = v28;
    }
    else
    {
      v16 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&v5[2].Flink[6]);
      v5[2].Flink[32].Blink = (_LIST_ENTRY *)KeGetCurrentThread();
      LODWORD(v5[2].Flink[116].Flink) = 2295242;
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)&v5[9]);
      v17 = (_LIST_ENTRY *)(a2 + 72);
      v5[9].Blink = (_LIST_ENTRY *)KeGetCurrentThread();
      LODWORD(v5[10].Flink) = 2295243;
      *(_QWORD *)(a2 + 72) = 0LL;
      *(_QWORD *)(a2 + 80) = 0LL;
      if ( (HIDWORD(v5[2].Flink[7].Blink) & 0x100) == 0 )
      {
        v18 = &v5[10].Blink;
        for ( i = v5[10].Blink; i != (_LIST_ENTRY *)v18; i = i->Flink )
        {
          if ( i == v17 )
            goto LABEL_22;
        }
        v20 = v5[11].Flink;
        v8 = 0;
        v17->Flink = (_LIST_ENTRY *)v18;
        *(_QWORD *)(a2 + 80) = v20;
        if ( (_LIST_ENTRY **)v20->Flink != v18 )
          __fastfail(3u);
        v20->Flink = v17;
        v5[11].Flink = v17;
      }
LABEL_22:
      v5[9].Blink = 0LL;
      LODWORD(v5[10].Flink) = 0;
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)&v5[9]);
      v21 = v16;
      v5[2].Flink[32].Blink = 0LL;
      LODWORD(v5[2].Flink[116].Flink) = 0;
      v22 = (KSPIN_LOCK *)&v5[2].Flink[6];
    }
    KeReleaseSpinLock(v22, v21);
  }
  else
  {
    v8 = 0;
  }
  if ( v8 )
    goto LABEL_43;
  v10[2].Blink = 0LL;
  v10[2].Flink = retaddr;
  v10->Flink = 0LL;
  v10[1].Flink = (_LIST_ENTRY *)ndisDoOidRequests;
  v10[1].Blink = v10;
  KeInsertQueue(&ndisWorkerQueue, v10);
  _InterlockedAdd(&ndisWorkerQueueItemCount, 1u);
  v23 = KeAcquireSpinLockRaiseToDpc(&ndisThreadPoolLock);
  if ( !ndisThreadPoolTimerQueued )
  {
    ndisThreadPoolTimerQueued = 1;
    KeSetTimer(&ndisThreadPoolTimer, *(LARGE_INTEGER *)&WPP_MAIN_CB.DeviceQueue.Type, 0LL);
  }
  KeReleaseSpinLock(&ndisThreadPoolLock, v23);
  v8 = 259;
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
  {
    WPP_SF_qD(19LL, &WPP_72ef677eb8bc3e91e72369ca310d6849_Traceguids, v10, 259LL);
    goto LABEL_47;
  }
  return v8;
}
