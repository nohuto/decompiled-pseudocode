/*
 * XREFs of SnapshotMonitorRects @ 0x1C0038D80
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C003A8E0 (xxxSystemParametersInfo.c)
 *     SnapShotDesktopsMonitorsAndWindowsRects @ 0x1C01D5CB4 (SnapShotDesktopsMonitorsAndWindowsRects.c)
 *     xxxRestoreMonitorsAndWindowsRects @ 0x1C01D6784 (xxxRestoreMonitorsAndWindowsRects.c)
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 */

char *SnapshotMonitorRects()
{
  int v0; // edx
  __int64 v1; // rax
  char *v2; // rsi
  char *v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // rbp
  int v6; // eax
  __int64 v7; // rcx
  char *result; // rax

  v0 = *(_DWORD *)(gpDispInfo + 80LL);
  if ( (unsigned int)(v0 - 1) > 0xFFFE )
    return 0LL;
  v1 = Win32AllocPool(112LL * (unsigned int)(v0 - 1) + 120, 1919775573LL);
  v2 = (char *)v1;
  if ( !v1 )
  {
    UserSetLastError(14LL);
    return 0LL;
  }
  v3 = (char *)(v1 + 8);
  v4 = *(_QWORD *)(gpDispInfo + 96LL);
  if ( v4 )
  {
    v5 = v1 + 40;
    do
    {
      if ( (*(_DWORD *)(v4 + 24) & 1) != 0 )
      {
        *(_OWORD *)v3 = *(_OWORD *)(v4 + 28);
        *(_OWORD *)(v5 - 16) = *(_OWORD *)(v4 + 76);
        *(_OWORD *)v5 = *(_OWORD *)(v4 + 44);
        *(_OWORD *)(v5 + 16) = *(_OWORD *)(v4 + 92);
        *(_OWORD *)(v5 + 32) = *(_OWORD *)(v4 + 60);
        *(_OWORD *)(v5 + 48) = *(_OWORD *)(v4 + 108);
        *(_WORD *)(v5 + 64) = *(_WORD *)(v4 + 152);
        v6 = HdevFromMonitor(v4);
        v7 = v4;
        if ( v6 == -1 )
          v7 = 0LL;
        v3 += 112;
        *(_QWORD *)(v5 + 72) = v7;
        v5 += 112LL;
      }
      v4 = *(_QWORD *)(v4 + 16);
    }
    while ( v4 );
  }
  result = v2;
  *(_DWORD *)v2 = (v3 - v2 - 8) / 112;
  return result;
}
