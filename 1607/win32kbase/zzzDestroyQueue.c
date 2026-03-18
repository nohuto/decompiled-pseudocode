/*
 * XREFs of zzzDestroyQueue @ 0x1C0014070
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C00131CC (xxxDestroyThreadInfo.c)
 *     xxxCreateThreadInfo @ 0x1C0014378 (xxxCreateThreadInfo.c)
 * Callees:
 *     IsClearDelegationCaptureSupported_0 @ 0x1C0002088 (IsClearDelegationCaptureSupported_0.c)
 *     ClearDelegationCapture_0 @ 0x1C0002090 (ClearDelegationCapture_0.c)
 *     IsSetWakeBitSupported_0 @ 0x1C0002098 (IsSetWakeBitSupported_0.c)
 *     SetWakeBit_0 @ 0x1C00020A0 (SetWakeBit_0.c)
 *     xxxWindowEvent_0 @ 0x1C00020A8 (xxxWindowEvent_0.c)
 *     IsUnlockCaptureWindowSupported_0 @ 0x1C00020B0 (IsUnlockCaptureWindowSupported_0.c)
 *     UnlockCaptureWindow_0 @ 0x1C00020B8 (UnlockCaptureWindow_0.c)
 *     IsFreeMessageListSupported_0 @ 0x1C00020C0 (IsFreeMessageListSupported_0.c)
 *     FreeMessageList_0 @ 0x1C00020C8 (FreeMessageList_0.c)
 *     IsSetNewForegroundQueueSupported_0 @ 0x1C00020D0 (IsSetNewForegroundQueueSupported_0.c)
 *     SetNewForegroundQueue_0 @ 0x1C00020D8 (SetNewForegroundQueue_0.c)
 *     IszzzSetFMouseMovedSupported_0 @ 0x1C00020E0 (IszzzSetFMouseMovedSupported_0.c)
 *     zzzSetFMouseMoved_0 @ 0x1C00020E8 (zzzSetFMouseMoved_0.c)
 *     HMAssignmentUnlock @ 0x1C0014330 (HMAssignmentUnlock.c)
 *     HMAssignmentLock @ 0x1C0015370 (HMAssignmentLock.c)
 *     UpdateRawMouseMode @ 0x1C00153E4 (UpdateRawMouseMode.c)
 *     Win32FreeToPagedLookasideList @ 0x1C0036730 (Win32FreeToPagedLookasideList.c)
 *     RecalculateQueueInfo @ 0x1C0074DE0 (RecalculateQueueInfo.c)
 */

__int64 __fastcall zzzDestroyQueue(__int64 a1, __int64 a2)
{
  int v2; // r14d
  _QWORD *v6; // r10
  _QWORD **v7; // r8
  _QWORD *v8; // rbp
  _QWORD *v9; // rsi
  _QWORD *v10; // r9
  _QWORD *v11; // rdx
  __int64 v12; // r15
  __int16 v13; // r11
  __int64 result; // rax

  v2 = 0;
  if ( (*(_DWORD *)(a1 + 344))-- == 1 )
  {
    if ( gpqForeground == a1 && *(_QWORD *)(a1 + 80) )
      xxxWindowEvent_0();
    if ( (int)IsUnlockCaptureWindowSupported_0() >= 0 )
      UnlockCaptureWindow_0();
    HMAssignmentUnlock(a1 + 80);
    HMAssignmentUnlock(a1 + 88);
    HMAssignmentUnlock(a1 + 96);
    if ( (int)IsClearDelegationCaptureSupported_0() >= 0 )
      ClearDelegationCapture_0();
    HMAssignmentUnlock(a1 + 256);
    HMAssignmentLock(a1 + 328, 0LL);
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
      v2 = 1;
    }
    if ( *(_DWORD *)(a1 + 348) )
      *(_DWORD *)(a1 + 340) |= 0x4000000u;
    else
      result = Win32FreeToPagedLookasideList(QLookaside, a1);
    if ( v2 )
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
    if ( *(_QWORD *)(a1 + 32) == a2 )
      *(_QWORD *)(a1 + 32) = 0LL;
    if ( *(_QWORD *)(a1 + 64) == a2 || *(_QWORD *)(a1 + 56) == a2 )
    {
      v6 = 0LL;
      v7 = (_QWORD **)(*(_QWORD *)(a2 + 408) + 160LL);
      v8 = 0LL;
      v9 = 0LL;
      v10 = *v7;
      if ( *v7 == v7 )
        goto LABEL_20;
      do
      {
        v11 = v10 - 82;
        if ( (*(_DWORD *)(v10 - 27) & 1) == 0 && v11[48] == a1 )
        {
          v12 = *(_QWORD *)(a2 + 400);
          v6 = v10 - 82;
          v13 = *(_WORD *)(v12 + 6);
          if ( (v13 & 6) != 0 && (*(_BYTE *)(v11[50] + 10LL) & 6) != 0 )
            v8 = v10 - 82;
          if ( (v13 & 1) != 0 && (*(_BYTE *)(v11[50] + 10LL) & 1) != 0 )
            v9 = v10 - 82;
          if ( (*(_WORD *)(v12 + 10) & 0x400) != 0 && (*(_WORD *)(v11[50] + 10LL) & 0x400) != 0 )
            v9 = v10 - 82;
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
      if ( *(_QWORD *)(a1 + 64) == a2 )
        *(_QWORD *)(a1 + 64) = v9;
      if ( *(_QWORD *)(a1 + 56) == a2 )
      {
        *(_QWORD *)(a1 + 56) = v8;
        UpdateRawMouseMode(a1);
      }
    }
    return RecalculateQueueInfo();
  }
  return result;
}
