/*
 * XREFs of ?Validate2DVisual@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18000D3AC
 * Callers:
 *     ?ValidateVisual@CAnimatedTransitionVisual@@UEAAJXZ @ 0x18000D5C0 (-ValidateVisual@CAnimatedTransitionVisual@@UEAAJXZ.c)
 * Callees:
 *     ?UpdateGeometry2DAndOpacity@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18000C908 (-UpdateGeometry2DAndOpacity@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?UpdateBackgroundWithClip@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18000D198 (-UpdateBackgroundWithClip@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?UpdateVisualOpacity@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18000D354 (-UpdateVisualOpacity@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x1800224E8 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?ClearInstructions@CVisual@@QEAAJXZ @ 0x180023350 (-ClearInstructions@CVisual@@QEAAJXZ.c)
 *     ?RoundToNearestInt@@YAHM@Z @ 0x18003E990 (-RoundToNearestInt@@YAHM@Z.c)
 *     ?UpdateGeometry2DWithClip@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18008D3B8 (-UpdateGeometry2DWithClip@CAnimatedTransitionVisual@@IEAAJXZ.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::Validate2DVisual(CVisual ***this)
{
  unsigned int v1; // ebx
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  LONG v9; // eax
  float v10; // xmm0_4
  LONG v11; // eax
  CVisual **v12; // rcx
  int v13; // eax
  int v14; // eax
  int updated; // eax
  struct tagPOINT v16; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  if ( ((_DWORD)this[11] & 0x1000) != 0 || ((_DWORD)this[11] & 0x2000) != 0 || ((_BYTE)this[11] & 0x20) != 0 )
  {
    if ( *((_BYTE *)this + 970) )
    {
      v14 = CVisual::ClearInstructions((CVisual *)(this + 1));
      v1 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x402u);
        return v1;
      }
      updated = CAnimatedTransitionVisual::UpdateGeometry2DWithClip((CAnimatedTransitionVisual *)this);
      v1 = updated;
      if ( updated < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x403u);
        return v1;
      }
    }
    else if ( *((_BYTE *)this + 971) )
    {
      v5 = CVisual::ClearInstructions((CVisual *)(this + 1));
      v1 = v5;
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x407u);
        return v1;
      }
      v6 = CAnimatedTransitionVisual::UpdateBackgroundWithClip((CAnimatedTransitionVisual *)this);
      v1 = v6;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x408u);
        return v1;
      }
      v7 = CAnimatedTransitionVisual::UpdateVisualOpacity((CAnimatedTransitionVisual *)this);
      v1 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x409u);
        return v1;
      }
    }
    else if ( *((_BYTE *)this + 959) )
    {
      v9 = RoundToNearestInt((float)*((int *)this + 210) + *((float *)this + 184));
      v10 = (float)*((int *)this + 211);
      v16.x = v9;
      v11 = RoundToNearestInt(v10 + *((float *)this + 185));
      v12 = this[7];
      v16.y = v11;
      CVisual::SetOffset(*v12, &v16);
      v13 = CAnimatedTransitionVisual::UpdateVisualOpacity((CAnimatedTransitionVisual *)this);
      v1 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x40Eu);
        return v1;
      }
    }
    else
    {
      v3 = CVisual::ClearInstructions((CVisual *)(this + 1));
      v1 = v3;
      if ( v3 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x412u);
        return v1;
      }
      v4 = CAnimatedTransitionVisual::UpdateGeometry2DAndOpacity((CAnimatedTransitionVisual *)this);
      v1 = v4;
      if ( v4 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x413u);
        return v1;
      }
    }
    *((_DWORD *)this + 22) &= 0xFFFFCFDF;
  }
  return v1;
}
