/*
 * XREFs of ?EnsureHitTestRegion@CPrimitiveGroup@@AEBAJXZ @ 0x18000C8D8
 * Callers:
 *     ?HitTest@CPrimitiveGroup@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x18000C330 (-HitTest@CPrimitiveGroup@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z.c)
 * Callees:
 *     ?CreateFastHitTestRegion@CPrimitiveGroup@@AEBAJPEA_N@Z @ 0x18000C3F4 (-CreateFastHitTestRegion@CPrimitiveGroup@@AEBAJPEA_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CreateSlowHitTestRegion@CPrimitiveGroup@@AEBAJXZ @ 0x18010C1D4 (-CreateSlowHitTestRegion@CPrimitiveGroup@@AEBAJXZ.c)
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
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x436u);
    if ( v8 )
    {
      SlowHitTestRegion = CPrimitiveGroup::CreateSlowHitTestRegion(this);
      v3 = SlowHitTestRegion;
      if ( SlowHitTestRegion < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, SlowHitTestRegion, 0x43Au);
    }
  }
  return v3;
}
