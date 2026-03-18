/*
 * XREFs of ?DestroyAniIcon@@YAHPEAUtagACON@@@Z @ 0x1C008FA80
 * Callers:
 *     ?CleanupCursorObject@@YAXPEAUtagCURSOR@@@Z @ 0x1C00900A0 (-CleanupCursorObject@@YAXPEAUtagCURSOR@@@Z.c)
 * Callees:
 *     _DestroyCursor @ 0x1C008FEA4 (_DestroyCursor.c)
 */

__int64 __fastcall DestroyAniIcon(struct tagACON *a1, __int64 a2, __int64 a3)
{
  int i; // edi
  struct tagCURSOR *v5; // rax

  if ( *((_QWORD *)a1 + 12) )
  {
    for ( i = 0; i < *((_DWORD *)a1 + 22); ++i )
    {
      v5 = (struct tagCURSOR *)HMAssignmentUnlock(*((_QWORD *)a1 + 12) + 8LL * i);
      if ( v5 )
        DestroyCursor(v5);
    }
    Win32FreePool(*((_QWORD *)a1 + 12), a2, a3);
    *((_QWORD *)a1 + 12) = 0LL;
  }
  return 1LL;
}
