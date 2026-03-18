/*
 * XREFs of ?NlsKatakanaModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C02286E0
 * Callers:
 *     <none>
 * Callees:
 *     xxxKeyEvent @ 0x1C00A2818 (xxxKeyEvent.c)
 *     ?NlsClearKeyStateToggle@@YAXE@Z @ 0x1C02282A4 (-NlsClearKeyStateToggle@@YAXE@Z.c)
 *     ?NlsGetCurrentInputMode@@YAEPEAE@Z @ 0x1C022844C (-NlsGetCurrentInputMode@@YAEPEAE@Z.c)
 *     ?NlsTestKeyStateToggle@@YAHE@Z @ 0x1C0228B4C (-NlsTestKeyStateToggle@@YAHE@Z.c)
 *     NlsKbdSendIMEProc @ 0x1C0228BF8 (NlsKbdSendIMEProc.c)
 */

__int64 __fastcall NlsKatakanaModeProc(struct tagKE *a1, __int64 a2)
{
  __int16 v2; // ax
  unsigned __int8 CurrentInputMode; // al
  __int16 v6; // r10

  v2 = *((_WORD *)a1 + 1);
  if ( v2 < 0 )
    return 0LL;
  *((_WORD *)a1 + 1) = v2 & 0x8F00;
  if ( !(unsigned int)NlsTestKeyStateToggle(0xF1u) )
  {
    CurrentInputMode = NlsGetCurrentInputMode(&NlsAlphaNumMode);
    NlsClearKeyStateToggle(CurrentInputMode);
    xxxKeyEvent(
      *((_WORD *)a1 + 1) | v6 | 0x8000,
      *(unsigned __int8 *)a1,
      *((_DWORD *)a1 + 1),
      a2,
      *((_QWORD *)a1 + 1),
      (__int64)a1 + 16,
      0,
      0,
      0LL);
  }
  *((_WORD *)a1 + 1) |= 0xF1u;
  if ( !gdwIMEOpenStatus && !(unsigned int)NlsTestKeyStateToggle(0x15u) )
    NlsKbdSendIMEProc(0LL, 0LL);
  return 1LL;
}
