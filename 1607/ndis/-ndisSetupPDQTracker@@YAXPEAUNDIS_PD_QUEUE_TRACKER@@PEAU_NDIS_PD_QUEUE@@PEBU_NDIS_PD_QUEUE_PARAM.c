/*
 * XREFs of ?ndisSetupPDQTracker@@YAXPEAUNDIS_PD_QUEUE_TRACKER@@PEAU_NDIS_PD_QUEUE@@PEBU_NDIS_PD_QUEUE_PARAMETERS@@PEAUNDIS_PD_ASSOCIATION@@PEAUNDIS_PD_COUNTER@@EE@Z @ 0x1C00E0E64
 * Callers:
 *     ?NdisPDPIAcquireReceiveQueues@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_ACQUIRE_QUEUES_PARAMETERS@@PEAPEAU_NDIS_PD_QUEUE@@PEAKPEAU_NDIS_PD_QUEUE_PARAMETERS@@33@Z @ 0x1C00DE710 (-NdisPDPIAcquireReceiveQueues@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_ACQUIRE_QUEUES_PAR.c)
 *     ?NdisPDPIAllocateQueue@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_QUEUE_PARAMETERS@@PEAPEAU_NDIS_PD_QUEUE@@@Z @ 0x1C00DEDB0 (-NdisPDPIAllocateQueue@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_QUEUE_PARAMETERS@@PEAPEAU.c)
 * Callees:
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x1C00A6E04 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00A6EE8 (--1KLockHolder@@QEAA@XZ.c)
 *     ?ndisInitPDQAWM@@YAXPEAUNDIS_PD_QUEUE_TRACKER@@@Z @ 0x1C00E01B8 (-ndisInitPDQAWM@@YAXPEAUNDIS_PD_QUEUE_TRACKER@@@Z.c)
 */

void __fastcall ndisSetupPDQTracker(
        _QWORD *DeferredContext,
        struct _NDIS_PD_QUEUE *a2,
        const struct _NDIS_PD_QUEUE_PARAMETERS *a3,
        struct NDIS_PD_ASSOCIATION *a4,
        struct NDIS_PD_COUNTER *a5,
        unsigned __int8 a6,
        unsigned __int8 a7)
{
  struct KPushLockBase *v10; // rdx
  struct NDIS_PD_ASSOCIATION *v11; // rax
  struct NDIS_PD_ASSOCIATION **v12; // rdx
  struct NDIS_PD_ASSOCIATION **v13; // rdx
  struct NDIS_PD_ASSOCIATION *v14; // rax
  struct NDIS_PD_ASSOCIATION **v15; // rdx
  struct NDIS_PD_COUNTER **v16; // rdx
  struct NDIS_PD_COUNTER *v17; // rbx
  KLockThisExclusive v18; // [rsp+20h] [rbp-28h] BYREF

  DeferredContext[7] = a2;
  *((_DWORD *)DeferredContext + 40) = *((_DWORD *)a3 + 2);
  *((_DWORD *)DeferredContext + 41) = *((_DWORD *)a3 + 3);
  *((_DWORD *)DeferredContext + 42) = *((_DWORD *)a3 + 4);
  *((_OWORD *)DeferredContext + 11) = *(_OWORD *)((char *)a3 + 24);
  *((_DWORD *)DeferredContext + 48) = *((_DWORD *)a3 + 10);
  *((_DWORD *)DeferredContext + 49) = *((_DWORD *)a3 + 11);
  *((_BYTE *)DeferredContext + 208) = a6;
  DeferredContext[5] = a4;
  *((_DWORD *)DeferredContext + 70) = _InterlockedIncrement((volatile signed __int32 *)(qword_1C0089668 + 8244));
  if ( a7 )
    ndisInitPDQAWM((char *)DeferredContext);
  v10 = (struct KPushLockBase *)qword_1C0089668;
  *((_QWORD *)a2 + 2) = *((_QWORD *)a2 + 1);
  *((_QWORD *)a2 + 3) = DeferredContext;
  *((_QWORD *)a2 + 1) = &unk_1C0076A50;
  KLockThisExclusive::KLockThisExclusive(&v18, v10 + 1);
  v11 = (struct NDIS_PD_ASSOCIATION *)(DeferredContext + 1);
  if ( *((_DWORD *)DeferredContext + 40) == 1 )
  {
    v12 = (struct NDIS_PD_ASSOCIATION **)*((_QWORD *)a4 + 18);
    if ( *v12 != (struct NDIS_PD_ASSOCIATION *)((char *)a4 + 136) )
      __fastfail(3u);
    *(_QWORD *)v11 = (char *)a4 + 136;
    DeferredContext[2] = v12;
    *v12 = v11;
    *((_QWORD *)a4 + 18) = v11;
    if ( a6 )
    {
      v13 = (struct NDIS_PD_ASSOCIATION **)*((_QWORD *)a4 + 20);
      v14 = (struct NDIS_PD_ASSOCIATION *)(DeferredContext + 3);
      if ( *v13 != (struct NDIS_PD_ASSOCIATION *)((char *)a4 + 152) )
        __fastfail(3u);
      *(_QWORD *)v14 = (char *)a4 + 152;
      DeferredContext[4] = v13;
      *v13 = v14;
      *((_QWORD *)a4 + 20) = v14;
    }
  }
  else
  {
    v15 = (struct NDIS_PD_ASSOCIATION **)*((_QWORD *)a4 + 22);
    if ( *v15 != (struct NDIS_PD_ASSOCIATION *)((char *)a4 + 168) )
      __fastfail(3u);
    *(_QWORD *)v11 = (char *)a4 + 168;
    DeferredContext[2] = v15;
    *v15 = v11;
    *((_QWORD *)a4 + 22) = v11;
    *((_DWORD *)DeferredContext + 50) = -1;
  }
  if ( a5 )
  {
    DeferredContext[29] = a5;
    v16 = (struct NDIS_PD_COUNTER **)*((_QWORD *)a5 + 11);
    v17 = (struct NDIS_PD_COUNTER *)(DeferredContext + 30);
    if ( *v16 != (struct NDIS_PD_COUNTER *)((char *)a5 + 80) )
      __fastfail(3u);
    *(_QWORD *)v17 = (char *)a5 + 80;
    *((_QWORD *)v17 + 1) = v16;
    *v16 = v17;
    *((_QWORD *)a5 + 11) = v17;
    ++*((_DWORD *)a5 + 24);
  }
  KLockHolder::~KLockHolder(&v18);
}
