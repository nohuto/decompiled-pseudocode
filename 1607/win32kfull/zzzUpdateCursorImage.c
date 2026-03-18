/*
 * XREFs of zzzUpdateCursorImage @ 0x1C005C620
 * Callers:
 *     zzzSetFMouseMovedWorker @ 0x1C00587A4 (zzzSetFMouseMovedWorker.c)
 *     zzzCalcStartCursorHide @ 0x1C005C530 (zzzCalcStartCursorHide.c)
 *     ?zzzAnimateCursor@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C005DED0 (-zzzAnimateCursor@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     zzzSetCursor @ 0x1C0078168 (zzzSetCursor.c)
 *     xxxSetMonitorIcoCurIndex @ 0x1C008F454 (xxxSetMonitorIcoCurIndex.c)
 *     zzzSetSystemImage @ 0x1C008F7D4 (zzzSetSystemImage.c)
 *     zzzShowCursor @ 0x1C0132E80 (zzzShowCursor.c)
 *     HideAutorunCursor @ 0x1C01DD590 (HideAutorunCursor.c)
 *     zzzSetCursorContents @ 0x1C01E0DEC (zzzSetCursorContents.c)
 * Callees:
 *     ?GetCurrentCursorFrame@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C005C8F4 (-GetCurrentCursorFrame@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     FixupCursorForMonitor @ 0x1C005C91C (FixupCursorForMonitor.c)
 *     HasHidTable @ 0x1C005C980 (HasHidTable.c)
 *     GreSetPointer @ 0x1C005DA90 (GreSetPointer.c)
 *     ?FCursorShadowed@@YAHPEAU_CURSINFO@@@Z @ 0x1C005DD20 (-FCursorShadowed@@YAHPEAU_CURSINFO@@@Z.c)
 *     SetRITTimer @ 0x1C005F490 (SetRITTimer.c)
 *     xxxWindowEvent @ 0x1C0087F70 (xxxWindowEvent.c)
 *     SetPointer @ 0x1C0094C10 (SetPointer.c)
 *     FindTimer @ 0x1C00ECDEC (FindTimer.c)
 */

// write access to const memory has been detected, the output may be wrong!
struct tagCURSOR *zzzUpdateCursorImage()
{
  __int64 v0; // rdi
  __int64 v1; // rdi
  struct tagCURSOR *result; // rax
  __int64 v3; // rbx
  int v4; // edi
  struct tagCURSOR *v5; // rax
  __int64 v6; // rsi
  unsigned int v7; // r10d
  __int64 v8; // r11
  unsigned int v9; // r9d
  int v10; // ecx
  _DWORD *v11; // rax

  if ( gpqForeground )
  {
    v0 = *(_QWORD *)(gpqForeground + 72LL);
    v1 = v0 ? *(_QWORD *)(v0 + 16) : *(_QWORD *)(gpqForeground + 56LL);
    if ( (unsigned int)HasHidTable(v1)
      && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v1 + 376) + 776LL) + 100LL) & 0x100) != 0
      && *(int *)(gpqForeground + 336LL) < 0 )
    {
      goto LABEL_29;
    }
  }
  result = (struct tagCURSOR *)gpqCursor;
  if ( !gpqCursor )
    return result;
  if ( *(int *)(gpqCursor + 336LL) < 0 || (v3 = *(_QWORD *)(gpqCursor + 328LL)) == 0 )
  {
LABEL_29:
    v3 = 0LL;
  }
  else if ( (gtimeStartCursorHide || gtmridAutorunCursor)
         && (v3 == gasyscur[1] || v3 == gasyscur[33] || v3 == gasyscur[23]) )
  {
    if ( gtmridAutorunCursor )
      v3 = gasyscur[33];
    else
      v3 = gasyscur[23];
  }
  v4 = 1;
  if ( v3 != gpcurLogCurrent )
  {
    EtwTraceWaitCursor(v3);
    if ( gtmridAniCursor )
    {
      FindTimer(0, gtmridAniCursor, 4, 1, 0LL);
      gtmridAniCursor = 0LL;
    }
    if ( v3 && (*(_DWORD *)(v3 + 80) & 8) != 0 && *(_QWORD *)(v3 + 112) )
    {
      *(_DWORD *)(v3 + 120) = 0;
      v11 = *(_DWORD **)(v3 + 112);
      gdwLastAniTick = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      gtmridAniCursor = SetRITTimer(gtmridAniCursor, 100 * *v11 / 6u, zzzAnimateCursor, 1LL);
    }
  }
  gpcurLogCurrent = v3;
  v5 = (struct tagCURSOR *)FixupCursorForMonitor(v3);
  result = GetCurrentCursorFrame(v5);
  v6 = gpcurPhysCurrent;
  if ( result != (struct tagCURSOR *)gpcurPhysCurrent )
  {
    gpcurPhysCurrent = (__int64)result;
    if ( result )
    {
      if ( (unsigned int)FCursorShadowed((struct _CURSINFO *)(v3 + 80)) )
        v7 |= 0x10u;
      if ( gbForceSoftwareCursor == 1 )
        v7 |= 0x20u;
      v9 = gMouseTrails;
      if ( gProtocolType )
        v9 = 0;
      GreSetPointer((HDEV)*gpDispInfo, (struct _CURSINFO *)(v8 + 80), v7, v9, 0x32u);
      v10 = v6 != 0 ? 32780 : 32770;
    }
    else
    {
      SetPointer(0LL);
      v10 = 32771;
    }
    if ( gdwDeferWinEvent )
      v4 = 3;
    return (struct tagCURSOR *)xxxWindowEvent(v10, 0, -9, 0, v4);
  }
  return result;
}
