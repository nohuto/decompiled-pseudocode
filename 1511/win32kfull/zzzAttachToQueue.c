/*
 * XREFs of zzzAttachToQueue @ 0x1C008BC0C
 * Callers:
 *     zzzSetDesktop @ 0x1C00644C0 (zzzSetDesktop.c)
 *     zzzReattachThreads @ 0x1C008B6B4 (zzzReattachThreads.c)
 *     xxxSwitchDesktop @ 0x1C0093754 (xxxSwitchDesktop.c)
 *     xxxSetThreadDesktop @ 0x1C00CEE94 (xxxSetThreadDesktop.c)
 *     xxxHardErrorControl @ 0x1C02268E8 (xxxHardErrorControl.c)
 * Callees:
 *     UpdateRawMouseMode @ 0x1C00537A0 (UpdateRawMouseMode.c)
 *     ?CheckTransferState@@YAKPEAUtagTHREADINFO@@PEAUtagQ@@JH@Z @ 0x1C008BF00 (-CheckTransferState@@YAKPEAUtagTHREADINFO@@PEAUtagQ@@JH@Z.c)
 *     ClearDelegationCapture @ 0x1C008BF60 (ClearDelegationCapture.c)
 *     LockCaptureWindow @ 0x1C008E848 (LockCaptureWindow.c)
 *     ?CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z @ 0x1C00DB8C0 (-CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z.c)
 *     UnlockCaptureWindow @ 0x1C00F3380 (UnlockCaptureWindow.c)
 *     IsInsideMenuLoop @ 0x1C00FEA20 (IsInsideMenuLoop.c)
 *     ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x1C01007F8 (-RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z.c)
 */

__int64 __fastcall zzzAttachToQueue(struct tagTHREADINFO *a1, struct tagQ *a2, __int64 a3, int a4)
{
  unsigned int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // eax
  __int64 v11; // rdx
  struct tagTHREADINFO *v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // r8
  unsigned int v16; // eax
  struct tagTHREADINFO *v17; // rcx
  unsigned int v18; // eax
  __int64 v19; // rcx
  __int64 result; // rax
  unsigned int v21; // ecx
  __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rcx
  struct tagQMSG *v25; // rcx
  char *v26; // rcx
  __int64 v27; // rdx
  int v28; // edx
  int v29; // edx
  __int64 v30; // r8

  v8 = CheckTransferState(a1, a2, 80, a4) - 1;
  if ( v8 )
  {
    if ( v8 == 1 )
    {
      HMAssignmentLock((char *)a2 + 80, *(_QWORD *)(*(_QWORD *)(v9 + 384) + 80LL));
      HMAssignmentUnlock(*((_QWORD *)a1 + 48) + 80LL);
      v23 = *((_QWORD *)a1 + 48);
      v24 = *(_QWORD *)(v23 + 248);
      if ( v24 )
      {
        if ( *(struct tagTHREADINFO **)(v24 + 16) == a1 && !*((_QWORD *)a2 + 31) )
        {
          *(_OWORD *)((char *)a2 + 248) = *(_OWORD *)(v23 + 248);
          *(_OWORD *)((char *)a2 + 264) = *(_OWORD *)(v23 + 264);
          *(_OWORD *)((char *)a2 + 280) = *(_OWORD *)(v23 + 280);
          *(_OWORD *)((char *)a2 + 296) = *(_OWORD *)(v23 + 296);
          *((_QWORD *)a2 + 39) = *(_QWORD *)(v23 + 312);
          *(_QWORD *)(*((_QWORD *)a1 + 48) + 248LL) = 0LL;
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
      HMAssignmentLock((char *)a2 + 72, *(_QWORD *)(*((_QWORD *)a1 + 48) + 72LL));
      HMAssignmentUnlock(*((_QWORD *)a1 + 48) + 72LL);
    }
  }
  else
  {
    CancelInputState(v12, 1u);
  }
  ClearDelegationCapture(*((_QWORD *)a1 + 48), v11, v13);
  ClearDelegationCapture(a2, v14, v15);
  v16 = CheckTransferState(a1, a2, 64, a4) - 1;
  if ( v16 )
  {
    if ( v16 == 1 )
    {
      LockCaptureWindow(a2, *(_QWORD *)(*((_QWORD *)a1 + 48) + 64LL));
      UnlockCaptureWindow(*((_QWORD *)a1 + 48));
      UpdateRawMouseMode((__int64)a2);
      v29 = *((_DWORD *)a2 + 83);
      *((_DWORD *)a2 + 27) = *(_DWORD *)(*((_QWORD *)a1 + 48) + 108LL);
      *((_DWORD *)a2 + 83) = v29 ^ (v29 ^ *(_DWORD *)(*((_QWORD *)a1 + 48) + 332LL)) & 0x100000;
    }
  }
  else
  {
    CancelInputState(v17, 2u);
  }
  v18 = CheckTransferState(a1, a2, 88, a4) - 1;
  if ( v18 )
  {
    if ( v18 != 1 )
      goto LABEL_11;
    v26 = (char *)a2 + 88;
    v27 = *(_QWORD *)(*((_QWORD *)a1 + 48) + 88LL);
    goto LABEL_25;
  }
  v30 = *((_QWORD *)a2 + 10);
  if ( v30 )
  {
    v26 = (char *)a2 + 88;
    if ( *((_QWORD *)a2 + 11) )
    {
      v27 = *(_QWORD *)(*((_QWORD *)a1 + 48) + 88LL);
      if ( v27 )
      {
        if ( *(_QWORD *)(v30 + 72) == v27 )
        {
LABEL_25:
          HMAssignmentLock(v26, v27);
          HMAssignmentUnlock(*((_QWORD *)a1 + 48) + 88LL);
        }
      }
    }
  }
LABEL_11:
  v19 = *((_QWORD *)a1 + 48);
  if ( a1 == *(struct tagTHREADINFO **)(v19 + 24) )
  {
    *((_DWORD *)a2 + 83) ^= (*((_DWORD *)a2 + 83) ^ *(_DWORD *)(v19 + 332)) & 0xFFEFFFFF;
    if ( !(unsigned int)IsInsideMenuLoop(a1) )
      *((_DWORD *)a2 + 83) = v28 & 0xFFFFFFBF;
    *(_QWORD *)(*((_QWORD *)a1 + 48) + 24LL) = 0LL;
  }
  if ( gspwndCursor && a1 == *(struct tagTHREADINFO **)(gspwndCursor + 16) )
    HMAssignmentLock((char *)a2 + 320, *(_QWORD *)(*((_QWORD *)a1 + 48) + 320LL));
  *((_DWORD *)a2 + 82) += *((_DWORD *)a1 + 168);
  *((_QWORD *)a2 + 6) = a1;
  *((_QWORD *)a2 + 7) = a1;
  result = *((_QWORD *)a1 + 47);
  v21 = *(_DWORD *)(result + 832);
  if ( *((_DWORD *)a2 + 93) < v21 )
  {
    *((_DWORD *)a2 + 94) = 0;
    *((_DWORD *)a2 + 93) = v21;
  }
  v22 = *((_QWORD *)a1 + 48);
  *((_QWORD *)a1 + 48) = a2;
  if ( v22 == a3 )
  {
    --*(_DWORD *)(v22 + 336);
  }
  else
  {
    v25 = *(struct tagQMSG **)v22;
    *(_QWORD *)v22 = 0LL;
    *(_QWORD *)(v22 + 8) = 0LL;
    *(_DWORD *)(v22 + 16) = 0;
    RedistributeInput(v25, (struct tagQ *)v22, 0LL);
    return zzzDestroyQueue(v22);
  }
  return result;
}
