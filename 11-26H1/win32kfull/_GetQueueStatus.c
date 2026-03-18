/*
 * XREFs of _GetQueueStatus @ 0x140025CC0
 * Callers:
 *     NtUserGetThreadState @ 0x140279940 (NtUserGetThreadState.c)
 * Callees:
 *     ?xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagWND@@QEAU_FILE_IO_COMPLETION_INFORMATION@@_K@Z @ 0x14001F5B4 (-xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagWND@@QEAU_FILE_IO_COMPLETION_INFORMATION@@_K@Z.c)
 *     ?BroadcastCoreMessagingApcContextError@@YAXPEBUtagTHREADINFO@@_K@Z @ 0x140026488 (-BroadcastCoreMessagingApcContextError@@YAXPEBUtagTHREADINFO@@_K@Z.c)
 */

__int64 __fastcall GetQueueStatus(__int64 a1)
{
  unsigned __int16 v1; // r12
  __int16 v2; // r14
  __int64 *CurrentThreadWin32Thread; // rax
  int v4; // ebx
  __int64 v5; // r15
  __int64 i; // rcx
  const struct tagTHREADINFO **v7; // rax
  const struct tagTHREADINFO *v8; // rdi
  int v9; // esi
  struct tagWND *v10; // rcx
  int v11; // r14d
  unsigned int DLT; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 UserSessionState; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx
  int v20; // esi
  PVOID *p_ApcContext; // rdi
  tagDomLock *v22; // rcx
  tagObjLock **v23; // rdi
  int v24; // ecx
  unsigned int v25; // ebx
  int v27; // [rsp+30h] [rbp-31h]
  struct _FILE_IO_COMPLETION_INFORMATION v28; // [rsp+48h] [rbp-19h] BYREF
  __int128 v29; // [rsp+68h] [rbp+7h] BYREF
  char v30; // [rsp+78h] [rbp+17h]
  int v31; // [rsp+C8h] [rbp+67h] BYREF
  __int64 v32; // [rsp+D0h] [rbp+6Fh] BYREF

  v1 = a1;
  v2 = a1;
  CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(a1);
  v4 = 0;
  if ( CurrentThreadWin32Thread )
    v5 = *CurrentThreadWin32Thread;
  else
    v5 = 0LL;
  for ( i = 0LL; (unsigned int)i < 2; i = (unsigned int)(i + 1) )
  {
    if ( *(_QWORD *)(v5 + 8LL * (unsigned int)i + 1656) )
    {
      if ( (v2 & 8) != 0 )
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
  v11 = v2 & 0x5DFF;
  DLT = DLT_THREADINFO::getDLT();
  v28.KeyContext = (PVOID)GetDomainLockRef(DLT);
  LOBYTE(v28.ApcContext) = 0;
  UserSessionState = W32GetUserSessionState(v14, v13);
  LOBYTE(v28.IoStatusBlock.Information) = 0;
  v30 = 0;
  v28.IoStatusBlock.Pointer = (PVOID)(UserSessionState + 42384);
  v29 = 0LL;
  v18 = W32GetUserSessionState(v17, v16);
  v19 = 0LL;
  if ( v5 != v18 + 42056 )
    v19 = v5 + 424;
  *(_QWORD *)&v29 = v19;
  if ( !v30 )
  {
    v20 = 0;
    p_ApcContext = &v28.ApcContext;
    do
    {
      v22 = (tagDomLock *)*(p_ApcContext - 1);
      if ( v22 )
      {
        if ( *(_BYTE *)p_ApcContext )
          tagDomLock::LockExclusive(v22);
        else
          tagDomLock::LockShared(v22);
      }
      ++v20;
      p_ApcContext += 2;
    }
    while ( !v20 );
    v23 = (tagObjLock **)&v29;
    do
    {
      if ( *v23 )
        tagObjLock::LockExclusive(*v23);
      ++v4;
      ++v23;
    }
    while ( !v4 );
    v30 = 1;
  }
  v24 = *(_DWORD *)(*(_QWORD *)(v5 + 480) + 4LL);
  _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(v5 + 480) + 4LL), ~v11);
  v25 = v1 & (unsigned __int16)v24 & 0x5DFF | ((v1 & (unsigned __int16)*(_DWORD *)(*(_QWORD *)(v5 + 480) + 8LL) & 0x5DFF) << 16);
  if ( !v30 )
    return v25;
  if ( (_QWORD)v29 )
    tagObjLock::UnLockExclusive((tagObjLock *)v29);
  if ( !v28.KeyContext )
    return v25;
  if ( !LOBYTE(v28.ApcContext) )
  {
    tagDomLock::UnLockShared((tagDomLock *)v28.KeyContext);
    return v25;
  }
  tagDomLock::UnLockExclusive((tagDomLock *)v28.KeyContext);
  return v25;
}
