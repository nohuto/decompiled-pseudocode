/*
 * XREFs of ?ContinueTo@CCubicBezierChopper@CThemeAnimationScheduleHelper@@QEAAJNN@Z @ 0x18008DA04
 * Callers:
 *     ?AddCubic@CCubicBezierChopper@CThemeAnimationScheduleHelper@@UEAAJNMMMM@Z @ 0x18008D740 (-AddCubic@CCubicBezierChopper@CThemeAnimationScheduleHelper@@UEAAJNMMMM@Z.c)
 *     ?End@CCubicBezierChopper@CThemeAnimationScheduleHelper@@UEAAJNM@Z @ 0x18008E050 (-End@CCubicBezierChopper@CThemeAnimationScheduleHelper@@UEAAJNM@Z.c)
 * Callees:
 *     ?AddTransitionToChoppedValue@CCubicBezierChopper@CThemeAnimationScheduleHelper@@QEAAJNNN@Z @ 0x18008D7D4 (-AddTransitionToChoppedValue@CCubicBezierChopper@CThemeAnimationScheduleHelper@@QEAAJNNN@Z.c)
 *     ?IsWithinRange@CCubicBezierChopper@CThemeAnimationScheduleHelper@@QEAA_NNNN@Z @ 0x18008E064 (-IsWithinRange@CCubicBezierChopper@CThemeAnimationScheduleHelper@@QEAA_NNNN@Z.c)
 */

__int64 __fastcall CThemeAnimationScheduleHelper::CCubicBezierChopper::ContinueTo(
        CThemeAnimationScheduleHelper::CCubicBezierChopper *this,
        double a2,
        double a3)
{
  double v6; // xmm8_8
  double v7; // xmm1_8
  double v8; // xmm10_8
  CThemeAnimationScheduleHelper::CCubicBezierChopper *v9; // rcx
  double v10; // xmm6_8
  double v11; // xmm2_8
  float v12; // xmm1_4
  double v13; // xmm10_8
  int v14; // eax
  double v15; // xmm2_8
  float v16; // xmm1_4
  double v17; // xmm8_8
  bool v18; // cc
  double v19; // xmm9_8
  float v20; // xmm1_4
  double v21; // xmm8_8

  v6 = *((double *)this + 9);
  v7 = *((double *)this + 8);
  v8 = *((double *)this + 11);
  if ( CThemeAnimationScheduleHelper::CCubicBezierChopper::IsWithinRange(0LL, v7, v8, v6)
    || CThemeAnimationScheduleHelper::CCubicBezierChopper::IsWithinRange(v9, v7, v8, *((double *)this + 10)) )
  {
    v11 = v6;
    if ( CThemeAnimationScheduleHelper::CCubicBezierChopper::IsWithinRange(v9, v7, v6, a3) )
    {
      v10 = a2 - *((double *)this + 13);
      if ( v10 <= 0.0 )
        return (unsigned int)v9;
LABEL_38:
      LODWORD(v9) = CThemeAnimationScheduleHelper::CCubicBezierChopper::AddTransitionToChoppedValue(this, a3, v11, v10);
      return (unsigned int)v9;
    }
    if ( CThemeAnimationScheduleHelper::CCubicBezierChopper::IsWithinRange(v9, v7, v6, *((float *)this + 28)) )
    {
      v12 = *((float *)this + 29);
      if ( v12 == 0.0 )
      {
        v13 = 0.0;
      }
      else
      {
        v13 = fmin(a2 - *((double *)this + 13), (v6 - *((float *)this + 28)) / v12);
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
        goto LABEL_37;
      }
      v16 = *((float *)this + 29);
      if ( v16 == 0.0 )
        v17 = 0.0;
      else
        v17 = fmin(a2 - *((double *)this + 13), (v15 - *((float *)this + 28)) / v16);
      if ( v17 - v13 > 0.0 )
        LODWORD(v9) = CThemeAnimationScheduleHelper::CCubicBezierChopper::AddTransitionToChoppedValue(
                        this,
                        *((double *)this + 10),
                        *((double *)this + 10),
                        v17 - v13);
      if ( (int)v9 < 0 )
        return (unsigned int)v9;
      v10 = a2 - *((double *)this + 13) - v17;
      v18 = v10 <= 0.0;
    }
    else
    {
      v19 = *((double *)this + 10);
      if ( CThemeAnimationScheduleHelper::CCubicBezierChopper::IsWithinRange(v9, v19, v8, *((float *)this + 28)) )
      {
        v10 = a2 - *((double *)this + 13);
        if ( v10 <= 0.0 )
          return (unsigned int)v9;
        v11 = v19;
        goto LABEL_38;
      }
      if ( !CThemeAnimationScheduleHelper::CCubicBezierChopper::IsWithinRange(v9, v19, v8, a3) )
      {
        v10 = a2 - *((double *)this + 13);
LABEL_37:
        v11 = a3;
        goto LABEL_38;
      }
      v20 = *((float *)this + 29);
      if ( v20 == 0.0 )
      {
        v21 = 0.0;
      }
      else
      {
        v21 = fmin(a2 - *((double *)this + 13), (v19 - *((float *)this + 28)) / v20);
        if ( v21 > 0.0 )
        {
          LODWORD(v9) = CThemeAnimationScheduleHelper::CCubicBezierChopper::AddTransitionToChoppedValue(
                          this,
                          v19,
                          v19,
                          v21);
          if ( (int)v9 < 0 )
            return (unsigned int)v9;
        }
      }
      v10 = a2 - *((double *)this + 13) - v21;
      v18 = v10 <= 0.0;
    }
    if ( v18 )
      return (unsigned int)v9;
    v11 = *((double *)this + 10);
    goto LABEL_38;
  }
  v10 = a2 - *((double *)this + 13);
  if ( v10 > 0.0 )
  {
    if ( !CThemeAnimationScheduleHelper::CCubicBezierChopper::IsWithinRange(v9, v7, v6, v8) )
      v6 = *((double *)this + 10);
    v11 = v6;
    goto LABEL_38;
  }
  return (unsigned int)v9;
}
