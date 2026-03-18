/*
 * XREFs of imp_WdfWmiInstanceGetProvider @ 0x1C0068880
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

WDFWMIPROVIDER__ *__fastcall imp_WdfWmiInstanceGetProvider(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 WmiInstance)
{
  FxWmiInstanceExternal *v2; // rcx
  __int64 Offset; // r8
  FxWmiProvider *m_Provider; // rax
  FxWmiInstanceExternal *pInstance; // [rsp+48h] [rbp+10h] BYREF

  if ( !WmiInstance )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1034uLL);
  v2 = (FxWmiInstanceExternal *)(~WmiInstance & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( (WmiInstance & 1) != 0 )
  {
    Offset = LOWORD(v2->__vftable);
    v2 = (FxWmiInstanceExternal *)((char *)v2 - Offset);
  }
  if ( v2->m_Type == 4148 )
  {
    pInstance = v2;
  }
  else
  {
    FxObjectHandleGetPtrQI(v2, (void **)&pInstance, (void *)WmiInstance, 0x1034u, Offset);
    v2 = pInstance;
  }
  m_Provider = v2->m_Provider;
  if ( m_Provider->m_ObjectSize )
    return (WDFWMIPROVIDER__ *)((unsigned __int64)m_Provider ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    return 0LL;
}
