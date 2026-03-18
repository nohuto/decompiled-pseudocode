/*
 * XREFs of _anonymous_namespace_::xxxNormalizeRect_0 @ 0x1401623E8
 * Callers:
 *     _anonymous_namespace_::xxxMigrateWindowCheckpoint @ 0x140162C0C (_anonymous_namespace_--xxxMigrateWindowCheckpoint.c)
 *     _anonymous_namespace_::xxxMigrateWindowPosition @ 0x14016348C (_anonymous_namespace_--xxxMigrateWindowPosition.c)
 *     ?xxxRestoreToPosAndState@AdvancedWindowPos@@YA_NPEAUtagWND@@AEBUMonitorData@CMonitorTopology@@W4State@1@UtagRECT@@3W4ApplyOption@1@PEAK@Z @ 0x140229DF0 (-xxxRestoreToPosAndState@AdvancedWindowPos@@YA_NPEAUtagWND@@AEBUMonitorData@CMonitorTopology@@W4.c)
 *     ?xxxVerticalMaximize@AdvancedWindowPos@@YAXPEAUtagWND@@@Z @ 0x1402EDDD0 (-xxxVerticalMaximize@AdvancedWindowPos@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     GetMonitorRectForDpi @ 0x14002F7BC (GetMonitorRectForDpi.c)
 *     GetMonitorWorkRectForDpi @ 0x140030818 (GetMonitorWorkRectForDpi.c)
 *     ?GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z @ 0x140031410 (-GetWindowCompositedDpiContext@@YAKPEBUtagWND@@@Z.c)
 *     _anonymous_namespace_::xxxNormalizeRect @ 0x14016111C (_anonymous_namespace_--xxxNormalizeRect.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__m128i *__fastcall anonymous_namespace_::xxxNormalizeRect_0(
        __m128i *a1,
        const struct tagWND *a2,
        __m128i *a3,
        __int64 a4,
        __int64 a5,
        char a6)
{
  unsigned __int16 v10; // bx
  unsigned int WindowCompositedDpiContext; // eax
  __int64 v12; // r9
  unsigned int v13; // eax
  __m128i v15; // [rsp+40h] [rbp-88h] BYREF
  __m128i v16; // [rsp+50h] [rbp-78h] BYREF
  __m128i v17; // [rsp+60h] [rbp-68h] BYREF
  __m128i v18; // [rsp+70h] [rbp-58h] BYREF

  v10 = *(_WORD *)(*(_QWORD *)(a4 + 40) + 60LL);
  WindowCompositedDpiContext = GetWindowCompositedDpiContext(a2);
  GetMonitorWorkRectForDpi(&v15, v12, (WindowCompositedDpiContext >> 8) & 0x1FF);
  v17 = v15;
  v13 = GetWindowCompositedDpiContext(a2);
  GetMonitorRectForDpi(&v16, a4, (v13 >> 8) & 0x1FF);
  v18 = v16;
  anonymous_namespace_::xxxNormalizeRect(a1, a2, a3, &v18, v17.m128i_i32, v10, a5, a6);
  return a1;
}
