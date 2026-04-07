/*
 * XREFs of ?ContinueTo@CCubicBezierChopper@CThemeAnimationScheduleHelper@@QEAAJNN@Z @ 0x18008EB64
 * Callers:
 *     ?AddCubic@CCubicBezierChopper@CThemeAnimationScheduleHelper@@UEAAJNMMMM@Z @ 0x18008E850 (-AddCubic@CCubicBezierChopper@CThemeAnimationScheduleHelper@@UEAAJNMMMM@Z.c)
 *     ?End@CCubicBezierChopper@CThemeAnimationScheduleHelper@@UEAAJNM@Z @ 0x18008F260 (-End@CCubicBezierChopper@CThemeAnimationScheduleHelper@@UEAAJNM@Z.c)
 * Callees:
 *     ?AddTransitionToChoppedValue@CCubicBezierChopper@CThemeAnimationScheduleHelper@@QEAAJNNN@Z @ 0x18008E8E4 (-AddTransitionToChoppedValue@CCubicBezierChopper@CThemeAnimationScheduleHelper@@QEAAJNNN@Z.c)
 *     ?IsWithinRange@CCubicBezierChopper@CThemeAnimationScheduleHelper@@QEAA_NNNN@Z @ 0x18008F274 (-IsWithinRange@CCubicBezierChopper@CThemeAnimationScheduleHelper@@QEAA_NNNN@Z.c)
 */

__int64 __fastcall CThemeAnimationScheduleHelper::CCubicBezierChopper::ContinueTo(
        CThemeAnimationScheduleHelper::CCubicBezierChopper *this,
        double a2,
        double a3)
{
  double v6; // xmm8_8
  double v7; // xmm9_8
  double v8; // xmm1_8
  CThemeAnimationScheduleHelper::CCubicBezierChopper *v9; // rcx
  double v10; // xmm6_8
  double v11; // xmm2_8
  float v12; // xmm1_4
  double v13; // xmm10_8
  int v14; // eax
  double v15; // xmm2_8
  float v16; // xmm1_4
  double v17; // xmm8_8
  double v18; // xmm2_8
  bool v19; // sf
  double v20; // xmm10_8
  float v21; // xmm1_4

  v6 = *((double *)this + 9);
  v7 = *((double *)this + 11);
  v8 = *((double *)this + 8);
  if ( CThemeAnimationScheduleHelper::CCubicBezierChopper::IsWithinRange(0LL, v8, v7, v6)
    || CThemeAnimationScheduleHelper::CCubicBezierChopper::IsWithinRange(v9, v8, v7, *((double *)this + 10)) )
  {
    v11 = v6;
    if ( CThemeAnimationScheduleHelper::CCubicBezierChopper::IsWithinRange(v9, v8, v6, a3) )
    {
      v10 = a2 - *((double *)this + 13);
      if ( v10 <= 0.0 )
        return (unsigned int)v9;
LABEL_42:
      LODWORD(v9) = CThemeAnimationScheduleHelper::CCubicBezierChopper::AddTransitionToChoppedValue(this, a3, v11, v10);
      return (unsigned int)v9;
    }
    if ( CThemeAnimationScheduleHelper::CCubicBezierChopper::IsWithinRange(v9, v8, v6, *((float *)this + 28)) )
    {
      v12 = *((float *)this + 29);
      if ( v12 == 0.0 )
      {
        v13 = 0.0;
      }
      else
      {
        v13 = a2 - *((double *)this + 13);
        if ( (v6 - *((float *)this + 28)) / v12 <= v13 )
          v13 = (v6 - *((float *)this + 28)) / v12;
        if ( v13 > 0.0 )
        {
          v14 = CThemeAnimationScheduleHelper::CCubicBezierChopper::AddTransitionToChoppedValue(this, v6, v6, v13);
          v9 = (CThemeAnimationScheduleHelper::CCubicBezierChopper *)(unsigned int)v14;
          if ( v14 < 0 )
            return (unsigned int)v9;
        }
      }
      v15 = *((double *)this + 10);
      if ( CThemeAnimationScheduleHelper::CCubicBezierChopper::IsWithinRange(v9, *((double *)this + 8), v15, a3) )
      {
        v10 = a2 - *((double *)this + 13) - v13;
        if ( v10 <= 0.0 )
          return (unsigned int)v9;
        goto LABEL_41;
      }
      v16 = *((float *)this + 29);
      if ( v16 == 0.0 )
      {
        v17 = 0.0;
      }
      else
      {
        v17 = a2 - *((double *)this + 13);
        v18 = (v15 - *((float *)this + 28)) / v16;
        if ( v18 <= v17 )
          v17 = v18;
      }
      if ( v17 - v13 > 0.0 )
        LODWORD(v9) = CThemeAnimationScheduleHelper::CCubicBezierChopper::AddTransitionToChoppedValue(
                        this,
                        *((double *)this + 10),
                        *((double *)this + 10),
                        v17 - v13);
      v19 = (int)v9 < 0;
      goto LABEL_27;
    }
    v20 = *((double *)this + 10);
    if ( CThemeAnimationScheduleHelper::CCubicBezierChopper::IsWithinRange(v9, v20, v7, *((float *)this + 28)) )
    {
      v10 = a2 - *((double *)this + 13);
      if ( v10 <= 0.0 )
        return (unsigned int)v9;
      v11 = v20;
      goto LABEL_42;
    }
    if ( !CThemeAnimationScheduleHelper::CCubicBezierChopper::IsWithinRange(v9, v20, v7, a3) )
    {
      v10 = a2 - *((double *)this + 13);
LABEL_41:
      v11 = a3;
      goto LABEL_42;
    }
    v21 = *((float *)this + 29);
    if ( v21 == 0.0 )
    {
      v17 = 0.0;
    }
    else
    {
      v17 = a2 - *((double *)this + 13);
      if ( (v20 - *((float *)this + 28)) / v21 <= v17 )
        v17 = (v20 - *((float *)this + 28)) / v21;
      if ( v17 > 0.0 )
      {
        LODWORD(v9) = CThemeAnimationScheduleHelper::CCubicBezierChopper::AddTransitionToChoppedValue(
                        this,
                        v20,
                        v20,
                        v17);
        v19 = (int)v9 < 0;
LABEL_27:
        if ( v19 )
          return (unsigned int)v9;
      }
    }
    v10 = a2 - *((double *)this + 13) - v17;
    if ( v10 <= 0.0 )
      return (unsigned int)v9;
    v11 = *((double *)this + 10);
    goto LABEL_42;
  }
  v10 = a2 - *((double *)this + 13);
  if ( v10 > 0.0 )
  {
    if ( !CThemeAnimationScheduleHelper::CCubicBezierChopper::IsWithinRange(v9, v8, v6, v7) )
      v6 = *((double *)this + 10);
    v11 = v6;
    goto LABEL_42;
  }
  return (unsigned int)v9;
}
