/*
 * XREFs of ?HasOwnedWindowInTree@@YAHPEAUtagWND@@0@Z @ 0x1C00836A4
 * Callers:
 *     SetWindowGroupBand @ 0x1C0083598 (SetWindowGroupBand.c)
 *     ?HasOwnedWindowInTree@@YAHPEAUtagWND@@0@Z @ 0x1C00836A4 (-HasOwnedWindowInTree@@YAHPEAUtagWND@@0@Z.c)
 * Callees:
 *     ?HasOwnedWindowInTree@@YAHPEAUtagWND@@0@Z @ 0x1C00836A4 (-HasOwnedWindowInTree@@YAHPEAUtagWND@@0@Z.c)
 *     ?IsOwnee@@YAHPEAUtagWND@@0@Z @ 0x1C0083E8C (-IsOwnee@@YAHPEAUtagWND@@0@Z.c)
 */

__int64 __fastcall HasOwnedWindowInTree(struct tagWND *a1, struct tagWND *a2)
{
  __int64 v3; // rcx
  __int64 i; // rbx

  if ( (unsigned int)IsOwnee(a1, a2) )
    return 1LL;
  for ( i = *(_QWORD *)(v3 + 96); i; i = *(_QWORD *)(i + 72) )
  {
    if ( (unsigned int)HasOwnedWindowInTree((struct tagWND *)i, a2) )
      return 1LL;
  }
  return 0LL;
}
