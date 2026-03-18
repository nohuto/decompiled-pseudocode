/*
 * XREFs of ?VidSchiAllocatePacketFromGuaranteedPacketPool@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU_VIDSCH_CONTEXT@@@Z @ 0x1C00209B0
 * Callers:
 *     ?VidSchiEnqueueDeviceCommandToWorkerThreadAtDpc@@YAXPEAU_VIDSCH_ENQUEUE_DEVICECOMMAND_TO_WORKER@@@Z @ 0x1C0020C60 (-VidSchiEnqueueDeviceCommandToWorkerThreadAtDpc@@YAXPEAU_VIDSCH_ENQUEUE_DEVICECOMMAND_TO_WORKER@.c)
 * Callees:
 *     VidSchiInterlockedInsertTailList @ 0x1C0007050 (VidSchiInterlockedInsertTailList.c)
 *     VidSchiInterlockedRemoveHeadListIfExist @ 0x1C00070B0 (VidSchiInterlockedRemoveHeadListIfExist.c)
 *     memset @ 0x1C0014E40 (memset.c)
 */

struct _VIDSCH_QUEUE_PACKET *__fastcall VidSchiAllocatePacketFromGuaranteedPacketPool(struct _VIDSCH_CONTEXT *a1)
{
  __int64 v2; // rbx
  KSPIN_LOCK *v3; // rbp
  unsigned int v4; // esi
  __int64 *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 *v10; // rbx
  _QWORD *v12; // rax

  v2 = *(_QWORD *)(*((_QWORD *)a1 + 12) + 24LL);
  v3 = (KSPIN_LOCK *)(v2 + 1864);
  v4 = *(_DWORD *)(v2 + 128) * (48 * *(_DWORD *)(v2 + 56) + ((8 * *(_DWORD *)(v2 + 56) + 167) & 0xFFFFFFF8))
     + 8 * (*(_DWORD *)(v2 + 56) + 88);
  if ( v4 <= 0x370 )
    v4 = 880;
  v5 = VidSchiInterlockedRemoveHeadListIfExist((KSPIN_LOCK *)(v2 + 1864), (__int64 **)a1 + 92, (_DWORD *)a1 + 188);
  if ( !v5 )
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v7, v6, v8, v9);
    v12[7] = (char *)a1 + 776;
    v12[3] = 281LL;
    v12[4] = 3584LL;
    v12[5] = v2;
    v12[6] = a1;
    WdLogEvent5_WdCriticalError(v12);
    JUMPOUT(0x1C0020AB5LL);
  }
  v10 = v5 - 1;
  if ( v5 != (__int64 *)8 )
  {
    memset(v5 - 1, 0, v4);
    *((_DWORD *)v10 + 16) |= 0x40u;
    v10[7] = MEMORY[0xFFFFF78000000320];
    *((_DWORD *)v10 + 13) = 1;
    VidSchiInterlockedInsertTailList(v3, (__int64)a1 + 760, v10 + 1, (_DWORD *)a1 + 194);
  }
  return (struct _VIDSCH_QUEUE_PACKET *)v10;
}
