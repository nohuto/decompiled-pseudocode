/*
 * XREFs of imp_WdfRequestCompleteWithPriorityBoost @ 0x1C006E2D0
 * Callers:
 *     <none>
 * Callees:
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C0003F30 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     WPP_IFR_SF_qqxd @ 0x1C0031C94 (WPP_IFR_SF_qqxd.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     Vf_VerifyRequestComplete @ 0x1C00D046C (Vf_VerifyRequestComplete.c)
 */

void __fastcall imp_WdfRequestCompleteWithPriorityBoost(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Request,
        __int64 RequestStatus,
        unsigned __int16 PriorityBoost)
{
  const void *_a4; // rdi
  char v5; // bp
  unsigned int flags; // esi
  unsigned __int64 v7; // rbx
  __int64 v8; // rcx
  _FX_DRIVER_GLOBALS *v9; // rcx
  int v10; // eax
  _FX_DRIVER_GLOBALS *v11; // rcx
  const _GUID *Offset; // [rsp+20h] [rbp-38h]
  FxRequest *pRequest; // [rsp+68h] [rbp+10h] BYREF

  _a4 = 0LL;
  v5 = PriorityBoost;
  flags = RequestStatus;
  if ( !Request )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1008uLL);
  v7 = ~Request & 0xFFFFFFFFFFFFFFF8uLL;
  LOWORD(v8) = 0;
  if ( (Request & 1) != 0 )
  {
    v8 = *(unsigned __int16 *)v7;
    v7 -= v8;
  }
  if ( *(_WORD *)(v7 + 8) == 4104 )
  {
    pRequest = (FxRequest *)v7;
  }
  else
  {
    FxObjectHandleGetPtrQI((FxObject *)v7, (void **)&pRequest, (void *)Request, 0x1008u, v8);
    v7 = (unsigned __int64)pRequest;
  }
  v9 = *(_FX_DRIVER_GLOBALS **)(v7 + 16);
  if ( v9->FxVerifierOn )
  {
    v10 = Vf_VerifyRequestComplete(v9, (FxRequest *)v7);
    v7 = (unsigned __int64)pRequest;
  }
  else
  {
    v10 = 0;
  }
  if ( v10 >= 0 )
  {
    v11 = *(_FX_DRIVER_GLOBALS **)(v7 + 16);
    if ( v11->FxVerboseOn )
    {
      if ( *(_WORD *)(v7 + 10) )
        _a4 = (const void *)(v7 ^ 0xFFFFFFFFFFFFFFF8uLL);
      WPP_IFR_SF_qqxd(
        v11,
        *(_QWORD *)(*(_QWORD *)(v7 + 152) + 56LL),
        RequestStatus,
        0xCu,
        Offset,
        _a4,
        *(const void **)(v7 + 152),
        *(_QWORD *)(*(_QWORD *)(v7 + 152) + 56LL),
        flags);
    }
    *(_BYTE *)(v7 + 236) = v5;
    FxRequest::CompleteInternal((FxRequest *)v7, (_FX_DRIVER_GLOBALS *)flags, RequestStatus, PriorityBoost);
  }
}
