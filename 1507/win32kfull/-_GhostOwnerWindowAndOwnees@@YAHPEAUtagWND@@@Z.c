/*
 * XREFs of ?_GhostOwnerWindowAndOwnees@@YAHPEAUtagWND@@@Z @ 0x1C01176F0
 * Callers:
 *     ProcessHungWindow @ 0x1C01176A8 (ProcessHungWindow.c)
 * Callees:
 *     IsNonImmersiveBand @ 0x1C0045A6C (IsNonImmersiveBand.c)
 *     ShouldProcessHungWindow @ 0x1C00FF760 (ShouldProcessHungWindow.c)
 *     ?_GhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C011776C (-_GhostWindow@@YAHPEAUtagWND@@@Z.c)
 */

__int64 __fastcall _GhostOwnerWindowAndOwnees(struct tagWND *a1)
{
  unsigned int v2; // esi
  __int64 i; // rbx
  __int64 j; // rax

  v2 = 0;
  if ( ShouldProcessHungWindow((__int64)a1) )
    v2 = _GhostWindow(a1);
  if ( IsNonImmersiveBand((__int64)a1) )
  {
    for ( i = *((_QWORD *)a1 + 10); i; i = *(_QWORD *)(i + 80) )
    {
      for ( j = *(_QWORD *)(i + 104); j; j = *(_QWORD *)(j + 104) )
      {
        if ( (struct tagWND *)j == a1 )
        {
          if ( ShouldProcessHungWindow(i) == (struct tagWND *)i )
            v2 |= _GhostWindow((struct tagWND *)i);
          break;
        }
      }
    }
  }
  return v2;
}
