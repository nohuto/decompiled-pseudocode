/*
 * XREFs of VidSchiMarkDeviceAsError @ 0x1C0013E38
 * Callers:
 *     VidSchiSendToExecutionQueue @ 0x1C00086D0 (VidSchiSendToExecutionQueue.c)
 *     VidSchiProcessDpcCompletedPacket @ 0x1C0008E10 (VidSchiProcessDpcCompletedPacket.c)
 *     VidSchMarkDeviceAsError @ 0x1C00225F0 (VidSchMarkDeviceAsError.c)
 *     VidSchFlushDevice @ 0x1C003C560 (VidSchFlushDevice.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C004A9A0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?ReferenceDmaBuffer@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@IEJPEAKPEAT_LARGE_INTEGER@@PEA_KPEAVDXGPROCESSVIDMMLOCK@@PEAPEAUVIDMM_ALLOC@@PEAU_VIDMM_PRIMARIES_REFERENCES@@PEAPEAVDXGALLOCATION@@@Z @ 0x1C00509D0 (-ReferenceDmaBuffer@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@IEJPEA.c)
 *     ?MakeResident@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAPEAU_VIDMM_MULTI_ALLOC@@_KKPEA_K3@Z @ 0x1C0051AE0 (-MakeResident@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAPEAU_VIDMM_MULTI_ALLOC@@_KKPEA_K3@Z.c)
 *     ?UnreferenceAllocationList@VIDMM_DEVICE@@QEAAXPEAPEAUVIDMM_ALLOC@@_KPEA_K@Z @ 0x1C0053680 (-UnreferenceAllocationList@VIDMM_DEVICE@@QEAAXPEAPEAUVIDMM_ALLOC@@_KPEA_K@Z.c)
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C0064A50 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 *     ?ValidateHistoryBuffers@VIDMM_GLOBAL@@QEAAJPEAPEAU_VIDMM_MULTI_ALLOC@@_K@Z @ 0x1C007D094 (-ValidateHistoryBuffers@VIDMM_GLOBAL@@QEAAJPEAPEAU_VIDMM_MULTI_ALLOC@@_K@Z.c)
 *     VidSchiMarkDevicesInError @ 0x1C008A758 (VidSchiMarkDevicesInError.c)
 *     VidSchiSubmitRenderCommand @ 0x1C008ABB8 (VidSchiSubmitRenderCommand.c)
 *     VidSchiMarkTdrFaultingDevice @ 0x1C008CDB0 (VidSchiMarkTdrFaultingDevice.c)
 * Callees:
 *     VidSchiSignalRegisteredSyncObjects @ 0x1C0013EBC (VidSchiSignalRegisteredSyncObjects.c)
 *     __security_check_cookie @ 0x1C00155E0 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1C001EA0C (_TlgCreateSz.c)
 *     _TlgKeywordOn @ 0x1C001EA38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C001EA5C (_TlgWrite.c)
 *     VidSchiNotifyDeviceRemoved @ 0x1C0023160 (VidSchiNotifyDeviceRemoved.c)
 */

char __fastcall VidSchiMarkDeviceAsError(__int64 a1, int a2)
{
  int v4; // eax
  signed __int32 v5; // eax
  const struct _TlgProvider_t *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  unsigned __int16 *v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  LPCGUID v14; // r9
  TraceLoggingHProvider v15; // rcx
  int v17; // [rsp+40h] [rbp-69h] BYREF
  int v18; // [rsp+44h] [rbp-65h] BYREF
  __int64 v19; // [rsp+48h] [rbp-61h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-59h] BYREF
  int *v21; // [rsp+70h] [rbp-39h]
  int v22; // [rsp+78h] [rbp-31h]
  int v23; // [rsp+7Ch] [rbp-2Dh]
  __int64 *v24; // [rsp+80h] [rbp-29h]
  int v25; // [rsp+88h] [rbp-21h]
  int v26; // [rsp+8Ch] [rbp-1Dh]
  _DWORD *v27; // [rsp+90h] [rbp-19h]
  int v28; // [rsp+98h] [rbp-11h]
  int v29; // [rsp+9Ch] [rbp-Dh]
  __int64 v30; // [rsp+A0h] [rbp-9h]
  _DWORD v31[2]; // [rsp+A8h] [rbp-1h] BYREF
  __int64 v32; // [rsp+B0h] [rbp+7h]
  int v33; // [rsp+B8h] [rbp+Fh]
  int v34; // [rsp+BCh] [rbp+13h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+C0h] [rbp+17h] BYREF
  int *v36; // [rsp+D0h] [rbp+27h]
  int v37; // [rsp+D8h] [rbp+2Fh]
  int v38; // [rsp+DCh] [rbp+33h]
  __int64 v39; // [rsp+E0h] [rbp+37h]
  int v40; // [rsp+E8h] [rbp+3Fh]
  int v41; // [rsp+ECh] [rbp+43h]

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
      JUMPOUT(0x1C001BC53LL);
    }
  }
  VidSchiSignalRegisteredSyncObjects(a1, 0LL);
  v5 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 168), a2, 0);
  if ( !v5 && a2 != 14 )
  {
    ++*(_DWORD *)(*(_QWORD *)(a1 + 32) + 5280LL);
    if ( (*(_DWORD *)(a1 + 48) & 0x20) != 0 )
      VidSchiNotifyDeviceRemoved(a1);
    LOBYTE(v5) = DxgKrnlTelemetryGlobal_LogTelemetryEvent();
    if ( (_BYTE)v5 )
    {
      if ( (unsigned int)dword_1C002F020 > 5 )
      {
        LOBYTE(v5) = TlgKeywordOn(v6, 0x400000000000uLL);
        if ( (_BYTE)v5 )
        {
          v23 = 0;
          v7 = *(_QWORD *)(a1 + 32);
          v21 = &v17;
          v17 = 1;
          v22 = 4;
          v8 = *(_QWORD *)(*(_QWORD *)(v7 + 16) + 252LL);
          v26 = 0;
          v19 = v8;
          v24 = &v19;
          v25 = 8;
          v9 = *(_QWORD *)(v7 + 16);
          v10 = *(_QWORD *)(a1 + 40);
          v11 = *(unsigned __int16 **)(v9 + 984);
          v29 = 0;
          v27 = v31;
          v28 = 2;
          LODWORD(v8) = *v11;
          v12 = *((_QWORD *)v11 + 1);
          v31[1] = 0;
          v34 = 0;
          v30 = v12;
          v31[0] = v8;
          v32 = v10 + 2632;
          v33 = 8;
          TlgCreateSz(&pDesc, *(LPCSTR *)(v10 + 2640));
          v38 = 0;
          v36 = &v18;
          v13 = *(_QWORD *)(a1 + 32) + 5280LL;
          v18 = a2;
          v41 = 0;
          v39 = v13;
          v37 = (int)v14;
          v40 = (int)v14;
          LOBYTE(v5) = TlgWrite(v15, &unk_1C002613F, 0LL, v14, 0xAu, &pData);
        }
      }
    }
  }
  return v5;
}
