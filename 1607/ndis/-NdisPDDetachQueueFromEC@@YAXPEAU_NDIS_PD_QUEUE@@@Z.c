/*
 * XREFs of ?NdisPDDetachQueueFromEC@@YAXPEAU_NDIS_PD_QUEUE@@@Z @ 0x1C00DE520
 * Callers:
 *     <none>
 * Callees:
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x1C00A6E04 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00A6EE8 (--1KLockHolder@@QEAA@XZ.c)
 *     ?ndisPDDetachQueueFromEC@@YAXPEAUNDIS_PD_QUEUE_TRACKER@@@Z @ 0x1C00E04C4 (-ndisPDDetachQueueFromEC@@YAXPEAUNDIS_PD_QUEUE_TRACKER@@@Z.c)
 */

void __fastcall NdisPDDetachQueueFromEC(struct _NDIS_PD_QUEUE *a1)
{
  struct NDIS_PD_QUEUE_TRACKER *v1; // rbx
  KLockThisExclusive v2; // [rsp+20h] [rbp-28h] BYREF

  v1 = (struct NDIS_PD_QUEUE_TRACKER *)*((_QWORD *)a1 + 3);
  if ( *((_QWORD *)v1 + 34) )
  {
    KLockThisExclusive::KLockThisExclusive(&v2, (struct KPushLockBase *)(qword_1C0089668 + 8));
    ndisPDDetachQueueFromEC(v1);
    KLockHolder::~KLockHolder(&v2);
  }
}
