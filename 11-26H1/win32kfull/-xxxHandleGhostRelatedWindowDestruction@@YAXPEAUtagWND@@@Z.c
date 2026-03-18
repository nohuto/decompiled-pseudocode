/*
 * XREFs of ?xxxHandleGhostRelatedWindowDestruction@@YAXPEAUtagWND@@@Z @ 0x1401B8CB0
 * Callers:
 *     ?xxxDestroyWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z @ 0x14027BA68 (-xxxDestroyWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z.c)
 * Callees:
 *     ?IsWindowGhosted@@YA_NPEBUtagWND@@@Z @ 0x1401B8CFC (-IsWindowGhosted@@YA_NPEBUtagWND@@@Z.c)
 *     ?xxxHandleDestroyGhostWindow@@YAHPEAUtagWND@@@Z @ 0x1401B8D74 (-xxxHandleDestroyGhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxDestroyCorrespondingGhostWindow@@YAHPEAUtagWND@@@Z @ 0x1401B8E04 (-xxxDestroyCorrespondingGhostWindow@@YAHPEAUtagWND@@@Z.c)
 */

void __fastcall xxxHandleGhostRelatedWindowDestruction(struct tagWND *a1)
{
  if ( IsWindowGhosted(a1) )
  {
    xxxDestroyCorrespondingGhostWindow(a1);
  }
  else if ( (*(_WORD *)(*((_QWORD *)a1 + 5) + 42LL) & 0x2FFF) == 0x2AA )
  {
    xxxHandleDestroyGhostWindow(a1);
  }
}
