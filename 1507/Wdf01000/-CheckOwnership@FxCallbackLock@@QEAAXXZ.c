/*
 * XREFs of ?CheckOwnership@FxCallbackLock@@QEAAXXZ @ 0x1C000A568
 * Callers:
 *     ?Unlock@FxCallbackMutexLock@@UEAAXE@Z @ 0x1C000A7F0 (-Unlock@FxCallbackMutexLock@@UEAAXE@Z.c)
 *     ?Unlock@FxCallbackSpinLock@@UEAAXE@Z @ 0x1C0074EC0 (-Unlock@FxCallbackSpinLock@@UEAAXE@Z.c)
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C000B530 (WPP_IFR_SF_q.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 */

void __fastcall FxCallbackLock::CheckOwnership(FxCallbackLock *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  int v3; // [rsp+40h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerifierLock && !this->IsOwner(this) )
  {
    WPP_IFR_SF_q(m_Globals, 2u, 0x12u, 0xAu, WPP_FxCallbackLock_hpp_Traceguids, this);
    v3 = 7567731;
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n",
      m_Globals->Public.DriverName,
      (const char *)&v3,
      m_Globals->Public.DriverName,
      (const char *)&v3);
    if ( m_Globals->FxVerifierDbgBreakOnError )
      DbgBreakPoint();
  }
}
