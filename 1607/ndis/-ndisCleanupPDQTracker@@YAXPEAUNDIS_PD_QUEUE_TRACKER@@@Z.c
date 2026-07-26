/*
 * XREFs of ?ndisCleanupPDQTracker@@YAXPEAUNDIS_PD_QUEUE_TRACKER@@@Z @ 0x1C00DFEB8
 * Callers:
 *     ?NdisPDPIFreeQueue@@YAXPEAU_NDIS_PD_QUEUE@@@Z @ 0x1C00DF170 (-NdisPDPIFreeQueue@@YAXPEAU_NDIS_PD_QUEUE@@@Z.c)
 *     ?ndisCleanupPDRSSObjects@@YAXPEAUNDIS_PD_ASSOCIATION@@PEAU_LIST_ENTRY@@1@Z @ 0x1C00DFF68 (-ndisCleanupPDRSSObjects@@YAXPEAUNDIS_PD_ASSOCIATION@@PEAU_LIST_ENTRY@@1@Z.c)
 * Callees:
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x1C00A6E04 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00A6EE8 (--1KLockHolder@@QEAA@XZ.c)
 *     ?ndisPDDetachQueueFromEC@@YAXPEAUNDIS_PD_QUEUE_TRACKER@@@Z @ 0x1C00E04C4 (-ndisPDDetachQueueFromEC@@YAXPEAUNDIS_PD_QUEUE_TRACKER@@@Z.c)
 *     ?ndisPdQCounterUpdateName@@YAJPEAUNDIS_PD_COUNTER@@@Z @ 0x1C00E0C78 (-ndisPdQCounterUpdateName@@YAJPEAUNDIS_PD_COUNTER@@@Z.c)
 */

void __fastcall ndisCleanupPDQTracker(struct NDIS_PD_COUNTER **a1)
{
  _QWORD *v2; // rax
  struct NDIS_PD_COUNTER *v3; // rdx
  struct NDIS_PD_COUNTER *v4; // rcx
  struct NDIS_PD_COUNTER *v5; // rcx
  _QWORD *v6; // rax
  struct NDIS_PD_COUNTER *v7; // r8
  struct NDIS_PD_COUNTER *v8; // rdx
  KLockThisExclusive v9; // [rsp+20h] [rbp-28h] BYREF

  KLockThisExclusive::KLockThisExclusive(&v9, (struct KPushLockBase *)(qword_1C0089668 + 8));
  ndisPDDetachQueueFromEC((struct NDIS_PD_QUEUE_TRACKER *)a1);
  v2 = a1 + 1;
  v3 = a1[1];
  v4 = a1[2];
  if ( *((struct NDIS_PD_COUNTER ***)v3 + 1) != a1 + 1 || *(_QWORD **)v4 != v2 )
    __fastfail(3u);
  *(_QWORD *)v4 = v3;
  *((_QWORD *)v3 + 1) = v4;
  *v2 = 0LL;
  v5 = a1[29];
  if ( v5 )
  {
    v6 = a1 + 30;
    v7 = a1[30];
    v8 = a1[31];
    if ( *((struct NDIS_PD_COUNTER ***)v7 + 1) != a1 + 30 || *(_QWORD **)v8 != v6 )
      __fastfail(3u);
    *(_QWORD *)v8 = v7;
    *((_QWORD *)v7 + 1) = v8;
    *v6 = 0LL;
    a1[29] = 0LL;
    --*((_DWORD *)v5 + 24);
    ndisPdQCounterUpdateName(v5);
  }
  a1[7] = 0LL;
  a1[5] = 0LL;
  KLockHolder::~KLockHolder(&v9);
}
