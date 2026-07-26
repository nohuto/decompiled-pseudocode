/*
 * XREFs of ndisReceiveWorkerThread @ 0x1C0020E40
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisInsertInWorkQueue@@YAXPEAU_NDIS_WORK_QUEUE@@PEAU_WORK_QUEUE_ITEM@@E@Z @ 0x1C0011CF4 (-ndisInsertInWorkQueue@@YAXPEAU_NDIS_WORK_QUEUE@@PEAU_WORK_QUEUE_ITEM@@E@Z.c)
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x1C003ED9C (WPP_SF_d.c)
 */

void __fastcall ndisReceiveWorkerThread(ULONG a1)
{
  __int64 v1; // rdi
  struct _KSEMAPHORE *v3; // rbx
  KIRQL v4; // si
  __int64 v5; // rax
  LARGE_INTEGER v6; // rdx
  struct _WORK_QUEUE_ITEM *v7; // rdx
  _PROCESSOR_NUMBER ProcNumber; // [rsp+30h] [rbp-39h] BYREF
  __int16 WnodeEventItem; // [rsp+38h] [rbp-31h] BYREF
  _BYTE v10[14]; // [rsp+3Ah] [rbp-2Fh]
  __int16 v11; // [rsp+48h] [rbp-21h]
  _BYTE v12[22]; // [rsp+4Ah] [rbp-1Fh]
  __int16 v13; // [rsp+60h] [rbp-9h]
  __int64 v14; // [rsp+62h] [rbp-7h]
  int v15; // [rsp+6Ah] [rbp+1h]
  __int16 v16; // [rsp+6Eh] [rbp+5h]
  _GROUP_AFFINITY Affinity; // [rsp+70h] [rbp+7h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+80h] [rbp+17h] BYREF

  v1 = 0LL;
  ProcNumber = 0;
  Affinity.Mask = 0LL;
  *(_QWORD *)&Affinity.Group = 0LL;
  KeGetProcessorNumberFromIndex(a1, &ProcNumber);
  if ( (unsigned __int8)byte_1C0083713 >= 4u )
    WPP_SF_d(11LL, &WPP_abea78df5d3bc502c1918c83347dcce9_Traceguids, a1);
  Affinity.Mask = 1LL << ProcNumber.Number;
  v3 = (struct _KSEMAPHORE *)((char *)qword_1C0082D80 + 64 * (unsigned __int64)a1);
  Affinity.Group = ProcNumber.Group;
  KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
  while ( 1 )
  {
    while ( 1 )
    {
      KeWaitForSingleObject(&v3[1], Executive, 0, 0, 0LL);
      v4 = KfRaiseIrql(2u);
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)&v3->Header.WaitListHead.Blink);
      if ( *(struct _KSEMAPHORE **)&v3->Header.Lock == v3 )
        goto LABEL_11;
      v1 = *(_QWORD *)&v3->Header.Lock;
      v5 = **(_QWORD **)&v3->Header.Lock;
      if ( *(struct _KSEMAPHORE **)(*(_QWORD *)&v3->Header.Lock + 8LL) != v3 || *(_QWORD *)(v5 + 8) != v1 )
        __fastfail(3u);
      *(_QWORD *)&v3->Header.Lock = v5;
      *(_QWORD *)(v5 + 8) = v3;
      *(_QWORD *)(v1 + 8) = 0LL;
      *(_QWORD *)v1 = 0LL;
      --v3->Limit;
      if ( *(struct _KSEMAPHORE **)&v3->Header.Lock == v3 )
      {
LABEL_11:
        *((_DWORD *)qword_1C0082D78 + a1) = 0;
        KeCancelTimer((PKTIMER)qword_1C0082D70 + 2 * (unsigned __int64)a1);
      }
      else
      {
        v6.QuadPart = -1LL;
        if ( DueTime.QuadPart )
          v6 = DueTime;
        KeSetTimer(
          (PKTIMER)qword_1C0082D70 + 2 * (unsigned __int64)a1,
          v6,
          (PKDPC)qword_1C0082D70 + 2 * (unsigned __int64)a1 + 1);
      }
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)&v3->Header.WaitListHead.Blink);
      if ( !v1 )
        goto LABEL_21;
      v7 = (struct _WORK_QUEUE_ITEM *)&WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink[2 * a1];
      if ( (struct _WORK_QUEUE_ITEM *)v1 == v7 )
        break;
      if ( (_BYTE)word_1C008501C )
      {
        *(_QWORD *)v10 = 1441792LL;
        v14 = 0x200000000LL;
        v11 = 0;
        *(_QWORD *)v12 = 0LL;
        v13 = 0;
        v15 = 0;
        v16 = 0;
        WnodeEventItem = 56;
        *(_QWORD *)&v10[6] = qword_1C0085010;
        *(GUID *)&v12[6] = EtwGuidNdisReceive;
        IoWMIWriteEvent(&WnodeEventItem);
      }
      (*(void (__fastcall **)(_QWORD))(v1 + 16))(*(_QWORD *)(v1 + 24));
      if ( (_BYTE)word_1C008501C )
      {
        *(_QWORD *)v10 = 1507328LL;
        v11 = 0;
        *(_QWORD *)v12 = 0LL;
        v13 = 0;
        LOWORD(v14) = 0;
        WnodeEventItem = 48;
        *(_QWORD *)&v10[6] = qword_1C0085010;
        *(_DWORD *)((char *)&v14 + 2) = 0x20000;
        *(GUID *)&v12[6] = EtwGuidNdisReceive;
        IoWMIWriteEvent(&WnodeEventItem);
      }
LABEL_21:
      v1 = 0LL;
      if ( v4 != 2 )
LABEL_16:
        KeLowerIrql(v4);
    }
    if ( *(struct _KSEMAPHORE **)&v3->Header.Lock == v3 )
      break;
    ndisInsertInWorkQueue(v3, v7, 1);
    v1 = 0LL;
    if ( v4 != 2 )
      goto LABEL_16;
  }
  if ( v4 != 2 )
    KeLowerIrql(v4);
  if ( (unsigned __int8)byte_1C0083713 >= 4u )
    WPP_SF_d(12LL, &WPP_abea78df5d3bc502c1918c83347dcce9_Traceguids, a1);
}
