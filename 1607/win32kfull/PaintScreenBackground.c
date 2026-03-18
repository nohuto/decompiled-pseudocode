/*
 * XREFs of PaintScreenBackground @ 0x1C0134730
 * Callers:
 *     <none>
 * Callees:
 *     FillRect @ 0x1C00AE8B8 (FillRect.c)
 */

__int64 PaintScreenBackground()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // rdx
  __int64 v3; // rcx

  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  EnterRenderBlock();
  UserSessionSwitchLeaveCrit(v1, v0);
  EnterSharedCrit(0LL, 1LL);
  EnterSharedRenderCrit();
  FillRect(*(HDC *)(gpDispInfo + 24LL), (LPCRECT)(gpDispInfo + 104LL), *(HBRUSH *)(gpsi + 5096LL));
  LeaveRenderBlock();
  LeaveRenderCrit();
  UserSessionSwitchLeaveCrit(v3, v2);
  return EnterCrit(0LL, 1LL);
}
