/*
 * XREFs of NtUserHidePointerContactVisualization @ 0x1C0215AE0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     ?SetPointerVisualization@PointerList@@YAHGHPEAHH@Z @ 0x1C01F40C4 (-SetPointerVisualization@PointerList@@YAHGHPEAHH@Z.c)
 */

__int64 __fastcall NtUserHidePointerContactVisualization(int a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  int v4; // ebx

  EnterCrit(0LL, 1LL);
  if ( (unsigned int)(a1 - 2) > 0xFFFD )
  {
    v4 = 0;
    UserSetLastError(87LL);
  }
  else
  {
    v4 = PointerList::SetPointerVisualization((PointerList *)(unsigned __int16)a1, 0, 0LL, (int *)1);
  }
  UserSessionSwitchLeaveCrit(v3, v2);
  return v4;
}
