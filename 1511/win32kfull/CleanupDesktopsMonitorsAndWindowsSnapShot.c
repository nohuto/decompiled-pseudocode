/*
 * XREFs of CleanupDesktopsMonitorsAndWindowsSnapShot @ 0x1C0114BB0
 * Callers:
 *     xxxRemoteDisconnect @ 0x1C009DC30 (xxxRemoteDisconnect.c)
 * Callees:
 *     CleanMonitorsAndWindowsSnapshot @ 0x1C01D776C (CleanMonitorsAndWindowsSnapshot.c)
 */

void __fastcall CleanupDesktopsMonitorsAndWindowsSnapShot(_QWORD **a1)
{
  _QWORD *v1; // rbx
  _QWORD *v3; // rdi
  __int64 v4; // rcx
  _QWORD *v5; // rax

  v1 = *a1;
  while ( v1 != a1 )
  {
    v3 = v1;
    v1 = (_QWORD *)*v1;
    v4 = *v3;
    v5 = (_QWORD *)v3[1];
    if ( *(_QWORD **)(*v3 + 8LL) != v3 || (_QWORD *)*v5 != v3 )
      __fastfail(3u);
    *v5 = v4;
    *(_QWORD *)(v4 + 8) = v5;
    CleanMonitorsAndWindowsSnapshot(v3);
    Win32FreePool(v3);
  }
}
