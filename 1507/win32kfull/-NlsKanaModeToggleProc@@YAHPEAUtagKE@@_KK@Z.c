/*
 * XREFs of ?NlsKanaModeToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C0228A80
 * Callers:
 *     <none>
 * Callees:
 *     ?NlsTestKeyStateToggle@@YAHE@Z @ 0x1C0228F4C (-NlsTestKeyStateToggle@@YAHE@Z.c)
 */

__int64 __fastcall NlsKanaModeToggleProc(struct tagKE *a1)
{
  int v2; // eax
  __int16 v3; // r11
  __int16 v4; // r11
  int v5; // r10d
  __int16 v6; // r11

  v2 = NlsTestKeyStateToggle(0x15u);
  v4 = v3 & 0xF00;
  *((_WORD *)a1 + 1) = v4;
  if ( !v5 )
    return 0LL;
  if ( v2 )
    v6 = v4 | 0x8015;
  else
    v6 = v4 | 0x15;
  *((_WORD *)a1 + 1) = v6;
  return 1LL;
}
