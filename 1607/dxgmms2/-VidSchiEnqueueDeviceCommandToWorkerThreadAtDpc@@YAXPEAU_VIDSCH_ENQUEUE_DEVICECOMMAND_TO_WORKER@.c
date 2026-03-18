/*
 * XREFs of ?VidSchiEnqueueDeviceCommandToWorkerThreadAtDpc@@YAXPEAU_VIDSCH_ENQUEUE_DEVICECOMMAND_TO_WORKER@@@Z @ 0x1C0020C60
 * Callers:
 *     VidSchiProcessDpcVSyncCookie @ 0x1C0005A50 (VidSchiProcessDpcVSyncCookie.c)
 *     ?VidSchiExecuteMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@IIAEAU_VIDSCH_CALL_EXECUTE_FLIP@@PEAHPEAUVIDSCH_FLIP_QUEUE@@K@Z @ 0x1C0020E18 (-VidSchiExecuteMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@IIAEAU_VIDSCH_CALL_EXECUTE_FLI.c)
 * Callees:
 *     VidSchiUpdatePriorityTables @ 0x1C0008AF0 (VidSchiUpdatePriorityTables.c)
 *     memset @ 0x1C0014E40 (memset.c)
 *     ?VidSchiAllocatePacketFromGuaranteedPacketPool@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU_VIDSCH_CONTEXT@@@Z @ 0x1C00209B0 (-VidSchiAllocatePacketFromGuaranteedPacketPool@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU_VIDSCH_CONTEXT@.c)
 */

void __fastcall VidSchiEnqueueDeviceCommandToWorkerThreadAtDpc(struct _VIDSCH_ENQUEUE_DEVICECOMMAND_TO_WORKER *a1)
{
  int v1; // esi
  __int64 v3; // rdi
  __int128 v4; // xmm0
  __int64 (__fastcall *v5)(); // rax
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int64 v8; // rbx
  struct _VIDSCH_QUEUE_PACKET *PacketFromGuaranteedPacketPool; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  _OWORD v18[8]; // [rsp+28h] [rbp-29h] BYREF
  int v19; // [rsp+B8h] [rbp+67h] BYREF

  v1 = *((_DWORD *)a1 + 20);
  v3 = 0LL;
  memset(v18, 0, sizeof(v18));
  if ( v1 == 5 )
  {
    v6 = *(_OWORD *)a1;
    v3 = *(_QWORD *)a1;
    v5 = VidSchiExecuteMmIoFlipAtPassiveLevel;
    DWORD2(v18[2]) = 5;
    v18[3] = v6;
    v18[5] = *((_OWORD *)a1 + 2);
    v18[7] = *((_OWORD *)a1 + 4);
  }
  else
  {
    if ( v1 != 6 )
      goto LABEL_6;
    v4 = *(_OWORD *)a1;
    v3 = *((_QWORD *)a1 + 3);
    v5 = VidSchiExecutePostPresentAtPassiveLevel;
    DWORD2(v18[2]) = 6;
    v18[3] = v4;
    v18[5] = *((_OWORD *)a1 + 2);
    *(_QWORD *)&v18[7] = *((_QWORD *)a1 + 8);
  }
  v7 = *((_OWORD *)a1 + 1);
  *((_QWORD *)&v18[1] + 1) = v5;
  v18[4] = v7;
  v18[6] = *((_OWORD *)a1 + 3);
LABEL_6:
  v8 = *(_QWORD *)(v3 + 208);
  PacketFromGuaranteedPacketPool = VidSchiAllocatePacketFromGuaranteedPacketPool((struct _VIDSCH_CONTEXT *)v8);
  *(_DWORD *)PacketFromGuaranteedPacketPool = 1953189969;
  *((_DWORD *)PacketFromGuaranteedPacketPool + 12) = 6;
  *((_QWORD *)PacketFromGuaranteedPacketPool + 7) = MEMORY[0xFFFFF78000000320];
  *((_DWORD *)PacketFromGuaranteedPacketPool + 13) = 2;
  *((_QWORD *)PacketFromGuaranteedPacketPool + 11) = v8;
  CurrentThread = KeGetCurrentThread();
  v11 = v18[1];
  v19 = 0;
  *(_OWORD *)((char *)PacketFromGuaranteedPacketPool + 264) = v18[0];
  *((_QWORD *)PacketFromGuaranteedPacketPool + 12) = CurrentThread;
  v12 = v18[2];
  *(_OWORD *)((char *)PacketFromGuaranteedPacketPool + 280) = v11;
  v13 = v18[3];
  *(_OWORD *)((char *)PacketFromGuaranteedPacketPool + 296) = v12;
  v14 = v18[4];
  *(_OWORD *)((char *)PacketFromGuaranteedPacketPool + 312) = v13;
  v15 = v18[5];
  *(_OWORD *)((char *)PacketFromGuaranteedPacketPool + 328) = v14;
  v16 = v18[6];
  *(_OWORD *)((char *)PacketFromGuaranteedPacketPool + 344) = v15;
  v17 = v18[7];
  *(_OWORD *)((char *)PacketFromGuaranteedPacketPool + 360) = v16;
  *(_OWORD *)((char *)PacketFromGuaranteedPacketPool + 376) = v17;
  VidSchiUpdatePriorityTables(v3, (__int64)PacketFromGuaranteedPacketPool, 1, &v19);
  if ( v1 == 5 )
  {
    ++*(_DWORD *)(v8 + 808);
  }
  else if ( v1 == 6 )
  {
    ++*(_DWORD *)(v8 + 812);
  }
  if ( v19 )
  {
    *(_QWORD *)(v3 + 1368) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v3 + 1336), 0, 0);
  }
}
