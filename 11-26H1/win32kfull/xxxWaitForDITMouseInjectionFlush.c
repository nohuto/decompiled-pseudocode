/*
 * XREFs of xxxWaitForDITMouseInjectionFlush @ 0x1401FDDC0
 * Callers:
 *     ?xxxProcessMousePromotionQueue@@YAXXZ @ 0x140134570 (-xxxProcessMousePromotionQueue@@YAXXZ.c)
 *     ?xxxSendInput@@YAIIPEAUtagINPUT@@@Z @ 0x14029C1EC (-xxxSendInput@@YAIIPEAUtagINPUT@@@Z.c)
 *     ?xxxSendInputEx@@YAIIPEAUtagINPUT@@@Z @ 0x14029C7D4 (-xxxSendInputEx@@YAIIPEAUtagINPUT@@@Z.c)
 * Callees:
 *     ?xxxReceiveMessages@@YAXPEAUtagTHREADINFO@@@Z @ 0x14002457C (-xxxReceiveMessages@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     xxxRemoveQueueCompletion @ 0x140026360 (xxxRemoveQueueCompletion.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x140138E4C (--1LeaveEnterCrit@@QEAA@XZ.c)
 */

__int64 __fastcall xxxWaitForDITMouseInjectionFlush(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rcx
  char v5; // bl
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct tagTHREADINFO *v8; // rdi
  __int64 v9; // rcx
  __int32 v10; // esi
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
  char v14; // bl
  __int64 v15; // rax
  __int64 v16; // rcx
  NTSTATUS v17; // ebp
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 result; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 UserSessionState; // rax
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  LONG v30; // ebx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  PVOID Object[3]; // [rsp+40h] [rbp-18h] BYREF
  char v37; // [rsp+60h] [rbp+8h] BYREF

  if ( *(_BYTE *)(W32GetUserSessionState(a1, a2) + 19264) == 1 )
  {
    v37 = 0;
    do
    {
      UserSessionState = W32GetUserSessionState(v3, v2);
      ++*(_DWORD *)(UserSessionState + 19280);
      UserSessionSwitchLeaveCrit(v24);
      v27 = W32GetUserSessionState(v26, v25);
      KeWaitForSingleObject(*(PVOID *)(v27 + 19272), UserRequest, 0, 0, 0LL);
      LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v37);
    }
    while ( *(_BYTE *)(W32GetUserSessionState(v29, v28) + 19264) == 1 );
  }
  *(_BYTE *)(W32GetUserSessionState(v3, v2) + 19264) = 1;
  UserSessionSwitchLeaveCrit(v4);
  v5 = InitiateWaitForInjectionCompletion(WakeInjectedFlushWaiter);
  EnterCrit(1LL, 0LL);
  if ( v5 )
  {
    v8 = PtiCurrent(v7);
    v9 = *((_QWORD *)v8 + 60);
    *((_QWORD *)v8 + 170) |= 0x400000uLL;
    v10 = *(_DWORD *)(v9 + 16);
    Object[0] = *(PVOID *)(W32GetUserSessionState(v9, v11) + 19288);
    Object[1] = *((PVOID *)v8 + 201);
    while ( 1 )
    {
      v13 = *((_QWORD *)v8 + 60);
      v14 = 0;
      _InterlockedExchange((volatile __int32 *)(v13 + 16), 64);
      v15 = W32GetUserSessionState(v13, v12);
      if ( (unsigned __int8)ExIsFastResourceHeldExclusive(*(_QWORD *)(v15 + 16)) == 1 )
      {
        v14 = 1;
        LeaveMitRitHazardCrit();
      }
      UserSessionSwitchLeaveCrit(v16);
      v17 = KeWaitForMultipleObjects(2u, Object, WaitAny, WrUserRequest, 1, 0, 0LL, 0LL);
      EnterCrit(1LL, 0LL);
      if ( v14 )
        EnterMitRitHazardCrit();
      if ( v17 != 1 )
        break;
      xxxRemoveQueueCompletion(v7);
      if ( (*(_DWORD *)(*((_QWORD *)v8 + 60) + 8LL) & 0x40) != 0 )
        xxxReceiveMessages(v8);
    }
    _InterlockedExchange((volatile __int32 *)(*((_QWORD *)v8 + 60) + 16LL), v10);
    *((_QWORD *)v8 + 170) &= ~0x400000uLL;
  }
  *(_BYTE *)(W32GetUserSessionState(v7, v6) + 19264) = 0;
  result = W32GetUserSessionState(v19, v18);
  if ( *(_DWORD *)(result + 19280) )
  {
    v30 = *(_DWORD *)(W32GetUserSessionState(v22, v21) + 19280);
    v33 = W32GetUserSessionState(v32, v31);
    KeReleaseSemaphore(*(PRKSEMAPHORE *)(v33 + 19272), 0, v30, 0);
    result = W32GetUserSessionState(v35, v34);
    *(_DWORD *)(result + 19280) = 0;
  }
  return result;
}
