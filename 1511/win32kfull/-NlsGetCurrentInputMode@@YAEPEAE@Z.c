/*
 * XREFs of ?NlsGetCurrentInputMode@@YAEPEAE@Z @ 0x1C0228B4C
 * Callers:
 *     ?NlsAlphanumericModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C02288C0 (-NlsAlphanumericModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsCodeInputToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C0228A10 (-NlsCodeInputToggleProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsHiraganaModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C0228C00 (-NlsHiraganaModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsKatakanaModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C0228DE0 (-NlsKatakanaModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsRomanToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C0229030 (-NlsRomanToggleProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsSbcsDbcsToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C0229140 (-NlsSbcsDbcsToggleProc@@YAHPEAUtagKE@@_KK@Z.c)
 * Callees:
 *     ?NlsTestKeyStateToggle@@YAHE@Z @ 0x1C022924C (-NlsTestKeyStateToggle@@YAHE@Z.c)
 */

unsigned __int8 __fastcall NlsGetCurrentInputMode(unsigned __int8 *a1)
{
  unsigned __int8 v1; // r11
  unsigned __int8 v2; // al
  _BYTE *v3; // r10

  v1 = *a1;
  if ( !*a1 )
    return v1;
  v2 = *a1;
  while ( !(unsigned int)NlsTestKeyStateToggle(v2) )
  {
    v2 = v3[1];
    if ( !v2 )
      return v1;
  }
  return *v3;
}
