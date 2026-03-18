/*
 * XREFs of ?AdvanceFrame@CDWMOffScreenSwapChain@@UEAAJ_K@Z @ 0x1800B55F0
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     TemplateEventDescriptor @ 0x1800BA27C (TemplateEventDescriptor.c)
 */

__int64 __fastcall CDWMOffScreenSwapChain::AdvanceFrame(CDWMOffScreenSwapChain *this)
{
  unsigned int v1; // ebx
  __int64 v3; // rdi
  int v5; // eax
  int v6[14]; // [rsp+30h] [rbp-38h] BYREF

  v1 = 0;
  v6[0] = 5;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    TemplateEventDescriptor(this, &EVTDESC_DETECT_DESKTOP_ENDOFUPDATES);
  v3 = *((_QWORD *)this + 60);
  if ( v3 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, int *, __int64))(*(_QWORD *)v3 + 56LL))(v3, v6, 1LL);
    v1 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x380u);
  }
  return v1;
}
