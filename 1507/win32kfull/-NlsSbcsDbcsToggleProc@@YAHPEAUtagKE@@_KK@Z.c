/*
 * XREFs of ?NlsSbcsDbcsToggleProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C0228E40
 * Callers:
 *     <none>
 * Callees:
 *     xxxKeyEvent @ 0x1C00485C0 (xxxKeyEvent.c)
 *     ?NlsClearKeyStateToggle@@YAXE@Z @ 0x1C02286A4 (-NlsClearKeyStateToggle@@YAXE@Z.c)
 *     ?NlsGetCurrentInputMode@@YAEPEAE@Z @ 0x1C022884C (-NlsGetCurrentInputMode@@YAEPEAE@Z.c)
 */

__int64 __fastcall NlsSbcsDbcsToggleProc(struct tagKE *a1, __int64 a2)
{
  __int16 v2; // di
  unsigned __int8 CurrentInputMode; // al
  int v6; // r10d

  v2 = *((_WORD *)a1 + 1);
  if ( v2 < 0 )
    return 0LL;
  CurrentInputMode = NlsGetCurrentInputMode(&NlsSbcsDbcsMode);
  *((_WORD *)a1 + 1) = v2 & 0x8F00;
  NlsClearKeyStateToggle(CurrentInputMode);
  if ( v6 == 243 )
  {
    xxxKeyEvent(
      *((_WORD *)a1 + 1) | 0x80F3,
      *(unsigned __int8 *)a1,
      *((_DWORD *)a1 + 1),
      a2,
      *((void **)a1 + 1),
      (struct _KEYBOARD_INPUT_DATA *)((char *)a1 + 16),
      0,
      0,
      0LL);
    *((_WORD *)a1 + 1) |= 0xF4u;
  }
  else if ( v6 == 244 )
  {
    xxxKeyEvent(
      *((_WORD *)a1 + 1) | 0x80F4,
      *(unsigned __int8 *)a1,
      *((_DWORD *)a1 + 1),
      a2,
      *((void **)a1 + 1),
      (struct _KEYBOARD_INPUT_DATA *)((char *)a1 + 16),
      0,
      0,
      0LL);
    *((_WORD *)a1 + 1) |= 0xF3u;
  }
  return 1LL;
}
