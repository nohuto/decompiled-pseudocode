/*
 * XREFs of ?GetInContactDeltaForAxis@CScrollPositionAnimation@@MEAAMXZ @ 0x18015FA00
 * Callers:
 *     <none>
 * Callees:
 *     ?BoundaryFromValue@CInteractionTracker@@QEBA?AW4Boundary@@MW4ScrollAxis@@@Z @ 0x180149F3C (-BoundaryFromValue@CInteractionTracker@@QEBA-AW4Boundary@@MW4ScrollAxis@@@Z.c)
 *     ?GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x18014A75C (-GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?GetManipulationDelta@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x18014A790 (-GetManipulationDelta@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?GetScrollRange@CInteractionTracker@@QEBAXW4ScrollAxis@@PEAM1@Z @ 0x18014AC40 (-GetScrollRange@CInteractionTracker@@QEBAXW4ScrollAxis@@PEAM1@Z.c)
 *     ?ShouldChainForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@_N@Z @ 0x18014C0D4 (-ShouldChainForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@_N@Z.c)
 *     ?HasInteraction@CScrollAnimation@@IEBA_NXZ @ 0x18015E09C (-HasInteraction@CScrollAnimation@@IEBA_NXZ.c)
 *     ?UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@M@Z @ 0x18015E958 (-UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@M@Z.c)
 */

float __fastcall CScrollPositionAnimation::GetInContactDeltaForAxis(CScrollPositionAnimation *this)
{
  __int64 *v1; // rax
  __int64 v3; // r11
  float v4; // xmm6_4
  int v5; // r10d
  float *v6; // r11
  float CurrentValue; // xmm0_4
  float v8; // xmm7_4
  _DWORD *v9; // rcx
  int v10; // r10d
  __int64 v11; // rcx
  unsigned int v12; // r10d
  float v13; // xmm5_4
  unsigned int v14; // edi
  int v15; // r10d
  __int64 v16; // r11
  float v17; // xmm4_4
  float v18; // xmm5_4
  float result; // xmm0_4
  int v20; // [rsp+60h] [rbp+8h] BYREF
  int v21; // [rsp+68h] [rbp+10h] BYREF

  v1 = (__int64 *)*((_QWORD *)this + 54);
  if ( v1 )
    v3 = *v1;
  else
    v3 = 0LL;
  LODWORD(v4) = CInteractionTracker::GetManipulationDelta(v3, *((_DWORD *)this + 72)).m128_u32[0] ^ _xmm;
  CurrentValue = CInteractionTracker::GetCurrentValue(v6, v5);
  v8 = CurrentValue;
  CInteractionTracker::GetScrollRange(v9, v10, &v21, &v20);
  v14 = CInteractionTracker::BoundaryFromValue(v11, v13, v12);
  if ( !CInteractionTracker::ShouldChainForAxis(v16, v15) && v14 )
    CurrentValue = 1.0 - (float)(*((float *)this + 89) * 0.0099999998);
  if ( CScrollAnimation::HasInteraction(this) )
  {
    CScrollAnimation::UpdateValueWithChaining((__int64)this, v18, v4, v14);
    v17 = CurrentValue - v8;
  }
  result = v17;
  *((float *)this + 103) = v4;
  return result;
}
