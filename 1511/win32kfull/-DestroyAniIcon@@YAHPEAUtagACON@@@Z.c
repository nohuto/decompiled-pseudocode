/*
 * XREFs of ?DestroyAniIcon@@YAHPEAUtagACON@@@Z @ 0x1C0123BE0
 * Callers:
 *     ?CleanupCursorObject@@YAXPEAUtagCURSOR@@@Z @ 0x1C0123F20 (-CleanupCursorObject@@YAXPEAUtagCURSOR@@@Z.c)
 * Callees:
 *     _DestroyCursor @ 0x1C0123CD0 (_DestroyCursor.c)
 */

__int64 __fastcall DestroyAniIcon(struct tagACON *a1)
{
  int i; // edi
  __int64 v3; // rax

  if ( *((_QWORD *)a1 + 12) )
  {
    for ( i = 0; i < *((_DWORD *)a1 + 22); ++i )
    {
      v3 = HMAssignmentUnlock(*((_QWORD *)a1 + 12) + 8LL * i);
      if ( v3 )
        DestroyCursor(v3, 0LL);
    }
    Win32FreePool(*((_QWORD *)a1 + 12));
  }
  return 1LL;
}
