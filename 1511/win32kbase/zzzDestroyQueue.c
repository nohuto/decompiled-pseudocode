/*
 * XREFs of zzzDestroyQueue @ 0x1C0040F60
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C003F3A0 (xxxCreateThreadInfo.c)
 *     xxxDestroyThreadInfo @ 0x1C0040170 (xxxDestroyThreadInfo.c)
 * Callees:
 *     IsClearDelegationCaptureSupported_0 @ 0x1C0001DA0 (IsClearDelegationCaptureSupported_0.c)
 *     ClearDelegationCapture_0 @ 0x1C0001DA8 (ClearDelegationCapture_0.c)
 *     IsSetWakeBitSupported_0 @ 0x1C0001DB0 (IsSetWakeBitSupported_0.c)
 *     SetWakeBit_0 @ 0x1C0001DB8 (SetWakeBit_0.c)
 *     xxxWindowEvent_0 @ 0x1C0001DC0 (xxxWindowEvent_0.c)
 *     IsUnlockCaptureWindowSupported_0 @ 0x1C0001DC8 (IsUnlockCaptureWindowSupported_0.c)
 *     UnlockCaptureWindow_0 @ 0x1C0001DD0 (UnlockCaptureWindow_0.c)
 *     IsFreeMessageListSupported_0 @ 0x1C0001DD8 (IsFreeMessageListSupported_0.c)
 *     FreeMessageList_0 @ 0x1C0001DE0 (FreeMessageList_0.c)
 *     IsSetNewForegroundQueueSupported_0 @ 0x1C0001DE8 (IsSetNewForegroundQueueSupported_0.c)
 *     SetNewForegroundQueue_0 @ 0x1C0001DF0 (SetNewForegroundQueue_0.c)
 *     IszzzSetFMouseMovedSupported_0 @ 0x1C0001DF8 (IszzzSetFMouseMovedSupported_0.c)
 *     zzzSetFMouseMoved_0 @ 0x1C0001E00 (zzzSetFMouseMoved_0.c)
 *     Win32FreeToPagedLookasideList @ 0x1C0022AB0 (Win32FreeToPagedLookasideList.c)
 *     HMAssignmentUnlock @ 0x1C0041220 (HMAssignmentUnlock.c)
 *     HMAssignmentLock @ 0x1C0041430 (HMAssignmentLock.c)
 *     UpdateRawMouseMode @ 0x1C00414A4 (UpdateRawMouseMode.c)
 *     RecalculateQueueInfo @ 0x1C0070750 (RecalculateQueueInfo.c)
 */

__int64 __fastcall zzzDestroyQueue(__int64 a1, __int64 a2)
{
  bool v3; // zf
  int v5; // r14d
  __int64 result; // rax
  _QWORD *v7; // r10
  _QWORD **v8; // r8
  _QWORD *v9; // rbp
  _QWORD *v10; // rsi
  _QWORD *v11; // r9
  _QWORD *v12; // rdx
  __int64 v13; // r15
  __int16 v14; // r11

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
    HMAssignmentLock(a1 + 320, 0LL);
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
    if ( !*(_DWORD *)(a1 + 340) )
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
      v7 = 0LL;
      v8 = (_QWORD **)(*(_QWORD *)(a2 + 408) + 160LL);
      v9 = 0LL;
      v10 = 0LL;
      v11 = *v8;
      if ( *v8 == v8 )
        goto LABEL_34;
      do
      {
        v12 = v11 - 82;
        if ( (*(_DWORD *)(v11 - 27) & 1) == 0 && v12[48] == a1 )
        {
          v13 = *(_QWORD *)(a2 + 400);
          v7 = v11 - 82;
          v14 = *(_WORD *)(v13 + 6);
          if ( (v14 & 6) != 0 && (*(_BYTE *)(v12[50] + 10LL) & 6) != 0 )
            v9 = v11 - 82;
          if ( (v14 & 1) != 0 && (*(_BYTE *)(v12[50] + 10LL) & 1) != 0 )
            v10 = v11 - 82;
          if ( (*(_WORD *)(v13 + 10) & 0x400) != 0 && (*(_WORD *)(v12[50] + 10LL) & 0x400) != 0 )
            v10 = v11 - 82;
        }
        v11 = (_QWORD *)*v11;
      }
      while ( v11 != v8 );
      if ( !v9 )
LABEL_34:
        v9 = v7;
      if ( !v10 )
        v10 = v7;
      if ( (int)IsSetWakeBitSupported_0() >= 0 )
      {
        if ( v9 )
          SetWakeBit_0();
        if ( v10 )
        {
          SetWakeBit_0();
          SetWakeBit_0();
        }
      }
      if ( *(_QWORD *)(a1 + 56) == a2 )
        *(_QWORD *)(a1 + 56) = v10;
      if ( *(_QWORD *)(a1 + 48) == a2 )
      {
        *(_QWORD *)(a1 + 48) = v9;
        UpdateRawMouseMode(a1);
      }
    }
    return RecalculateQueueInfo();
  }
  return result;
}
