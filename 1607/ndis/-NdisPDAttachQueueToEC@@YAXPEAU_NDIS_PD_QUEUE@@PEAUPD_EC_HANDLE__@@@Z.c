/*
 * XREFs of ?NdisPDAttachQueueToEC@@YAXPEAU_NDIS_PD_QUEUE@@PEAUPD_EC_HANDLE__@@@Z @ 0x1C00DDFC0
 * Callers:
 *     <none>
 * Callees:
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x1C00A6E04 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00A6EE8 (--1KLockHolder@@QEAA@XZ.c)
 *     ?ndisPDDetachQueueFromEC@@YAXPEAUNDIS_PD_QUEUE_TRACKER@@@Z @ 0x1C00E04C4 (-ndisPDDetachQueueFromEC@@YAXPEAUNDIS_PD_QUEUE_TRACKER@@@Z.c)
 *     ?ndisPcwSetQueueInstanceName@@YAJPEAUNDIS_PD_QUEUE_TRACKER@@PEAUNDIS_PD_EC@@@Z @ 0x1C00E0AE4 (-ndisPcwSetQueueInstanceName@@YAJPEAUNDIS_PD_QUEUE_TRACKER@@PEAUNDIS_PD_EC@@@Z.c)
 *     ?ndisPdQCounterUpdateName@@YAJPEAUNDIS_PD_COUNTER@@@Z @ 0x1C00E0C78 (-ndisPdQCounterUpdateName@@YAJPEAUNDIS_PD_COUNTER@@@Z.c)
 */

void __fastcall NdisPDAttachQueueToEC(struct _NDIS_PD_QUEUE *a1, struct PD_EC_HANDLE__ *a2)
{
  __int64 v2; // rdi
  bool v4; // zf
  struct NDIS_PD_COUNTER *v5; // rcx
  char *v6; // rbx
  char *v7; // rax
  char **v8; // rcx
  KLockThisExclusive v9; // [rsp+20h] [rbp-28h] BYREF

  v2 = *((_QWORD *)a1 + 3);
  KLockThisExclusive::KLockThisExclusive(&v9, (struct KPushLockBase *)(qword_1C0089668 + 8));
  ndisPDDetachQueueFromEC((struct NDIS_PD_QUEUE_TRACKER *)v2);
  ndisPcwSetQueueInstanceName((struct NDIS_PD_QUEUE_TRACKER *)v2, a2);
  v4 = *(_DWORD *)(v2 + 160) == 1;
  *(_QWORD *)(v2 + 272) = a2;
  if ( v4 )
    ++*((_DWORD *)a2 + 20);
  else
    ++*((_DWORD *)a2 + 19);
  v5 = *(struct NDIS_PD_COUNTER **)(v2 + 232);
  if ( v5 )
    ndisPdQCounterUpdateName(v5);
  v6 = (char *)a2 + 128;
  v7 = (char *)(v2 + 256);
  v8 = (char **)*((_QWORD *)v6 + 1);
  if ( *v8 != v6 )
    __fastfail(3u);
  *(_QWORD *)(v2 + 264) = v8;
  *(_QWORD *)v7 = v6;
  *v8 = v7;
  *((_QWORD *)v6 + 1) = v7;
  KLockHolder::~KLockHolder(&v9);
}
