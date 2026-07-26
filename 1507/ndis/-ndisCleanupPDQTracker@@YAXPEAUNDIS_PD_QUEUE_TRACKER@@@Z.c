/*
 * XREFs of ?ndisCleanupPDQTracker@@YAXPEAUNDIS_PD_QUEUE_TRACKER@@@Z @ 0x1C00E0578
 * Callers:
 *     ?NdisPDPIFreeQueue@@YAXPEAU_NDIS_PD_QUEUE@@@Z @ 0x1C00DF3D0 (-NdisPDPIFreeQueue@@YAXPEAU_NDIS_PD_QUEUE@@@Z.c)
 *     ?ndisCleanupPDRSSObjects@@YAXPEAUNDIS_PD_ASSOCIATION@@PEAU_LIST_ENTRY@@1@Z @ 0x1C00E0614 (-ndisCleanupPDRSSObjects@@YAXPEAUNDIS_PD_ASSOCIATION@@PEAU_LIST_ENTRY@@1@Z.c)
 * Callees:
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x1C009B148 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00A6C60 (--1KLockHolder@@QEAA@XZ.c)
 */

void __fastcall ndisCleanupPDQTracker(struct NDIS_PD_QUEUE_TRACKER *a1)
{
  _QWORD *v2; // rax
  __int64 v3; // rdx
  _QWORD *v4; // rcx
  _QWORD *v5; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rcx
  KLockHolder v8; // [rsp+20h] [rbp-28h] BYREF

  KLockThisExclusive::KLockThisExclusive(
    (KLockThisExclusive *)&v8,
    (struct KPushLockBase *)(*(_QWORD *)&qword_1C0085808 + 8LL));
  v2 = (_QWORD *)((char *)a1 + 8);
  v3 = *((_QWORD *)a1 + 1);
  v4 = (_QWORD *)*((_QWORD *)a1 + 2);
  if ( *(struct NDIS_PD_QUEUE_TRACKER **)(v3 + 8) != (struct NDIS_PD_QUEUE_TRACKER *)((char *)a1 + 8)
    || (_QWORD *)*v4 != v2 )
  {
    __fastfail(3u);
  }
  *v4 = v3;
  *(_QWORD *)(v3 + 8) = v4;
  *v2 = 0LL;
  if ( *((_QWORD *)a1 + 29) )
  {
    v5 = (_QWORD *)((char *)a1 + 240);
    v6 = *((_QWORD *)a1 + 30);
    v7 = (_QWORD *)*((_QWORD *)a1 + 31);
    if ( *(struct NDIS_PD_QUEUE_TRACKER **)(v6 + 8) != (struct NDIS_PD_QUEUE_TRACKER *)((char *)a1 + 240)
      || (_QWORD *)*v7 != v5 )
    {
      __fastfail(3u);
    }
    *v7 = v6;
    *(_QWORD *)(v6 + 8) = v7;
    *v5 = 0LL;
    *((_QWORD *)a1 + 29) = 0LL;
  }
  *((_QWORD *)a1 + 7) = 0LL;
  *((_QWORD *)a1 + 5) = 0LL;
  KLockHolder::~KLockHolder(&v8);
}
