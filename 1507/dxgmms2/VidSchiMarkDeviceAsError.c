/*
 * XREFs of VidSchiMarkDeviceAsError @ 0x1C0003ED4
 * Callers:
 *     VidSchiSendToExecutionQueue @ 0x1C0001A80 (VidSchiSendToExecutionQueue.c)
 *     VidSchiProcessDpcCompletedPacket @ 0x1C00022F0 (VidSchiProcessDpcCompletedPacket.c)
 *     VidSchMarkDeviceAsError @ 0x1C001CAE0 (VidSchMarkDeviceAsError.c)
 *     VidSchFlushDevice @ 0x1C002F300 (VidSchFlushDevice.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C002F6E0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C0038CFC (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 *     ?MakeResident@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAPEAU_VIDMM_MULTI_ALLOC@@_KKPEA_K3@Z @ 0x1C004F3F0 (-MakeResident@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAPEAU_VIDMM_MULTI_ALLOC@@_KKPEA_K3@Z.c)
 *     ?ReferenceDmaBuffer@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@IEJPEAKPEAT_LARGE_INTEGER@@PEA_KPEAVDXGPROCESSVIDMMLOCK@@PEAPEAUVIDMM_ALLOC@@PEAU_VIDMM_PRIMARIES_REFERENCES@@PEAPEAVDXGALLOCATION@@@Z @ 0x1C0052224 (-ReferenceDmaBuffer@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DMA_BUFFER@@PEAU_D3DDDI_ALLOCATIONLIST@@IEJPEA.c)
 *     ?ValidateHistoryBuffers@VIDMM_GLOBAL@@QEAAJPEAPEAU_VIDMM_MULTI_ALLOC@@_K@Z @ 0x1C005510C (-ValidateHistoryBuffers@VIDMM_GLOBAL@@QEAAJPEAPEAU_VIDMM_MULTI_ALLOC@@_K@Z.c)
 *     ?UnreferenceAllocationList@VIDMM_DEVICE@@QEAAXPEAPEAUVIDMM_ALLOC@@_KPEA_K@Z @ 0x1C0059730 (-UnreferenceAllocationList@VIDMM_DEVICE@@QEAAXPEAPEAUVIDMM_ALLOC@@_KPEA_K@Z.c)
 *     VidSchiMarkDevicesInError @ 0x1C0076920 (VidSchiMarkDevicesInError.c)
 *     VidSchiSubmitRenderCommand @ 0x1C00772CC (VidSchiSubmitRenderCommand.c)
 *     VidSchiMarkTdrFaultingDevice @ 0x1C007AAE0 (VidSchiMarkTdrFaultingDevice.c)
 * Callees:
 *     VidSchiSignalRegisteredSyncObjects @ 0x1C0003F58 (VidSchiSignalRegisteredSyncObjects.c)
 *     __security_check_cookie @ 0x1C0006E70 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1C0011DE4 (_TlgCreateSz.c)
 *     _TlgKeywordOn @ 0x1C0011E10 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0011E3C (_TlgWrite.c)
 */

char __fastcall VidSchiMarkDeviceAsError(__int64 a1, int a2)
{
  int v4; // eax
  ULONGLONG v5; // rdx
  const struct _TlgProvider_t *v6; // rcx
  signed __int32 v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  unsigned __int16 *v12; // rax
  __int64 v13; // rax
  TraceLoggingHProvider v14; // rcx
  LPCGUID cData; // r9
  int v17; // [rsp+40h] [rbp-49h] BYREF
  __int64 v18; // [rsp+48h] [rbp-41h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-39h] BYREF
  __int64 *v20; // [rsp+70h] [rbp-19h]
  int v21; // [rsp+78h] [rbp-11h]
  int v22; // [rsp+7Ch] [rbp-Dh]
  _DWORD *v23; // [rsp+80h] [rbp-9h]
  int v24; // [rsp+88h] [rbp-1h]
  int v25; // [rsp+8Ch] [rbp+3h]
  __int64 v26; // [rsp+90h] [rbp+7h]
  _DWORD v27[2]; // [rsp+98h] [rbp+Fh] BYREF
  __int64 v28; // [rsp+A0h] [rbp+17h]
  int v29; // [rsp+A8h] [rbp+1Fh]
  int v30; // [rsp+ACh] [rbp+23h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+B0h] [rbp+27h] BYREF
  int *v32; // [rsp+C0h] [rbp+37h]
  int v33; // [rsp+C8h] [rbp+3Fh]
  int v34; // [rsp+CCh] [rbp+43h]

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
      JUMPOUT(0x1C000B671LL);
    }
  }
  VidSchiSignalRegisteredSyncObjects(a1, 0LL);
  v7 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 168), a2, 0);
  if ( !v7 && a2 != 14 && (unsigned int)dword_1C0027010 > 5 )
  {
    LOBYTE(v7) = TlgKeywordOn(v6, v5);
    if ( (_BYTE)v7 )
    {
      v8 = *(_QWORD *)(a1 + 32);
      v9 = *(_QWORD *)(*(_QWORD *)(v8 + 16) + 252LL);
      v22 = 0;
      v18 = v9;
      v20 = &v18;
      v21 = 8;
      v10 = *(_QWORD *)(v8 + 16);
      v11 = *(_QWORD *)(a1 + 40);
      v12 = *(unsigned __int16 **)(v10 + 976);
      v25 = 0;
      v23 = v27;
      v24 = 2;
      LODWORD(v9) = *v12;
      v13 = *((_QWORD *)v12 + 1);
      v27[1] = 0;
      v30 = 0;
      v26 = v13;
      v27[0] = v9;
      v28 = v11 + 2632;
      v29 = 8;
      TlgCreateSz(&pDesc, *(LPCSTR *)(v11 + 2640));
      v34 = 0;
      v32 = &v17;
      v17 = a2;
      v33 = 4;
      LOBYTE(v7) = TlgWrite(v14, &unk_1C0020F7F, 0LL, cData, (UINT32)cData, &pData);
    }
  }
  return v7;
}
