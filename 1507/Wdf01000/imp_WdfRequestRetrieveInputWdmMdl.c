/*
 * XREFs of imp_WdfRequestRetrieveInputWdmMdl @ 0x1C006F350
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?GetMdl@FxRequest@@QEAAJPEAPEAU_MDL@@@Z @ 0x1C0073CF0 (-GetMdl@FxRequest@@QEAAJPEAPEAU_MDL@@@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

int __fastcall imp_WdfRequestRetrieveInputWdmMdl(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Request,
        _MDL **Mdl)
{
  FxRequest *v5; // r10
  __int64 Offset; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // r11
  void *retaddr; // [rsp+48h] [rbp+0h]
  FxRequest *pRequest; // [rsp+58h] [rbp+10h] BYREF

  if ( !Request )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1008uLL);
  v5 = (FxRequest *)(~Request & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( (Request & 1) != 0 )
  {
    Offset = LOWORD(v5->__vftable);
    v5 = (FxRequest *)((char *)v5 - Offset);
  }
  if ( v5->m_Type == 4104 )
  {
    pRequest = v5;
  }
  else
  {
    FxObjectHandleGetPtrQI(v5, (void **)&pRequest, (void *)Request, 0x1008u, Offset);
    v5 = pRequest;
  }
  m_Globals = v5->m_Globals;
  if ( !Mdl )
    FxVerifierNullBugCheck(v5->m_Globals, retaddr);
  *Mdl = 0LL;
  if ( v5->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->MajorFunction != 3 )
    return FxRequest::GetMdl(v5, Mdl);
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_qd(m_Globals, 5u, 0x10u, 0x29u, WPP_FxRequestApi_cpp_Traceguids, (const void *)Request, -1073741808);
  return -1073741808;
}
