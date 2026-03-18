/*
 * XREFs of ?ShouldPresent@CHwStereoFullScreenRenderTarget@@MEBAJ_NPEA_NPEAI@Z @ 0x18017FB30
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ShouldPresent@CHwDisplayRenderTarget@@MEBAJ_NPEA_NPEAI@Z @ 0x18008EE50 (-ShouldPresent@CHwDisplayRenderTarget@@MEBAJ_NPEA_NPEAI@Z.c)
 *     Template_x @ 0x1801141C0 (Template_x.c)
 */

__int64 __fastcall CHwStereoFullScreenRenderTarget::ShouldPresent(
        CHwStereoFullScreenRenderTarget *this,
        char a2,
        bool *a3,
        unsigned int *a4)
{
  int ShouldPresent; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx

  ShouldPresent = CHwDisplayRenderTarget::ShouldPresent(this, a2, a3, a4);
  v9 = ShouldPresent;
  if ( ShouldPresent < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, ShouldPresent, 0x1A3u);
  }
  else if ( *((_BYTE *)this + 417) )
  {
    if ( *a3 )
    {
      *a4 |= 0x20u;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        Template_x(v8, &EVTDESC_ETWGUID_STEREO_TEMPORARYMONOEVENT, *((_QWORD *)this + 53));
    }
  }
  return v9;
}
