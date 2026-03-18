/*
 * XREFs of ?EnsureHitTestRegions@CPrimitiveGroup@@AEBAJXZ @ 0x18000EA90
 * Callers:
 *     ?HitTest@CPrimitiveGroup@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x18000E1B0 (-HitTest@CPrimitiveGroup@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z.c)
 * Callees:
 *     ?CreateHitTestRegions@CPrimitiveGroup@@AEBAJXZ @ 0x18000E2BC (-CreateHitTestRegions@CPrimitiveGroup@@AEBAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CPrimitiveGroup::EnsureHitTestRegions(CPrimitiveGroup *this, __int64 a2, double a3)
{
  unsigned int v3; // ebx
  int HitTestRegions; // eax

  v3 = 0;
  if ( !*((_BYTE *)this + 144) )
  {
    HitTestRegions = CPrimitiveGroup::CreateHitTestRegions(this, a2, a3);
    v3 = HitTestRegions;
    if ( HitTestRegions < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, HitTestRegions, 0x43Fu);
  }
  return v3;
}
