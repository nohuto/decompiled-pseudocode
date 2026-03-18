/*
 * XREFs of SnapShotDesktopsMonitorsAndWindowsRects @ 0x1C01CE694
 * Callers:
 *     xxxRemoteDisconnect @ 0x1C00EBC70 (xxxRemoteDisconnect.c)
 * Callees:
 *     SnapshotMonitorRects @ 0x1C012C970 (SnapshotMonitorRects.c)
 *     CleanMonitorsAndWindowsSnapshot @ 0x1C01CE5DC (CleanMonitorsAndWindowsSnapshot.c)
 *     SnapshotWindowRects @ 0x1C01CE760 (SnapshotWindowRects.c)
 */

__int64 __fastcall SnapShotDesktopsMonitorsAndWindowsRects(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  unsigned int v4; // edi
  __int64 v5; // rax
  _QWORD *v6; // rbx
  char *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  _QWORD *v13; // rax

  v2 = *(_QWORD *)(a1 + 16);
  v4 = 0;
  while ( v2 )
  {
    v5 = Win32AllocPool(48LL, 1919775573LL);
    v6 = (_QWORD *)v5;
    if ( !v5 )
      return (unsigned int)-1073741801;
    *(_QWORD *)(v5 + 16) = 0LL;
    *(_QWORD *)(v5 + 24) = 0LL;
    v7 = SnapshotMonitorRects();
    v6[2] = v7;
    if ( !v7 )
      goto LABEL_6;
    v10 = SnapshotWindowRects(v2, v6 + 4);
    v6[3] = v10;
    if ( !v10 )
    {
      CleanMonitorsAndWindowsSnapshot((__int64)v6, v11, v12);
LABEL_6:
      v4 = -1073741801;
      Win32FreePool(v6, v8, v9);
      goto LABEL_9;
    }
    v6[5] = v2;
    v4 = 0;
    v13 = *(_QWORD **)(a2 + 8);
    if ( *v13 != a2 )
      __fastfail(3u);
    *v6 = a2;
    v6[1] = v13;
    *v13 = v6;
    *(_QWORD *)(a2 + 8) = v6;
LABEL_9:
    v2 = *(_QWORD *)(v2 + 16);
  }
  return v4;
}
