/*
 * XREFs of ?ndisCleanupPDCounter@@YAXPEAUNDIS_PD_COUNTER@@@Z @ 0x1C00E04F0
 * Callers:
 *     ?NdisPDPIFreeCounter@@YAXPEAUNDIS_PD_COUNTER_HANDLE__@@@Z @ 0x1C00DF340 (-NdisPDPIFreeCounter@@YAXPEAUNDIS_PD_COUNTER_HANDLE__@@@Z.c)
 *     ?ndisCleanupPDRSSObjects@@YAXPEAUNDIS_PD_ASSOCIATION@@PEAU_LIST_ENTRY@@1@Z @ 0x1C00E0614 (-ndisCleanupPDRSSObjects@@YAXPEAUNDIS_PD_ASSOCIATION@@PEAU_LIST_ENTRY@@1@Z.c)
 * Callees:
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x1C009B148 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00A6C60 (--1KLockHolder@@QEAA@XZ.c)
 */

void __fastcall ndisCleanupPDCounter(struct NDIS_PD_COUNTER *a1)
{
  _QWORD *v2; // rax
  __int64 v3; // rcx
  _QWORD *v4; // rdx
  KLockHolder v5; // [rsp+20h] [rbp-28h] BYREF

  KLockThisExclusive::KLockThisExclusive(
    (KLockThisExclusive *)&v5,
    (struct KPushLockBase *)(*(_QWORD *)&qword_1C0085808 + 8LL));
  v2 = (_QWORD *)((char *)a1 + 8);
  v3 = *((_QWORD *)a1 + 1);
  v4 = (_QWORD *)*((_QWORD *)a1 + 2);
  if ( *(struct NDIS_PD_COUNTER **)(v3 + 8) != (struct NDIS_PD_COUNTER *)((char *)a1 + 8) || (_QWORD *)*v4 != v2 )
    __fastfail(3u);
  *v4 = v3;
  *(_QWORD *)(v3 + 8) = v4;
  *v2 = 0LL;
  *((_QWORD *)a1 + 7) = 0LL;
  *((_QWORD *)a1 + 5) = 0LL;
  KLockHolder::~KLockHolder(&v5);
}
