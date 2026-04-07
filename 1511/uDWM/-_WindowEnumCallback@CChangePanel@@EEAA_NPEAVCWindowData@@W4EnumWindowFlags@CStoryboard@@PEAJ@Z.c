/*
 * XREFs of ?_WindowEnumCallback@CChangePanel@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180097D80
 * Callers:
 *     <none>
 * Callees:
 *     ?_FadeWindow@CFade@@IEAAJPEAVCWindowData@@_N@Z @ 0x18000123C (-_FadeWindow@CFade@@IEAAJPEAVCWindowData@@_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

char __fastcall CChangePanel::_WindowEnumCallback(CFade *a1, struct CWindowData *a2, char a3, int *a4)
{
  int v4; // ebx
  int v6; // eax
  int v7; // eax

  v4 = 0;
  if ( (a3 & 1) != 0 )
  {
    if ( (*((_DWORD *)a2 + 144) & 0xFFF) == 0x28 )
    {
      v7 = CFade::_FadeWindow(a1, a2, 0);
      v4 = v7;
      if ( v7 < 0 )
        MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v7, 0x63Cu);
    }
    else if ( (*((_DWORD *)a2 + 144) & 0xFFF) == 0x29 )
    {
      v6 = CFade::_FadeWindow(a1, a2, 1);
      v4 = v6;
      if ( v6 < 0 )
        MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v6, 0x638u);
    }
  }
  *a4 = v4;
  return 1;
}
