/*
 * XREFs of VidSchiMarkDeviceAsError @ 0x1C0001200
 * Callers:
 *     VidSchiSendToExecutionQueue @ 0x1C00077C0 (VidSchiSendToExecutionQueue.c)
 *     VidSchiProcessDpcCompletedPacket @ 0x1C0007F30 (VidSchiProcessDpcCompletedPacket.c)
 *     VidSchMarkDeviceAsError @ 0x1C0026AC0 (VidSchMarkDeviceAsError.c)
 *     VidSchFlushDevice @ 0x1C0041290 (VidSchFlushDevice.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0052D60 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?ReferenceDmaBuffer@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@IEJPEAKPEAT_LARGE_INTEGER@@PEA_KPEAVDXGPROCESSVIDMMLOCK@@PEAPEAUVIDMM_ALLOC@@PEAU_VIDMM_PRIMARIES_REFERENCES@@PEAPEAVDXGALLOCATION@@@Z @ 0x1C0058050 (-ReferenceDmaBuffer@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@IEJPEA.c)
 *     ?MakeResident@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAPEAU_VIDMM_MULTI_ALLOC@@_KKPEA_K3@Z @ 0x1C005907C (-MakeResident@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAPEAU_VIDMM_MULTI_ALLOC@@_KKPEA_K3@Z.c)
 *     ?UnreferenceAllocationList@VIDMM_DEVICE@@QEAAXPEAPEAUVIDMM_ALLOC@@_KPEA_K@Z @ 0x1C005C5E8 (-UnreferenceAllocationList@VIDMM_DEVICE@@QEAAXPEAPEAUVIDMM_ALLOC@@_KPEA_K@Z.c)
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C00700D0 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 *     ?ValidateHistoryBuffers@VIDMM_GLOBAL@@QEAAJPEAPEAU_VIDMM_MULTI_ALLOC@@_K@Z @ 0x1C008C27C (-ValidateHistoryBuffers@VIDMM_GLOBAL@@QEAAJPEAPEAU_VIDMM_MULTI_ALLOC@@_K@Z.c)
 *     ?MoveOneResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z @ 0x1C0099070 (-MoveOneResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z.c)
 *     VidSchiMarkDevicesInError @ 0x1C009FF24 (VidSchiMarkDevicesInError.c)
 *     VidSchiSubmitRenderCommand @ 0x1C00A03FC (VidSchiSubmitRenderCommand.c)
 *     VidSchiMarkTdrFaultingDevice @ 0x1C00A27CC (VidSchiMarkTdrFaultingDevice.c)
 * Callees:
 *     VidSchiSignalRegisteredSyncObjects @ 0x1C00012B0 (VidSchiSignalRegisteredSyncObjects.c)
 *     __security_check_cookie @ 0x1C0013750 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1C0020774 (_TlgCreateSz.c)
 *     VidSchiNotifyDeviceRemoved @ 0x1C00277A4 (VidSchiNotifyDeviceRemoved.c)
 *     _TlgWriteAgg @ 0x1C0027EB4 (_TlgWriteAgg.c)
 */

LONG __fastcall VidSchiMarkDeviceAsError(__int64 a1, int a2)
{
  int v4; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  unsigned __int16 *v10; // rax
  __int64 v11; // rax
  int v12; // r9d
  int v13; // ecx
  int v14; // r8d
  int v15; // [rsp+20h] [rbp-E0h]
  int v16; // [rsp+40h] [rbp-C0h] BYREF
  int v17; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v18; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v19; // [rsp+50h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+60h] [rbp-A0h] BYREF
  __int64 *v21; // [rsp+80h] [rbp-80h]
  int v22; // [rsp+88h] [rbp-78h]
  int v23; // [rsp+8Ch] [rbp-74h]
  int *v24; // [rsp+90h] [rbp-70h]
  int v25; // [rsp+98h] [rbp-68h]
  int v26; // [rsp+9Ch] [rbp-64h]
  __int64 *v27; // [rsp+A0h] [rbp-60h]
  int v28; // [rsp+A8h] [rbp-58h]
  int v29; // [rsp+ACh] [rbp-54h]
  _DWORD *v30; // [rsp+B0h] [rbp-50h]
  int v31; // [rsp+B8h] [rbp-48h]
  int v32; // [rsp+BCh] [rbp-44h]
  __int64 v33; // [rsp+C0h] [rbp-40h]
  _DWORD v34[2]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v35; // [rsp+D0h] [rbp-30h]
  int v36; // [rsp+D8h] [rbp-28h]
  int v37; // [rsp+DCh] [rbp-24h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+E0h] [rbp-20h] BYREF
  int *v39; // [rsp+F0h] [rbp-10h]
  int v40; // [rsp+F8h] [rbp-8h]
  int v41; // [rsp+FCh] [rbp-4h]

  if ( (unsigned int)a2 > 0xE || (v4 = 17024, !_bittest(&v4, a2)) )
  {
    if ( a2 >= 0 && !g_ErrorDeviceDebugMode && !KdRefreshDebuggerNotPresent() )
    {
      DbgPrintEx(
        0x65u,
        0,
        "\n"
        "A GPU Scheduler device 0x%p from process %s has been put in error due to Reason %d.\n"
        "We broke into the debugger to allow a chance for debugging this issue.\n"
        "To disable debug breaks when device is put in error, run \"?? dxgmms2!g_ErrorDeviceDebugMode=1\" command,\n"
        "or \"ed 0x%p 1\"\n"
        "\n",
        (const void *)a1,
        *(const char **)(*(_QWORD *)(a1 + 40) + 2640LL),
        a2,
        (const void *)&g_ErrorDeviceDebugMode);
      JUMPOUT(0x1C00157A7LL);
    }
  }
  VidSchiSignalRegisteredSyncObjects(a1, 0LL);
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 160), a2, 0) && a2 != 14 )
  {
    if ( (*(_DWORD *)(a1 + 48) & 0x20) != 0 )
      VidSchiNotifyDeviceRemoved(a1);
    if ( DxgKrnlTelemetryGlobal_LogTelemetryEvent()
      && hProvider > 5u
      && (qword_1C0035010 & 0x400000000010LL) != 0
      && (qword_1C0035018 & 0x400000000010LL) == qword_1C0035018 )
    {
      v23 = 0;
      v26 = 0;
      v6 = *(_QWORD *)(a1 + 32);
      v21 = &v18;
      v18 = 1LL;
      v16 = 1;
      v24 = &v16;
      v22 = 8;
      v25 = 4;
      v7 = *(_QWORD *)(*(_QWORD *)(v6 + 16) + 268LL);
      v29 = 0;
      v19 = v7;
      v27 = &v19;
      v28 = 8;
      v8 = *(_QWORD *)(v6 + 16);
      v9 = *(_QWORD *)(a1 + 40);
      v10 = *(unsigned __int16 **)(v8 + 1072);
      v32 = 0;
      v30 = v34;
      v31 = 2;
      LODWORD(v7) = *v10;
      v11 = *((_QWORD *)v10 + 1);
      v34[1] = 0;
      v37 = 0;
      v33 = v11;
      v34[0] = v7;
      v35 = v9 + 2632;
      v36 = 8;
      TlgCreateSz(&pDesc, *(LPCSTR *)(v9 + 2640));
      v41 = 0;
      v39 = &v17;
      v17 = a2;
      v40 = v12;
      TlgWriteAgg(v13, (int)&dword_1C002B1EF, v14, v12, v15, &v20);
    }
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 32) + 1368LL) = MEMORY[0xFFFFF78000000320];
  return KeSetEvent((PRKEVENT)(*(_QWORD *)(a1 + 32) + 1336LL), 0, 0);
}
