/*
 * XREFs of ?ndisSetupPDQTracker@@YAXPEAUNDIS_PD_QUEUE_TRACKER@@PEAU_NDIS_PD_QUEUE@@PEBU_NDIS_PD_QUEUE_PARAMETERS@@PEAUNDIS_PD_ASSOCIATION@@PEAUNDIS_PD_COUNTER@@EE@Z @ 0x1C00E1290
 * Callers:
 *     ?NdisPDPIAllocateQueue@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_QUEUE_PARAMETERS@@PEAPEAU_NDIS_PD_QUEUE@@@Z @ 0x1C00DF010 (-NdisPDPIAllocateQueue@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_QUEUE_PARAMETERS@@PEAPEAU.c)
 *     ?NdisPDPIOnRssReceiveQueues@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_ON_RSS_QUEUE_PARAMETERS@@PEAPEAU_NDIS_PD_QUEUE@@PEAKPEAU_NDIS_PD_QUEUE_PARAMETERS@@33@Z @ 0x1C00DF540 (-NdisPDPIOnRssReceiveQueues@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_ON_RSS_QUEUE_PARAMET.c)
 * Callees:
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x1C009B148 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00A6C60 (--1KLockHolder@@QEAA@XZ.c)
 *     ?ndisInitPDQAWM@@YAXPEAUNDIS_PD_QUEUE_TRACKER@@@Z @ 0x1C00E0864 (-ndisInitPDQAWM@@YAXPEAUNDIS_PD_QUEUE_TRACKER@@@Z.c)
 */

void __fastcall ndisSetupPDQTracker(
        struct NDIS_PD_QUEUE_TRACKER *a1,
        struct _NDIS_PD_QUEUE *a2,
        const struct _NDIS_PD_QUEUE_PARAMETERS *a3,
        struct NDIS_PD_ASSOCIATION *a4,
        struct NDIS_PD_COUNTER *a5,
        char a6,
        char a7)
{
  struct KPushLockBase *v10; // rdx
  struct NDIS_PD_ASSOCIATION *v11; // rax
  struct NDIS_PD_ASSOCIATION **v12; // rdx
  struct NDIS_PD_ASSOCIATION **v13; // rdx
  struct NDIS_PD_ASSOCIATION *v14; // rax
  struct NDIS_PD_ASSOCIATION **v15; // rdx
  struct NDIS_PD_COUNTER *v16; // rbx
  struct NDIS_PD_COUNTER **v17; // rcx
  KLockHolder v18; // [rsp+20h] [rbp-28h] BYREF

  *((_QWORD *)a1 + 7) = a2;
  *((_DWORD *)a1 + 40) = *((_DWORD *)a3 + 2);
  *((_DWORD *)a1 + 41) = *((_DWORD *)a3 + 3);
  *((_DWORD *)a1 + 42) = *((_DWORD *)a3 + 4);
  *((_OWORD *)a1 + 11) = *(_OWORD *)((char *)a3 + 24);
  *((_DWORD *)a1 + 48) = *((_DWORD *)a3 + 10);
  *((_DWORD *)a1 + 49) = *((_DWORD *)a3 + 11);
  *((_BYTE *)a1 + 208) = a6;
  *((_QWORD *)a1 + 5) = a4;
  if ( a7 )
    ndisInitPDQAWM((char *)a1);
  v10 = *(struct KPushLockBase **)&qword_1C0085808;
  *((_QWORD *)a2 + 2) = *((_QWORD *)a2 + 1);
  *((_QWORD *)a2 + 3) = a1;
  *((_QWORD *)a2 + 1) = &unk_1C0075E50;
  KLockThisExclusive::KLockThisExclusive((KLockThisExclusive *)&v18, v10 + 1);
  v11 = (struct NDIS_PD_QUEUE_TRACKER *)((char *)a1 + 8);
  if ( *((_DWORD *)a1 + 40) == 1 )
  {
    v12 = (struct NDIS_PD_ASSOCIATION **)*((_QWORD *)a4 + 18);
    *(_QWORD *)v11 = (char *)a4 + 136;
    *((_QWORD *)a1 + 2) = v12;
    if ( *v12 != (struct NDIS_PD_ASSOCIATION *)((char *)a4 + 136) )
      __fastfail(3u);
    *v12 = v11;
    *((_QWORD *)a4 + 18) = v11;
    if ( a6 )
    {
      v13 = (struct NDIS_PD_ASSOCIATION **)*((_QWORD *)a4 + 20);
      v14 = (struct NDIS_PD_QUEUE_TRACKER *)((char *)a1 + 24);
      *((_QWORD *)a1 + 3) = (char *)a4 + 152;
      *((_QWORD *)a1 + 4) = v13;
      if ( *v13 != (struct NDIS_PD_ASSOCIATION *)((char *)a4 + 152) )
        __fastfail(3u);
      *v13 = v14;
      *((_QWORD *)a4 + 20) = v14;
    }
  }
  else
  {
    v15 = (struct NDIS_PD_ASSOCIATION **)*((_QWORD *)a4 + 22);
    *(_QWORD *)v11 = (char *)a4 + 168;
    *((_QWORD *)a1 + 2) = v15;
    if ( *v15 != (struct NDIS_PD_ASSOCIATION *)((char *)a4 + 168) )
      __fastfail(3u);
    *v15 = v11;
    *((_QWORD *)a4 + 22) = v11;
    *((_DWORD *)a1 + 50) = -1;
  }
  if ( a5 )
  {
    *((_QWORD *)a1 + 29) = a5;
    v16 = (struct NDIS_PD_QUEUE_TRACKER *)((char *)a1 + 240);
    v17 = (struct NDIS_PD_COUNTER **)*((_QWORD *)a5 + 11);
    *(_QWORD *)v16 = (char *)a5 + 80;
    *((_QWORD *)v16 + 1) = v17;
    if ( *v17 != (struct NDIS_PD_COUNTER *)((char *)a5 + 80) )
      __fastfail(3u);
    *v17 = v16;
    *((_QWORD *)a5 + 11) = v16;
  }
  KLockHolder::~KLockHolder(&v18);
}
