/*
 * XREFs of zzzDestroyQueue @ 0x1C004ED10
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C004D110 (xxxCreateThreadInfo.c)
 *     xxxDestroyThreadInfo @ 0x1C004DF98 (xxxDestroyThreadInfo.c)
 * Callees:
 *     IsClearDelegationCaptureSupported_0 @ 0x1C0001D80 (IsClearDelegationCaptureSupported_0.c)
 *     ClearDelegationCapture_0 @ 0x1C0001D88 (ClearDelegationCapture_0.c)
 *     IsSetWakeBitSupported_0 @ 0x1C0001D90 (IsSetWakeBitSupported_0.c)
 *     SetWakeBit_0 @ 0x1C0001D98 (SetWakeBit_0.c)
 *     xxxWindowEvent_0 @ 0x1C0001DA0 (xxxWindowEvent_0.c)
 *     IsUnlockCaptureWindowSupported_0 @ 0x1C0001DA8 (IsUnlockCaptureWindowSupported_0.c)
 *     UnlockCaptureWindow_0 @ 0x1C0001DB0 (UnlockCaptureWindow_0.c)
 *     IsFreeMessageListSupported_0 @ 0x1C0001DB8 (IsFreeMessageListSupported_0.c)
 *     FreeMessageList_0 @ 0x1C0001DC0 (FreeMessageList_0.c)
 *     IsSetNewForegroundQueueSupported_0 @ 0x1C0001DC8 (IsSetNewForegroundQueueSupported_0.c)
 *     SetNewForegroundQueue_0 @ 0x1C0001DD0 (SetNewForegroundQueue_0.c)
 *     IszzzSetFMouseMovedSupported_0 @ 0x1C0001DD8 (IszzzSetFMouseMovedSupported_0.c)
 *     zzzSetFMouseMoved_0 @ 0x1C0001DE0 (zzzSetFMouseMoved_0.c)
 *     RecalculateQueueInfo @ 0x1C000D610 (RecalculateQueueInfo.c)
 *     Win32FreeToPagedLookasideList @ 0x1C0035760 (Win32FreeToPagedLookasideList.c)
 *     HMAssignmentLock @ 0x1C004D0A0 (HMAssignmentLock.c)
 *     HMAssignmentUnlock @ 0x1C004EFD0 (HMAssignmentUnlock.c)
 *     UpdateRawMouseMode @ 0x1C004F018 (UpdateRawMouseMode.c)
 */

__int64 __fastcall zzzDestroyQueue(__int64 a1, __int64 a2)
{
  bool v3; // zf
  int v5; // r14d
  _QWORD *v6; // r10
  _QWORD **v7; // r8
  _QWORD *v8; // rbp
  _QWORD *v9; // rsi
  _QWORD *v10; // r9
  _QWORD *v11; // rdx
  __int64 v12; // r15
  __int16 v13; // r11
  __int64 result; // rax

  v3 = (*(_DWORD *)(a1 + 336))-- == 1;
  v5 = 0;
  if ( v3 )
  {
    if ( gpqForeground == a1 && *(_QWORD *)(a1 + 72) )
      xxxWindowEvent_0();
    if ( (int)IsUnlockCaptureWindowSupported_0() >= 0 )
      UnlockCaptureWindow_0();
    HMAssignmentUnlock(a1 + 72);
    HMAssignmentUnlock(a1 + 80);
    HMAssignmentUnlock(a1 + 88);
    if ( (int)IsClearDelegationCaptureSupported_0() >= 0 )
      ClearDelegationCapture_0();
    HMAssignmentUnlock(a1 + 248);
    HMAssignmentLock((_DWORD **)(a1 + 320), 0LL);
    if ( (int)IsFreeMessageListSupported_0() >= 0 )
      FreeMessageList_0();
    result = IsSetNewForegroundQueueSupported_0();
    if ( (int)result >= 0 && gpqForeground == a1 )
      result = SetNewForegroundQueue_0();
    if ( gpqForegroundPrev == a1 )
      gpqForegroundPrev = 0LL;
    if ( gpqCursor == a1 )
    {
      gpqCursor = 0LL;
      v5 = 1;
    }
    if ( *(_DWORD *)(a1 + 340) )
      *(_DWORD *)(a1 + 332) |= 0x4000000u;
    else
      result = Win32FreeToPagedLookasideList();
    if ( v5 )
    {
      result = IszzzSetFMouseMovedSupported_0();
      if ( (int)result >= 0 )
      {
        KeQueryPerformanceCounter(0LL);
        return zzzSetFMouseMoved_0();
      }
    }
  }
  else
  {
    if ( *(_QWORD *)(a1 + 24) == a2 )
      *(_QWORD *)(a1 + 24) = 0LL;
    if ( *(_QWORD *)(a1 + 56) == a2 || *(_QWORD *)(a1 + 48) == a2 )
    {
      v6 = 0LL;
      v7 = (_QWORD **)(*(_QWORD *)(a2 + 416) + 160LL);
      v8 = 0LL;
      v9 = 0LL;
      v10 = *v7;
      if ( *v7 == v7 )
        goto LABEL_20;
      do
      {
        v11 = v10 - 83;
        if ( (*(_DWORD *)(v10 - 27) & 1) == 0 && v11[49] == a1 )
        {
          v12 = *(_QWORD *)(a2 + 408);
          v6 = v10 - 83;
          v13 = *(_WORD *)(v12 + 6);
          if ( (v13 & 6) != 0 && (*(_BYTE *)(v11[51] + 10LL) & 6) != 0 )
            v8 = v10 - 83;
          if ( (v13 & 1) != 0 && (*(_BYTE *)(v11[51] + 10LL) & 1) != 0 )
            v9 = v10 - 83;
          if ( (*(_WORD *)(v12 + 10) & 0x400) != 0 && (*(_WORD *)(v11[51] + 10LL) & 0x400) != 0 )
            v9 = v10 - 83;
        }
        v10 = (_QWORD *)*v10;
      }
      while ( v10 != v7 );
      if ( !v8 )
LABEL_20:
        v8 = v6;
      if ( !v9 )
        v9 = v6;
      if ( (int)IsSetWakeBitSupported_0() >= 0 )
      {
        if ( v8 )
          SetWakeBit_0();
        if ( v9 )
        {
          SetWakeBit_0();
          SetWakeBit_0();
        }
      }
      if ( *(_QWORD *)(a1 + 56) == a2 )
        *(_QWORD *)(a1 + 56) = v9;
      if ( *(_QWORD *)(a1 + 48) == a2 )
      {
        *(_QWORD *)(a1 + 48) = v8;
        UpdateRawMouseMode(a1);
      }
    }
    return RecalculateQueueInfo();
  }
  return result;
}
