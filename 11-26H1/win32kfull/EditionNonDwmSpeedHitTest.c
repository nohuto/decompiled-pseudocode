/*
 * XREFs of EditionNonDwmSpeedHitTest @ 0x14008B110
 * Callers:
 *     <none>
 * Callees:
 *     ?ClassicChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@@Z @ 0x14008645C (-ClassicChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@@Z.c)
 *     INPUTDEST_FROM_PWND @ 0x14008B1BC (INPUTDEST_FROM_PWND.c)
 *     ?TopLevelSpeedHitTest@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x14008B4A0 (-TopLevelSpeedHitTest@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 */

__int64 __fastcall EditionNonDwmSpeedHitTest(__int64 a1, struct tagPOINT *a2, const struct _SUBPIXELS *a3, _DWORD *a4)
{
  __int64 UserSessionState; // rax
  struct tagWND *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct tagWND *v12; // rdx
  struct tagWND *v14; // rax

  *a4 = 0;
  UserSessionState = W32GetUserSessionState(a1, a2);
  v9 = TopLevelSpeedHitTest(*(struct tagDESKTOP **)(UserSessionState + 19176), a2, a3);
  if ( v9 && (v14 = ClassicChildTreeSpeedHitTest(v9, *a2)) != 0LL )
  {
    *a4 = 1;
    v12 = v14;
  }
  else
  {
    v12 = *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v11, v10) + 19176) + 8LL) + 24LL);
  }
  INPUTDEST_FROM_PWND(a1, v12);
  return a1;
}
