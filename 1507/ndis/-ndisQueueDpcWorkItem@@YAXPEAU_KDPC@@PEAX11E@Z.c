/*
 * XREFs of ?ndisQueueDpcWorkItem@@YAXPEAU_KDPC@@PEAX11E@Z @ 0x1C005C330
 * Callers:
 *     ndisQueuedMiniportDpcWorkItem @ 0x1C0001000 (ndisQueuedMiniportDpcWorkItem.c)
 *     ndisInterruptDpc @ 0x1C0008260 (ndisInterruptDpc.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0003280 (ndisDereferenceMiniport.c)
 *     ndisReferenceMiniportNoCheck @ 0x1C001BCC4 (ndisReferenceMiniportNoCheck.c)
 *     memset @ 0x1C0023A40 (memset.c)
 *     ?ndisInsertInWorkQueue@@YAXPEAU_NDIS_WORK_QUEUE@@PEAU_WORK_QUEUE_ITEM@@E@Z @ 0x1C0049168 (-ndisInsertInWorkQueue@@YAXPEAU_NDIS_WORK_QUEUE@@PEAU_WORK_QUEUE_ITEM@@E@Z.c)
 *     ?ndisQueuePeriodicReceivesTimer@@YAXXZ @ 0x1C00628A4 (-ndisQueuePeriodicReceivesTimer@@YAXXZ.c)
 *     ?ndisPcwAddEvent@@YAXPEAUNDIS_PCW_CONTEXT@@_K1@Z @ 0x1C00649F8 (-ndisPcwAddEvent@@YAXPEAUNDIS_PCW_CONTEXT@@_K1@Z.c)
 */

void __fastcall ndisQueueDpcWorkItem(struct _KDPC *a1, void *a2, void *a3, void *a4, char a5)
{
  unsigned int Number; // r15d
  __int64 v7; // rsi
  unsigned int v10; // r10d
  __int64 v11; // rbx
  struct NDIS_PCW_CONTEXT v12; // [rsp+20h] [rbp-50h] BYREF
  _QWORD WnodeEventItem[7]; // [rsp+38h] [rbp-38h] BYREF

  Number = KeGetPcr()->Prcb.Number;
  v7 = *((_QWORD *)a2 + 12);
  v12.CurrentCpu = -1;
  v10 = *(_DWORD *)(v7 + 48);
  v12.PcwBlock = *(_NDIS_PCW_DATA_BLOCK **)(v7 + 40);
  v12.DatapathCyclesMask = *(_DWORD *)(v7 + 80);
  v12.DatapathEventsMask = v10;
  if ( (v10 & 0x800000) != 0 )
    ndisPcwAddEvent(&v12, 0x24uLL, 1uLL);
  ndisReferenceMiniportNoCheck(v7, 0x4Bu);
  v11 = *((_QWORD *)a2 + 27)
      + 80LL * (Number + (*((_BYTE *)a2 + 193) != 0 ? (unsigned int)a3 : 0) * ndisMaxNumberOfProcessors);
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v11 + 72));
  if ( (*(_DWORD *)(v11 + 68) & 1) != 0 )
  {
    _InterlockedDecrement((volatile signed __int32 *)a2 + 26);
    ndisDereferenceMiniport(v7, 0x4Bu);
  }
  else
  {
    *(_QWORD *)(v11 + 32) = a1;
    *(_QWORD *)(v11 + 40) = a2;
    *(_QWORD *)(v11 + 48) = a3;
    *(_QWORD *)(v11 + 56) = a4;
    *(_DWORD *)(v11 + 64) = Number;
    *(_DWORD *)(v11 + 68) = 1;
    if ( a5 )
    {
      if ( HIBYTE(word_1C00870DC) )
      {
        memset((char *)WnodeEventItem + 2, 0, 0x2EuLL);
        HIDWORD(WnodeEventItem[5]) = 0x20000;
        LOWORD(WnodeEventItem[0]) = 48;
        WnodeEventItem[1] = qword_1C00870D0;
        *(GUID *)&WnodeEventItem[3] = EtwGuidNdisReceive;
        BYTE4(WnodeEventItem[0]) = 24;
        IoWMIWriteEvent(WnodeEventItem);
      }
      *(_DWORD *)(v11 + 68) |= 2u;
      ndisInsertInWorkQueue(
        (struct _KSEMAPHORE *)qword_1C0084D80 + 2 * (unsigned __int64)KeGetPcr()->Prcb.Number,
        (struct _WORK_QUEUE_ITEM *)v11,
        1);
      ndisQueuePeriodicReceivesTimer();
    }
    else
    {
      ExQueueWorkItem((PWORK_QUEUE_ITEM)v11, CriticalWorkQueue);
    }
  }
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v11 + 72));
}
