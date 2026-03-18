/*
 * XREFs of NtUserHidePointerContactVisualization @ 0x1C021C920
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     ?SetPointerVisualization@PointerList@@YAHGHPEAHH@Z @ 0x1C01FCE44 (-SetPointerVisualization@PointerList@@YAHGHPEAHH@Z.c)
 */

__int64 __fastcall NtUserHidePointerContactVisualization(int a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  unsigned int v4; // ebx

  EnterCrit(0LL, 1LL);
  if ( (unsigned int)(a1 - 2) > 0xFFFD )
  {
    v4 = 0;
    UserSetLastError(87);
  }
  else
  {
    v4 = PointerList::SetPointerVisualization((PointerList *)(unsigned __int16)a1, 0, 0LL, (int *)1);
  }
  UserSessionSwitchLeaveCrit(v3, v2);
  return v4;
}
