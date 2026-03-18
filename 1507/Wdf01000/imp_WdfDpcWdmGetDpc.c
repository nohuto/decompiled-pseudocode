/*
 * XREFs of imp_WdfDpcWdmGetDpc @ 0x1C0066A60
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

_FX_DRIVER_GLOBALS **__fastcall imp_WdfDpcWdmGetDpc(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 Dpc)
{
  __int64 Offset; // r8
  FxObject *v3; // rcx
  FxDpc *pFxDpc; // [rsp+48h] [rbp+10h] BYREF

  LOWORD(Offset) = 0;
  if ( !Dpc )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1015uLL);
  v3 = (FxObject *)(~Dpc & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Dpc & 1) != 0 )
  {
    Offset = LOWORD(v3->__vftable);
    v3 = (FxObject *)((char *)v3 - Offset);
  }
  if ( v3->m_Type != 4117 )
  {
    FxObjectHandleGetPtrQI(v3, (void **)&pFxDpc, (void *)Dpc, 0x1015u, Offset);
    v3 = pFxDpc;
  }
  return &v3[1].m_Globals;
}
