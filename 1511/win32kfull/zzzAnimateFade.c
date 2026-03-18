/*
 * XREFs of zzzAnimateFade @ 0x1C01398D0
 * Callers:
 *     xxxSystemTimerProc @ 0x1C00C6990 (xxxSystemTimerProc.c)
 *     zzzStartSonar @ 0x1C01E8164 (zzzStartSonar.c)
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C004AA94 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004AC30 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ?zzzUpdateFade@@YAXPEAUtagPOINT@@PEAUtagSIZE@@PEAUHDC__@@0PEAU_BLENDFUNCTION@@@Z @ 0x1C01399AC (-zzzUpdateFade@@YAXPEAUtagPOINT@@PEAUtagSIZE@@PEAUHDC__@@0PEAU_BLENDFUNCTION@@@Z.c)
 *     StopFade @ 0x1C0139AF0 (StopFade.c)
 *     ?DrawSonar@@YAXPEAUHDC__@@@Z @ 0x1C01E7720 (-DrawSonar@@YAXPEAUHDC__@@@Z.c)
 */

__int64 zzzAnimateFade()
{
  unsigned int v0; // r9d
  unsigned int v1; // ecx
  unsigned int v2; // r10d
  int v3; // edi
  unsigned int v4; // ebx
  int v5; // r11d
  bool v6; // zf
  __int64 result; // rax
  struct _BLENDFUNCTION v8; // [rsp+40h] [rbp+8h] BYREF
  char v9; // [rsp+48h] [rbp+10h] BYREF

  v0 = gfade[10];
  v1 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - gfade[11];
  if ( v1 > v0 )
    return StopFade();
  v2 = gfade[12];
  v3 = v2 & 1;
  if ( (v2 & 1) != 0 )
    v4 = 255 * v1 / v0;
  else
    LOBYTE(v4) = 255 * (v0 - v1) / v0;
  *(_WORD *)&v8.BlendOp = 0;
  v8.AlphaFormat = 0;
  v8.SourceConstantAlpha = v4;
  if ( (v2 & 0x80u) != 0 )
  {
    DrawSonar(*(HDC *)&gfade[2]);
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v9);
    zzzUpdateFade(
      (struct tagPOINT *)&gfade[6],
      (struct tagSIZE *)&gfade[8],
      *(HDC *)&gfade[2],
      (struct tagPOINT *)gZero,
      0LL);
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v9);
    v5 = giSonarRadius - 20;
    giSonarRadius -= 20;
  }
  else
  {
    zzzUpdateFade(0LL, 0LL, 0LL, 0LL, &v8);
    v5 = giSonarRadius;
  }
  if ( v3 )
    v6 = (_BYTE)v4 == 0xFF;
  else
    v6 = (_BYTE)v4 == 0;
  if ( v6 || (result = gfade[12], (result & 0x80u) != 0LL) && v5 < 0 )
  {
    gfade[12] |= 2u;
    return StopFade();
  }
  return result;
}
