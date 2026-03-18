/*
 * XREFs of ?SetRequestedScale@CInteractionTracker@@AEAA_NM_N@Z @ 0x18014BB58
 * Callers:
 *     ?ProcessSetRequestedScale@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_SETREQUESTEDSCALE@@@Z @ 0x18010B3DC (-ProcessSetRequestedScale@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTR.c)
 *     ?SetProperty@CInteractionTracker@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18014B930 (-SetProperty@CInteractionTracker@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     ?SetScale@CInteractionTracker@@AEAAXM@Z @ 0x18014BC54 (-SetScale@CInteractionTracker@@AEAAXM@Z.c)
 *     ?TransitionToIdle@CInteractionTracker@@AEAAXXZ @ 0x18014C300 (-TransitionToIdle@CInteractionTracker@@AEAAXXZ.c)
 *     ?UpdatePosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x18014C614 (-UpdatePosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z.c)
 */

char __fastcall CInteractionTracker::SetRequestedScale(CInteractionTracker *this, float a2, char a3)
{
  int v3; // eax
  char v4; // di
  float v7; // xmm0_4
  float v8; // xmm0_4
  float v10; // [rsp+20h] [rbp-38h] BYREF
  float v11; // [rsp+24h] [rbp-34h]
  int v12; // [rsp+28h] [rbp-30h]

  v3 = *((_DWORD *)this + 51);
  v4 = 0;
  if ( v3 )
  {
    if ( (unsigned int)(v3 - 2) > 1 )
      return v4;
    if ( !a3 )
      CInteractionTracker::TransitionToIdle(this);
  }
  v4 = 1;
  CInteractionTracker::SetScale(this, a2);
  if ( !a3 )
  {
    v7 = *((float *)this + 32);
    if ( v7 <= *((float *)this + 38) )
      v10 = fmaxf(v7, *((float *)this + 35));
    else
      v10 = *((float *)this + 38);
    v8 = *((float *)this + 33);
    if ( v8 <= *((float *)this + 39) )
      v11 = fmaxf(v8, *((float *)this + 36));
    else
      v11 = *((float *)this + 39);
    v12 = 0;
    CInteractionTracker::UpdatePosition(this, (const struct D2DVector3 *)&v10);
  }
  return v4;
}
