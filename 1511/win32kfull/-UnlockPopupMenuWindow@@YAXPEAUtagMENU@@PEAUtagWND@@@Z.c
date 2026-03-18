/*
 * XREFs of ?UnlockPopupMenuWindow@@YAXPEAUtagMENU@@PEAUtagWND@@@Z @ 0x1C0138C9C
 * Callers:
 *     LockPopupMenu @ 0x1C0138B8C (LockPopupMenu.c)
 *     UnlockPopupMenu @ 0x1C0138C68 (UnlockPopupMenu.c)
 * Callees:
 *     <none>
 */

void __fastcall UnlockPopupMenuWindow(struct tagMENU *a1, struct tagWND *a2)
{
  __int64 v2; // rax

  if ( a1 )
  {
    v2 = *((_QWORD *)a1 + 9);
    if ( v2 )
    {
      if ( a1 != *(struct tagMENU **)(v2 + 192)
        && a1 != *(struct tagMENU **)(v2 + 184)
        && (a2 == (struct tagWND *)v2 || *(char *)(v2 + 43) < 0) )
      {
        HMAssignmentUnlock((char *)a1 + 72);
      }
    }
  }
}
