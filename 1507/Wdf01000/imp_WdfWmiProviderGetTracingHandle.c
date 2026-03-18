/*
 * XREFs of imp_WdfWmiProviderGetTracingHandle @ 0x1C0068BE0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

unsigned __int64 __fastcall imp_WdfWmiProviderGetTracingHandle(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 WmiProvider)
{
  __int64 Offset; // r8
  FxWmiProvider *v3; // rcx
  FxWmiProvider *pProvider; // [rsp+48h] [rbp+10h] BYREF

  LOWORD(Offset) = 0;
  if ( !WmiProvider )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1004uLL);
  v3 = (FxWmiProvider *)(~WmiProvider & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (WmiProvider & 1) != 0 )
  {
    Offset = LOWORD(v3->__vftable);
    v3 = (FxWmiProvider *)((char *)v3 - Offset);
  }
  if ( v3->m_Type == 4100 )
  {
    pProvider = v3;
  }
  else
  {
    FxObjectHandleGetPtrQI(v3, (void **)&pProvider, (void *)WmiProvider, 0x1004u, Offset);
    v3 = pProvider;
  }
  return v3->m_TracingHandle;
}
