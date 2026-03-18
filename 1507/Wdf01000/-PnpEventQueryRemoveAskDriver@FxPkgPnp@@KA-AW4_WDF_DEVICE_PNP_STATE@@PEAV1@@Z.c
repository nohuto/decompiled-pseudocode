/*
 * XREFs of ?PnpEventQueryRemoveAskDriver@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C009A0F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0021E18 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     WPP_IFR_SF_ @ 0x1C0022488 (WPP_IFR_SF_.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 */

__int64 __fastcall FxPkgPnp::PnpEventQueryRemoveAskDriver(FxPkgPnp *This)
{
  FxDeviceBase *m_DeviceBase; // rcx
  unsigned __int64 v3; // rcx
  int (__fastcall *m_Method)(WDFDEVICE__ *); // rax
  int _a1; // edi
  __int64 result; // rax
  unsigned int v7; // edx
  __int64 v8; // r10
  __int64 v9; // r10

  m_DeviceBase = This->m_DeviceBase;
  if ( m_DeviceBase->m_ObjectSize )
    v3 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
  else
    v3 = 0LL;
  m_Method = This->m_DeviceQueryRemove.m_Method;
  if ( m_Method )
    _a1 = m_Method((WDFDEVICE__ *)v3);
  else
    _a1 = 0;
  if ( _a1 < 0 )
  {
    WPP_IFR_SF_d(This->m_Globals, 2u, 0xCu, 0x10u, WPP_PnpStateMachine_cpp_Traceguids, _a1);
    if ( _a1 == -1073741637 )
    {
      WPP_IFR_SF_(This->m_Globals, 2u, 0xCu, 0x11u, WPP_PnpStateMachine_cpp_Traceguids);
      if ( This->m_Globals->FxVerifierOn )
      {
        if ( _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(This->m_Globals, v7, 0xBu) || *(_BYTE *)(v8 + 317) )
        {
          Mx::MxDbgPrint(
            "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
          if ( *(_BYTE *)(v9 + 318) )
            DbgBreakPoint();
        }
      }
    }
    result = 281LL;
  }
  else
  {
    result = 311LL;
  }
  This->m_PendingPnPIrp->IoStatus.Status = _a1;
  return result;
}
