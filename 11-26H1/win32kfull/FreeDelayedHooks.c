/*
 * XREFs of FreeDelayedHooks @ 0x140037910
 * Callers:
 *     ?xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z @ 0x1400245B8 (-xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     xxxSendTransformableMessageTimeout @ 0x140036F84 (xxxSendTransformableMessageTimeout.c)
 *     xxxSendMessageCallback @ 0x140051930 (xxxSendMessageCallback.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void FreeDelayedHooks()
{
  unsigned int DLT; // eax
  __int64 v1; // rdx
  __int64 v2; // rcx
  char *v3; // rbx
  int v4; // edi
  tagDomLock *v5; // rcx
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v7; // rbx
  __int64 i; // rcx
  _QWORD *v9; // rdi
  tagDomLock *DomainLockRef; // [rsp+20h] [rbp-38h]
  char v11; // [rsp+28h] [rbp-30h] BYREF
  __int64 v12; // [rsp+30h] [rbp-28h]
  char v13; // [rsp+38h] [rbp-20h]
  __int64 v14; // [rsp+40h] [rbp-18h]
  char v15; // [rsp+48h] [rbp-10h]

  DLT = DLT_HOOK::getDLT();
  DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
  v11 = 1;
  v13 = 0;
  v3 = &v11;
  v12 = W32GetUserSessionState(v2, v1) + 42384;
  v14 = 0LL;
  v4 = 0;
  v15 = 0;
  do
  {
    v5 = (tagDomLock *)*((_QWORD *)v3 - 1);
    if ( v5 )
    {
      if ( *v3 )
        tagDomLock::LockExclusive(v5);
      else
        tagDomLock::LockShared(v5);
    }
    ++v4;
    v3 += 16;
  }
  while ( !v4 );
  v15 = 1;
  CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(v5);
  if ( CurrentThreadWin32Thread )
    v7 = *CurrentThreadWin32Thread;
  else
    v7 = 0LL;
  for ( i = *(_QWORD *)(v7 + 1080); i; i = *(_QWORD *)(v7 + 1080) )
  {
    *(_QWORD *)(v7 + 1080) = *(_QWORD *)(i + 88);
    v9 = (_QWORD *)_HMPkheFromObject(i);
    if ( !*(_DWORD *)(*v9 + 8LL) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3535LL);
    HMUnlockObject(*v9);
  }
  if ( v15 && DomainLockRef )
  {
    if ( v11 )
      tagDomLock::UnLockExclusive(DomainLockRef);
    else
      tagDomLock::UnLockShared(DomainLockRef);
  }
}
