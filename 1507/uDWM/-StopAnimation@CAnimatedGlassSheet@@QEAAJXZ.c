/*
 * XREFs of ?StopAnimation@CAnimatedGlassSheet@@QEAAJXZ @ 0x18007BE6C
 * Callers:
 *     ?DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002EC90 (-DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?StartAlphaAnimation@CAnimatedGlassSheet@@QEAAJMMM@Z @ 0x18007BC14 (-StartAlphaAnimation@CAnimatedGlassSheet@@QEAAJMMM@Z.c)
 *     ?StartRectAnimation@CAnimatedGlassSheet@@QEAAJPEBUtagRECT@@0M@Z @ 0x18007BD2C (-StartRectAnimation@CAnimatedGlassSheet@@QEAAJPEBUtagRECT@@0M@Z.c)
 *     ?UpdateTransition@CAnimatedGlassSheet@@AEAAJXZ @ 0x18007C094 (-UpdateTransition@CAnimatedGlassSheet@@AEAAJXZ.c)
 * Callees:
 *     TemplateEventDescriptor @ 0x18006B828 (TemplateEventDescriptor.c)
 *     ?Hide@CAnimatedGlassSheet@@UEAAXXZ @ 0x18007B5D0 (-Hide@CAnimatedGlassSheet@@UEAAXXZ.c)
 *     ?UnRegisterGlobalTimer@CAnimatedGlassSheet@@AEAAJXZ @ 0x18007BF70 (-UnRegisterGlobalTimer@CAnimatedGlassSheet@@AEAAJXZ.c)
 *     Template_dddd @ 0x18007C2C0 (Template_dddd.c)
 */

__int64 __fastcall CAnimatedGlassSheet::StopAnimation(CAnimatedGlassSheet *this)
{
  int v2; // edx
  __int64 v3; // rcx
  char v4; // al
  float v5; // xmm1_4
  __int64 v6; // rcx
  __int64 v7; // rcx
  char v8; // al

  CAnimatedGlassSheet::UnRegisterGlobalTimer(this);
  v3 = *((_QWORD *)this + 57);
  if ( v3 )
  {
    --*(_DWORD *)(v3 + 8);
    v4 = CDesktopManager::s_fTimelineDirty;
    if ( !*(_DWORD *)(v3 + 8) )
      v4 = 1;
    *((_QWORD *)this + 57) = 0LL;
    CDesktopManager::s_fTimelineDirty = v4;
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
    v5 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 117) - 0.0)) & _xmm);
    if ( v5 <= 0.0000011920929 )
    {
      CAnimatedGlassSheet::Hide(this);
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        TemplateEventDescriptor(v6, (__int64)&UdwmGlassSheetFadeOut_End);
    }
  }
  v7 = *((_QWORD *)this + 59);
  if ( v7 )
  {
    --*(_DWORD *)(v7 + 8);
    v8 = CDesktopManager::s_fTimelineDirty;
    if ( !*(_DWORD *)(v7 + 8) )
      v8 = 1;
    *((_QWORD *)this + 59) = 0LL;
    CDesktopManager::s_fTimelineDirty = v8;
  }
  return 0LL;
}
