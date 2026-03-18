/*
 * XREFs of xxxDeactivate @ 0x1C0098E24
 * Callers:
 *     xxxProcessEventMessage @ 0x1C00889B8 (xxxProcessEventMessage.c)
 *     xxxSetForegroundWindow2 @ 0x1C009D654 (xxxSetForegroundWindow2.c)
 * Callees:
 *     PopAndFreeW32ThreadLock @ 0x1C00579A0 (PopAndFreeW32ThreadLock.c)
 *     SetWakeBit @ 0x1C005B6A0 (SetWakeBit.c)
 *     xxxSendMessage @ 0x1C0074E60 (xxxSendMessage.c)
 *     xxxWindowEvent @ 0x1C0087F70 (xxxWindowEvent.c)
 *     SetOrClrWF @ 0x1C00964B4 (SetOrClrWF.c)
 *     xxxInternalEnumWindow @ 0x1C0099400 (xxxInternalEnumWindow.c)
 *     LockW32Thread @ 0x1C009E9CC (LockW32Thread.c)
 *     PostIAMShellHookMessageEx @ 0x1C00A4BF0 (PostIAMShellHookMessageEx.c)
 *     xxxFocusSetInputContext @ 0x1C00A8920 (xxxFocusSetInputContext.c)
 */

__int64 __fastcall xxxDeactivate(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // r13
  int v5; // r14d
  int v7; // r12d
  __int64 result; // rax
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // r14
  char v13; // al
  unsigned __int64 v14; // r15
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  _QWORD *v29; // rcx
  struct tagWND *v30; // rdi
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // [rsp+38h] [rbp-59h] BYREF
  int v43; // [rsp+40h] [rbp-51h]
  int v44; // [rsp+44h] [rbp-4Dh]
  __int64 v45; // [rsp+48h] [rbp-49h] BYREF
  __int64 v46; // [rsp+50h] [rbp-41h]
  _QWORD v47[3]; // [rsp+60h] [rbp-31h] BYREF
  _BYTE v48[24]; // [rsp+78h] [rbp-19h] BYREF
  _QWORD v49[3]; // [rsp+90h] [rbp-1h] BYREF
  _BYTE v50[32]; // [rsp+A8h] [rbp+17h] BYREF
  int v51; // [rsp+100h] [rbp+6Fh]

  v51 = a2;
  v4 = a3;
  v5 = a2;
  v7 = 0;
  result = *(_QWORD *)(a1 + 384);
  if ( !*(_QWORD *)(result + 88) )
    return result;
  if ( a1 != gptiCurrent )
    LockW32Thread(a1, v50);
  v9 = *(_DWORD *)(a1 + 440);
  if ( (v9 & 0x200) == 0 )
  {
    v7 = 1;
    *(_DWORD *)(a1 + 440) = v9 | 0x200;
  }
  v10 = *(_QWORD *)(*(_QWORD *)(a1 + 384) + 72LL);
  if ( v10 )
  {
    v47[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v47;
    v47[1] = v10;
    ++*(_DWORD *)(v10 + 8);
    xxxSendMessage(*(struct tagWND **)(*(_QWORD *)(a1 + 384) + 72LL), 0x1Fu, 0LL, 0LL);
    ThreadUnlock1(v34, v33);
    SetWakeBit(a1, 2LL, v35);
  }
  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 384) + 88LL);
  if ( v11 )
  {
    v12 = *(_QWORD *)(v11 + 16);
    LockW32Thread(v12, v48);
    v45 = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = &v45;
    v46 = v11;
    v13 = *(_BYTE *)(v11 + 55);
    ++*(_DWORD *)(v11 + 8);
    v14 = (unsigned __int8)(v13 & 0x20) << 16;
    if ( (v4 & 1) == 0 && !xxxSendMessage((struct tagWND *)v11, 0x86u, 0LL, 0LL) )
    {
      ThreadUnlock1(v16, v15);
      result = PopAndFreeW32ThreadLock((__int64)v48, v36, v37, v38);
      goto LABEL_28;
    }
    xxxSendMessage((struct tagWND *)v11, 6u, v14, 0LL);
    v17 = *(_QWORD *)(a1 + 384);
    v18 = *(_QWORD *)(v17 + 88);
    if ( v18 == v11 )
    {
      HMAssignmentLock(v17 + 96, v18);
      HMAssignmentUnlock(*(_QWORD *)(a1 + 384) + 88LL);
    }
    SetOrClrWF(0, (_DWORD *)v11, 0x40u, 1);
    PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 408LL), 37LL, *(_QWORD *)v11);
    ThreadUnlock1(v20, v19);
    if ( (*(_BYTE *)(v12 + 440) & 1) != 0 )
      v12 = 0LL;
    v42 = v12;
    PopAndFreeW32ThreadLock((__int64)v48, v21, v22, v23);
    v24 = v12;
    v5 = v51;
  }
  else
  {
    v11 = -1LL;
    v42 = a1;
    v24 = a1;
  }
  if ( v24 )
  {
    v44 &= 0xFFFFFFFC;
    v25 = *(_QWORD *)(a1 + 408);
    v43 = v5;
    v26 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v25 + 8) + 16LL) + 96LL);
    v49[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v49;
    v49[1] = v26;
    if ( v26 )
      ++*(_DWORD *)(v26 + 8);
    xxxInternalEnumWindow(
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 408) + 8LL) + 16LL) + 96LL),
      xxxActivateApp,
      &v42,
      2LL);
    ThreadUnlock1(v28, v27);
  }
  result = *(_QWORD *)(a1 + 384);
  if ( *(_QWORD *)(result + 88) != v11 )
    goto LABEL_21;
  v45 = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = &v45;
  v46 = v11;
  ++*(_DWORD *)(v11 + 8);
  if ( (v4 & 1) != 0 || xxxSendMessage((struct tagWND *)v11, 0x86u, 0LL, 0LL) )
  {
    xxxSendMessage((struct tagWND *)v11, 6u, 0LL, 0LL);
    result = ThreadUnlock1(v40, v39);
    v41 = *(_QWORD *)(a1 + 384);
    a2 = *(_QWORD *)(v41 + 88);
    if ( a2 == v11 )
    {
      HMAssignmentLock(v41 + 96, a2);
      result = HMAssignmentUnlock(*(_QWORD *)(a1 + 384) + 88LL);
    }
LABEL_21:
    v29 = (_QWORD *)(*(_QWORD *)(a1 + 384) + 80LL);
    if ( !*v29 )
      goto LABEL_28;
    result = HMAssignmentUnlock(v29);
    v30 = (struct tagWND *)result;
    if ( !result )
      goto LABEL_28;
    v45 = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = &v45;
    v46 = result;
    ++*(_DWORD *)(result + 8);
    if ( *(_QWORD *)(a1 + 384) == gpqForeground )
      xxxWindowEvent(0x80000003, (__int64 *)result, 0, 0, 49);
    xxxSendMessage(v30, 8u, 0LL, 0LL);
    v32 = gpsi;
    if ( (*gpsi & 4) != 0 )
      xxxFocusSetInputContext(v30, 0LL, 0LL);
  }
  result = ThreadUnlock1(v32, v31);
LABEL_28:
  if ( v7 )
    *(_DWORD *)(a1 + 440) &= ~0x200u;
  if ( a1 != gptiCurrent )
    return PopAndFreeW32ThreadLock((__int64)v50, a2, a3, a4);
  return result;
}
