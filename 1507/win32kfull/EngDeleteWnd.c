/*
 * XREFs of EngDeleteWnd @ 0x1C027CD50
 * Callers:
 *     <none>
 * Callees:
 *     UserAssociateHwnd @ 0x1C01E7ED4 (UserAssociateHwnd.c)
 *     GreDeleteWnd @ 0x1C027CE10 (GreDeleteWnd.c)
 */

void __stdcall EngDeleteWnd(WNDOBJ *pwo)
{
  __int64 v2; // rcx

  if ( (unsigned int)UserIsUserCritSecIn() )
  {
    v2 = *(_QWORD *)&pwo[3].coClient.rclBounds.top;
    if ( v2 )
      UserAssociateHwnd(v2, 0LL);
    GreDeleteWnd((EWNDOBJ *)pwo);
  }
}
