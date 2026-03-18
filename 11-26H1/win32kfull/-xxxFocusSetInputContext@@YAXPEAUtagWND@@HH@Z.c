/*
 * XREFs of ?xxxFocusSetInputContext@@YAXPEAUtagWND@@HH@Z @ 0x140154494
 * Callers:
 *     ?xxxDestroyWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z @ 0x140042B60 (-xxxDestroyWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z.c)
 *     ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x140153BB4 (-xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     _anonymous_namespace_::xxxSendFocusMessages @ 0x140153FF4 (_anonymous_namespace_--xxxSendFocusMessages.c)
 *     ?CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z @ 0x1402A04C8 (-CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z.c)
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxSendMessage @ 0x140036F50 (xxxSendMessage.c)
 *     ?SendNotifyMessageAlways@@YA_NPEAUtagWND@@I_K_JW4SNMAOptions@@@Z @ 0x140046F44 (-SendNotifyMessageAlways@@YA_NPEAUtagWND@@I_K_JW4SNMAOptions@@@Z.c)
 */

void __fastcall xxxFocusSetInputContext(struct tagWND *a1, __int64 a2, int a3)
{
  __int64 v4; // rsi
  int v5; // edi
  __int16 *v7; // rbx
  __int16 v8; // bx
  __int64 v9; // rcx
  struct tagWND *v10; // rbx
  struct tagTHREADINFO *v11; // rax
  ULONG_PTR BugCheckParameter3[5]; // [rsp+30h] [rbp-28h] BYREF

  v4 = *((_QWORD *)a1 + 2);
  v5 = a2;
  v7 = *(__int16 **)(*((_QWORD *)a1 + 17) + 8LL);
  if ( (v7[5] & 1) == 0 )
  {
    v8 = *v7;
    if ( v8 != *(_WORD *)(*(_QWORD *)(W32GetUserSessionState(a1, a2) + 19904) + 898LL) )
    {
      v10 = *(struct tagWND **)(v4 + 816);
      if ( v10 )
      {
        if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v4 + 520), 0, 0) & 1) == 0 )
        {
          v11 = PtiCurrent(v9);
          Win32HM_LockIntoThread<0>((__int64)v11, (__int64)v10, BugCheckParameter3);
          if ( a3 )
            SendNotifyMessageAlways(v10, 0x287u, 24LL - (v5 != 0), *(_QWORD *)a1, 0);
          else
            xxxSendMessage(v10, 0x287u);
          Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
        }
      }
    }
  }
}
