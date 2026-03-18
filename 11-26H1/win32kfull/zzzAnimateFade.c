/*
 * XREFs of zzzAnimateFade @ 0x1402A456C
 * Callers:
 *     xxxSystemTimerProc @ 0x14024E4E0 (xxxSystemTimerProc.c)
 *     zzzStartSonar @ 0x1402A46E0 (zzzStartSonar.c)
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400211C4 (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 *     StopFade @ 0x14009B510 (StopFade.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140199C94 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?zzzUpdateFade@@YAXPEAUtagPOINT@@PEAUtagSIZE@@PEAUHDC__@@0PEAU_BLENDFUNCTION@@@Z @ 0x14021B130 (-zzzUpdateFade@@YAXPEAUtagPOINT@@PEAUtagSIZE@@PEAUHDC__@@0PEAU_BLENDFUNCTION@@@Z.c)
 *     ?DrawSonar@@YAXPEAUHDC__@@@Z @ 0x1402A3FDC (-DrawSonar@@YAXPEAUHDC__@@@Z.c)
 */

__int64 __fastcall zzzAnimateFade(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rbx
  __int64 v3; // rcx
  __int64 v4; // rdx
  int v5; // esi
  unsigned int v6; // eax
  BYTE v7; // di
  __int64 v8; // rbp
  HDC v9; // r8
  INT v10; // eax
  bool v11; // zf
  __int64 result; // rax
  _BYTE v13[40]; // [rsp+30h] [rbp-28h] BYREF
  struct _BLENDFUNCTION v14; // [rsp+60h] [rbp+8h] BYREF
  struct tagPOINT v15; // [rsp+68h] [rbp+10h] BYREF

  UserSessionState = W32GetUserSessionState(a1, a2);
  v3 = *(unsigned int *)(UserSessionState + 43048);
  v4 = (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
     - *(_DWORD *)(UserSessionState + 43052);
  if ( (unsigned int)v4 > (unsigned int)v3 )
    return StopFade(v3, v4);
  v5 = *(_DWORD *)(UserSessionState + 43056) & 1;
  if ( v5 )
    v6 = 255 * v4;
  else
    v6 = 255 * (v3 - v4);
  *(_WORD *)&v14.BlendOp = 0;
  v14.AlphaFormat = 0;
  v7 = v6 / (unsigned int)v3;
  v14.SourceConstantAlpha = v7;
  v8 = W32GetUserSessionState(v3, v6 % (unsigned int)v3);
  if ( (*(_DWORD *)(UserSessionState + 43056) & 0x80u) == 0 )
  {
    zzzUpdateFade(0LL, 0LL, 0LL, 0LL, &v14);
    v3 = v8 + 16316;
  }
  else
  {
    DrawSonar(*(HDC *)(UserSessionState + 43016));
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v13);
    v9 = *(HDC *)(UserSessionState + 43016);
    v15 = 0LL;
    zzzUpdateFade(
      (struct tagPOINT *)(UserSessionState + 43032),
      (struct tagSIZE *)(UserSessionState + 43040),
      v9,
      &v15,
      0LL);
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v13);
    v10 = EngMulDiv(20, *(_DWORD *)(v8 + 16328), 96);
    v3 = v8 + 16316;
    *(_DWORD *)(v8 + 16316) -= v10;
  }
  if ( v5 )
    v11 = v7 == 0xFF;
  else
    v11 = v7 == 0;
  if ( v11 || (result = *(unsigned int *)(UserSessionState + 43056), (result & 0x80u) != 0LL) && *(int *)v3 < 0 )
  {
    *(_DWORD *)(UserSessionState + 43056) |= 2u;
    return StopFade(v3, v4);
  }
  return result;
}
