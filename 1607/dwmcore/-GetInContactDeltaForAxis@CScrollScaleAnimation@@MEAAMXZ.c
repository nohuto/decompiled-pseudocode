/*
 * XREFs of ?GetInContactDeltaForAxis@CScrollScaleAnimation@@MEAAMXZ @ 0x18015F310
 * Callers:
 *     <none>
 * Callees:
 *     ?CacheInContactCenterPoint@CInteractionTracker@@QEAAXXZ @ 0x180149F84 (-CacheInContactCenterPoint@CInteractionTracker@@QEAAXXZ.c)
 *     ?GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x18014A75C (-GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?GetManipulationDelta@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x18014A790 (-GetManipulationDelta@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?GetScrollRange@CInteractionTracker@@QEBAXW4ScrollAxis@@PEAM1@Z @ 0x18014AC40 (-GetScrollRange@CInteractionTracker@@QEBAXW4ScrollAxis@@PEAM1@Z.c)
 */

float __fastcall CScrollScaleAnimation::GetInContactDeltaForAxis(CScrollScaleAnimation *this)
{
  __int64 *v1; // r11
  __int64 v3; // rcx
  float *v4; // r10
  float **v5; // r11
  float v6; // xmm6_4
  float v7; // xmm3_4
  float *v8; // rcx
  _DWORD *v9; // r10
  _DWORD **v10; // r11
  _DWORD *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r8
  CInteractionTracker *v14; // r10
  CInteractionTracker **v15; // r11
  float v16; // xmm4_4
  float v17; // xmm5_4
  float v19; // [rsp+40h] [rbp+8h] BYREF
  float v20; // [rsp+48h] [rbp+10h] BYREF

  v1 = (__int64 *)*((_QWORD *)this + 54);
  if ( v1 )
    v3 = *v1;
  else
    v3 = 0LL;
  v6 = CInteractionTracker::GetManipulationDelta(v3, *((_DWORD *)this + 72)).m128_f32[0];
  v7 = v6 / *((float *)this + 103);
  if ( v5 )
    v8 = *v5;
  else
    v8 = v4;
  CInteractionTracker::GetCurrentValue(v8, *((_DWORD *)this + 72));
  if ( v10 )
    v11 = *v10;
  else
    v11 = v9;
  CInteractionTracker::GetScrollRange(v11, *((_DWORD *)this + 72), &v19, &v20);
  if ( v19 > v16 || v16 > v20 )
    v7 = (float)((float)((float)(1.0 - (float)(*((float *)this + 89) * 0.0099999998)) * (float)(v16 - v17)) + v17) / v17;
  *((float *)this + 103) = v6;
  if ( v15 )
    v14 = *v15;
  CInteractionTracker::CacheInContactCenterPoint(v14, v12, v13);
  return v7;
}
