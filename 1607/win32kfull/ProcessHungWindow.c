/*
 * XREFs of ProcessHungWindow @ 0x1C00D5348
 * Callers:
 *     xxxRedrawHungWindow @ 0x1C00D52D8 (xxxRedrawHungWindow.c)
 *     NtUserQueryWindow @ 0x1C00D53A0 (NtUserQueryWindow.c)
 *     xxxButtonEvent @ 0x1C00DDEA4 (xxxButtonEvent.c)
 *     xxxRedrawHungWindowFrame @ 0x1C0152ED0 (xxxRedrawHungWindowFrame.c)
 *     ?GeneratePointerMessage@@YAHPEBUtagPOINTERINFONODE@@_KIKHHPEAUHWND__@@@Z @ 0x1C01EEE90 (-GeneratePointerMessage@@YAHPEBUtagPOINTERINFONODE@@_KIKHHPEAUHWND__@@@Z.c)
 * Callees:
 *     IsHungWindow @ 0x1C0059680 (IsHungWindow.c)
 *     ShouldProcessHungWindow @ 0x1C00D5530 (ShouldProcessHungWindow.c)
 *     ?_GhostOwnerWindowAndOwnees@@YAHPEAUtagWND@@@Z @ 0x1C014819C (-_GhostOwnerWindowAndOwnees@@YAHPEAUtagWND@@@Z.c)
 */

__int64 ProcessHungWindow()
{
  unsigned int v0; // ebx
  __int64 v1; // rax
  struct tagWND *v2; // rsi
  __int64 *i; // rdi

  v0 = 0;
  v1 = ShouldProcessHungWindow();
  v2 = (struct tagWND *)v1;
  if ( v1 )
  {
    for ( i = (__int64 *)(v1 + 104); *i && IsHungWindow(*i); i = (__int64 *)(*i + 104) )
      v2 = (struct tagWND *)*i;
    return (unsigned int)_GhostOwnerWindowAndOwnees(v2);
  }
  return v0;
}
