/*
 * XREFs of ?ReleaseOrReplaceThreadTableEntry@FxVerifierLock@@SAXPEAU_KTHREAD@@PEAV1@@Z @ 0x1C006F5D0
 * Callers:
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C006F710 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 * Callees:
 *     WPP_IFR_SF_qq @ 0x1C00277B0 (WPP_IFR_SF_qq.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00577F8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxVerifierLock::ReleaseOrReplaceThreadTableEntry(unsigned __int64 curThread, FxVerifierLock *pLock)
{
  struct _KTHREAD *Thread; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *Blink; // rax
  __int64 v8; // rdx
  FxVerifierLock *PerThreadPassiveLockList; // rcx
  _QWORD *p_Flink; // rcx
  _QWORD *v11; // rax

  Thread = pLock->m_ThreadTableEntry.Thread;
  m_Globals = pLock->m_Globals;
  if ( Thread )
  {
    if ( Thread != (struct _KTHREAD *)curThread )
    {
      WPP_IFR_SF_qq(m_Globals, 2u, 0x12u, 0x18u, WPP_FxVerifierLock_cpp_Traceguids, pLock, (const void *)curThread);
      FxVerifierDbgBreakPoint(m_Globals);
    }
    Flink = pLock->m_ThreadTableEntry.HashChain.Flink;
    Blink = pLock->m_ThreadTableEntry.HashChain.Blink;
    v8 = (__int64)&m_Globals->ThreadTable[((unsigned __int8)(curThread >> 4) ^ (unsigned __int8)(curThread >> 20)) & 0x3F];
    if ( Flink->Blink != &pLock->m_ThreadTableEntry.HashChain || Blink->Flink != &pLock->m_ThreadTableEntry.HashChain )
      __fastfail(3u);
    Blink->Flink = Flink;
    Flink->Blink = Blink;
    PerThreadPassiveLockList = pLock->m_ThreadTableEntry.PerThreadPassiveLockList;
    if ( !PerThreadPassiveLockList )
    {
      if ( !pLock->m_ThreadTableEntry.PerThreadDispatchLockList )
      {
        pLock->m_ThreadTableEntry.Thread = 0LL;
        pLock->m_ThreadTableEntry.PerThreadPassiveLockList = 0LL;
        pLock->m_ThreadTableEntry.PerThreadDispatchLockList = 0LL;
        return;
      }
      PerThreadPassiveLockList = pLock->m_ThreadTableEntry.PerThreadDispatchLockList;
    }
    PerThreadPassiveLockList->m_ThreadTableEntry.Thread = pLock->m_ThreadTableEntry.Thread;
    PerThreadPassiveLockList->m_ThreadTableEntry.PerThreadPassiveLockList = pLock->m_ThreadTableEntry.PerThreadPassiveLockList;
    PerThreadPassiveLockList->m_ThreadTableEntry.PerThreadDispatchLockList = pLock->m_ThreadTableEntry.PerThreadDispatchLockList;
    p_Flink = &PerThreadPassiveLockList->m_ThreadTableEntry.HashChain.Flink;
    v11 = *(_QWORD **)(v8 + 8);
    *p_Flink = v8;
    p_Flink[1] = v11;
    if ( *v11 != v8 )
      __fastfail(3u);
    *v11 = p_Flink;
    *(_QWORD *)(v8 + 8) = p_Flink;
  }
}
