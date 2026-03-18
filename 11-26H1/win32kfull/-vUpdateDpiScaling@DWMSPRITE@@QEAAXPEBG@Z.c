/*
 * XREFs of ?vUpdateDpiScaling@DWMSPRITE@@QEAAXPEBG@Z @ 0x1400D0098
 * Callers:
 *     ?bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@PEAPEAV3@@Z @ 0x140076840 (-bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@P.c)
 *     ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHHHHHPEBG@Z @ 0x1400A34B8 (-GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHH.c)
 * Callees:
 *     GrepIsWindowGdiScaled @ 0x1400D1A50 (GrepIsWindowGdiScaled.c)
 */

void __fastcall DWMSPRITE::vUpdateDpiScaling(DWMSPRITE *this, unsigned __int16 *a2)
{
  unsigned __int16 v3; // di
  __int64 v4; // rcx
  float v5; // xmm0_4
  __int16 v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = 96;
  v3 = 96;
  if ( a2 )
  {
    v3 = *a2;
  }
  else
  {
    v4 = *((_QWORD *)this + 5);
    if ( v4 )
    {
      if ( (unsigned int)GrepIsWindowGdiScaled(v4, &v6) )
        v3 = v6;
      else
        v3 = 96;
    }
    else if ( (unsigned int)UserIsCurrentThreadGdiScaled() )
    {
      return;
    }
  }
  if ( v3 == 96 )
  {
    if ( (*((_DWORD *)this + 34) & 0x20) != 0 )
    {
      *((_QWORD *)this + 16) = 0LL;
      *((_DWORD *)this + 34) &= ~0x20u;
    }
  }
  else
  {
    v5 = (float)(unsigned __int16)GreGetScaledLogPixels(v3) / 96.0;
    *((float *)this + 32) = v5;
    *((float *)this + 33) = v5;
    *((_DWORD *)this + 34) |= 0x20u;
  }
}
