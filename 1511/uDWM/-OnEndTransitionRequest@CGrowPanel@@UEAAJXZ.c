/*
 * XREFs of ?OnEndTransitionRequest@CGrowPanel@@UEAAJXZ @ 0x180094670
 * Callers:
 *     <none>
 * Callees:
 *     ?_EnumerateWindows@CStoryboard@@IEAAJW4EnumWindowFlags@1@@Z @ 0x180007050 (-_EnumerateWindows@CStoryboard@@IEAAJW4EnumWindowFlags@1@@Z.c)
 *     ?OnEndTransitionRequest@CStoryboard@@UEAAJXZ @ 0x180007340 (-OnEndTransitionRequest@CStoryboard@@UEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CGrowPanel::OnEndTransitionRequest(CGrowPanel *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // eax

  v2 = CStoryboard::_EnumerateWindows(this, 4u);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v4 = CStoryboard::OnEndTransitionRequest((CStoryboard **)this);
    v3 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v4, 0x5A1u);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v2, 0x5A0u);
  }
  return v3;
}
