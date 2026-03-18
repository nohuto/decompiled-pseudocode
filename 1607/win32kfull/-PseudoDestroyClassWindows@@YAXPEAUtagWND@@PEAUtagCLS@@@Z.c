/*
 * XREFs of ?PseudoDestroyClassWindows@@YAXPEAUtagWND@@PEAUtagCLS@@@Z @ 0x1C01FBD4C
 * Callers:
 *     ?PseudoDestroyClassWindows@@YAXPEAUtagWND@@PEAUtagCLS@@@Z @ 0x1C01FBD4C (-PseudoDestroyClassWindows@@YAXPEAUtagWND@@PEAUtagCLS@@@Z.c)
 *     _WOWModuleUnload @ 0x1C01FBED0 (_WOWModuleUnload.c)
 * Callees:
 *     ?PseudoDestroyClassWindows@@YAXPEAUtagWND@@PEAUtagCLS@@@Z @ 0x1C01FBD4C (-PseudoDestroyClassWindows@@YAXPEAUtagWND@@PEAUtagCLS@@@Z.c)
 */

void __fastcall PseudoDestroyClassWindows(struct tagWND *a1, struct tagCLS *a2)
{
  __int64 i; // rbx

  for ( i = *((_QWORD *)a1 + 12); i; i = *(_QWORD *)(i + 72) )
  {
    if ( *(struct tagCLS **)(i + 152) == a2 && gptiCurrent == *(_QWORD *)(i + 16) && (*(_BYTE *)(i + 42) & 4) == 0 )
      *(_QWORD *)(i + 144) = *(_QWORD *)(gpsi + 424LL);
    if ( *(_QWORD *)(i + 96) )
      PseudoDestroyClassWindows((struct tagWND *)i, a2);
  }
}
