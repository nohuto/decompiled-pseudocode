/*
 * XREFs of _DrainThreadCoreMessagingCompletions2 @ 0x140131A30
 * Callers:
 *     NtUserDrainThreadCoreMessagingCompletions @ 0x1402B12E0 (NtUserDrainThreadCoreMessagingCompletions.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     xxxDrainQueueCompletions @ 0x140131AD0 (xxxDrainQueueCompletions.c)
 */

__int64 __fastcall DrainThreadCoreMessagingCompletions2(__int64 a1)
{
  __int64 *CurrentThreadWin32Thread; // rax
  unsigned int v3; // ebx
  __int64 v4; // rdx
  unsigned int i; // ecx
  int v6; // ecx
  unsigned int j; // eax
  unsigned __int64 v8; // rcx

  CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(a1);
  v3 = 0;
  if ( CurrentThreadWin32Thread )
    v4 = *CurrentThreadWin32Thread;
  else
    v4 = 0LL;
  for ( i = 0; ; ++i )
  {
    if ( i >= 2 )
    {
      v6 = 5;
LABEL_8:
      UserSetLastError(v6);
      return v3;
    }
    if ( *(_QWORD *)(v4 + 8LL * i + 1656) )
      break;
  }
  if ( a1 )
  {
    for ( j = 0; j < 2; ++j )
    {
      v8 = j;
      if ( *(_QWORD *)(v4 + 8LL * j + 1656) == a1 )
      {
        if ( j != 2LL )
          goto LABEL_14;
        break;
      }
    }
    v6 = 87;
    goto LABEL_8;
  }
  v8 = 0LL;
LABEL_14:
  xxxDrainQueueCompletions(v8);
  return 1;
}
