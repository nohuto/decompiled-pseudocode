/*
 * XREFs of ?EnsureHitTestRegion@CPrimitiveGroup@@AEBAJXZ @ 0x180009FE4
 * Callers:
 *     ?HitTest@CPrimitiveGroup@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x180009910 (-HitTest@CPrimitiveGroup@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z.c)
 * Callees:
 *     ?CreateFastHitTestRegion@CPrimitiveGroup@@AEBAJPEA_N@Z @ 0x180009B08 (-CreateFastHitTestRegion@CPrimitiveGroup@@AEBAJPEA_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CreateSlowHitTestRegion@CPrimitiveGroup@@AEBAJXZ @ 0x180091F88 (-CreateSlowHitTestRegion@CPrimitiveGroup@@AEBAJXZ.c)
 */

__int64 __fastcall CPrimitiveGroup::EnsureHitTestRegion(CPrimitiveGroup *this, __int64 a2, double a3)
{
  unsigned int v3; // ebx
  int v6; // eax
  int SlowHitTestRegion; // eax
  bool v8; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  if ( !*((_BYTE *)this + 64) )
  {
    v8 = 1;
    v6 = CPrimitiveGroup::CreateFastHitTestRegion(this, &v8, a3);
    v3 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x426u);
    if ( v8 )
    {
      SlowHitTestRegion = CPrimitiveGroup::CreateSlowHitTestRegion(this);
      v3 = SlowHitTestRegion;
      if ( SlowHitTestRegion < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, SlowHitTestRegion, 0x42Au);
    }
  }
  return v3;
}
