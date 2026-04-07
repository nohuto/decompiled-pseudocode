/*
 * XREFs of ?UpdateTransition@CAnimatedGlassSheet@@AEAAJXZ @ 0x180083AC4
 * Callers:
 *     ?ValidateVisual@CAnimatedGlassSheet@@UEAAJXZ @ 0x180083CA0 (-ValidateVisual@CAnimatedGlassSheet@@UEAAJXZ.c)
 * Callees:
 *     ?SetOpacity@CVisual@@QEAAXN@Z @ 0x180022540 (-SetOpacity@CVisual@@QEAAXN@Z.c)
 *     TemplateEventDescriptor @ 0x180073BC8 (TemplateEventDescriptor.c)
 *     ?InterpolateValueLinear@CAnimatedGlassSheet@@AEAAJJJM@Z @ 0x18008350C (-InterpolateValueLinear@CAnimatedGlassSheet@@AEAAJJJM@Z.c)
 *     ?OnRectUpdated@CAnimatedGlassSheet@@AEAAXPEBUtagRECT@@@Z @ 0x18008358C (-OnRectUpdated@CAnimatedGlassSheet@@AEAAXPEBUtagRECT@@@Z.c)
 *     ?StopAnimation@CAnimatedGlassSheet@@QEAAJXZ @ 0x18008389C (-StopAnimation@CAnimatedGlassSheet@@QEAAJXZ.c)
 *     Template_dddd @ 0x180083CF0 (Template_dddd.c)
 */

__int64 __fastcall CAnimatedGlassSheet::UpdateTransition(CAnimatedGlassSheet *this)
{
  __int64 v2; // rcx
  float v3; // xmm6_4
  char v4; // al
  float v5; // xmm0_4
  float v6; // xmm1_4
  __int64 v7; // rax
  float v8; // xmm3_4
  LONG v9; // eax
  int v10; // r8d
  int v11; // edx
  CAnimatedGlassSheet *v12; // rcx
  LONG v13; // eax
  int v14; // r8d
  int v15; // edx
  CAnimatedGlassSheet *v16; // rcx
  LONG v17; // eax
  int v18; // r8d
  int v19; // edx
  CAnimatedGlassSheet *v20; // rcx
  int v21; // edx
  __int64 v22; // rcx
  char v23; // al
  struct tagRECT v25; // [rsp+30h] [rbp-28h] BYREF

  v2 = *((_QWORD *)this + 59);
  if ( v2 )
  {
    if ( *(_BYTE *)(v2 + 72) )
    {
      v4 = CDesktopManager::s_fTimelineDirty;
      v3 = *((float *)this + 117);
      --*(_DWORD *)(v2 + 8);
      v5 = *((float *)this + 117) - 0.0;
      if ( !*(_DWORD *)(v2 + 8) )
        v4 = 1;
      *((_QWORD *)this + 59) = 0LL;
      CDesktopManager::s_fTimelineDirty = v4;
      v6 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v5) & _xmm);
      if ( v6 <= 0.0000011920929 && (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        TemplateEventDescriptor(v2, (__int64)&UdwmGlassSheetFadeOut_End);
    }
    else
    {
      v3 = *(double *)(v2 + 48);
    }
    CVisual::SetOpacity(this, v3);
  }
  v7 = *((_QWORD *)this + 57);
  if ( v7 )
  {
    if ( *(_BYTE *)(v7 + 72) )
    {
      CAnimatedGlassSheet::OnRectUpdated((struct tagPOINT *)this, (const struct tagRECT *)((char *)this + 440));
      v22 = *((_QWORD *)this + 57);
      if ( v22 )
      {
        --*(_DWORD *)(v22 + 8);
        v23 = CDesktopManager::s_fTimelineDirty;
        if ( !*(_DWORD *)(v22 + 8) )
          v23 = 1;
        *((_QWORD *)this + 57) = 0LL;
        CDesktopManager::s_fTimelineDirty = v23;
      }
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        Template_dddd(
          v22,
          v21,
          *((_DWORD *)this + 106),
          *((_DWORD *)this + 107),
          *((_DWORD *)this + 108),
          *((_DWORD *)this + 109));
    }
    else
    {
      v8 = *(double *)(v7 + 48);
      v9 = CAnimatedGlassSheet::InterpolateValueLinear(
             (CAnimatedGlassSheet *)v2,
             *((_DWORD *)this + 102),
             *((_DWORD *)this + 110),
             v8);
      v10 = *((_DWORD *)this + 111);
      v11 = *((_DWORD *)this + 103);
      v25.left = v9;
      v13 = CAnimatedGlassSheet::InterpolateValueLinear(v12, v11, v10, v8);
      v14 = *((_DWORD *)this + 112);
      v15 = *((_DWORD *)this + 104);
      v25.top = v13;
      v17 = CAnimatedGlassSheet::InterpolateValueLinear(v16, v15, v14, v8);
      v18 = *((_DWORD *)this + 113);
      v19 = *((_DWORD *)this + 105);
      v25.right = v17;
      v25.bottom = CAnimatedGlassSheet::InterpolateValueLinear(v20, v19, v18, v8);
      CAnimatedGlassSheet::OnRectUpdated((struct tagPOINT *)this, &v25);
    }
  }
  if ( !*((_QWORD *)this + 57) && !*((_QWORD *)this + 59) )
    CAnimatedGlassSheet::StopAnimation(this);
  return 0LL;
}
