/*
 * XREFs of ?NlsTestKeyStateToggle@@YAHE@Z @ 0x1C022924C
 * Callers:
 *     ?NlsAlphanumericModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C02288C0 (-NlsAlphanumericModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsConvOrNonConvProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C0228B20 (-NlsConvOrNonConvProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsGetCurrentInputMode@@YAEPEAE@Z @ 0x1C0228B4C (-NlsGetCurrentInputMode@@YAEPEAE@Z.c)
 *     ?NlsHelpOrEndProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C0228B80 (-NlsHelpOrEndProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsHiraganaModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C0228C00 (-NlsHiraganaModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsKanaEventProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C0228D30 (-NlsKanaEventProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsKanaModeToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C0228D80 (-NlsKanaModeToggleProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsKatakanaModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C0228DE0 (-NlsKatakanaModeProc@@YAHPEAUtagKE@@_KK@Z.c)
 *     ?NlsNumpadModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C0228ED0 (-NlsNumpadModeProc@@YAHPEAUtagKE@@_KK@Z.c)
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
    return (unsigned __int8)gafAsyncKeyState[(unsigned __int64)a1 >> 2] & (unsigned int)(1 << v2);
}
