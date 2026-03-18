/*
 * XREFs of ?GetThreadTableEntry@FxVerifierLock@@SAPEAUFxVerifierThreadTableEntry@@PEAU_KTHREAD@@PEAV1@E@Z @ 0x1C007B32C
 * Callers:
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C0031E08 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C000B530 (WPP_IFR_SF_q.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 */

_LIST_ENTRY **__fastcall FxVerifierLock::GetThreadTableEntry(
        unsigned __int64 curThread,
        FxVerifierLock *pLock,
        unsigned __int8 LookupOnly)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  _LIST_ENTRY *ThreadTable; // r9
  _LIST_ENTRY *v7; // rax
  _LIST_ENTRY *i; // rcx
  _LIST_ENTRY *p_HashChain; // rcx
  FxVerifierThreadTableEntry *p_m_ThreadTableEntry; // r8
  _LIST_ENTRY *Blink; // rdx

  m_Globals = pLock->m_Globals;
  ThreadTable = pLock->m_Globals->ThreadTable;
  if ( !ThreadTable )
    return 0LL;
  v7 = &ThreadTable[((unsigned __int8)(curThread >> 4) ^ (unsigned __int8)(curThread >> 20)) & 0x3F];
  for ( i = v7->Flink; i != v7; i = i->Flink )
  {
    if ( i[-2].Blink == (_LIST_ENTRY *)curThread )
      return &i[-2].Blink;
  }
  if ( LookupOnly )
  {
    WPP_IFR_SF_q(m_Globals, 2u, 0x12u, 0x14u, WPP_FxVerifierLock_cpp_Traceguids, (const void *)curThread);
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
    if ( m_Globals->FxVerifierDbgBreakOnError )
      DbgBreakPoint();
    return 0LL;
  }
  pLock->m_ThreadTableEntry.PerThreadPassiveLockList = 0LL;
  p_HashChain = &pLock->m_ThreadTableEntry.HashChain;
  pLock->m_ThreadTableEntry.PerThreadDispatchLockList = 0LL;
  p_m_ThreadTableEntry = &pLock->m_ThreadTableEntry;
  pLock->m_ThreadTableEntry.Thread = (struct _KTHREAD *)curThread;
  Blink = v7->Blink;
  p_HashChain->Flink = v7;
  p_HashChain->Blink = Blink;
  if ( Blink->Flink != v7 )
    __fastfail(3u);
  Blink->Flink = p_HashChain;
  v7->Blink = p_HashChain;
  return (_LIST_ENTRY **)p_m_ThreadTableEntry;
}
