/*
 * XREFs of xxxDeactivate @ 0x1C007D9B8
 * Callers:
 *     xxxSetForegroundWindow2 @ 0x1C0045D90 (xxxSetForegroundWindow2.c)
 *     xxxProcessEventMessage @ 0x1C0071E4C (xxxProcessEventMessage.c)
 * Callees:
 *     LockW32Thread @ 0x1C00464F8 (LockW32Thread.c)
 *     xxxFocusSetInputContext @ 0x1C0046C38 (xxxFocusSetInputContext.c)
 *     SetOrClrWF @ 0x1C005B694 (SetOrClrWF.c)
 *     xxxSendMessage @ 0x1C0068C74 (xxxSendMessage.c)
 *     xxxWindowEvent @ 0x1C0070F10 (xxxWindowEvent.c)
 *     PostIAMShellHookMessageEx @ 0x1C007AFD0 (PostIAMShellHookMessageEx.c)
 *     xxxInternalEnumWindow @ 0x1C007E7F8 (xxxInternalEnumWindow.c)
 *     PopAndFreeW32ThreadLock @ 0x1C008C240 (PopAndFreeW32ThreadLock.c)
 *     SetWakeBit @ 0x1C00904B0 (SetWakeBit.c)
 */

__int64 __fastcall xxxDeactivate(__int64 a1, int a2, char a3)
{
  int v4; // r14d
  int v6; // r12d
  __int64 result; // rax
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // r14
  char v12; // al
  unsigned __int64 v13; // r15
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  _QWORD *v25; // rcx
  struct tagWND *v26; // rdi
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // [rsp+38h] [rbp-59h] BYREF
  int v36; // [rsp+40h] [rbp-51h]
  int v37; // [rsp+44h] [rbp-4Dh]
  __int64 v38; // [rsp+48h] [rbp-49h] BYREF
  __int64 v39; // [rsp+50h] [rbp-41h]
  _QWORD v40[3]; // [rsp+60h] [rbp-31h] BYREF
  _QWORD v41[3]; // [rsp+78h] [rbp-19h] BYREF
  _BYTE v42[24]; // [rsp+90h] [rbp-1h] BYREF
  _BYTE v43[32]; // [rsp+A8h] [rbp+17h] BYREF

  v4 = a2;
  v6 = 0;
  result = *(_QWORD *)(a1 + 392);
  if ( !*(_QWORD *)(result + 80) )
    return result;
  if ( a1 != gptiCurrent )
    LockW32Thread(a1, (__int64)v43);
  v8 = *(_DWORD *)(a1 + 448);
  if ( (v8 & 0x200) == 0 )
  {
    v6 = 1;
    *(_DWORD *)(a1 + 448) = v8 | 0x200;
  }
  v9 = *(_QWORD *)(*(_QWORD *)(a1 + 392) + 64LL);
  if ( v9 )
  {
    v40[0] = *(_QWORD *)(gptiCurrent + 376LL);
    *(_QWORD *)(gptiCurrent + 376LL) = v40;
    v40[1] = v9;
    ++*(_DWORD *)(v9 + 8);
    xxxSendMessage(*(struct tagWND **)(*(_QWORD *)(a1 + 392) + 64LL), 0x1Fu, 0LL, 0LL);
    ThreadUnlock1(v30, v29);
    SetWakeBit(a1, 2LL);
  }
  v10 = *(_QWORD *)(*(_QWORD *)(a1 + 392) + 80LL);
  if ( v10 )
  {
    v11 = *(_QWORD *)(v10 + 16);
    LockW32Thread(v11, (__int64)v42);
    v38 = *(_QWORD *)(gptiCurrent + 376LL);
    *(_QWORD *)(gptiCurrent + 376LL) = &v38;
    v39 = v10;
    v12 = *(_BYTE *)(v10 + 55);
    ++*(_DWORD *)(v10 + 8);
    v13 = (unsigned __int8)(v12 & 0x20) << 16;
    if ( (a3 & 1) == 0 && !xxxSendMessage((struct tagWND *)v10, 0x86u, 0LL, 0LL) )
    {
      ThreadUnlock1(v15, v14);
      result = PopAndFreeW32ThreadLock(v42);
      goto LABEL_28;
    }
    xxxSendMessage((struct tagWND *)v10, 6u, v13, 0LL);
    v16 = *(_QWORD *)(a1 + 392);
    v17 = *(_QWORD *)(v16 + 80);
    if ( v17 == v10 )
    {
      HMAssignmentLock(v16 + 88, v17);
      HMAssignmentUnlock(*(_QWORD *)(a1 + 392) + 80LL);
    }
    SetOrClrWF(0, (_DWORD *)v10, 0x40u, 1);
    PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 416LL), 37, *(_QWORD *)v10);
    ThreadUnlock1(v19, v18);
    if ( (*(_BYTE *)(v11 + 448) & 1) != 0 )
      v11 = 0LL;
    v35 = v11;
    PopAndFreeW32ThreadLock(v42);
    v20 = v11;
    v4 = a2;
  }
  else
  {
    v10 = -1LL;
    v35 = a1;
    v20 = a1;
  }
  if ( v20 )
  {
    v37 &= 0xFFFFFFFC;
    v21 = *(_QWORD *)(a1 + 416);
    v36 = v4;
    v22 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v21 + 8) + 16LL) + 96LL);
    v41[0] = *(_QWORD *)(gptiCurrent + 376LL);
    *(_QWORD *)(gptiCurrent + 376LL) = v41;
    v41[1] = v22;
    if ( v22 )
      ++*(_DWORD *)(v22 + 8);
    xxxInternalEnumWindow(
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 416) + 8LL) + 16LL) + 96LL),
      xxxActivateApp,
      &v35);
    ThreadUnlock1(v24, v23);
  }
  result = *(_QWORD *)(a1 + 392);
  if ( *(_QWORD *)(result + 80) != v10 )
    goto LABEL_21;
  v38 = *(_QWORD *)(gptiCurrent + 376LL);
  *(_QWORD *)(gptiCurrent + 376LL) = &v38;
  v39 = v10;
  ++*(_DWORD *)(v10 + 8);
  if ( (a3 & 1) != 0 || xxxSendMessage((struct tagWND *)v10, 0x86u, 0LL, 0LL) )
  {
    xxxSendMessage((struct tagWND *)v10, 6u, 0LL, 0LL);
    result = ThreadUnlock1(v32, v31);
    v33 = *(_QWORD *)(a1 + 392);
    v34 = *(_QWORD *)(v33 + 80);
    if ( v34 == v10 )
    {
      HMAssignmentLock(v33 + 88, v34);
      result = HMAssignmentUnlock(*(_QWORD *)(a1 + 392) + 80LL);
    }
LABEL_21:
    v25 = (_QWORD *)(*(_QWORD *)(a1 + 392) + 72LL);
    if ( !*v25 )
      goto LABEL_28;
    result = HMAssignmentUnlock(v25);
    v26 = (struct tagWND *)result;
    if ( !result )
      goto LABEL_28;
    v38 = *(_QWORD *)(gptiCurrent + 376LL);
    *(_QWORD *)(gptiCurrent + 376LL) = &v38;
    v39 = result;
    ++*(_DWORD *)(result + 8);
    if ( *(_QWORD *)(a1 + 392) == gpqForeground )
      xxxWindowEvent(0x80000003, (__int64 *)result, 0, 0, 49);
    xxxSendMessage(v26, 8u, 0LL, 0LL);
    v28 = gpsi;
    if ( (*gpsi & 4) != 0 )
      xxxFocusSetInputContext((__int64 *)v26, 0, 0);
  }
  result = ThreadUnlock1(v28, v27);
LABEL_28:
  if ( v6 )
    *(_DWORD *)(a1 + 448) &= ~0x200u;
  if ( a1 != gptiCurrent )
    return PopAndFreeW32ThreadLock(v43);
  return result;
}
