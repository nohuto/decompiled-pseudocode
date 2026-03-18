/*
 * XREFs of imp_WdfRequestComplete @ 0x1C0003590
 * Callers:
 *     <none>
 * Callees:
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C0003F30 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     WPP_IFR_SF_qqxd @ 0x1C0031C94 (WPP_IFR_SF_qqxd.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     Vf_VerifyRequestComplete @ 0x1C00D046C (Vf_VerifyRequestComplete.c)
 */

void __fastcall imp_WdfRequestComplete(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Request,
        unsigned int RequestStatus)
{
  const void *_a4; // rbp
  unsigned __int64 v5; // rbx
  __int64 v6; // rcx
  _FX_DRIVER_GLOBALS *v7; // rcx
  FxDeviceBase *v8; // rdi
  _FX_DRIVER_GLOBALS *v9; // rcx
  const _GUID *Offset; // [rsp+20h] [rbp-38h]
  FxRequest *pRequest; // [rsp+68h] [rbp+10h] BYREF

  if ( !Request )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1008uLL);
  _a4 = 0LL;
  v5 = ~Request & 0xFFFFFFFFFFFFFFF8uLL;
  LOWORD(v6) = 0;
  if ( (Request & 1) != 0 )
  {
    v6 = *(unsigned __int16 *)v5;
    v5 -= v6;
  }
  if ( *(_WORD *)(v5 + 8) == 4104 )
  {
    pRequest = (FxRequest *)v5;
  }
  else
  {
    FxObjectHandleGetPtrQI((FxObject *)v5, (void **)&pRequest, (void *)Request, 0x1008u, v6);
    v5 = (unsigned __int64)pRequest;
  }
  v7 = *(_FX_DRIVER_GLOBALS **)(v5 + 16);
  if ( v7->FxVerifierOn )
  {
    if ( Vf_VerifyRequestComplete(v7, (FxRequest *)v5) < 0 )
      return;
    v5 = (unsigned __int64)pRequest;
  }
  v8 = *(FxDeviceBase **)(v5 + 96);
  v9 = *(_FX_DRIVER_GLOBALS **)(v5 + 16);
  if ( v9->FxVerboseOn )
  {
    if ( *(_WORD *)(v5 + 10) )
      _a4 = (const void *)(v5 ^ 0xFFFFFFFFFFFFFFF8uLL);
    WPP_IFR_SF_qqxd(
      v9,
      *(_QWORD *)(*(_QWORD *)(v5 + 152) + 56LL),
      RequestStatus,
      0xBu,
      Offset,
      _a4,
      *(const void **)(v5 + 152),
      *(_QWORD *)(*(_QWORD *)(v5 + 152) + 56LL),
      RequestStatus);
  }
  if ( v8 )
    *(_BYTE *)(v5 + 236) = HIBYTE(v8[1].m_Globals);
  else
    *(_BYTE *)(v5 + 236) = 0;
  FxRequest::CompleteInternal((FxRequest *)v5, RequestStatus);
}
