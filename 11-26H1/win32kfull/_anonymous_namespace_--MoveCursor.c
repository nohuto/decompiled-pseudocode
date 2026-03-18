/*
 * XREFs of _anonymous_namespace_::MoveCursor @ 0x1400F8EAC
 * Callers:
 *     _anonymous_namespace_::RenderCursor @ 0x1400F8A80 (_anonymous_namespace_--RenderCursor.c)
 * Callees:
 *     ?MovePointerAsync@CursorApiRouter@@QEAAXPEAUHDEV__@@HHK@Z @ 0x14002A69C (-MovePointerAsync@CursorApiRouter@@QEAAXPEAUHDEV__@@HHK@Z.c)
 *     ?zzzUpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z @ 0x14002ABE8 (-zzzUpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z.c)
 */

void __fastcall anonymous_namespace_::MoveCursor(struct tagPOINT *a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  LONG y; // ebx
  LONG x; // edi
  CursorApiRouter *v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  y = a1->y;
  x = a1->x;
  v6 = *(CursorApiRouter **)(UserSessionState + 36336);
  v9 = W32GetUserSessionState(v8, v7);
  CursorApiRouter::MovePointerAsync(v6, *(HDEV *)(*(_QWORD *)(v9 + 56968) + 40LL), x, y, 8u);
  v12 = W32GetUserSessionState(v11, v10);
  CCursorSizes::zzzUpdateGlobalCursorSize(*(CCursorSizes **)(v12 + 36376), a1, 0);
}
