/*
 * XREFs of ?FxUsbPipeRequestWorkItemHandler@FxUsbPipeContinuousReader@@IEAAXPEAUFxUsbPipeRepeatReader@@@Z @ 0x1C008D164
 * Callers:
 *     ?_FxUsbPipeRequestWorkItemThunk@FxUsbPipeContinuousReader@@KAXPEAX@Z @ 0x1C008DC60 (-_FxUsbPipeRequestWorkItemThunk@FxUsbPipeContinuousReader@@KAXPEAX@Z.c)
 * Callees:
 *     ?ResubmitRepeater@FxUsbPipeContinuousReader@@QEAAKPEAUFxUsbPipeRepeatReader@@PEAJ@Z @ 0x1C00030EC (-ResubmitRepeater@FxUsbPipeContinuousReader@@QEAAKPEAUFxUsbPipeRepeatReader@@PEAJ@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0010B20 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0010B50 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C001ABB8 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?GetStatus@FxRequest@@QEAAJXZ @ 0x1C0065F54 (-GetStatus@FxRequest@@QEAAJXZ.c)
 *     ?CancelRepeaters@FxUsbPipeContinuousReader@@QEAAXXZ @ 0x1C008CCD4 (-CancelRepeaters@FxUsbPipeContinuousReader@@QEAAXXZ.c)
 *     ?Reset@FxUsbPipe@@QEAAJXZ @ 0x1C008D988 (-Reset@FxUsbPipe@@QEAAJXZ.c)
 *     ?GetPortStatus@FxUsbDevice@@IEAAJPEAK@Z @ 0x1C008FBC8 (-GetPortStatus@FxUsbDevice@@IEAAJPEAK@Z.c)
 *     ?IsConnected@FxUsbDevice@@QEAAJXZ @ 0x1C008FD40 (-IsConnected@FxUsbDevice@@QEAAJXZ.c)
 *     ?Reset@FxUsbDevice@@QEAAJXZ @ 0x1C0092BEC (-Reset@FxUsbDevice@@QEAAJXZ.c)
 */

void __fastcall FxUsbPipeContinuousReader::FxUsbPipeRequestWorkItemHandler(
        FxUsbPipeContinuousReader *this,
        FxUsbPipeRepeatReader *FailedRepeater,
        unsigned __int8 a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r14
  int v6; // eax
  FxRequest *Request; // rdx
  int v8; // r15d
  int v9; // ebx
  int *Buffer; // rcx
  int v11; // esi
  unsigned __int8 v12; // r8
  FxUsbDevice *m_UsbDevice; // rbp
  FxUsbPipe *m_Pipe; // rcx
  unsigned __int16 m_ObjectSize; // ax
  WDFUSBPIPE__ *v16; // rcx
  unsigned __int8 v17; // al
  unsigned int v18; // edx
  int v19; // esi
  bool IsVersionGreaterThanOrEqualTo; // al
  FxUsbDevice *v21; // rcx
  unsigned __int8 v22; // dl
  FxUsbPipe *v23; // rcx
  unsigned __int8 v24; // r8
  FxUsbPipeRepeatReader *m_Readers; // rsi
  unsigned __int8 irql; // [rsp+50h] [rbp+8h] BYREF
  int status; // [rsp+58h] [rbp+10h] BYREF
  unsigned int PortStatus; // [rsp+60h] [rbp+18h] BYREF

  m_Globals = this->m_Pipe->m_Globals;
  v6 = FxRequest::GetStatus(FailedRepeater->Request, (__int64)FailedRepeater, a3);
  Request = FailedRepeater->Request;
  v8 = v6;
  v9 = 0;
  Buffer = (int *)Request->m_RequestContext->m_CompletionParams.Parameters.Write.Buffer;
  if ( Buffer )
    v11 = *Buffer;
  else
    v11 = 0;
  FxUsbPipeContinuousReader::CancelRepeaters(this);
  m_UsbDevice = this->m_Pipe->m_UsbDevice;
  if ( this->m_ReadersFailedCallback )
  {
    m_Pipe = this->m_Pipe;
    this->m_WorkItemThread = KeGetCurrentThread();
    m_ObjectSize = m_Pipe->m_ObjectSize;
    v16 = (WDFUSBPIPE__ *)((unsigned __int64)m_Pipe ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      v16 = 0LL;
    v17 = this->m_ReadersFailedCallback(v16, v8, v11);
    this->m_WorkItemThread = 0LL;
  }
  else
  {
    v17 = 1;
  }
  if ( !v17 )
  {
    v19 = -1073741823;
    status = -1073741823;
    goto LABEL_18;
  }
  status = FxUsbDevice::IsConnected(m_UsbDevice);
  v19 = status;
  if ( status >= 0 )
  {
    IsVersionGreaterThanOrEqualTo = _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_Globals, v18, 9u);
    v21 = m_UsbDevice;
    if ( IsVersionGreaterThanOrEqualTo )
    {
      if ( FxUsbDevice::GetPortStatus(m_UsbDevice, &PortStatus) < 0 || (PortStatus & 1) != 0 )
      {
        FxUsbPipe::Reset(this->m_Pipe);
        goto LABEL_18;
      }
      v21 = m_UsbDevice;
    }
    v19 = FxUsbDevice::Reset(v21);
    status = v19;
  }
LABEL_18:
  FxNonPagedObject::Lock(this->m_Pipe, &irql, v12);
  v22 = irql;
  v23 = this->m_Pipe;
  this->m_WorkItemQueued = 0;
  FxNonPagedObject::Unlock(v23, v22, v24);
  if ( v19 >= 0 )
  {
    this->m_NumFailedReaders = 0;
    if ( this->m_NumReaders )
    {
      m_Readers = this->m_Readers;
      do
      {
        if ( (FxUsbPipeContinuousReader::ResubmitRepeater(this, m_Readers, &status) & 1) != 0 )
          IofCallDriver(this->m_Pipe->m_TargetDevice, m_Readers->Request->m_Irp.m_Irp);
        ++v9;
        ++m_Readers;
      }
      while ( v9 < this->m_NumReaders );
    }
  }
}
