/*
 * XREFs of ?ReleaseAndRestore@FxUsbDeviceControlContext@@UEAAXPEAVFxRequestBase@@@Z @ 0x1C00901D0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z @ 0x1C003FD34 (-FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z.c)
 */

void __fastcall FxUsbDeviceControlContext::ReleaseAndRestore(FxUsbDeviceControlContext *this, FxRequestBase *Request)
{
  _MDL *m_PartialMdl; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx

  m_PartialMdl = this->m_PartialMdl;
  if ( m_PartialMdl )
  {
    if ( this->m_UnlockPages )
    {
      MmUnlockPages(m_PartialMdl);
      this->m_UnlockPages = 0;
    }
    m_Globals = Request->m_Globals;
    if ( m_Globals->FxVerifierOn )
      FxMdlFreeDebug(m_Globals, this->m_PartialMdl);
    else
      IoFreeMdl(this->m_PartialMdl);
    this->m_PartialMdl = 0LL;
  }
  FxRequestContext::ReleaseAndRestore(this, Request);
}
