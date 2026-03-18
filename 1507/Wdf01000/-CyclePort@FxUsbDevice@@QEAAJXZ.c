/*
 * XREFs of ?CyclePort@FxUsbDevice@@QEAAJXZ @ 0x1C008C380
 * Callers:
 *     imp_WdfUsbTargetDeviceCyclePortSynchronously @ 0x1C0088F70 (imp_WdfUsbTargetDeviceCyclePortSynchronously.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C00102D0 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z @ 0x1C00326D4 (-FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z.c)
 *     memset @ 0x1C00333C0 (memset.c)
 *     ??1FxSyncRequest@@UEAA@XZ @ 0x1C005C350 (--1FxSyncRequest@@UEAA@XZ.c)
 *     ??0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z @ 0x1C005C450 (--0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z.c)
 *     ?SubmitSyncRequestIgnoreTargetState@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@@Z @ 0x1C00847BC (-SubmitSyncRequestIgnoreTargetState@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OP.c)
 *     ?CancelSentIo@FxUsbDevice@@QEAAXXZ @ 0x1C008B7F8 (-CancelSentIo@FxUsbDevice@@QEAAXXZ.c)
 *     ?FormatCycleRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@@Z @ 0x1C008C6F0 (-FormatCycleRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@@Z.c)
 */

__int64 __fastcall FxUsbDevice::CyclePort(FxUsbDevice *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  __int64 v3; // rdx
  int v4; // edi
  unsigned __int8 v5; // r8
  _MDL *m_OriginalMdl; // rcx
  FxIoContext context; // [rsp+20h] [rbp-E8h] BYREF
  FxSyncRequest request; // [rsp+D0h] [rbp-38h] BYREF

  LOBYTE(context.m_BufferToFree) = 1;
  memset(&context.m_CompletionParams.IoStatus, 0, 80);
  m_Globals = this->m_Globals;
  context.m_CompletionParams.IoStatus.Pointer = (void *)0xFF00000048LL;
  memset(&context.m_OriginalSystemBuffer, 0, 40);
  *(_QWORD *)&context.m_CompletionParams.Size = &FxIoContext::`vftable';
  memset(&context.m_MdlToFreeSize, 0, 19);
  request.__vftable = 0LL;
  FxSyncRequest::FxSyncRequest(
    (FxSyncRequest *)&request.m_Type,
    m_Globals,
    (FxRequestContext *)&context.m_CompletionParams,
    0LL);
  v4 = FxUsbDevice::FormatCycleRequest(this, *(FxRequestBase **)&request.m_ClearContextOnDestroy);
  if ( v4 >= 0 )
  {
    FxUsbDevice::CancelSentIo(this, v3, v5);
    v4 = FxIoTarget::SubmitSyncRequestIgnoreTargetState(this, *(FxRequestBase **)&request.m_ClearContextOnDestroy, 0LL);
  }
  FxSyncRequest::~FxSyncRequest((FxSyncRequest *)&request.m_Type);
  *(_QWORD *)&context.m_CompletionParams.Size = &FxIoContext::`vftable';
  if ( context.m_OriginalSystemBuffer )
  {
    FxPoolFree((_QWORD *)context.m_OriginalSystemBuffer);
    context.m_OriginalSystemBuffer = 0LL;
  }
  m_OriginalMdl = context.m_OriginalMdl;
  context.m_MdlToFreeSize = 0LL;
  LOBYTE(context.m_OtherMemory) = 0;
  if ( context.m_OriginalMdl )
  {
    if ( BYTE1(context.m_OtherMemory) )
    {
      MmUnlockPages(context.m_OriginalMdl);
      m_OriginalMdl = context.m_OriginalMdl;
      BYTE1(context.m_OtherMemory) = 0;
    }
    if ( *(_BYTE *)(*(_QWORD *)&context.m_OriginalFlags + 316LL) )
      FxMdlFreeDebug(*(_FX_DRIVER_GLOBALS **)&context.m_OriginalFlags, m_OriginalMdl);
    else
      IoFreeMdl(m_OriginalMdl);
  }
  return (unsigned int)v4;
}
