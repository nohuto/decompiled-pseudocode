/*
 * XREFs of zzzAttachToQueue @ 0x1C0043EE8
 * Callers:
 *     xxxSwitchDesktop @ 0x1C0041C84 (xxxSwitchDesktop.c)
 *     zzzReattachThreads @ 0x1C004392C (zzzReattachThreads.c)
 *     xxxSetThreadDesktop @ 0x1C007EA90 (xxxSetThreadDesktop.c)
 *     zzzSetDesktop @ 0x1C008BDA0 (zzzSetDesktop.c)
 *     xxxHardErrorControl @ 0x1C0226550 (xxxHardErrorControl.c)
 * Callees:
 *     ?CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z @ 0x1C0008998 (-CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z.c)
 *     ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x1C0043194 (-RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z.c)
 *     ?CheckTransferState@@YAKPEAUtagTHREADINFO@@PEAUtagQ@@JH@Z @ 0x1C00441DC (-CheckTransferState@@YAKPEAUtagTHREADINFO@@PEAUtagQ@@JH@Z.c)
 *     ClearDelegationCapture @ 0x1C0044230 (ClearDelegationCapture.c)
 *     LockCaptureWindow @ 0x1C004F78C (LockCaptureWindow.c)
 *     UpdateRawMouseMode @ 0x1C0090674 (UpdateRawMouseMode.c)
 *     UnlockCaptureWindow @ 0x1C00ED560 (UnlockCaptureWindow.c)
 *     IsInsideMenuLoop @ 0x1C00F9B14 (IsInsideMenuLoop.c)
 */

__int64 __fastcall zzzAttachToQueue(struct tagTHREADINFO *a1, struct tagQ *a2, __int64 a3, int a4)
{
  unsigned int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // eax
  struct tagTHREADINFO *v11; // rcx
  unsigned int v12; // eax
  struct tagTHREADINFO *v13; // rcx
  unsigned int v14; // eax
  __int64 v15; // rcx
  __int64 result; // rax
  unsigned int v17; // ecx
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rcx
  struct tagQMSG *v21; // rcx
  char *v22; // rcx
  __int64 v23; // rdx
  int v24; // edx
  int v25; // edx
  __int64 v26; // r8

  v8 = CheckTransferState(a1, a2, 80, a4) - 1;
  if ( v8 )
  {
    if ( v8 == 1 )
    {
      HMAssignmentLock((char *)a2 + 80, *(_QWORD *)(*(_QWORD *)(v9 + 392) + 80LL));
      HMAssignmentUnlock(*((_QWORD *)a1 + 49) + 80LL);
      v19 = *((_QWORD *)a1 + 49);
      v20 = *(_QWORD *)(v19 + 248);
      if ( v20 )
      {
        if ( *(struct tagTHREADINFO **)(v20 + 16) == a1 && !*((_QWORD *)a2 + 31) )
        {
          *(_OWORD *)((char *)a2 + 248) = *(_OWORD *)(v19 + 248);
          *(_OWORD *)((char *)a2 + 264) = *(_OWORD *)(v19 + 264);
          *(_OWORD *)((char *)a2 + 280) = *(_OWORD *)(v19 + 280);
          *(_OWORD *)((char *)a2 + 296) = *(_OWORD *)(v19 + 296);
          *((_QWORD *)a2 + 39) = *(_QWORD *)(v19 + 312);
          *(_QWORD *)(*((_QWORD *)a1 + 49) + 248LL) = 0LL;
        }
      }
    }
  }
  else
  {
    CancelInputState((struct tagTHREADINFO *)v9, 0);
  }
  v10 = CheckTransferState(a1, a2, 72, a4) - 1;
  if ( v10 )
  {
    if ( v10 == 1 )
    {
      HMAssignmentLock((char *)a2 + 72, *(_QWORD *)(*((_QWORD *)a1 + 49) + 72LL));
      HMAssignmentUnlock(*((_QWORD *)a1 + 49) + 72LL);
    }
  }
  else
  {
    CancelInputState(v11, 1);
  }
  ClearDelegationCapture(*((_QWORD *)a1 + 49));
  ClearDelegationCapture(a2);
  v12 = CheckTransferState(a1, a2, 64, a4) - 1;
  if ( v12 )
  {
    if ( v12 == 1 )
    {
      LockCaptureWindow(a2, *(_QWORD *)(*((_QWORD *)a1 + 49) + 64LL));
      UnlockCaptureWindow(*((_QWORD *)a1 + 49));
      UpdateRawMouseMode(a2);
      v25 = *((_DWORD *)a2 + 83);
      *((_DWORD *)a2 + 27) = *(_DWORD *)(*((_QWORD *)a1 + 49) + 108LL);
      *((_DWORD *)a2 + 83) = v25 ^ (v25 ^ *(_DWORD *)(*((_QWORD *)a1 + 49) + 332LL)) & 0x100000;
    }
  }
  else
  {
    CancelInputState(v13, 2);
  }
  v14 = CheckTransferState(a1, a2, 88, a4) - 1;
  if ( v14 )
  {
    if ( v14 != 1 )
      goto LABEL_11;
    v22 = (char *)a2 + 88;
    v23 = *(_QWORD *)(*((_QWORD *)a1 + 49) + 88LL);
    goto LABEL_25;
  }
  v26 = *((_QWORD *)a2 + 10);
  if ( v26 )
  {
    v22 = (char *)a2 + 88;
    if ( *((_QWORD *)a2 + 11) )
    {
      v23 = *(_QWORD *)(*((_QWORD *)a1 + 49) + 88LL);
      if ( v23 )
      {
        if ( *(_QWORD *)(v26 + 72) == v23 )
        {
LABEL_25:
          HMAssignmentLock(v22, v23);
          HMAssignmentUnlock(*((_QWORD *)a1 + 49) + 88LL);
        }
      }
    }
  }
LABEL_11:
  v15 = *((_QWORD *)a1 + 49);
  if ( a1 == *(struct tagTHREADINFO **)(v15 + 24) )
  {
    *((_DWORD *)a2 + 83) ^= (*((_DWORD *)a2 + 83) ^ *(_DWORD *)(v15 + 332)) & 0xFFEFFFFF;
    if ( !(unsigned int)IsInsideMenuLoop(a1) )
      *((_DWORD *)a2 + 83) = v24 & 0xFFFFFFBF;
    *(_QWORD *)(*((_QWORD *)a1 + 49) + 24LL) = 0LL;
  }
  if ( gspwndCursor && a1 == *(struct tagTHREADINFO **)(gspwndCursor + 16) )
    HMAssignmentLock((char *)a2 + 320, *(_QWORD *)(*((_QWORD *)a1 + 49) + 320LL));
  *((_DWORD *)a2 + 82) += *((_DWORD *)a1 + 170);
  *((_QWORD *)a2 + 6) = a1;
  *((_QWORD *)a2 + 7) = a1;
  result = *((_QWORD *)a1 + 48);
  v17 = *(_DWORD *)(result + 832);
  if ( *((_DWORD *)a2 + 93) < v17 )
  {
    *((_DWORD *)a2 + 94) = 0;
    *((_DWORD *)a2 + 93) = v17;
  }
  v18 = *((_QWORD *)a1 + 49);
  *((_QWORD *)a1 + 49) = a2;
  if ( v18 == a3 )
  {
    --*(_DWORD *)(v18 + 336);
  }
  else
  {
    v21 = *(struct tagQMSG **)v18;
    *(_QWORD *)v18 = 0LL;
    *(_QWORD *)(v18 + 8) = 0LL;
    *(_DWORD *)(v18 + 16) = 0;
    RedistributeInput(v21, (struct tagQ *)v18, 0LL);
    return zzzDestroyQueue(v18);
  }
  return result;
}
