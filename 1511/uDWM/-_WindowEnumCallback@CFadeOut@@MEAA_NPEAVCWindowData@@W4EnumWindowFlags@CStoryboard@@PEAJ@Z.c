/*
 * XREFs of ?_WindowEnumCallback@CFadeOut@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180098050
 * Callers:
 *     <none>
 * Callees:
 *     ?_FadeWindow@CFade@@IEAAJPEAVCWindowData@@_N@Z @ 0x18000123C (-_FadeWindow@CFade@@IEAAJPEAVCWindowData@@_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

char __fastcall CFadeOut::_WindowEnumCallback(CFade *a1, struct CWindowData *a2, char a3, int *a4)
{
  int v4; // ebx
  int v6; // eax

  v4 = 0;
  if ( (a3 & 1) != 0
    && (*((_DWORD *)a2 + 144) & 0xFFFu) >= 0x1A
    && ((*((_DWORD *)a2 + 144) & 0xFFFu) <= 0x1B || (*((_DWORD *)a2 + 144) & 0xFFF) == 0x43) )
  {
    v6 = CFade::_FadeWindow(a1, a2, 0);
    v4 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v6, 0x1348u);
  }
  *a4 = v4;
  return 1;
}
