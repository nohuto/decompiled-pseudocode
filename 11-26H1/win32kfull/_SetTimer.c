/*
 * XREFs of _SetTimer @ 0x1400211F0
 * Callers:
 *     xxxMenuWindowProc @ 0x140242410 (xxxMenuWindowProc.c)
 *     ?xxxMNDoScroll@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z @ 0x1402D91A0 (-xxxMNDoScroll@@YAHAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z.c)
 * Callees:
 *     InternalSetTimer @ 0x140021294 (InternalSetTimer.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 */

__int64 __fastcall SetTimer(__int64 a1, int a2, int a3, int a4, int a5)
{
  _QWORD *CurrentProcessWin32Process; // rax

  if ( !a1 )
    return InternalSetTimer(a1, a2, a3, a4, a5, 0);
  CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(a1);
  if ( CurrentProcessWin32Process )
  {
    if ( !*CurrentProcessWin32Process )
      CurrentProcessWin32Process = 0LL;
  }
  if ( CurrentProcessWin32Process == *(_QWORD **)(*(_QWORD *)(a1 + 16) + 456LL) )
    return InternalSetTimer(a1, a2, a3, a4, a5, 0);
  UserSetLastError(5LL);
  return 0LL;
}
