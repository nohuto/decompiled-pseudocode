/*
 * XREFs of NtUserGetQueueStatus @ 0x140026010
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagWND@@QEAU_FILE_IO_COMPLETION_INFORMATION@@_K@Z @ 0x14001F5B4 (-xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagWND@@QEAU_FILE_IO_COMPLETION_INFORMATION@@_K@Z.c)
 *     ?BroadcastCoreMessagingApcContextError@@YAXPEBUtagTHREADINFO@@_K@Z @ 0x140026488 (-BroadcastCoreMessagingApcContextError@@YAXPEBUtagTHREADINFO@@_K@Z.c)
 */

__int64 __fastcall NtUserGetQueueStatus(unsigned __int16 a1)
{
  __int64 v2; // rcx
  __int64 *CurrentThreadWin32Thread; // rax
  int v4; // ebx
  __int64 v5; // r14
  __int64 i; // rcx
  const struct tagTHREADINFO **v7; // rax
  const struct tagTHREADINFO *v8; // rdi
  int v9; // esi
  struct tagWND *v10; // rcx
  unsigned int DLT; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 UserSessionState; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  int v19; // esi
  PVOID *p_ApcContext; // rdi
  tagDomLock *v21; // rcx
  tagObjLock **v22; // rdi
  int v23; // ecx
  PVOID KeyContext; // rcx
  unsigned int v25; // ebx
  int v27; // [rsp+30h] [rbp-21h]
  struct _FILE_IO_COMPLETION_INFORMATION v28; // [rsp+48h] [rbp-9h] BYREF
  __int128 v29; // [rsp+68h] [rbp+17h] BYREF
  char v30; // [rsp+78h] [rbp+27h]
  int v31; // [rsp+B8h] [rbp+67h] BYREF
  __int64 v32; // [rsp+C0h] [rbp+6Fh] BYREF

  EnterSharedCrit(0LL, 1LL);
  CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(v2);
  v4 = 0;
  if ( CurrentThreadWin32Thread )
    v5 = *CurrentThreadWin32Thread;
  else
    v5 = 0LL;
  for ( i = 0LL; (unsigned int)i < 2; i = (unsigned int)(i + 1) )
  {
    if ( *(_QWORD *)(v5 + 8LL * (unsigned int)i + 1656) )
    {
      if ( (a1 & 8) != 0 )
      {
        v7 = (const struct tagTHREADINFO **)PsGetCurrentThreadWin32Thread(i);
        if ( v7 )
          v8 = *v7;
        else
          v8 = 0LL;
        v31 = 0;
        memset(&v28, 0, sizeof(v28));
        v32 = 0LL;
        v9 = 0;
        ZwSetIoCompletionEx(*((_QWORD *)v8 + 202), *((_QWORD *)v8 + 206), 0LL, -2147483647LL, 0, 0LL);
        while ( 1 )
        {
          LOBYTE(v27) = 0;
          if ( (unsigned int)ZwRemoveIoCompletionEx(*((_QWORD *)v8 + 202), &v28, 1LL, &v31, &v32, v27) )
            break;
          if ( ((__int64)v28.ApcContext & 0x80000000) != 0 )
          {
            if ( LODWORD(v28.ApcContext) != 0x80000000 )
              break;
            v9 = 1;
          }
          else
          {
            if ( v28.ApcContext >= (PVOID)2
              || (v10 = (struct tagWND *)*((_QWORD *)v8 + (__int64)v28.ApcContext + 207)) == 0LL )
            {
              BroadcastCoreMessagingApcContextError(v8, (unsigned __int64)v28.ApcContext);
              break;
            }
            xxxHandleCoreMessagingQueueCompletion(v10, &v28, (PVOID)0x80000000LL);
          }
        }
        if ( v9 )
          ZwAssociateWaitCompletionPacket(
            *((_QWORD *)v8 + 205),
            *((_QWORD *)v8 + 202),
            *((_QWORD *)v8 + 204),
            0LL,
            0xFFFFFFFF80000000uLL,
            0,
            0LL,
            0LL,
            v28.KeyContext);
      }
      break;
    }
  }
  DLT = DLT_THREADINFO::getDLT();
  v28.KeyContext = (PVOID)GetDomainLockRef(DLT);
  LOBYTE(v28.ApcContext) = 0;
  UserSessionState = W32GetUserSessionState(v13, v12);
  LOBYTE(v28.IoStatusBlock.Information) = 0;
  v30 = 0;
  v28.IoStatusBlock.Pointer = (PVOID)(UserSessionState + 42384);
  v29 = 0LL;
  v17 = W32GetUserSessionState(v16, v15);
  v18 = 0LL;
  if ( v5 != v17 + 42056 )
    v18 = v5 + 424;
  *(_QWORD *)&v29 = v18;
  if ( !v30 )
  {
    v19 = 0;
    p_ApcContext = &v28.ApcContext;
    do
    {
      v21 = (tagDomLock *)*(p_ApcContext - 1);
      if ( v21 )
      {
        if ( *(_BYTE *)p_ApcContext )
          tagDomLock::LockExclusive(v21);
        else
          tagDomLock::LockShared(v21);
      }
      ++v19;
      p_ApcContext += 2;
    }
    while ( !v19 );
    v22 = (tagObjLock **)&v29;
    do
    {
      if ( *v22 )
        tagObjLock::LockExclusive(*v22);
      ++v4;
      ++v22;
    }
    while ( !v4 );
    v30 = 1;
  }
  v23 = *(_DWORD *)(*(_QWORD *)(v5 + 480) + 4LL);
  _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(v5 + 480) + 4LL), ~(a1 & 0x5DFF));
  KeyContext = (PVOID)(a1 & (unsigned __int16)v23 & 0x5DFF);
  v25 = (unsigned int)KeyContext | ((a1 & (unsigned __int16)*(_DWORD *)(*(_QWORD *)(v5 + 480) + 8LL) & 0x5DFF) << 16);
  if ( v30 )
  {
    if ( (_QWORD)v29 )
      tagObjLock::UnLockExclusive((tagObjLock *)v29);
    KeyContext = v28.KeyContext;
    if ( v28.KeyContext )
    {
      if ( LOBYTE(v28.ApcContext) )
        tagDomLock::UnLockExclusive((tagDomLock *)v28.KeyContext);
      else
        tagDomLock::UnLockShared((tagDomLock *)v28.KeyContext);
    }
  }
  UserSessionSwitchLeaveCrit(KeyContext);
  return v25;
}
