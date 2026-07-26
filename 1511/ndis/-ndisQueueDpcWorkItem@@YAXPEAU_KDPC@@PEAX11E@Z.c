/*
 * XREFs of ?ndisQueueDpcWorkItem@@YAXPEAU_KDPC@@PEAX11E@Z @ 0x1C00155EC
 * Callers:
 *     ndisInterruptDpc @ 0x1C0006D00 (ndisInterruptDpc.c)
 * Callees:
 *     ndisReferenceWithTag @ 0x1C0007F00 (ndisReferenceWithTag.c)
 *     ndisDereferenceMiniport @ 0x1C000B190 (ndisDereferenceMiniport.c)
 *     ?ndisQueuePeriodicReceivesTimer@@YAXXZ @ 0x1C0015810 (-ndisQueuePeriodicReceivesTimer@@YAXXZ.c)
 *     memset @ 0x1C0026F40 (memset.c)
 *     WPP_SF_qD @ 0x1C0038424 (WPP_SF_qD.c)
 *     ?ndisPcwAddEvent@@YAXPEAUNDIS_PCW_CONTEXT@@_K1@Z @ 0x1C0063588 (-ndisPcwAddEvent@@YAXPEAUNDIS_PCW_CONTEXT@@_K1@Z.c)
 */

void __fastcall ndisQueueDpcWorkItem(struct _KDPC *a1, void *a2, void *a3, void *a4, char a5)
{
  unsigned int Number; // r15d
  __int64 v7; // rdi
  unsigned int v10; // r10d
  KIRQL v11; // al
  struct _NDIS_REFCOUNT_BLOCK *v12; // rcx
  KIRQL v13; // r12
  __int64 v14; // rbx
  char *v15; // rdi
  __int64 *v16; // rax
  struct NDIS_PCW_CONTEXT v17; // [rsp+20h] [rbp-50h] BYREF
  _QWORD WnodeEventItem[7]; // [rsp+38h] [rbp-38h] BYREF

  Number = KeGetPcr()->Prcb.Number;
  v7 = *((_QWORD *)a2 + 12);
  v17.CurrentCpu = -1;
  v10 = *(_DWORD *)(v7 + 48);
  v17.PcwBlock = *(_NDIS_PCW_DATA_BLOCK **)(v7 + 40);
  v17.DatapathCyclesMask = *(_DWORD *)(v7 + 80);
  v17.DatapathEventsMask = v10;
  if ( (v10 & 0x800000) != 0 )
    ndisPcwAddEvent(&v17, 0x24uLL, 1uLL);
  v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v7 + 4496));
  v12 = *(struct _NDIS_REFCOUNT_BLOCK **)(v7 + 4952);
  v13 = v11;
  if ( v12 )
    ndisReferenceWithTag(v12, 0x4Bu);
  ++*(_DWORD *)(v7 + 4504);
  if ( (unsigned __int8)byte_1C008371B >= 4u )
    WPP_SF_qD(13LL, &WPP_16c28ebb9fa84dacc642b00af20fc2f4_Traceguids, v7, *(unsigned int *)(v7 + 4504));
  KeReleaseSpinLock((PKSPIN_LOCK)(v7 + 4496), v13);
  v14 = *((_QWORD *)a2 + 27)
      + 80LL * (Number + (*((_BYTE *)a2 + 193) != 0 ? (unsigned int)a3 : 0) * ndisMaxNumberOfProcessors);
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v14 + 72));
  if ( (*(_DWORD *)(v14 + 68) & 1) != 0 )
  {
    _InterlockedDecrement((volatile signed __int32 *)a2 + 26);
    ndisDereferenceMiniport(v7, 0x4Bu);
  }
  else
  {
    *(_QWORD *)(v14 + 32) = a1;
    *(_QWORD *)(v14 + 40) = a2;
    *(_QWORD *)(v14 + 48) = a3;
    *(_QWORD *)(v14 + 56) = a4;
    *(_DWORD *)(v14 + 64) = Number;
    *(_DWORD *)(v14 + 68) = 1;
    if ( a5 )
    {
      if ( HIBYTE(word_1C008501C) )
      {
        memset((char *)WnodeEventItem + 2, 0, 0x2EuLL);
        HIDWORD(WnodeEventItem[5]) = 0x20000;
        LOWORD(WnodeEventItem[0]) = 48;
        WnodeEventItem[1] = qword_1C0085010;
        *(GUID *)&WnodeEventItem[3] = EtwGuidNdisReceive;
        BYTE4(WnodeEventItem[0]) = 24;
        IoWMIWriteEvent(WnodeEventItem);
      }
      *(_DWORD *)(v14 + 68) |= 2u;
      v15 = (char *)qword_1C0082D80 + 64 * (unsigned __int64)KeGetPcr()->Prcb.Number;
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)v15 + 2);
      v16 = (__int64 *)*((_QWORD *)v15 + 1);
      *(_QWORD *)v14 = v15;
      *(_QWORD *)(v14 + 8) = v16;
      if ( (char *)*v16 != v15 )
        __fastfail(3u);
      *v16 = v14;
      *((_QWORD *)v15 + 1) = v14;
      ++*((_DWORD *)v15 + 6);
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)v15 + 2);
      KeReleaseSemaphore((PRKSEMAPHORE)v15 + 1, 0, 1, 0);
      ndisQueuePeriodicReceivesTimer();
    }
    else
    {
      ExQueueWorkItem((PWORK_QUEUE_ITEM)v14, CriticalWorkQueue);
    }
  }
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v14 + 72));
}
