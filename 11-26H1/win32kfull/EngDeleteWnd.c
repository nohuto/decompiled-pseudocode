/*
 * XREFs of EngDeleteWnd @ 0x140319F60
 * Callers:
 *     <none>
 * Callees:
 *     UserAssociateHwnd @ 0x1402A483C (UserAssociateHwnd.c)
 *     GreDeleteWnd @ 0x14031A0A0 (GreDeleteWnd.c)
 */

void __stdcall EngDeleteWnd(WNDOBJ *pwo)
{
  __int64 v2; // rcx

  if ( (unsigned int)UserIsUserCritSecIn() )
  {
    v2 = *(_QWORD *)&pwo[3].coClient.rclBounds.top;
    if ( v2 )
      UserAssociateHwnd(v2, 0LL);
    GreDeleteWnd((struct EWNDOBJ *)pwo);
  }
}
