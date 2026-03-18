/*
 * XREFs of imp_WdfWmiInstanceRegister @ 0x1C0068910
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?AddInstance@FxWmiProvider@@QEAAJPEAVFxWmiInstance@@E@Z @ 0x1C0024DB4 (-AddInstance@FxWmiProvider@@QEAAJPEAVFxWmiInstance@@E@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

__int64 __fastcall imp_WdfWmiInstanceRegister(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 WmiInstance)
{
  __int64 Offset; // r8
  FxWmiInstanceExternal *v3; // r10
  FxWmiInstanceExternal *pInstance; // [rsp+48h] [rbp+10h] BYREF

  LOWORD(Offset) = 0;
  if ( !WmiInstance )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1034uLL);
  v3 = (FxWmiInstanceExternal *)(~WmiInstance & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (WmiInstance & 1) != 0 )
  {
    Offset = LOWORD(v3->__vftable);
    v3 = (FxWmiInstanceExternal *)((char *)v3 - Offset);
  }
  if ( v3->m_Type == 4148 )
  {
    pInstance = v3;
  }
  else
  {
    FxObjectHandleGetPtrQI(v3, (void **)&pInstance, (void *)WmiInstance, 0x1034u, Offset);
    v3 = pInstance;
  }
  return FxWmiProvider::AddInstance(v3->m_Provider, (unsigned __int64)v3, 0);
}
