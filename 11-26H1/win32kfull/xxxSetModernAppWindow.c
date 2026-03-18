/*
 * XREFs of xxxSetModernAppWindow @ 0x1401C9464
 * Callers:
 *     ?xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z @ 0x1400452D8 (-xxxFW_DestroyAllChildren@@YAXPEAUtagWND@@@Z.c)
 *     NtUserSetModernAppWindow @ 0x1401C8C90 (NtUserSetModernAppWindow.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z @ 0x14000E1F8 (--0-$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z.c)
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400211C4 (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     xxxSendNotifyMessage @ 0x140044970 (xxxSendNotifyMessage.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1400470A8 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     SetOrClrWF @ 0x14004EE90 (SetOrClrWF.c)
 *     ?xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x140154578 (-xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 *     ?xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z @ 0x140178FF8 (-xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140199C94 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     xxxSetWindowStyle @ 0x1401C9A38 (xxxSetWindowStyle.c)
 *     zzzAttachThreadInput @ 0x1401CA1C8 (zzzAttachThreadInput.c)
 *     LockQCursor @ 0x1401CAD90 (LockQCursor.c)
 *     ?CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1401CB2E8 (-CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x140271C80 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall xxxSetModernAppWindow(struct tagWND *a1, __int64 a2)
{
  __int64 v2; // r14
  unsigned int v3; // ebx
  __int64 v6; // rdi
  __int64 v7; // rsi
  struct tagWND *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r12
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 UserSessionState; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v21; // rax
  int v22; // ecx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // [rsp+30h] [rbp-40h] BYREF
  __int64 v32; // [rsp+38h] [rbp-38h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+40h] [rbp-30h] BYREF
  ULONG_PTR v34[2]; // [rsp+50h] [rbp-20h] BYREF
  ULONG_PTR v35[2]; // [rsp+60h] [rbp-10h] BYREF
  __int64 v36; // [rsp+B0h] [rbp+40h]
  int v37; // [rsp+C0h] [rbp+50h]
  int v38; // [rsp+C8h] [rbp+58h]

  v2 = *((_QWORD *)a1 + 2);
  v3 = 0;
  v37 = 0;
  v6 = 0LL;
  v7 = *(_QWORD *)(v2 + 1592);
  if ( (*(_DWORD *)(v2 + 1360) & 0x40000) == 0 )
    goto LABEL_46;
  v8 = *(struct tagWND **)(v2 + 1584);
  if ( !v8 || v8 != a1 )
    goto LABEL_46;
  if ( (struct tagTHREADINFO *)v2 != PtiCurrent((__int64)a1) )
  {
    v22 = 5;
    goto LABEL_47;
  }
  if ( !a2
    || (v21 = ValidateHwnd(a2), (v6 = v21) != 0)
    && (struct tagWND *)v21 != a1
    && *(struct tagWND **)(v21 + 104) != a1
    && v21 != *(_QWORD *)(v2 + 1592)
    && *(_QWORD *)(v21 + 16) != v2 )
  {
    if ( !v7 )
      goto LABEL_7;
    if ( *(_QWORD *)(v7 + 16) != v2 )
    {
      if ( *(struct tagWND **)(v7 + 104) != a1 )
        v7 = 0LL;
LABEL_7:
      if ( *(_QWORD *)(W32GetUserSessionState(v10, v9) + 18928)
        && v7
        && (v25 = W32GetUserSessionState(v12, v11),
            v13 = v2 + 464,
            v11 = *(_QWORD *)(v2 + 464),
            *(_QWORD *)(v25 + 18928) == v11)
        && (v36 = *(_QWORD *)(v7 + 16), *(_QWORD *)(v36 + 464) == v11)
        && (v26 = W32GetUserSessionState(v12, v11), v12 = v36, *(_QWORD *)(v26 + 18944) == v36) )
      {
        v37 = 1;
      }
      else
      {
        v13 = v2 + 464;
        if ( *(_QWORD *)(W32GetUserSessionState(v12, v11) + 18928) != *(_QWORD *)(v2 + 464) )
        {
          v38 = 1;
          if ( (unsigned int)CoreWindowProp::CompositeAppHasForeground(a1) )
          {
LABEL_10:
            Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(v35, v6);
            Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(v34, v7);
            Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(BugCheckParameter3, (__int64)a1);
            v32 = v6;
            v31 = v2 + 1592;
            HMAssignmentLock(&v31, 0LL);
            AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v31);
            if ( v7 )
            {
              if ( *(struct tagWND **)(*(_QWORD *)v13 + 128LL) == a1 )
                xxxSendNotifyMessage(
                  (struct tagWND *)v7,
                  0x349u,
                  (unsigned __int64)(*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) << 16,
                  0LL,
                  0);
              if ( *(_QWORD *)(*(_QWORD *)v13 + 120LL) == v7 )
              {
                xxxSendNotifyMessage((struct tagWND *)v7, 8u, 0LL, 0LL, 0);
                tagQ::UnlockFocusWnd(*(tagQ **)(*((_QWORD *)a1 + 2) + 464LL));
              }
            }
            if ( v6 )
            {
              if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 16) + 464LL) + 128LL) == v6 )
              {
                xxxSendNotifyMessage(
                  (struct tagWND *)v6,
                  0x349u,
                  (unsigned __int64)(*(_BYTE *)(*(_QWORD *)(v6 + 40) + 31LL) & 0x20) << 16,
                  0LL,
                  0);
                tagQ::SetActiveWindow(*(tagQ **)(*(_QWORD *)(v6 + 16) + 464LL), 0LL);
              }
              if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 16) + 464LL) + 120LL) == v6 )
              {
                xxxSendNotifyMessage((struct tagWND *)v6, 8u, 0LL, 0LL, 0);
                tagQ::UnlockFocusWnd(*(tagQ **)(*(_QWORD *)(v6 + 16) + 464LL));
              }
            }
            if ( (_BYTE)v31 )
              --*(_DWORD *)(v32 + 28);
            if ( v6 )
            {
              SetOrClrWF(0, (struct tagWND *)v6, 0xF80u, 1);
              SetOrClrWF(1, (struct tagWND *)v6, 0xF40u, 1);
              xxxSetWindowStyle((struct tagWND *)v6);
              xxxSetParentWorker((struct tagWND *)v6, a1, (struct tagWND *)v7, 0);
              if ( *(struct tagWND **)(v6 + 104) != a1
                || (v23 = *(_QWORD *)(v2 + 464), *(_QWORD *)(*(_QWORD *)(v6 + 16) + 464LL) != v23) )
              {
LABEL_30:
                Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
                Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)v34);
                Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)v35);
                return v3;
              }
              if ( *(_QWORD *)(v2 + 1592) == v6 && *(struct tagWND **)(v23 + 128) == a1 )
              {
                xxxSendNotifyMessage((struct tagWND *)v6, 0x349u, 1uLL, 0LL, 0);
                xxxDeliverRestoreFocusMessage((struct tagWND *)v6, v24);
              }
            }
            if ( v7 )
            {
              if ( *(struct tagWND **)(v7 + 104) == a1 )
              {
                xxxSetParentWorker((struct tagWND *)v7, (struct tagWND *)0xFFFFFFFFFFFFFFFDLL, 0LL, 0);
                SetOrClrWF(0, (struct tagWND *)v7, 0xF40u, 1);
                SetOrClrWF(1, (struct tagWND *)v7, 0xF80u, 1);
                xxxSetWindowStyle((struct tagWND *)v7);
                v14 = *(_QWORD *)(v7 + 16);
                if ( *(_QWORD *)(v14 + 464) == *(_QWORD *)(v2 + 464) )
                {
                  if ( (unsigned int)zzzAttachThreadInput(v2, v14, 0x4000LL) != -1073741790
                    && *(_QWORD *)(v2 + 464) == *(_QWORD *)(*(_QWORD *)(v7 + 16) + 464LL) )
                  {
                    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2447LL);
                  }
                  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v31);
                  UserSessionState = W32GetUserSessionState(v16, v15);
                  LockQCursor(
                    *(struct tagQ **)(*(_QWORD *)(v7 + 16) + 464LL),
                    *(struct tagCURSOR **)(UserSessionState + 21912));
                  if ( v37 )
                  {
                    v28 = *(_QWORD *)(W32GetUserSessionState(v19, v18) + 18944);
                    if ( v28 == *(_QWORD *)(v7 + 16) )
                    {
                      v30 = *(_QWORD *)(W32GetUserSessionState(v28, v27) + 18928);
                      if ( *(_QWORD *)(v2 + 464) == v30 )
                      {
                        if ( *(_QWORD *)(v2 + 472) != *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v30, v29) + 18944)
                                                                + 472LL) )
                          AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v31);
                        xxxSetForegroundThreadWithWindowHint((struct tagTHREADINFO *)v2, 0LL);
                      }
                    }
                  }
                  if ( (_BYTE)v31 )
                    --*(_DWORD *)(v32 + 28);
                  if ( v38 )
                  {
                    if ( (unsigned int)CoreWindowProp::CompositeAppHasForeground(a1) )
                      xxxSetForegroundWindow2(a1, 0LL, 2LL);
                  }
                }
              }
            }
            v3 = 1;
            goto LABEL_30;
          }
        }
      }
      v38 = 0;
      goto LABEL_10;
    }
LABEL_46:
    v22 = 87;
    goto LABEL_47;
  }
  v22 = 1400;
LABEL_47:
  UserSetLastError(v22);
  return 0LL;
}
