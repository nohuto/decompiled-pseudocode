/*
 * XREFs of ?GetInterpolatedValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z @ 0x18000F500
 * Callers:
 *     ?EnsureHandoffCachedData@CAnimationInterpolator@@IEAA_NM_K@Z @ 0x18000F358 (-EnsureHandoffCachedData@CAnimationInterpolator@@IEAA_NM_K@Z.c)
 *     ?OnAddBinding@CAnimation@@MEAAJPEAUAnimationBinding@CBaseAnimation@@@Z @ 0x180046F10 (-OnAddBinding@CAnimation@@MEAAJPEAUAnimationBinding@CBaseAnimation@@@Z.c)
 *     ?GetAnimationValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z @ 0x180097B40 (-GetAnimationValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z.c)
 * Callees:
 *     ?GetPrimitiveAtIndex@CAnimationInterpolator@@IEBAPEBUDwmAnimationPrimitive@@I@Z @ 0x18000F0F4 (-GetPrimitiveAtIndex@CAnimationInterpolator@@IEBAPEBUDwmAnimationPrimitive@@I@Z.c)
 *     ?GetLastPrimitive@CAnimationInterpolator@@IEBAPEBUDwmAnimationPrimitive@@XZ @ 0x18000F164 (-GetLastPrimitive@CAnimationInterpolator@@IEBAPEBUDwmAnimationPrimitive@@XZ.c)
 *     ?TransformTime@CAnimationInterpolator@@IEAA_JAEBUDwmAnimationPrimitive@@_J@Z @ 0x18000F1B0 (-TransformTime@CAnimationInterpolator@@IEAA_JAEBUDwmAnimationPrimitive@@_J@Z.c)
 *     ?InterpolateCubic@CAnimationInterpolator@@IEAAMAEBUDwmAnimationPrimitive@@_J@Z @ 0x18000F208 (-InterpolateCubic@CAnimationInterpolator@@IEAAMAEBUDwmAnimationPrimitive@@_J@Z.c)
 *     ?FindCurrentPrimitive@CAnimationInterpolator@@IEAA_N_J@Z @ 0x18000F2C0 (-FindCurrentPrimitive@CAnimationInterpolator@@IEAA_N_J@Z.c)
 *     ?InterpolateSinusoidal@CAnimationInterpolator@@IEAAMAEBUDwmAnimationPrimitive@@_J@Z @ 0x18014A0B4 (-InterpolateSinusoidal@CAnimationInterpolator@@IEAAMAEBUDwmAnimationPrimitive@@_J@Z.c)
 */

char __fastcall CAnimationInterpolator::GetInterpolatedValue(
        CAnimationInterpolator *this,
        __int64 a2,
        float *a3,
        bool *a4)
{
  const struct DwmAnimationPrimitive *PrimitiveAtIndex; // r14
  bool v8; // r13
  const struct DwmAnimationPrimitive *LastPrimitive; // r15
  char CurrentPrimitive; // di
  const struct DwmAnimationPrimitive *v11; // rbx
  int v12; // ecx
  int v13; // ecx
  float v14; // xmm0_4
  float v15; // xmm6_4
  __int64 v17; // rax
  int v18; // ecx

  PrimitiveAtIndex = CAnimationInterpolator::GetPrimitiveAtIndex(this, 0);
  v8 = 0;
  LastPrimitive = CAnimationInterpolator::GetLastPrimitive(this);
  if ( !PrimitiveAtIndex )
    return 0;
  CurrentPrimitive = CAnimationInterpolator::FindCurrentPrimitive(this, a2);
  if ( CurrentPrimitive )
  {
    v11 = (const struct DwmAnimationPrimitive *)((char *)PrimitiveAtIndex + 32 * *((unsigned int *)this + 2));
    if ( *(_DWORD *)v11 == 4 || *(_DWORD *)v11 == 6 && v11 == LastPrimitive )
      v8 = 1;
    while ( 1 )
    {
      v12 = *(_DWORD *)v11;
      if ( ((*(_DWORD *)v11 - 3) & 0xFFFFFFFC) != 0 || v12 == 4 )
        break;
      if ( PrimitiveAtIndex == v11 )
        return 0;
      v17 = CAnimationInterpolator::TransformTime(this, v11, a2);
      a2 = v17;
      if ( *((_QWORD *)v11 + 1) < v17 )
        return 0;
      while ( 1 )
      {
        v11 = (const struct DwmAnimationPrimitive *)((char *)v11 - 32);
        if ( *((_QWORD *)v11 + 1) <= v17 )
          break;
        if ( v11 == PrimitiveAtIndex )
        {
          CurrentPrimitive = 0;
          break;
        }
      }
      if ( !CurrentPrimitive )
        return CurrentPrimitive;
    }
    if ( CurrentPrimitive )
    {
      v13 = v12 - 1;
      if ( !v13 )
      {
        v14 = CAnimationInterpolator::InterpolateCubic(this, v11, a2);
LABEL_9:
        v15 = v14;
LABEL_10:
        CurrentPrimitive = _finite(v15) != 0 ? CurrentPrimitive : 0;
        if ( CurrentPrimitive )
        {
          *a3 = v15;
          if ( a4 )
            *a4 = v8;
        }
        return CurrentPrimitive;
      }
      v18 = v13 - 1;
      if ( !v18 )
      {
        v14 = CAnimationInterpolator::InterpolateSinusoidal(this, v11, a2);
        goto LABEL_9;
      }
      if ( v18 == 2 )
      {
        v15 = *((float *)v11 + 4);
        goto LABEL_10;
      }
      return 0;
    }
  }
  return CurrentPrimitive;
}
