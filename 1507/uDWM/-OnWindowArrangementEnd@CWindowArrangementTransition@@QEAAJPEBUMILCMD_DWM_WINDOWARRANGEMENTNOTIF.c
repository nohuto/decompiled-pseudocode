/*
 * XREFs of ?OnWindowArrangementEnd@CWindowArrangementTransition@@QEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z @ 0x18007CB9C
 * Callers:
 *     ?OnWindowArrangementEnd@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z @ 0x180078EB4 (-OnWindowArrangementEnd@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     TemplateEventDescriptor @ 0x18006B828 (TemplateEventDescriptor.c)
 *     ?UpdateAlphaAnimation@CAnimatedGlassSheet@@QEAAJMM@Z @ 0x18007BF9C (-UpdateAlphaAnimation@CAnimatedGlassSheet@@QEAAJMM@Z.c)
 */

__int64 __fastcall CWindowArrangementTransition::OnWindowArrangementEnd(
        CAnimatedGlassSheet **this,
        const struct MILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION *a2)
{
  unsigned int v2; // ebx
  CAnimatedGlassSheet *v4; // rcx
  int updated; // eax
  __int64 v6; // rcx
  int v7; // eax

  v2 = 0;
  if ( *((_BYTE *)this + 24) )
  {
    v4 = *this;
    if ( *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 21) )
    {
      updated = CAnimatedGlassSheet::UpdateAlphaAnimation(v4, 0.0, 0.2);
      v2 = updated;
      if ( updated < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, updated, 0xCCu);
        return v2;
      }
    }
    else
    {
      v7 = CAnimatedGlassSheet::UpdateAlphaAnimation(v4, 0.0, 0.000001);
      v2 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v7, 0xD0u);
        return v2;
      }
    }
    this[2] = 0LL;
    *((_BYTE *)this + 24) = 0;
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      TemplateEventDescriptor(v6, (__int64)&UdwmGlassSheetFadeOut_Start);
  }
  return v2;
}
