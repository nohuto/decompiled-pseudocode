/*
 * XREFs of ?GetResolution@CBitmapResource@@UEBAJPEAN0@Z @ 0x1800AEA20
 * Callers:
 *     ?GetResolution@CGdiSpriteBitmap@@UEBAJPEAN0@Z @ 0x180141800 (-GetResolution@CGdiSpriteBitmap@@UEBAJPEAN0@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBitmapResource::GetResolution(CBitmapResource *this, double *a2, double *a3)
{
  __int64 v3; // rcx
  int v4; // eax
  unsigned int v5; // ebx

  v3 = *((_QWORD *)this + 16);
  if ( v3 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64, double *, double *))(*(_QWORD *)v3 + 64LL))(v3, a2, a3);
    v5 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x9Bu);
  }
  else
  {
    v5 = -2003292404;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292404, 0x9Fu);
  }
  return v5;
}
