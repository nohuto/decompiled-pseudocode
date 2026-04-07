/*
 * XREFs of ?OnWindowArrangementContinue@CWindowArrangementTransition@@QEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z @ 0x180084C3C
 * Callers:
 *     ?OnWindowArrangementContinue@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z @ 0x180081490 (-OnWindowArrangementContinue@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     TemplateEventDescriptor @ 0x180075A10 (TemplateEventDescriptor.c)
 *     ?UpdateRectAnimation@CAnimatedGlassSheet@@QEAAJPEBUtagRECT@@M@Z @ 0x18008415C (-UpdateRectAnimation@CAnimatedGlassSheet@@QEAAJPEBUtagRECT@@M@Z.c)
 */

__int64 __fastcall CWindowArrangementTransition::OnWindowArrangementContinue(
        CAnimatedGlassSheet **this,
        const struct MILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION *a2)
{
  unsigned int v2; // ebx
  const struct tagRECT *v3; // rdx
  CAnimatedGlassSheet *v4; // rcx
  int updated; // eax
  __int64 v6; // rcx
  int v7; // eax

  v2 = 0;
  if ( *((_BYTE *)this + 24) )
  {
    v3 = (const struct tagRECT *)((char *)a2 + 16);
    v4 = *this;
    if ( *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 21) )
    {
      updated = CAnimatedGlassSheet::UpdateRectAnimation(v4, v3, 0.2);
      v2 = updated;
      if ( updated < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, updated, 0xAFu);
        return v2;
      }
    }
    else
    {
      v7 = CAnimatedGlassSheet::UpdateRectAnimation(v4, v3, 0.000001);
      v2 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v7, 0xB3u);
        return v2;
      }
    }
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      TemplateEventDescriptor(v6, (__int64)&UdwmGlassSheetAnimation_Update);
  }
  return v2;
}
