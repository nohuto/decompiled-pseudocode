/*
 * XREFs of xxxMsgWaitForMultipleObjectsEx @ 0x140023060
 * Callers:
 *     NtUserMsgWaitForMultipleObjectsEx @ 0x1400226D0 (NtUserMsgWaitForMultipleObjectsEx.c)
 * Callees:
 *     ?xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagWND@@QEAU_FILE_IO_COMPLETION_INFORMATION@@_K@Z @ 0x14001F5B4 (-xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagWND@@QEAU_FILE_IO_COMPLETION_INFORMATION@@_K@Z.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?BroadcastCoreMessagingApcContextError@@YAXPEBUtagTHREADINFO@@_K@Z @ 0x140026488 (-BroadcastCoreMessagingApcContextError@@YAXPEBUtagTHREADINFO@@_K@Z.c)
 */

__int64 __fastcall xxxMsgWaitForMultipleObjectsEx(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, char a5)
{
  unsigned int v5; // r15d
  __int64 *v6; // r13
  int v7; // ebx
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // r14d
  int v12; // ebp
  char v13; // si
  bool v14; // di
  int v15; // r12d
  __int64 UserSessionState; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  NTSTATUS v19; // esi
  __int64 v20; // rcx
  _QWORD *v22; // rax
  const struct tagTHREADINFO *v23; // rbx
  struct tagWND *v24; // rcx
  ULONG v25; // eax
  __int64 v26; // rax
  __int64 v27; // [rsp+20h] [rbp-B8h]
  int v28; // [rsp+28h] [rbp-B0h]
  char v29; // [rsp+40h] [rbp-98h]
  unsigned int v30; // [rsp+48h] [rbp-90h]
  int v31; // [rsp+50h] [rbp-88h] BYREF
  __int64 v32; // [rsp+58h] [rbp-80h] BYREF
  __int64 v33; // [rsp+60h] [rbp-78h]
  __int64 v34; // [rsp+68h] [rbp-70h] BYREF
  _FILE_IO_COMPLETION_INFORMATION v35; // [rsp+70h] [rbp-68h] BYREF
  int v36; // [rsp+E0h] [rbp+8h]

  v36 = a1;
  v5 = a3;
  v32 = 0LL;
  v6 = 0LL;
  v7 = a1;
  CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
  {
    v10 = *CurrentThreadWin32Thread;
    v33 = *CurrentThreadWin32Thread;
  }
  else
  {
    v33 = 0LL;
  }
  v11 = 1;
  v12 = 0;
  v13 = a5;
  v14 = 0;
  v15 = a5 & 1;
  v30 = v7 + 1;
  while ( 1 )
  {
    v29 = 0;
    UserSessionState = W32GetUserSessionState(v10, v9);
    if ( (unsigned __int8)ExIsFastResourceHeldExclusive(*(_QWORD *)(UserSessionState + 16)) == 1 )
    {
      v29 = 1;
      LeaveMitRitHazardCrit();
    }
    UserSessionSwitchLeaveCrit(v17);
    if ( v11 )
    {
      if ( v5 == -1 )
      {
        v6 = 0LL;
      }
      else
      {
        v6 = &v32;
        v32 = -10000LL * v5;
      }
      v11 = 0;
      v12 = v15;
      v14 = (v13 & 2) != 0;
    }
    do
    {
      LOBYTE(v28) = v14;
      LOBYTE(v18) = 1;
      LOBYTE(v27) = 1;
      v19 = ObWaitForMultipleObjects(v30, a2, v18, !(a5 & 1), v27, v28, v6);
    }
    while ( v19 >= 0 && v14 && v19 == 257 );
    EnterCrit(1LL, 0LL);
    v5 = a3;
    v15 = a5 & 1;
    if ( v29 )
      EnterMitRitHazardCrit();
    if ( v12 || v19 != v36 )
      break;
    v22 = (_QWORD *)PsGetCurrentThreadWin32Thread(v20);
    v23 = v22 ? (const struct tagTHREADINFO *)*v22 : 0LL;
    v31 = 0;
    memset(&v35, 0, sizeof(v35));
    v34 = 0LL;
    LOBYTE(v28) = 0;
    if ( (unsigned int)ZwRemoveIoCompletionEx(*((_QWORD *)v23 + 202), &v35, 1LL, &v31, &v34, v28) )
      break;
    if ( ((__int64)v35.ApcContext & 0x80000000) != 0 )
    {
      if ( LODWORD(v35.ApcContext) == 0x80000000 )
        ZwAssociateWaitCompletionPacket(
          *((_QWORD *)v23 + 205),
          *((_QWORD *)v23 + 202),
          *((_QWORD *)v23 + 204),
          0LL,
          0xFFFFFFFF80000000uLL,
          0,
          0LL,
          0LL,
          v29);
      break;
    }
    if ( v35.ApcContext >= (PVOID)2 || (v24 = (struct tagWND *)*((_QWORD *)v23 + (__int64)v35.ApcContext + 207)) == 0LL )
    {
      BroadcastCoreMessagingApcContextError(v23, (unsigned __int64)v35.ApcContext);
      break;
    }
    xxxHandleCoreMessagingQueueCompletion(v24, &v35, (PVOID)0x80000000LL);
    v26 = *(_QWORD *)(v33 + 480);
    v10 = a4 & *(_DWORD *)(v26 + 8);
    if ( ((unsigned __int8)a4 & *(_BYTE *)(v26 + 8) & 8) != 0 )
      break;
    v13 = a5;
  }
  if ( v19 >= 0 )
    return (unsigned int)v19;
  v25 = RtlNtStatusToDosError(v19);
  UserSetLastError(v25);
  return 0xFFFFFFFFLL;
}
