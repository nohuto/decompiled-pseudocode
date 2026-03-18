/*
 * XREFs of zzzStartSonar @ 0x1C01E8164
 * Callers:
 *     xxxProcessKeyEvent @ 0x1C00830F4 (xxxProcessKeyEvent.c)
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C004AA94 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004AC30 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     zzzStartFade @ 0x1C01397A8 (zzzStartFade.c)
 *     zzzAnimateFade @ 0x1C01398D0 (zzzAnimateFade.c)
 *     StopFade @ 0x1C0139AF0 (StopFade.c)
 *     CreateFade @ 0x1C0139CBC (CreateFade.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     ?DrawSonar@@YAXPEAUHDC__@@@Z @ 0x1C01E7720 (-DrawSonar@@YAXPEAUHDC__@@@Z.c)
 */

__int64 zzzStartSonar()
{
  bool v0; // zf
  __int64 v1; // rax
  __int64 CurrentProcessWin32Process; // rax
  unsigned int v3; // eax
  __int64 result; // rax
  _BYTE v5[8]; // [rsp+30h] [rbp-28h] BYREF
  struct tagRECT v6; // [rsp+38h] [rbp-20h] BYREF

  v0 = gfade[12] == 0;
  v1 = *(_QWORD *)(gpsi + 3976LL);
  gptSonarCenter = v1;
  if ( !v0 )
  {
    StopFade();
    LODWORD(v1) = gptSonarCenter;
  }
  giSonarRadius = 100;
  v6.left = v1 - 100;
  v6.right = v1 + 100;
  v6.top = HIDWORD(gptSonarCenter) - 100;
  v6.bottom = HIDWORD(gptSonarCenter) + 100;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(HIDWORD(gptSonarCenter));
  v3 = DpiAwarenessFromProcess(CurrentProcessWin32Process);
  result = CreateFade(0LL, &v6, 0x3E8u, 192, v3);
  if ( result )
  {
    DrawSonar((HDC)result);
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v5);
    zzzStartFade();
    zzzAnimateFade();
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v5);
    return 1LL;
  }
  return result;
}
