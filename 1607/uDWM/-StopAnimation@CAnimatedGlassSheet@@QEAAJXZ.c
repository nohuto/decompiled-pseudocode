/*
 * XREFs of ?StopAnimation@CAnimatedGlassSheet@@QEAAJXZ @ 0x180083FE8
 * Callers:
 *     ?DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002C3C0 (-DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?StartAlphaAnimation@CAnimatedGlassSheet@@QEAAJMMM@Z @ 0x180083DC8 (-StartAlphaAnimation@CAnimatedGlassSheet@@QEAAJMMM@Z.c)
 *     ?StartRectAnimation@CAnimatedGlassSheet@@QEAAJPEBUtagRECT@@0M@Z @ 0x180083ECC (-StartRectAnimation@CAnimatedGlassSheet@@QEAAJPEBUtagRECT@@0M@Z.c)
 *     ?UpdateTransition@CAnimatedGlassSheet@@AEAAJXZ @ 0x180084208 (-UpdateTransition@CAnimatedGlassSheet@@AEAAJXZ.c)
 * Callees:
 *     TemplateEventDescriptor @ 0x180075A10 (TemplateEventDescriptor.c)
 *     ?Hide@CAnimatedGlassSheet@@UEAAXXZ @ 0x1800837A0 (-Hide@CAnimatedGlassSheet@@UEAAXXZ.c)
 *     ?UnRegisterGlobalTimer@CAnimatedGlassSheet@@AEAAJXZ @ 0x1800840E4 (-UnRegisterGlobalTimer@CAnimatedGlassSheet@@AEAAJXZ.c)
 *     Template_dddd @ 0x180084420 (Template_dddd.c)
 */

__int64 __fastcall CAnimatedGlassSheet::StopAnimation(CAnimatedGlassSheet *this)
{
  int v2; // edx
  int v3; // ecx
  __int64 v4; // rax
  bool v5; // zf
  char v6; // al
  float v7; // xmm1_4
  __int64 v8; // rcx
  __int64 v9; // rax
  char v10; // al

  CAnimatedGlassSheet::UnRegisterGlobalTimer(this);
  v4 = *((_QWORD *)this + 57);
  if ( v4 )
  {
    v5 = (*(_DWORD *)(v4 + 8))-- == 1;
    v6 = CDesktopManager::s_fTimelineDirty;
    if ( v5 )
      v6 = 1;
    *((_QWORD *)this + 57) = 0LL;
    CDesktopManager::s_fTimelineDirty = v6;
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      Template_dddd(
        v3,
        v2,
        *((_DWORD *)this + 106),
        *((_DWORD *)this + 107),
        *((_DWORD *)this + 108),
        *((_DWORD *)this + 109));
  }
  if ( *((_QWORD *)this + 59) )
  {
    v7 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 117) - 0.0)) & _xmm);
    if ( v7 <= 0.0000011920929 )
    {
      CAnimatedGlassSheet::Hide(this);
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        TemplateEventDescriptor(v8, (__int64)&UdwmGlassSheetFadeOut_End);
    }
  }
  v9 = *((_QWORD *)this + 59);
  if ( v9 )
  {
    v5 = (*(_DWORD *)(v9 + 8))-- == 1;
    v10 = CDesktopManager::s_fTimelineDirty;
    if ( v5 )
      v10 = 1;
    *((_QWORD *)this + 59) = 0LL;
    CDesktopManager::s_fTimelineDirty = v10;
  }
  return 0LL;
}
