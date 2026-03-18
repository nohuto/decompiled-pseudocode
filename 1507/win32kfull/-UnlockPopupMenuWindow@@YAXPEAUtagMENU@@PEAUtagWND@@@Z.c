/*
 * XREFs of ?UnlockPopupMenuWindow@@YAXPEAUtagMENU@@PEAUtagWND@@@Z @ 0x1C010CFC4
 * Callers:
 *     LockPopupMenu @ 0x1C010CEB4 (LockPopupMenu.c)
 *     UnlockPopupMenu @ 0x1C010CF90 (UnlockPopupMenu.c)
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
