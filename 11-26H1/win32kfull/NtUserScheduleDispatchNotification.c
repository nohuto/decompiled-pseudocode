/*
 * XREFs of NtUserScheduleDispatchNotification @ 0x140055AF0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     SetWakeBit @ 0x140055960 (SetWakeBit.c)
 *     ?vAdjustDelegatePriority@@YAXPEAUtagTHREADINFO@@@Z @ 0x140055DDC (-vAdjustDelegatePriority@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ??0?$ObjectLock@UtagObjLock@@U1@@?$DomainExclusive@$$V@?$DomainShared@VDLT_THREADINFO@@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@0@Z @ 0x140055E78 (--0-$ObjectLock@UtagObjLock@@U1@@-$DomainExclusive@$$V@-$DomainShared@VDLT_THREADINFO@@VDLT_QUEU.c)
 *     ?AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@W4_AllocQEntryPosition@@@Z @ 0x140099110 (-AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@W4_AllocQEntryPosition@@@Z.c)
 *     ?StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagUIPI_INFO@@@Z @ 0x140099480 (-StoreQMessage@@YAXPEAUtagQMSG@@PEAUtagWND@@I_K_JK2K2KPEAUtagINPUT_MESSAGE_SOURCE@@KPEAXPEAUtagU.c)
 *     ??1?$ObjectLock@UtagObjLock@@U1@@?$DomainExclusive@$$V@?$DomainShared@VDLT_THREADINFO@@VDLT_QUEUE@@@@QEAA@XZ @ 0x14018A194 (--1-$ObjectLock@UtagObjLock@@U1@@-$DomainExclusive@$$V@-$DomainShared@VDLT_THREADINFO@@VDLT_QUEU.c)
 *     ProcessSuspendedEventMessage @ 0x1402A7174 (ProcessSuspendedEventMessage.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserScheduleDispatchNotification(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rcx
  struct tagWND *v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 *CurrentThreadWin32Thread; // rax
  const struct tagUIPI_INFO *v12; // r8
  __int64 v13; // rax
  __int64 v14; // rbp
  int v15; // ebx
  __int64 v16; // rbp
  __int64 v17; // rcx
  unsigned int v18; // ebx
  ULONG_PTR *v19; // rax
  ULONG_PTR v20; // rax
  ULONG_PTR *v21; // rcx
  ULONG_PTR BugCheckParameter3[2]; // [rsp+70h] [rbp-88h] BYREF
  _BYTE Base[80]; // [rsp+80h] [rbp-78h] BYREF

  v2 = EnterCrit(0LL, 0LL);
  v3 = ValidateHwndStrict(a1);
  v5 = (struct tagWND *)v3;
  if ( v3 )
  {
    BugCheckParameter3[0] = *(_QWORD *)(v2 + 448);
    *(_QWORD *)(v2 + 448) = BugCheckParameter3;
    BugCheckParameter3[1] = v3;
    HMLockObject(v3);
    v6 = *((_QWORD *)v5 + 2);
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v7);
    v10 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
    {
      v9 = -*(_QWORD *)CurrentProcessWin32Process;
      v10 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
    }
    if ( *(_QWORD *)(v6 + 456) == v10 )
    {
      CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(v9);
      if ( CurrentThreadWin32Thread )
        v13 = *CurrentThreadWin32Thread;
      else
        v13 = 0LL;
      if ( v6 == v13
        || UIPrivilegeIsolation::CheckAccess(
             (UIPrivilegeIsolation *)(v10 + 864),
             (const struct tagUIPI_INFO *)(*(_QWORD *)(v6 + 464) + 472LL),
             v12) )
      {
        v14 = *(_QWORD *)(v6 + 464);
        DomainShared<DLT_THREADINFO,DLT_QUEUE>::DomainExclusive<>::ObjectLock<tagObjLock,tagObjLock>::ObjectLock<tagObjLock,tagObjLock>(Base);
        v15 = 1;
        if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v6 + 520), 0, 0) & 1) != 0
          || (vAdjustDelegatePriority((struct tagTHREADINFO *)v6),
              tagPROCESSINFO::SyncAndTestFreeze(*(tagPROCESSINFO **)(v6 + 456)))
          && !(unsigned int)ProcessSuspendedEventMessage(v6, 9LL, v5, 96LL, 0LL, 0LL)
          || (v16 = AllocQEntryEx(v14 + 24, 0LL, 1LL)) == 0 )
        {
          v15 = 0;
        }
        else
        {
          StoreQMessage(
            (struct tagQMSG *)v16,
            v5,
            0x60u,
            0LL,
            0LL,
            0,
            0LL,
            9u,
            0LL,
            0,
            0LL,
            *(_DWORD *)(*((_QWORD *)v5 + 5) + 288LL),
            0LL,
            0LL);
          *(_QWORD *)(v16 + 104) = v6;
          SetWakeBit(v6, 8256LL);
        }
        DomainShared<DLT_THREADINFO,DLT_QUEUE>::DomainExclusive<>::ObjectLock<tagObjLock,tagObjLock>::~ObjectLock<tagObjLock,tagObjLock>(Base);
        v18 = v15 != 0 ? 2 : 0;
      }
      else
      {
        v18 = 1;
      }
    }
    else
    {
      UserSetLastError(5);
      v18 = 0;
    }
    v19 = (ULONG_PTR *)PsGetCurrentThreadWin32Thread(v17);
    if ( v19 )
      v20 = *v19;
    else
      v20 = 0LL;
    v21 = *(ULONG_PTR **)(v20 + 448);
    if ( v21 != BugCheckParameter3 )
      KeBugCheckEx(0x164u, 0x3BuLL, v20, (ULONG_PTR)BugCheckParameter3, 0LL);
    *(_QWORD *)(v20 + 448) = *v21;
    HMUnlockObject(v21[1]);
  }
  else
  {
    v18 = 0;
  }
  UserSessionSwitchLeaveCrit(v4);
  return v18;
}
