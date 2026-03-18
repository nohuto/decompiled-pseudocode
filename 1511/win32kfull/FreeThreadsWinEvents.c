/*
 * XREFs of FreeThreadsWinEvents @ 0x1C00DCA40
 * Callers:
 *     <none>
 * Callees:
 *     DestroyNotify @ 0x1C00DCAE0 (DestroyNotify.c)
 *     DestroyEventHook @ 0x1C00DCC10 (DestroyEventHook.c)
 */

__int64 __fastcall FreeThreadsWinEvents(struct tagNOTIFY *a1)
{
  unsigned int CurrentThreadId; // eax
  struct tagNOTIFY **v3; // rcx
  unsigned int v4; // esi
  __int64 result; // rax
  __int64 v6; // rcx
  __int64 v7; // rbx
  struct tagNOTIFY **v8; // rbx
  struct tagNOTIFY *v9; // rdx

  CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
  v3 = gpPendingNotifies;
  v4 = CurrentThreadId;
  if ( gpPendingNotifies )
  {
    do
    {
      v8 = (struct tagNOTIFY **)*v3;
      if ( *((_DWORD *)v3 + 10) == v4 && !v3[7]
        || (v9 = v3[7], v9 == a1)
        || *((struct tagNOTIFY **)v3[1] + 2) == a1 && !v9 )
      {
        if ( ((_DWORD)v3[6] & 4) == 0 )
          DestroyNotify(v3);
      }
      v3 = v8;
    }
    while ( v8 );
  }
  result = gpWinEventHooks;
  v6 = gpWinEventHooks;
  if ( gpWinEventHooks )
  {
    do
    {
      v7 = *(_QWORD *)(v6 + 24);
      if ( *(struct tagNOTIFY **)(v6 + 16) == a1 )
        result = DestroyEventHook();
      v6 = v7;
    }
    while ( v7 );
  }
  return result;
}
