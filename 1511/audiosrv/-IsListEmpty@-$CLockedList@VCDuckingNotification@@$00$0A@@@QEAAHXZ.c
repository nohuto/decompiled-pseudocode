/*
 * XREFs of ?IsListEmpty@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAHXZ @ 0x1800A250C
 * Callers:
 *     ?NotifyFilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBG0K@Z @ 0x1800A256C (-NotifyFilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBG0K@Z.c)
 *     ?NotifyFilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z @ 0x1800A28F8 (-NotifyFilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z.c)
 *     ?NotifyUnfilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBGK@Z @ 0x1800A2AAC (-NotifyUnfilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBGK@Z.c)
 *     ?NotifyUnfilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z @ 0x1800A2C08 (-NotifyUnfilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CLockedList<CDuckingNotification,1,0>::IsListEmpty(LPCRITICAL_SECTION lpCriticalSection)
{
  bool v2; // bl

  EnterCriticalSection(lpCriticalSection);
  v2 = *(_QWORD *)&lpCriticalSection[1].LockCount == 0LL;
  LeaveCriticalSection(lpCriticalSection);
  return v2;
}
