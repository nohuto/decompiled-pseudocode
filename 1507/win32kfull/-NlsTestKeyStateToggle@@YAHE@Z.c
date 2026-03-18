/*
 * XREFs of ?NlsTestKeyStateToggle@@YAHE@Z @ 0x1C0228F4C
 * Callers:
 *     ?NlsAlphanumericModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C02285C0 (-NlsAlphanumericModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsConvOrNonConvProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C0228820 (-NlsConvOrNonConvProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsGetCurrentInputMode@@YAEPEAE@Z @ 0x1C022884C (-NlsGetCurrentInputMode@@YAEPEAE@Z.c)
 *     ?NlsHelpOrEndProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C0228880 (-NlsHelpOrEndProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsHiraganaModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C0228900 (-NlsHiraganaModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsKanaEventProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C0228A30 (-NlsKanaEventProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsKanaModeToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C0228A80 (-NlsKanaModeToggleProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsKatakanaModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C0228AE0 (-NlsKatakanaModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsNumpadModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C0228BD0 (-NlsNumpadModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NlsTestKeyStateToggle(unsigned __int8 a1)
{
  char v2; // cl

  v2 = 2 * (a1 & 3) + 1;
  if ( gpqForeground )
    return (1 << v2) & (unsigned int)*(unsigned __int8 *)(((unsigned __int64)a1 >> 2) + gpqForeground + 184);
  else
    return gafAsyncKeyState[(unsigned __int64)a1 >> 2] & (unsigned int)(1 << v2);
}
