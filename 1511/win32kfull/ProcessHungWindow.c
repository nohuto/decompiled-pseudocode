/*
 * XREFs of ProcessHungWindow @ 0x1C014260C
 * Callers:
 *     xxxButtonEvent @ 0x1C0085B2C (xxxButtonEvent.c)
 *     NtUserQueryWindow @ 0x1C008C050 (NtUserQueryWindow.c)
 *     xxxRedrawHungWindowFrame @ 0x1C01425EC (xxxRedrawHungWindowFrame.c)
 *     xxxRedrawHungWindow @ 0x1C014D7BC (xxxRedrawHungWindow.c)
 *     ?GeneratePointerMessage@@YAHPEBUtagPOINTERINFONODE@@_KIKHHPEAUHWND__@@@Z @ 0x1C01F7CA4 (-GeneratePointerMessage@@YAHPEBUtagPOINTERINFONODE@@_KIKHHPEAUHWND__@@@Z.c)
 * Callees:
 *     IsHungWindow @ 0x1C008C360 (IsHungWindow.c)
 *     ShouldProcessHungWindow @ 0x1C010BFEC (ShouldProcessHungWindow.c)
 *     ?_GhostOwnerWindowAndOwnees@@YAHPEAUtagWND@@@Z @ 0x1C0142654 (-_GhostOwnerWindowAndOwnees@@YAHPEAUtagWND@@@Z.c)
 */

__int64 __fastcall ProcessHungWindow(__int64 a1)
{
  unsigned int v1; // ebx
  struct tagWND *v2; // rax
  struct tagWND *v3; // rsi
  __int64 *i; // rdi

  v1 = 0;
  v2 = ShouldProcessHungWindow(a1);
  v3 = v2;
  if ( v2 )
  {
    for ( i = (__int64 *)((char *)v2 + 104); *i && IsHungWindow(*i); i = (__int64 *)(*i + 104) )
      v3 = (struct tagWND *)*i;
    return (unsigned int)_GhostOwnerWindowAndOwnees(v3);
  }
  return v1;
}
