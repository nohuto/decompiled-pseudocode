/*
 * XREFs of ?DestroyAniIcon@@YAHPEAUtagACON@@@Z @ 0x1C014FA18
 * Callers:
 *     ?CleanupCursorObject@@YAXPEAUtagCURSOR@@@Z @ 0x1C00D94BC (-CleanupCursorObject@@YAXPEAUtagCURSOR@@@Z.c)
 * Callees:
 *     _DestroyCursor @ 0x1C00D9340 (_DestroyCursor.c)
 */

__int64 __fastcall DestroyAniIcon(struct tagACON *a1)
{
  int i; // edi
  struct tagCURSOR *v3; // rax

  if ( *((_QWORD *)a1 + 12) )
  {
    for ( i = 0; i < *((_DWORD *)a1 + 22); ++i )
    {
      v3 = (struct tagCURSOR *)HMAssignmentUnlock(*((_QWORD *)a1 + 12) + 8LL * i);
      if ( v3 )
        DestroyCursor(v3, 0);
    }
    Win32FreePool(*((_QWORD *)a1 + 12));
    *((_QWORD *)a1 + 12) = 0LL;
  }
  return 1LL;
}
