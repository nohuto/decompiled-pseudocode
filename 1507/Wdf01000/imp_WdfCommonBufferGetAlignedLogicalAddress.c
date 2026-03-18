/*
 * XREFs of imp_WdfCommonBufferGetAlignedLogicalAddress @ 0x1C002B600
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

_LARGE_INTEGER __fastcall imp_WdfCommonBufferGetAlignedLogicalAddress(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 CommonBuffer)
{
  __int64 Offset; // r8
  FxCommonBuffer *v3; // rcx
  FxCommonBuffer *pComBuf; // [rsp+48h] [rbp+10h] BYREF

  LOWORD(Offset) = 0;
  if ( !CommonBuffer )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1402uLL);
  v3 = (FxCommonBuffer *)(~CommonBuffer & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (CommonBuffer & 1) != 0 )
  {
    Offset = LOWORD(v3->__vftable);
    v3 = (FxCommonBuffer *)((char *)v3 - Offset);
  }
  if ( v3->m_Type == 5122 )
  {
    pComBuf = v3;
  }
  else
  {
    FxObjectHandleGetPtrQI(v3, (void **)&pComBuf, (void *)CommonBuffer, 0x1402u, Offset);
    v3 = pComBuf;
  }
  return v3->m_BufferAlignedLA;
}
