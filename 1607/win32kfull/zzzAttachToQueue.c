/*
 * XREFs of zzzAttachToQueue @ 0x1C00DBFA0
 * Callers:
 *     zzzSetDesktop @ 0x1C0057510 (zzzSetDesktop.c)
 *     xxxSwitchDesktop @ 0x1C0095924 (xxxSwitchDesktop.c)
 *     xxxSetThreadDesktop @ 0x1C0099B20 (xxxSetThreadDesktop.c)
 *     zzzReattachThreads @ 0x1C00DB9C8 (zzzReattachThreads.c)
 *     xxxHardErrorControl @ 0x1C0226628 (xxxHardErrorControl.c)
 * Callees:
 *     UpdateRawMouseMode @ 0x1C005B7C4 (UpdateRawMouseMode.c)
 *     LockCaptureWindow @ 0x1C00AAF40 (LockCaptureWindow.c)
 *     ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x1C00DB608 (-RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z.c)
 *     ?CheckTransferState@@YAKPEAUtagTHREADINFO@@PEAUtagQ@@JH@Z @ 0x1C00DC290 (-CheckTransferState@@YAKPEAUtagTHREADINFO@@PEAUtagQ@@JH@Z.c)
 *     ClearDelegationCapture @ 0x1C00DC2F0 (ClearDelegationCapture.c)
 *     ?CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z @ 0x1C00F96D4 (-CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z.c)
 *     UnlockCaptureWindow @ 0x1C0113840 (UnlockCaptureWindow.c)
 *     IsInsideMenuLoop @ 0x1C0120918 (IsInsideMenuLoop.c)
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
  __int64 v25; // r8

  v8 = CheckTransferState(a1, a2, 88, a4) - 1;
  if ( v8 )
  {
    if ( v8 == 1 )
    {
      HMAssignmentLock((char *)a2 + 88, *(_QWORD *)(*(_QWORD *)(v9 + 384) + 88LL));
      HMAssignmentUnlock(*((_QWORD *)a1 + 48) + 88LL);
      v19 = *((_QWORD *)a1 + 48);
      v20 = *(_QWORD *)(v19 + 256);
      if ( v20 )
      {
        if ( *(struct tagTHREADINFO **)(v20 + 16) == a1 && !*((_QWORD *)a2 + 32) )
        {
          *((_OWORD *)a2 + 16) = *(_OWORD *)(v19 + 256);
          *((_OWORD *)a2 + 17) = *(_OWORD *)(v19 + 272);
          *((_OWORD *)a2 + 18) = *(_OWORD *)(v19 + 288);
          *((_OWORD *)a2 + 19) = *(_OWORD *)(v19 + 304);
          *((_QWORD *)a2 + 40) = *(_QWORD *)(v19 + 320);
          *(_QWORD *)(*((_QWORD *)a1 + 48) + 256LL) = 0LL;
        }
      }
    }
  }
  else
  {
    CancelInputState((struct tagTHREADINFO *)v9, 0);
  }
  v10 = CheckTransferState(a1, a2, 80, a4) - 1;
  if ( v10 )
  {
    if ( v10 == 1 )
    {
      HMAssignmentLock((char *)a2 + 80, *(_QWORD *)(*((_QWORD *)a1 + 48) + 80LL));
      HMAssignmentUnlock(*((_QWORD *)a1 + 48) + 80LL);
    }
  }
  else
  {
    CancelInputState(v11, 1u);
  }
  ClearDelegationCapture(*((_QWORD *)a1 + 48));
  ClearDelegationCapture(a2);
  v12 = CheckTransferState(a1, a2, 72, a4) - 1;
  if ( v12 )
  {
    if ( v12 == 1 )
    {
      LockCaptureWindow((__int64)a2, *(_QWORD *)(*((_QWORD *)a1 + 48) + 72LL));
      UnlockCaptureWindow(*((_QWORD *)a1 + 48));
      UpdateRawMouseMode((__int64)a2);
      v24 = *((_DWORD *)a2 + 85);
      *((_DWORD *)a2 + 29) = *(_DWORD *)(*((_QWORD *)a1 + 48) + 116LL);
      *((_DWORD *)a2 + 85) = v24 ^ (v24 ^ *(_DWORD *)(*((_QWORD *)a1 + 48) + 340LL)) & 0x100000;
    }
  }
  else
  {
    CancelInputState(v13, 2u);
  }
  v14 = CheckTransferState(a1, a2, 96, a4) - 1;
  if ( v14 )
  {
    if ( v14 != 1 )
      goto LABEL_11;
    v22 = (char *)a2 + 96;
    v23 = *(_QWORD *)(*((_QWORD *)a1 + 48) + 96LL);
    goto LABEL_25;
  }
  v25 = *((_QWORD *)a2 + 11);
  if ( v25 )
  {
    v22 = (char *)a2 + 96;
    if ( *((_QWORD *)a2 + 12) )
    {
      v23 = *(_QWORD *)(*((_QWORD *)a1 + 48) + 96LL);
      if ( v23 )
      {
        if ( *(_QWORD *)(v25 + 72) == v23 )
        {
LABEL_25:
          HMAssignmentLock(v22, v23);
          HMAssignmentUnlock(*((_QWORD *)a1 + 48) + 96LL);
        }
      }
    }
  }
LABEL_11:
  v15 = *((_QWORD *)a1 + 48);
  if ( a1 == *(struct tagTHREADINFO **)(v15 + 32) )
  {
    *((_DWORD *)a2 + 85) ^= (*((_DWORD *)a2 + 85) ^ *(_DWORD *)(v15 + 340)) & 0xFFEFFFFF;
    if ( !(unsigned int)IsInsideMenuLoop(a1) )
      *((_DWORD *)a2 + 85) &= ~0x40u;
    *(_QWORD *)(*((_QWORD *)a1 + 48) + 32LL) = 0LL;
  }
  if ( gspwndCursor && a1 == *(struct tagTHREADINFO **)(gspwndCursor + 16) )
    HMAssignmentLock((char *)a2 + 328, *(_QWORD *)(*((_QWORD *)a1 + 48) + 328LL));
  *((_DWORD *)a2 + 84) += *((_DWORD *)a1 + 168);
  *((_QWORD *)a2 + 7) = a1;
  *((_QWORD *)a2 + 8) = a1;
  result = *((_QWORD *)a1 + 47);
  v17 = *(_DWORD *)(result + 824);
  if ( *((_DWORD *)a2 + 95) < v17 )
  {
    *((_DWORD *)a2 + 96) = 0;
    *((_DWORD *)a2 + 95) = v17;
  }
  v18 = *((_QWORD *)a1 + 48);
  *((_QWORD *)a1 + 48) = a2;
  if ( v18 == a3 )
  {
    --*(_DWORD *)(v18 + 344);
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
