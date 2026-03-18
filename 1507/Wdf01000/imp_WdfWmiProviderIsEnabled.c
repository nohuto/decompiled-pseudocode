/*
 * XREFs of imp_WdfWmiProviderIsEnabled @ 0x1C0068C60
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

char __fastcall imp_WdfWmiProviderIsEnabled(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 WmiProvider,
        _WDF_WMI_PROVIDER_CONTROL ProviderControl)
{
  char v3; // di
  FxWmiProvider *v5; // rcx
  __int64 Offset; // r8
  int v7; // ebx
  FxWmiProvider *pProvider; // [rsp+48h] [rbp+10h] BYREF

  v3 = 0;
  if ( !WmiProvider )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1004uLL);
  v5 = (FxWmiProvider *)(~WmiProvider & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( (WmiProvider & 1) != 0 )
  {
    Offset = LOWORD(v5->__vftable);
    v5 = (FxWmiProvider *)((char *)v5 - Offset);
  }
  if ( v5->m_Type == 4100 )
  {
    pProvider = v5;
  }
  else
  {
    FxObjectHandleGetPtrQI(v5, (void **)&pProvider, (void *)WmiProvider, 0x1004u, Offset);
    v5 = pProvider;
  }
  v7 = ProviderControl - 1;
  if ( !v7 )
    return v5->m_EventControlEnabled;
  if ( v7 == 1 )
    return v5->m_DataBlockControlEnabled;
  return v3;
}
