/*
 * XREFs of ?AllocateThreadTable@FxVerifierLock@@SAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C007B0E4
 * Callers:
 *     FxInitialize @ 0x1C0021AE0 (FxInitialize.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C00017C0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_ @ 0x1C0022488 (WPP_IFR_SF_.c)
 */

void __fastcall FxVerifierLock::AllocateThreadTable(_FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  unsigned __int64 *p_m_Lock; // rdi
  KIRQL v3; // si
  _LIST_ENTRY *Caller; // rax
  _LIST_ENTRY *v5; // rax
  _LIST_ENTRY *v6; // rdx
  __int64 v7; // rcx
  _LIST_ENTRY *retaddr; // [rsp+38h] [rbp+0h]

  p_m_Lock = &FxDriverGlobals->ThreadTableLock.m_Lock;
  v3 = KeAcquireSpinLockRaiseToDpc(&FxDriverGlobals->ThreadTableLock.m_Lock);
  if ( !FxDriverGlobals->ThreadTable )
  {
    if ( FxDriverGlobals->FxPoolTrackingOn )
      Caller = retaddr;
    else
      Caller = 0LL;
    v5 = (_LIST_ENTRY *)FxPoolAllocator(
                          FxDriverGlobals,
                          (_LIST_ENTRY *)&FxDriverGlobals->FxPoolFrameworks,
                          ExDefaultNonPagedPoolType,
                          0x400uLL,
                          FxDriverGlobals->Tag,
                          Caller);
    v6 = v5;
    if ( !v5 )
    {
      KeReleaseSpinLock(p_m_Lock, v3);
      WPP_IFR_SF_(FxDriverGlobals, 2u, 0x12u, 0x19u, WPP_FxVerifierLock_cpp_Traceguids);
      return;
    }
    v7 = 64LL;
    do
    {
      v5->Blink = v5;
      v5->Flink = v5;
      ++v5;
      --v7;
    }
    while ( v7 );
    FxDriverGlobals->ThreadTable = v6;
  }
  KeReleaseSpinLock(p_m_Lock, v3);
}
