/*
 * XREFs of ?NlsHiraganaModeProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C0228C00
 * Callers:
 *     <none>
 * Callees:
 *     xxxKeyEvent @ 0x1C008345C (xxxKeyEvent.c)
 *     ?NlsClearKeyStateToggle@@YAXE@Z @ 0x1C02289A4 (-NlsClearKeyStateToggle@@YAXE@Z.c)
 *     ?NlsGetCurrentInputMode@@YAEPEAE@Z @ 0x1C0228B4C (-NlsGetCurrentInputMode@@YAEPEAE@Z.c)
 *     ?NlsTestKeyStateToggle@@YAHE@Z @ 0x1C022924C (-NlsTestKeyStateToggle@@YAHE@Z.c)
 *     NlsKbdSendIMEProc @ 0x1C02292F8 (NlsKbdSendIMEProc.c)
 */

__int64 __fastcall NlsHiraganaModeProc(struct tagKE *a1, __int64 a2)
{
  __int16 v2; // ax
  unsigned __int8 CurrentInputMode; // al
  __int16 v6; // r10

  v2 = *((_WORD *)a1 + 1);
  if ( v2 < 0 )
    return 0LL;
  *((_WORD *)a1 + 1) = v2 & 0x8F00;
  if ( !(unsigned int)NlsTestKeyStateToggle(0xF2u) )
  {
    CurrentInputMode = NlsGetCurrentInputMode(&NlsAlphaNumMode);
    NlsClearKeyStateToggle(CurrentInputMode);
    xxxKeyEvent(
      *((_WORD *)a1 + 1) | v6 | 0x8000,
      *(unsigned __int8 *)a1,
      *((_DWORD *)a1 + 1),
      a2,
      *((void **)a1 + 1),
      (__int64)a1 + 16,
      0,
      0,
      0LL);
  }
  *((_WORD *)a1 + 1) |= 0xF2u;
  if ( !gdwIMEOpenStatus && !(unsigned int)NlsTestKeyStateToggle(0x15u) )
    NlsKbdSendIMEProc(0LL, 0LL);
  return 1LL;
}
