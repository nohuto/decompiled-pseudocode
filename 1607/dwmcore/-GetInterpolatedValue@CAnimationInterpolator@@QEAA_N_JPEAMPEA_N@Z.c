/*
 * XREFs of ?GetInterpolatedValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z @ 0x18001FDD8
 * Callers:
 *     ?EnsureHandoffCachedData@CAnimationInterpolator@@IEAA_NM_K@Z @ 0x18001FBF8 (-EnsureHandoffCachedData@CAnimationInterpolator@@IEAA_NM_K@Z.c)
 *     ?OnAddBinding@CAnimation@@MEAAJPEAUAnimationBinding@CBaseAnimation@@@Z @ 0x180039B30 (-OnAddBinding@CAnimation@@MEAAJPEAUAnimationBinding@CBaseAnimation@@@Z.c)
 *     ?GetAnimationValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z @ 0x18011094C (-GetAnimationValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z.c)
 * Callees:
 *     ?GetPrimitiveAtIndex@CAnimationInterpolator@@IEBAPEBUDwmAnimationPrimitive@@I@Z @ 0x18001FA3C (-GetPrimitiveAtIndex@CAnimationInterpolator@@IEBAPEBUDwmAnimationPrimitive@@I@Z.c)
 *     ?TransformTime@CAnimationInterpolator@@IEAA_JAEBUDwmAnimationPrimitive@@_J@Z @ 0x18001FA88 (-TransformTime@CAnimationInterpolator@@IEAA_JAEBUDwmAnimationPrimitive@@_J@Z.c)
 *     ?InterpolateCubic@CAnimationInterpolator@@IEAAMAEBUDwmAnimationPrimitive@@_J@Z @ 0x18001FAE0 (-InterpolateCubic@CAnimationInterpolator@@IEAAMAEBUDwmAnimationPrimitive@@_J@Z.c)
 *     ?FindCurrentPrimitive@CAnimationInterpolator@@IEAA_N_J@Z @ 0x18001FB7C (-FindCurrentPrimitive@CAnimationInterpolator@@IEAA_N_J@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?InterpolateSinusoidal@CAnimationInterpolator@@IEAAMAEBUDwmAnimationPrimitive@@_J@Z @ 0x180189A7C (-InterpolateSinusoidal@CAnimationInterpolator@@IEAAMAEBUDwmAnimationPrimitive@@_J@Z.c)
 */

char __fastcall CAnimationInterpolator::GetInterpolatedValue(
        CAnimationInterpolator *this,
        __int64 a2,
        float *a3,
        bool *a4)
{
  const struct DwmAnimationPrimitive *PrimitiveAtIndex; // rbp
  int v8; // eax
  bool v9; // r13
  const struct DwmAnimationPrimitive *v10; // r12
  char CurrentPrimitive; // di
  const struct DwmAnimationPrimitive *v12; // rbx
  int v13; // ecx
  int v14; // ecx
  float v15; // xmm0_4
  float v16; // xmm6_4
  __int64 v18; // rax
  int v19; // ecx

  PrimitiveAtIndex = CAnimationInterpolator::GetPrimitiveAtIndex(this, 0);
  v8 = (***(__int64 (__fastcall ****)(_QWORD))this)(*(_QWORD *)this);
  v9 = 0;
  v10 = CAnimationInterpolator::GetPrimitiveAtIndex(this, v8 - 1);
  if ( !PrimitiveAtIndex )
    return 0;
  CurrentPrimitive = CAnimationInterpolator::FindCurrentPrimitive(this, a2);
  if ( CurrentPrimitive )
  {
    v12 = (const struct DwmAnimationPrimitive *)((char *)PrimitiveAtIndex + 32 * *((unsigned int *)this + 2));
    if ( *(_DWORD *)v12 == 4 || *(_DWORD *)v12 == 6 && v12 == v10 )
      v9 = 1;
    while ( 1 )
    {
      v13 = *(_DWORD *)v12;
      if ( ((*(_DWORD *)v12 - 3) & 0xFFFFFFFC) != 0 || v13 == 4 )
        break;
      if ( PrimitiveAtIndex == v12 )
        return 0;
      v18 = CAnimationInterpolator::TransformTime(this, v12, a2);
      a2 = v18;
      if ( *((_QWORD *)v12 + 1) < v18 )
        return 0;
      while ( 1 )
      {
        v12 = (const struct DwmAnimationPrimitive *)((char *)v12 - 32);
        if ( *((_QWORD *)v12 + 1) <= v18 )
          break;
        if ( v12 == PrimitiveAtIndex )
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
      v14 = v13 - 1;
      if ( !v14 )
      {
        v15 = CAnimationInterpolator::InterpolateCubic(this, v12, a2);
LABEL_9:
        v16 = v15;
LABEL_10:
        CurrentPrimitive = _finite(v16) != 0 ? CurrentPrimitive : 0;
        if ( CurrentPrimitive )
        {
          *a3 = v16;
          if ( a4 )
            *a4 = v9;
        }
        return CurrentPrimitive;
      }
      v19 = v14 - 1;
      if ( !v19 )
      {
        v15 = CAnimationInterpolator::InterpolateSinusoidal(this, v12, a2);
        goto LABEL_9;
      }
      if ( v19 == 2 )
      {
        v16 = *((float *)v12 + 4);
        goto LABEL_10;
      }
      return 0;
    }
  }
  return CurrentPrimitive;
}
