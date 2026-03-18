/*
 * XREFs of ?NlsConvOrNonConvProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C0228420
 * Callers:
 *     <none>
 * Callees:
 *     ?NlsTestKeyStateToggle@@YAHE@Z @ 0x1C0228B4C (-NlsTestKeyStateToggle@@YAHE@Z.c)
 *     NlsKbdSendIMEProc @ 0x1C0228BF8 (NlsKbdSendIMEProc.c)
 */

__int64 __fastcall NlsConvOrNonConvProc(struct tagKE *a1)
{
  if ( !gdwIMEOpenStatus && !(unsigned int)NlsTestKeyStateToggle(0x15u) )
    NlsKbdSendIMEProc(0LL, 0LL);
  return 1LL;
}
