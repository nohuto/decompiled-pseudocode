/*
 * XREFs of ?xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z @ 0x14012A150
 * Callers:
 *     ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x140153BB4 (-xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x140193984 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     ?CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z @ 0x1402A04C8 (-CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z.c)
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400211C4 (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxSendMessage @ 0x140036F50 (xxxSendMessage.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     ?SendNotifyMessageAlways@@YA_NPEAUtagWND@@I_K_JW4SNMAOptions@@@Z @ 0x140046F44 (-SendNotifyMessageAlways@@YA_NPEAUtagWND@@I_K_JW4SNMAOptions@@@Z.c)
 *     BuildHwndList @ 0x1400510F0 (BuildHwndList.c)
 *     FreeHwndList @ 0x140051630 (FreeHwndList.c)
 */

void __fastcall xxxSendActivateAppMessage(const struct tagAAS *a1)
{
  __int64 v2; // rcx
  char v3; // bp
  struct tagWND *v4; // rsi
  struct tagTHREADINFO *v5; // rax
  struct tagBWL *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct tagBWL *v9; // r13
  _QWORD *v10; // r15
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 UserSessionState; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rbx
  struct tagWND **v18; // r12
  struct tagWND *v19; // rbx
  struct tagTHREADINFO *v20; // rax
  ULONG_PTR BugCheckParameter3; // [rsp+30h] [rbp-38h] BYREF
  struct tagWND *v22; // [rsp+38h] [rbp-30h]
  struct tagBWL *v23; // [rsp+70h] [rbp+8h]

  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&BugCheckParameter3);
  v3 = BugCheckParameter3;
  if ( (*((_DWORD *)a1 + 3) & 2) != 0 || !(_BYTE)BugCheckParameter3 )
  {
    v4 = v22;
  }
  else
  {
    v4 = 0LL;
    v3 = 0;
    --*((_DWORD *)v22 + 7);
  }
  v5 = PtiCurrent(v2);
  v6 = BuildHwndList(*(struct tagWND **)(*(_QWORD *)(*((_QWORD *)v5 + 62) + 24LL) + 112LL), 2LL, 0LL, 1);
  v23 = v6;
  v9 = v6;
  if ( v6 )
  {
    v10 = (_QWORD *)((char *)v6 + 32);
    v11 = *((_QWORD *)v6 + 4);
    if ( v11 != 1 )
    {
      do
      {
        PsGetCurrentThreadWin32Thread(v8);
        v8 = *(_QWORD *)(W32GetUserSessionState(v13, v12) + 19904);
        if ( (unsigned __int64)(unsigned __int16)v11 < *(_QWORD *)(v8 + 8) )
        {
          UserSessionState = W32GetUserSessionState(v8, v7);
          v17 = *(_DWORD *)(W32GetUserSessionState(v16, v15) + 19928) * (unsigned int)(unsigned __int16)v11
              + *(_QWORD *)(UserSessionState + 19920);
          v18 = (struct tagWND **)HMPkheFromPhe(v17);
          LOWORD(v11) = WORD1(v11) & 0x7FFF;
          if ( ((WORD1(v11) & 0x7FFF) == *(_WORD *)(v17 + 26)
             || (_WORD)v11 == 0x7FFF
             || !(_WORD)v11 && PsGetCurrentProcessWow64Process(v8, v7))
            && (*(_BYTE *)(v17 + 25) & 1) == 0
            && *(_BYTE *)(v17 + 24) == 1 )
          {
            v19 = *v18;
            if ( *v18 )
            {
              if ( *((_QWORD *)v19 + 2) == *(_QWORD *)a1 )
              {
                if ( (*((_DWORD *)a1 + 3) & 2) != 0 )
                {
                  SendNotifyMessageAlways(v19, 0x1Cu, *((_DWORD *)a1 + 3) & 1, *((unsigned int *)a1 + 2), 0);
                }
                else
                {
                  v20 = PtiCurrent(v8);
                  BugCheckParameter3 = *((_QWORD *)v20 + 56);
                  *((_QWORD *)v20 + 56) = &BugCheckParameter3;
                  v22 = v19;
                  HMLockObject(v19);
                  xxxSendMessage(v19, 0x1Cu);
                  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)&BugCheckParameter3);
                }
              }
            }
          }
        }
        v11 = *++v10;
      }
      while ( *v10 != 1LL );
      v9 = v23;
    }
    FreeHwndList(v9, v7);
  }
  if ( v3 )
    --*((_DWORD *)v4 + 7);
}
