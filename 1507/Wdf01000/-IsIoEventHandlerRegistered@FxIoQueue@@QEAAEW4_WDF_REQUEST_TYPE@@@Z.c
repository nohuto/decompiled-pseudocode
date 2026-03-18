/*
 * XREFs of ?IsIoEventHandlerRegistered@FxIoQueue@@QEAAEW4_WDF_REQUEST_TYPE@@@Z @ 0x1C000C9E8
 * Callers:
 *     ?Dispatch@FxPkgIo@@UEAAJPEAU_IRP@@@Z @ 0x1C0003830 (-Dispatch@FxPkgIo@@UEAAJPEAU_IRP@@@Z.c)
 *     imp_WdfDeviceWdmDispatchIrp @ 0x1C006CF50 (imp_WdfDeviceWdmDispatchIrp.c)
 *     ?ConfigureForwarding@FxPkgIo@@QEAAJPEAVFxIoQueue@@W4_WDF_REQUEST_TYPE@@@Z @ 0x1C0094A3C (-ConfigureForwarding@FxPkgIo@@QEAAJPEAVFxIoQueue@@W4_WDF_REQUEST_TYPE@@@Z.c)
 *     ?EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z @ 0x1C0094CBC (-EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z.c)
 *     ?ConfigureForwarding@FxPkgGeneral@@QEAAJPEAVFxIoQueue@@@Z @ 0x1C00A4A3C (-ConfigureForwarding@FxPkgGeneral@@QEAAJPEAVFxIoQueue@@@Z.c)
 *     Vf_VerifyWdfDeviceWdmDispatchIrpToIoQueue @ 0x1C00D0180 (Vf_VerifyWdfDeviceWdmDispatchIrpToIoQueue.c)
 * Callees:
 *     <none>
 */

bool __fastcall FxIoQueue::IsIoEventHandlerRegistered(FxIoQueue *this, _WDF_REQUEST_TYPE RequestType)
{
  int v2; // edx
  int v3; // edx
  int v4; // edx
  bool v5; // zf

  if ( this->m_Type == WdfIoQueueDispatchManual || this->m_IoDefault.Method )
    return 1;
  v2 = RequestType - 3;
  if ( v2 )
  {
    v3 = v2 - 1;
    if ( v3 )
    {
      v4 = v3 - 10;
      if ( v4 )
      {
        if ( v4 != 1 )
          return 0;
        v5 = this->m_IoInternalDeviceControl.Method == 0LL;
      }
      else
      {
        v5 = this->m_IoDeviceControl.Method == 0LL;
      }
    }
    else
    {
      v5 = this->m_IoWrite.Method == 0LL;
    }
  }
  else
  {
    v5 = this->m_IoRead.Method == 0LL;
  }
  return !v5;
}
