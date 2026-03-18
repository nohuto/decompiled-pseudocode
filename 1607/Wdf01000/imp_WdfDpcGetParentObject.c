/*
 * XREFs of imp_WdfDpcGetParentObject @ 0x1C006BE30
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001BF0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 */

unsigned __int64 __fastcall imp_WdfDpcGetParentObject(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDPC__ *Dpc)
{
  FxObject *m_Object; // rax
  FxDpc *pFxDpc; // [rsp+30h] [rbp+8h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
    (unsigned __int64)Dpc,
    0x1015u,
    (void **)&pFxDpc);
  m_Object = pFxDpc->m_Object;
  if ( m_Object && m_Object->m_ObjectSize )
    return (unsigned __int64)m_Object ^ 0xFFFFFFFFFFFFFFF8uLL;
  else
    return 0LL;
}
