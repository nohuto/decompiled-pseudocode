/*
 * XREFs of zzzStartSonar @ 0x1C01DE9E8
 * Callers:
 *     xxxProcessKeyEvent @ 0x1C00A24AC (xxxProcessKeyEvent.c)
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C007672C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00768C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     zzzStartFade @ 0x1C013F924 (zzzStartFade.c)
 *     zzzAnimateFade @ 0x1C013FA4C (zzzAnimateFade.c)
 *     StopFade @ 0x1C013FC70 (StopFade.c)
 *     CreateFade @ 0x1C013FE3C (CreateFade.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ?DrawSonar@@YAXPEAUHDC__@@@Z @ 0x1C01DDF80 (-DrawSonar@@YAXPEAUHDC__@@@Z.c)
 */

__int64 __fastcall zzzStartSonar(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  bool v4; // zf
  __int64 v5; // rax
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 result; // rax
  _BYTE v8[8]; // [rsp+30h] [rbp-28h] BYREF
  struct tagRECT v9; // [rsp+38h] [rbp-20h] BYREF

  v4 = gfade[12] == 0;
  v5 = *(_QWORD *)(gpsi + 5368LL);
  gptSonarCenter = v5;
  if ( !v4 )
  {
    StopFade();
    LODWORD(v5) = gptSonarCenter;
  }
  giSonarRadius = 100;
  v9.left = v5 - 100;
  v9.right = v5 + 100;
  v9.top = HIDWORD(gptSonarCenter) - 100;
  v9.bottom = HIDWORD(gptSonarCenter) + 100;
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(HIDWORD(gptSonarCenter), a2, a3, a4);
  result = CreateFade(0LL, &v9, 0x3E8u, 192, CurrentThreadDpiAwarenessContext);
  if ( result )
  {
    DrawSonar((HDC)result);
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v8);
    zzzStartFade();
    zzzAnimateFade();
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v8);
    return 1LL;
  }
  return result;
}
