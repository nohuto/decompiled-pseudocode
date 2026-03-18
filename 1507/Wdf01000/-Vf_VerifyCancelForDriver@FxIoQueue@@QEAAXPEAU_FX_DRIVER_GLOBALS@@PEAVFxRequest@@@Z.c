/*
 * XREFs of ?Vf_VerifyCancelForDriver@FxIoQueue@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z @ 0x1C00D1B0C
 * Callers:
 *     ?CancelForDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C000BE58 (-CancelForDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qq @ 0x1C000A3FC (WPP_IFR_SF_qq.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 */

void __fastcall FxIoQueue::Vf_VerifyCancelForDriver(
        FxIoQueue *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        unsigned __int64 Request)
{
  const void *_a2; // rax
  const void *_a1; // rcx
  const void *v8; // rdi
  const void *v9; // rbx

  if ( this->m_ObjectSize )
    _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    _a2 = 0LL;
  if ( *(_WORD *)(Request + 10) )
    _a1 = (const void *)(Request ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    _a1 = 0LL;
  WPP_IFR_SF_qq(
    FxDriverGlobals,
    3u,
    0xDu,
    0x4Du,
    (const _GUID *)&FxObject::`vftable'.FxPoolFrameworks.NonPagedHead.Blink,
    _a1,
    _a2);
  if ( *(_QWORD *)(Request + 288) != Request + 288 )
  {
    if ( this->m_ObjectSize )
      v8 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v8 = 0LL;
    if ( *(_WORD *)(Request + 10) )
      v9 = (const void *)(Request ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v9 = 0LL;
    WPP_IFR_SF_qq(
      FxDriverGlobals,
      2u,
      0xDu,
      0x4Eu,
      (const _GUID *)&FxObject::`vftable'.FxPoolFrameworks.NonPagedHead.Blink,
      v9,
      v8);
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
    if ( FxDriverGlobals->FxVerifierDbgBreakOnError )
      DbgBreakPoint();
  }
}
