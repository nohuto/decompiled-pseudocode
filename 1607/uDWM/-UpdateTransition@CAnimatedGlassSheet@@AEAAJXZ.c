/*
 * XREFs of ?UpdateTransition@CAnimatedGlassSheet@@AEAAJXZ @ 0x180084208
 * Callers:
 *     ?ValidateVisual@CAnimatedGlassSheet@@UEAAJXZ @ 0x1800843D0 (-ValidateVisual@CAnimatedGlassSheet@@UEAAJXZ.c)
 * Callees:
 *     ?SetOpacity@CVisual@@QEAAXN@Z @ 0x18001F7E4 (-SetOpacity@CVisual@@QEAAXN@Z.c)
 *     TemplateEventDescriptor @ 0x180075A10 (TemplateEventDescriptor.c)
 *     ?InterpolateValueLinear@CAnimatedGlassSheet@@AEAAJJJM@Z @ 0x180083C94 (-InterpolateValueLinear@CAnimatedGlassSheet@@AEAAJJJM@Z.c)
 *     ?OnRectUpdated@CAnimatedGlassSheet@@AEAAXPEBUtagRECT@@@Z @ 0x180083D0C (-OnRectUpdated@CAnimatedGlassSheet@@AEAAXPEBUtagRECT@@@Z.c)
 *     ?StopAnimation@CAnimatedGlassSheet@@QEAAJXZ @ 0x180083FE8 (-StopAnimation@CAnimatedGlassSheet@@QEAAJXZ.c)
 *     Template_dddd @ 0x180084420 (Template_dddd.c)
 */

__int64 __fastcall CAnimatedGlassSheet::UpdateTransition(CAnimatedGlassSheet *this)
{
  __int64 v1; // rax
  float v3; // xmm6_4
  bool v4; // zf
  float v5; // xmm0_4
  char v6; // al
  float v7; // xmm1_4
  __int64 v8; // rax
  float v9; // xmm3_4
  LONG v10; // eax
  int v11; // r8d
  int v12; // edx
  CAnimatedGlassSheet *v13; // rcx
  LONG v14; // eax
  int v15; // r8d
  int v16; // edx
  CAnimatedGlassSheet *v17; // rcx
  LONG v18; // eax
  int v19; // r8d
  int v20; // edx
  CAnimatedGlassSheet *v21; // rcx
  int v22; // edx
  int v23; // ecx
  __int64 v24; // rax
  char v25; // al
  struct tagRECT v27; // [rsp+30h] [rbp-28h] BYREF

  v1 = *((_QWORD *)this + 59);
  if ( v1 )
  {
    if ( *(_BYTE *)(v1 + 72) )
    {
      v3 = *((float *)this + 117);
      v4 = (*(_DWORD *)(v1 + 8))-- == 1;
      v5 = *((float *)this + 117) - 0.0;
      v6 = CDesktopManager::s_fTimelineDirty;
      if ( v4 )
        v6 = 1;
      *((_QWORD *)this + 59) = 0LL;
      CDesktopManager::s_fTimelineDirty = v6;
      v7 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v5) & _xmm);
      if ( v7 <= 0.0000011920929 && (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        TemplateEventDescriptor((__int64)this, (__int64)&UdwmGlassSheetFadeOut_End);
    }
    else
    {
      v3 = *(double *)(v1 + 48);
    }
    CVisual::SetOpacity(this, v3);
  }
  v8 = *((_QWORD *)this + 57);
  if ( v8 )
  {
    if ( *(_BYTE *)(v8 + 72) )
    {
      CAnimatedGlassSheet::OnRectUpdated((struct tagPOINT *)this, (const struct tagRECT *)((char *)this + 440));
      v24 = *((_QWORD *)this + 57);
      if ( v24 )
      {
        v4 = (*(_DWORD *)(v24 + 8))-- == 1;
        v25 = CDesktopManager::s_fTimelineDirty;
        if ( v4 )
          v25 = 1;
        *((_QWORD *)this + 57) = 0LL;
        CDesktopManager::s_fTimelineDirty = v25;
      }
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        Template_dddd(
          v23,
          v22,
          *((_DWORD *)this + 106),
          *((_DWORD *)this + 107),
          *((_DWORD *)this + 108),
          *((_DWORD *)this + 109));
    }
    else
    {
      v9 = *(double *)(v8 + 48);
      v10 = CAnimatedGlassSheet::InterpolateValueLinear(this, *((_DWORD *)this + 102), *((_DWORD *)this + 110), v9);
      v11 = *((_DWORD *)this + 111);
      v12 = *((_DWORD *)this + 103);
      v27.left = v10;
      v14 = CAnimatedGlassSheet::InterpolateValueLinear(v13, v12, v11, v9);
      v15 = *((_DWORD *)this + 112);
      v16 = *((_DWORD *)this + 104);
      v27.top = v14;
      v18 = CAnimatedGlassSheet::InterpolateValueLinear(v17, v16, v15, v9);
      v19 = *((_DWORD *)this + 113);
      v20 = *((_DWORD *)this + 105);
      v27.right = v18;
      v27.bottom = CAnimatedGlassSheet::InterpolateValueLinear(v21, v20, v19, v9);
      CAnimatedGlassSheet::OnRectUpdated((struct tagPOINT *)this, &v27);
    }
  }
  if ( !*((_QWORD *)this + 57) && !*((_QWORD *)this + 59) )
    CAnimatedGlassSheet::StopAnimation(this);
  return 0LL;
}
