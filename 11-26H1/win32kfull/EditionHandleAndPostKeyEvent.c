/*
 * XREFs of EditionHandleAndPostKeyEvent @ 0x14027AA50
 * Callers:
 *     <none>
 * Callees:
 *     PostShellHookMessagesEx @ 0x1400101EC (PostShellHookMessagesEx.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     PopAndFreeW32ThreadLock @ 0x14004B8D0 (PopAndFreeW32ThreadLock.c)
 *     AdjustPwndPtiPqForDelegation @ 0x14005527C (AdjustPwndPtiPqForDelegation.c)
 *     PostInputMessage @ 0x1400904E8 (PostInputMessage.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1400932CC (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     ?WakeSomeone@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@IPEAUtagQMSG@@@Z @ 0x1400976DC (-WakeSomeone@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@IPEAUtagQMSG@@@Z.c)
 *     IsProcessedByInputService @ 0x140097F80 (IsProcessedByInputService.c)
 *     PtiKbdFromQ @ 0x14009809C (PtiKbdFromQ.c)
 *     HasHidTable @ 0x140172990 (HasHidTable.c)
 *     ?GetAppcommandQueue@@YAPEAUtagQ@@XZ @ 0x140259F60 (-GetAppcommandQueue@@YAPEAUtagQ@@XZ.c)
 *     ?xxxNextWindow@@YAXPEAUtagQ@@K@Z @ 0x14027CE6C (-xxxNextWindow@@YAXPEAUtagQ@@K@Z.c)
 *     Feature_Bugfix_58938704__private_IsEnabledDeviceUsageNoInline @ 0x1402C2CB8 (Feature_Bugfix_58938704__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall EditionHandleAndPostKeyEvent(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned __int8 a5,
        char a6,
        unsigned __int16 a7,
        unsigned __int16 a8,
        unsigned __int16 a9,
        unsigned __int16 a10,
        struct tagINPUT_MESSAGE_SOURCE *a11,
        unsigned int a12,
        void *a13,
        unsigned __int64 a14,
        unsigned __int16 a15,
        struct _KEYBOARD_VIRTUAL_DEVICE_INFO *a16)
{
  __int64 v16; // rbx
  int v17; // r14d
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rcx
  struct tagQ *v21; // rdi
  struct tagTHREADINFO *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  struct tagTHREADINFO **v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rsi
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 UserSessionState; // rax
  __int64 v32; // rax
  __int64 KeyboardDelegationTargetQ; // rax
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rax
  unsigned __int16 v37; // r12
  __int64 v38; // rcx
  int v39; // r15d
  unsigned int v40; // r13d
  struct tagINPUT_MESSAGE_SOURCE *v41; // r13
  struct tagQ *AppcommandQueue; // rax
  unsigned __int16 MouseKeyFlags; // ax
  __int64 v44; // rax
  int KeyboardInputRoutingPolicy; // eax
  unsigned __int64 v47; // rbx
  void *v48; // rsi
  unsigned int v49; // r14d
  unsigned int v50; // r12d
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rdx
  _DWORD *v54; // rcx
  unsigned int v55; // [rsp+88h] [rbp-39h]
  int v56; // [rsp+8Ch] [rbp-35h] BYREF
  __int64 v57; // [rsp+90h] [rbp-31h] BYREF
  __int64 v58; // [rsp+98h] [rbp-29h] BYREF
  struct tagTHREADINFO **v59; // [rsp+A0h] [rbp-21h] BYREF
  _QWORD v60[10]; // [rsp+A8h] [rbp-19h] BYREF
  int v61; // [rsp+108h] [rbp+47h]
  int v62; // [rsp+120h] [rbp+5Fh] BYREF

  v62 = a4;
  v61 = a1;
  v16 = a5;
  v17 = a4;
  if ( a4
    || (*(_BYTE *)(W32GetUserSessionState(a1, a2) + 14332) & 0x10) == 0
    || ((_BYTE)v16 != 9 || (a6 & 1) != 0) && ((_BYTE)v16 != 27 || (a6 & 2) != 0) )
  {
    if ( !*(_QWORD *)(W32GetUserSessionState(a1, a2) + 18928) )
    {
      if ( !v17 && !*(_QWORD *)(W32GetUserSessionState(v24, v23) + 18928) )
      {
        v54 = *(_DWORD **)(W32GetUserSessionState(v52, v51) + 19904);
        if ( ((*v54 & 0x2000) != 0 || (**(_DWORD **)(W32GetUserSessionState(v54, v53) + 19904) & 0x4000) != 0)
          && (unsigned __int8)(v16 + 83) <= 6u )
        {
          PostShellHookMessagesEx((LastWokenThread *)0xC, (unsigned __int64)(unsigned __int16)(v16 - 165) << 16);
        }
      }
      return 0LL;
    }
    v25 = *(struct tagTHREADINFO ***)(W32GetUserSessionState(v24, v23) + 18928);
    v55 = v16;
    v28 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v27, v26) + 18928) + 32LL);
    if ( (unsigned int)Feature_Bugfix_58938704__private_IsEnabledDeviceUsageNoInline()
      && *(_QWORD *)(W32GetUserSessionState(v30, v29) + 18944)
      && (UserSessionState = W32GetUserSessionState(v30, v29),
          (unsigned __int8)IsKeyboardDelegationEnabledForThread(*(_QWORD *)(UserSessionState + 18944)))
      || (v32 = W32GetUserSessionState(v30, v29),
          (unsigned __int8)IsKeyboardDelegationEnabledForThread(*(_QWORD *)(*(_QWORD *)(v32 + 18928) + 104LL))) )
    {
      KeyboardDelegationTargetQ = GetKeyboardDelegationTargetQ();
      if ( KeyboardDelegationTargetQ )
      {
        v28 = *(_QWORD *)(KeyboardDelegationTargetQ + 32);
        v25 = (struct tagTHREADINFO **)KeyboardDelegationTargetQ;
      }
    }
    v34 = PtiKbdFromQ((__int64)v25);
    if ( (unsigned int)HasHidTable(v34)
      && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(PtiKbdFromQ((__int64)v25) + 456) + 824LL) + 100LL) & 0x20) != 0 )
    {
      v36 = PtiKbdFromQ((__int64)v25);
      if ( !(unsigned int)HasHidTable(v36)
        || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(PtiKbdFromQ((__int64)v25) + 456) + 824LL) + 100LL) & 0x400) == 0
        || (unsigned __int8)(v16 + 90) > 0x11u )
      {
        return 1LL;
      }
    }
    else if ( (_BYTE)v16 == 0xE7 && (a8 & 0x1000) != 0 )
    {
      v37 = 0;
      v38 = (unsigned int)v16 | (a7 << 16);
      v55 = v16 | (a7 << 16);
LABEL_24:
      v39 = ((a9 | v37) << 16) | 1;
      if ( v28 )
      {
        v40 = a15;
        if ( *(_DWORD *)(v28 + 24) == a15 )
        {
          v35 = 65531LL;
          if ( ((a15 - 256) & 0xFFFB) == 0
            && *(_QWORD *)(v28 + 32) == (unsigned int)v38
            && !IsProcessedByInputService(v28) )
          {
            if ( *(_WORD *)(v28 + 42) == HIWORD(v39) )
            {
              if ( (unsigned int)GetKeyboardInputRoutingPolicy(v38) == 1 )
                CKeyboardProcessor::ForwardInputToISM(v61 != 0, v37, a8, a10, a13, a12, 1, a14, a16);
              *(_QWORD *)(v28 + 40) = (HIWORD(v39) << 16) | (unsigned __int16)(*(_WORD *)(v28 + 40) + 1);
              WakeSomeone((struct tagQ *)v25, 0LL, v40, (struct tagQMSG *)v28);
              return 0LL;
            }
            v17 = v62;
          }
        }
      }
      v41 = a11;
      if ( (unsigned __int8)(v16 + 90) > 0x11u || v17 || !v25 )
        goto LABEL_47;
      if ( (unsigned __int8)(v16 + 83) <= 2u )
      {
        AppcommandQueue = GetAppcommandQueue(v38, v35);
        if ( AppcommandQueue )
        {
          MouseKeyFlags = GetMouseKeyFlags(AppcommandQueue);
          PostShellHookMessagesEx(
            (LastWokenThread *)0xC,
            ((unsigned __int64)(unsigned __int16)(v16 - 165) << 16) | MouseKeyFlags);
        }
      }
      else
      {
        PostEventMessageEx(v25[13], (struct tagQ *)v25, 0xFu, 0LL, 0, 0LL, v16, a11);
      }
      v44 = PtiKbdFromQ((__int64)v25);
      if ( !(unsigned int)HasHidTable(v44)
        || (v38 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(PtiKbdFromQ((__int64)v25) + 456) + 824LL) + 100LL),
            (v38 & 0x20) == 0) )
      {
LABEL_47:
        KeyboardInputRoutingPolicy = GetKeyboardInputRoutingPolicy(v38);
        v47 = a14;
        v48 = a13;
        v49 = a12;
        if ( KeyboardInputRoutingPolicy == 1 )
          CKeyboardProcessor::ForwardInputToISM(v61 != 0, v37, a8, a10, a13, a12, 1, a14, a16);
        PostPendingMouseMove(v25);
        v50 = a15;
        v59 = v25;
        v58 = 0LL;
        v57 = 0LL;
        v56 = 0;
        v62 = 0;
        if ( (unsigned int)AdjustPwndPtiPqForDelegation((__int64 *)&v59, &v58, &v57, a15, v41, &v56, &v62) )
          PostInputMessage((struct tagQ *)v25, 0LL, v50, v55, v39, v49, 0LL, v47, 0, v41, v48, 0LL, v56, v62, v57);
        return 0LL;
      }
      return 1LL;
    }
    v37 = a7;
    v38 = (unsigned int)v16;
    goto LABEL_24;
  }
  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2) + 18928) )
  {
    v21 = *(struct tagQ **)(W32GetUserSessionState(v19, v18) + 18928);
  }
  else
  {
    v20 = *(_QWORD *)(W32GetUserSessionState(v19, v18) + 18696);
    v21 = *(struct tagQ **)(v20 + 464);
  }
  ++*((_DWORD *)v21 + 110);
  v22 = PtiCurrent(v20);
  v60[0] = *((_QWORD *)v22 + 47);
  *((_QWORD *)v22 + 47) = v60;
  v60[2] = UnlockQueue;
  v60[1] = v21;
  xxxNextWindow(v21, v16);
  PopAndFreeW32ThreadLock((__int64)v60);
  return 0LL;
}
