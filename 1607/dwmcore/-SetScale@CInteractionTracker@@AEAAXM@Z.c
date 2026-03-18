/*
 * XREFs of ?SetScale@CInteractionTracker@@AEAAXM@Z @ 0x18014BC54
 * Callers:
 *     ?SetMaxScale@CInteractionTracker@@AEAAXM@Z @ 0x18014B678 (-SetMaxScale@CInteractionTracker@@AEAAXM@Z.c)
 *     ?SetMinScale@CInteractionTracker@@AEAAXM@Z @ 0x18014B7C8 (-SetMinScale@CInteractionTracker@@AEAAXM@Z.c)
 *     ?SetProperty@CInteractionTracker@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18014B930 (-SetProperty@CInteractionTracker@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?SetRequestedScale@CInteractionTracker@@AEAA_NM_N@Z @ 0x18014BB58 (-SetRequestedScale@CInteractionTracker@@AEAA_NM_N@Z.c)
 * Callees:
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x18008DB00 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     ?GetActiveCenterPoint@CInteractionTracker@@QEBA?AUD2DVector3@@XZ @ 0x18014A680 (-GetActiveCenterPoint@CInteractionTracker@@QEBA-AUD2DVector3@@XZ.c)
 *     ?UpdatePosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x18014C614 (-UpdatePosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z.c)
 */

void __fastcall CInteractionTracker::SetScale(CInteractionTracker *this, float a2)
{
  float v3; // xmm2_4
  float v4; // xmm1_4
  float v5; // xmm3_4
  float v6; // xmm0_4
  float v7; // xmm5_4
  float v8; // xmm2_4
  float v9; // [rsp+20h] [rbp-38h] BYREF
  float v10; // [rsp+24h] [rbp-34h]
  _DWORD v11[4]; // [rsp+30h] [rbp-28h] BYREF

  v3 = fmaxf(0.001, a2);
  if ( v3 != *((float *)this + 44) )
  {
    CInteractionTracker::GetActiveCenterPoint((__int64)this, (__int64)&v9);
    v4 = v10;
    v5 = v9;
    v6 = v10 + *((float *)this + 33);
    *((float *)this + 44) = v3;
    v8 = (float)(v5 + *((float *)this + 32)) * v7;
    v11[2] = *((_DWORD *)this + 34);
    v11[1] = COERCE_UNSIGNED_INT(v4 - (float)(v6 * v7)) ^ _xmm;
    v11[0] = COERCE_UNSIGNED_INT(v5 - v8) ^ _xmm;
    CInteractionTracker::UpdatePosition(this, (const struct D2DVector3 *)v11);
    *((_BYTE *)this + 212) = 1;
    CResource::InvalidateAnimationSources(this, 4);
  }
}
