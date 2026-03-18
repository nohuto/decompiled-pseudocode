/*
 * XREFs of xxxFlushDeferredWindowEvents @ 0x14001A9A0
 * Callers:
 *     ?zzzEndDeferWinEventNotify@@YAXXZ @ 0x14001A878 (-zzzEndDeferWinEventNotify@@YAXXZ.c)
 * Callees:
 *     xxxProcessNotifyWinEvent @ 0x1400441AC (xxxProcessNotifyWinEvent.c)
 *     xxxProcessTSFEvent @ 0x140044AA0 (xxxProcessTSFEvent.c)
 */

__int64 __fastcall xxxFlushDeferredWindowEvents(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  unsigned int CurrentThreadId; // edi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 result; // rax
  __int64 v7; // rbx
  __int64 v8; // rcx
  bool v9; // zf

  UserSessionState = W32GetUserSessionState(a1, a2);
  if ( ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(UserSessionState + 42344)) != 1 )
    __int2c();
  CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
  result = W32GetUserSessionState(v5, v4);
  v7 = result + 70600;
  v8 = *(_QWORD *)(result + 70600);
  if ( v8 != result + 70600 )
  {
    do
    {
      result = *(unsigned int *)(v8 + 56);
      if ( (result & 2) != 0 && *(_DWORD *)(v8 + 48) == CurrentThreadId )
      {
        v9 = *(_DWORD *)(v8 + 24) == 0;
        *(_DWORD *)(v8 + 56) = result & 0xFFFFFFFD;
        if ( v9 )
          result = xxxProcessNotifyWinEvent(v8);
        else
          result = xxxProcessTSFEvent((struct tagNOTIFY *)v8);
        v8 = v7;
      }
      v8 = *(_QWORD *)v8;
    }
    while ( v8 != v7 );
  }
  return result;
}
