/*
 * XREFs of ?ShouldPresent@CHwStereoFullScreenRenderTarget@@MEBAJ_NPEA_NPEAI@Z @ 0x18014F190
 * Callers:
 *     <none>
 * Callees:
 *     ?ShouldPresent@CHwDisplayRenderTarget@@MEBAJ_NPEA_NPEAI@Z @ 0x180080740 (-ShouldPresent@CHwDisplayRenderTarget@@MEBAJ_NPEA_NPEAI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     Template_x @ 0x180127D74 (Template_x.c)
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
  if ( ShouldPresent >= 0 )
  {
    if ( *((_BYTE *)this + 401) )
    {
      if ( *a3 )
      {
        *a4 |= 0x20u;
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
          Template_x(v8, &EVTDESC_ETWGUID_STEREO_TEMPORARYMONOEVENT, *((_QWORD *)this + 51));
      }
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, ShouldPresent, 0x1A3u);
  }
  return v9;
}
