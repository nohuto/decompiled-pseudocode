/*
 * XREFs of imp_WdfDpcGetParentObject @ 0x1C00669C0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

unsigned __int64 __fastcall imp_WdfDpcGetParentObject(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 Dpc)
{
  FxDpc *v2; // rcx
  __int64 Offset; // r8
  FxObject *m_Object; // rax
  FxDpc *pFxDpc; // [rsp+48h] [rbp+10h] BYREF

  if ( !Dpc )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1015uLL);
  v2 = (FxDpc *)(~Dpc & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( (Dpc & 1) != 0 )
  {
    Offset = LOWORD(v2->__vftable);
    v2 = (FxDpc *)((char *)v2 - Offset);
  }
  if ( v2->m_Type == 4117 )
  {
    pFxDpc = v2;
  }
  else
  {
    FxObjectHandleGetPtrQI(v2, (void **)&pFxDpc, (void *)Dpc, 0x1015u, Offset);
    v2 = pFxDpc;
  }
  m_Object = v2->m_Object;
  if ( m_Object && m_Object->m_ObjectSize )
    return (unsigned __int64)m_Object ^ 0xFFFFFFFFFFFFFFF8uLL;
  else
    return 0LL;
}
