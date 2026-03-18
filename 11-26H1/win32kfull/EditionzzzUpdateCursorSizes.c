/*
 * XREFs of EditionzzzUpdateCursorSizes @ 0x1401BF9F0
 * Callers:
 *     <none>
 * Callees:
 *     ?zzzRefreshSizes@CCursorSizes@@QEAAXXZ @ 0x1401BFAEC (-zzzRefreshSizes@CCursorSizes@@QEAAXXZ.c)
 */

void __fastcall EditionzzzUpdateCursorSizes(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 UserSessionState; // rax

  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2) + 36376) )
  {
    UserSessionState = W32GetUserSessionState(v3, v2);
    CCursorSizes::zzzRefreshSizes(*(CCursorSizes **)(UserSessionState + 36376));
  }
}
