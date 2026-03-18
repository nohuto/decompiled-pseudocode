/*
 * XREFs of ?FxUsbPipeRequestWorkItemHandler@FxUsbPipeContinuousReader@@IEAAXPEAUFxUsbPipeRepeatReader@@@Z @ 0x1C007FBC4
 * Callers:
 *     ?_FxUsbPipeRequestWorkItemThunk@FxUsbPipeContinuousReader@@KAXPEAX@Z @ 0x1C00805E0 (-_FxUsbPipeRequestWorkItemThunk@FxUsbPipeContinuousReader@@KAXPEAX@Z.c)
 * Callees:
 *     ?ResubmitRepeater@FxUsbPipeContinuousReader@@QEAAKPEAUFxUsbPipeRepeatReader@@PEAJ@Z @ 0x1C0003984 (-ResubmitRepeater@FxUsbPipeContinuousReader@@QEAAKPEAUFxUsbPipeRepeatReader@@PEAJ@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0005870 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005940 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0020B68 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?GetStatus@FxRequest@@QEAAJXZ @ 0x1C00557A8 (-GetStatus@FxRequest@@QEAAJXZ.c)
 *     ?GetPortStatus@FxUsbDevice@@IEAAJPEAK@Z @ 0x1C007BBD4 (-GetPortStatus@FxUsbDevice@@IEAAJPEAK@Z.c)
 *     ?IsConnected@FxUsbDevice@@QEAAJXZ @ 0x1C007BD48 (-IsConnected@FxUsbDevice@@QEAAJXZ.c)
 *     ?Reset@FxUsbDevice@@QEAAJXZ @ 0x1C007DBA0 (-Reset@FxUsbDevice@@QEAAJXZ.c)
 *     ?CancelRepeaters@FxUsbPipeContinuousReader@@QEAAXXZ @ 0x1C007F758 (-CancelRepeaters@FxUsbPipeContinuousReader@@QEAAXXZ.c)
 *     ?Reset@FxUsbPipe@@QEAAJXZ @ 0x1C00803E4 (-Reset@FxUsbPipe@@QEAAJXZ.c)
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
  WDFUSBPIPE__ *v15; // rcx
  unsigned __int8 v16; // al
  unsigned int v17; // edx
  int v18; // esi
  bool IsVersionGreaterThanOrEqualTo; // al
  FxUsbDevice *v20; // rcx
  unsigned __int8 v21; // dl
  FxUsbPipe *v22; // rcx
  unsigned __int8 v23; // r8
  FxUsbPipeRepeatReader *m_Readers; // rsi
  unsigned __int8 irql; // [rsp+50h] [rbp+8h] BYREF
  int status; // [rsp+58h] [rbp+10h] BYREF
  IFxMemory PortStatus; // [rsp+60h] [rbp+18h] BYREF

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
    if ( m_Pipe->m_ObjectSize )
      v15 = (WDFUSBPIPE__ *)((unsigned __int64)m_Pipe ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v15 = 0LL;
    v16 = this->m_ReadersFailedCallback(v15, v8, v11);
    this->m_WorkItemThread = 0LL;
  }
  else
  {
    v16 = 1;
  }
  if ( !v16 )
  {
    v18 = -1073741823;
    status = -1073741823;
    goto LABEL_19;
  }
  status = FxUsbDevice::IsConnected(m_UsbDevice);
  v18 = status;
  if ( status >= 0 )
  {
    IsVersionGreaterThanOrEqualTo = _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_Globals, v17, 9u);
    v20 = m_UsbDevice;
    if ( IsVersionGreaterThanOrEqualTo )
    {
      if ( (int)FxUsbDevice::GetPortStatus(m_UsbDevice, &PortStatus) < 0 || ((__int64)PortStatus.__vftable & 1) != 0 )
      {
        FxUsbPipe::Reset(this->m_Pipe);
        goto LABEL_19;
      }
      v20 = m_UsbDevice;
    }
    v18 = FxUsbDevice::Reset(v20);
    status = v18;
  }
LABEL_19:
  FxNonPagedObject::Lock(this->m_Pipe, &irql, v12);
  v21 = irql;
  v22 = this->m_Pipe;
  this->m_WorkItemQueued = 0;
  FxNonPagedObject::Unlock(v22, v21, v23);
  if ( v18 >= 0 )
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
