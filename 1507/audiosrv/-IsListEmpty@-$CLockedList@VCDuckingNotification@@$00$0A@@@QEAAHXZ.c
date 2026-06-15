/*
 * XREFs of ?IsListEmpty@?$CLockedList@VCDuckingNotification@@$00$0A@@@QEAAHXZ @ 0x1800A51E0
 * Callers:
 *     ?NotifyFilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBG0K@Z @ 0x1800A5240 (-NotifyFilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBG0K@Z.c)
 *     ?NotifyFilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z @ 0x1800A55CC (-NotifyFilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z.c)
 *     ?NotifyUnfilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBGK@Z @ 0x1800A5780 (-NotifyUnfilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBGK@Z.c)
 *     ?NotifyUnfilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z @ 0x1800A58DC (-NotifyUnfilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z.c)
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
