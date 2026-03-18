/*
 * XREFs of ?GetResolution@CBitmapResource@@UEBAJPEAN0@Z @ 0x1800827B0
 * Callers:
 *     ?GetResolution@CGdiSpriteBitmap@@UEBAJPEAN0@Z @ 0x1801080C0 (-GetResolution@CGdiSpriteBitmap@@UEBAJPEAN0@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CBitmapResource::GetResolution(CBitmapResource *this, double *a2, double *a3)
{
  __int64 v3; // rdi
  int v4; // eax
  unsigned int v5; // ebx

  v3 = *((_QWORD *)this + 7);
  if ( v3 )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD, double *, double *))(*(_QWORD *)v3 + 64LL))(*((_QWORD *)this + 7), a2, a3);
    v5 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x49u);
  }
  else
  {
    v5 = -2003292404;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292404, 0x4Du);
  }
  return v5;
}
