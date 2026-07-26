/*
 * XREFs of ndisReceiveWorkerThread @ 0x1C001D340
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00236D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0023A40 (memset.c)
 *     WPP_SF_d @ 0x1C003DCF4 (WPP_SF_d.c)
 *     ?ndisInsertInWorkQueue@@YAXPEAU_NDIS_WORK_QUEUE@@PEAU_WORK_QUEUE_ITEM@@E@Z @ 0x1C0049168 (-ndisInsertInWorkQueue@@YAXPEAU_NDIS_WORK_QUEUE@@PEAU_WORK_QUEUE_ITEM@@E@Z.c)
 */

void __fastcall ndisReceiveWorkerThread(ULONG a1)
{
  struct _WORK_QUEUE_ITEM *v1; // rdi
  struct _NDIS_WORK_QUEUE *v3; // rbx
  KIRQL v4; // si
  __int64 v5; // rax
  struct _WORK_QUEUE_ITEM *v6; // rdx
  LARGE_INTEGER v7; // rdx
  _PROCESSOR_NUMBER ProcNumber; // [rsp+38h] [rbp-39h] BYREF
  __int16 WnodeEventItem; // [rsp+40h] [rbp-31h] BYREF
  _WORD v10[27]; // [rsp+42h] [rbp-2Fh] BYREF
  _GROUP_AFFINITY Affinity; // [rsp+78h] [rbp+7h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+88h] [rbp+17h] BYREF

  v1 = 0LL;
  ProcNumber = 0;
  Affinity.Mask = 0LL;
  *(_QWORD *)&Affinity.Group = 0LL;
  KeGetProcessorNumberFromIndex(a1, &ProcNumber);
  if ( (unsigned __int8)byte_1C0085313 >= 4u )
    WPP_SF_d(11LL, &WPP_abea78df5d3bc502c1918c83347dcce9_Traceguids, a1);
  Affinity.Mask = 1LL << ProcNumber.Number;
  v3 = (struct _NDIS_WORK_QUEUE *)((char *)qword_1C0084D80 + 64 * (unsigned __int64)a1);
  Affinity.Group = ProcNumber.Group;
  KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
  while ( 1 )
  {
    KeWaitForSingleObject((char *)v3 + 32, Executive, 0, 0, 0LL);
    v4 = KfRaiseIrql(2u);
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)v3 + 2);
    if ( *(struct _NDIS_WORK_QUEUE **)v3 != v3 )
    {
      v1 = *(struct _WORK_QUEUE_ITEM **)v3;
      v5 = **(_QWORD **)v3;
      if ( *(struct _NDIS_WORK_QUEUE **)(*(_QWORD *)v3 + 8LL) != v3 || *(struct _WORK_QUEUE_ITEM **)(v5 + 8) != v1 )
        __fastfail(3u);
      *(_QWORD *)v3 = v5;
      *(_QWORD *)(v5 + 8) = v3;
      v1->List.Blink = 0LL;
      v1->List.Flink = 0LL;
      --*((_DWORD *)v3 + 6);
    }
    if ( *(struct _NDIS_WORK_QUEUE **)v3 == v3 )
    {
      *((_DWORD *)qword_1C0084D78 + a1) = 0;
      KeCancelTimer((PKTIMER)qword_1C0084D70 + 2 * (unsigned __int64)a1);
    }
    else
    {
      v7 = DueTime;
      if ( !DueTime.QuadPart )
        v7.QuadPart = -1LL;
      KeSetTimer(
        (PKTIMER)qword_1C0084D70 + 2 * (unsigned __int64)a1,
        v7,
        (PKDPC)qword_1C0084D70 + 2 * (unsigned __int64)a1 + 1);
    }
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)v3 + 2);
    if ( v1 )
      break;
LABEL_16:
    if ( v4 != 2 )
      KeLowerIrql(v4);
  }
  v6 = (struct _WORK_QUEUE_ITEM *)&WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink[2 * a1];
  if ( v1 != v6 )
  {
    if ( (_BYTE)word_1C00870DC )
    {
      memset(v10, 0, sizeof(v10));
      *(_DWORD *)&v10[21] = 0x20000;
      WnodeEventItem = 56;
      *(_QWORD *)&v10[3] = qword_1C00870D0;
      *(GUID *)&v10[11] = EtwGuidNdisReceive;
      LOBYTE(v10[1]) = 22;
      LOBYTE(v10[23]) = 0;
      IoWMIWriteEvent(&WnodeEventItem);
    }
    v1->WorkerRoutine(v1->Parameter);
    v1 = 0LL;
    if ( (_BYTE)word_1C00870DC )
    {
      memset(v10, 0, 0x2EuLL);
      *(_DWORD *)&v10[21] = 0x20000;
      WnodeEventItem = 48;
      *(_QWORD *)&v10[3] = qword_1C00870D0;
      *(GUID *)&v10[11] = EtwGuidNdisReceive;
      LOBYTE(v10[1]) = 23;
      IoWMIWriteEvent(&WnodeEventItem);
    }
    goto LABEL_16;
  }
  if ( *(struct _NDIS_WORK_QUEUE **)v3 != v3 )
  {
    ndisInsertInWorkQueue(v3, v6, 1u);
    v1 = 0LL;
    goto LABEL_16;
  }
  if ( v4 != 2 )
    KeLowerIrql(v4);
  if ( (unsigned __int8)byte_1C0085313 >= 4u )
    WPP_SF_d(12LL, &WPP_abea78df5d3bc502c1918c83347dcce9_Traceguids, a1);
}
