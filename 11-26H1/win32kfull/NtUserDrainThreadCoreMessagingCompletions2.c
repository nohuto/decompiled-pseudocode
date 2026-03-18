/*
 * XREFs of NtUserDrainThreadCoreMessagingCompletions2 @ 0x1401318B0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     xxxDrainQueueCompletions @ 0x140131AD0 (xxxDrainQueueCompletions.c)
 */

__int64 __fastcall NtUserDrainThreadCoreMessagingCompletions2(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // rcx
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v9; // rdx
  unsigned int v10; // ecx
  __int64 v11; // rbx
  int v12; // ecx
  __int64 v13; // rcx
  unsigned int i; // eax
  ULONG_PTR *v15; // rax
  ULONG_PTR v16; // rcx
  ULONG_PTR *v17; // rdx
  ULONG_PTR BugCheckParameter3[3]; // [rsp+30h] [rbp-18h] BYREF

  v2 = EnterCrit(0LL, 0LL);
  v3 = ValidateHwndStrict(a1);
  v5 = 0LL;
  v6 = v3;
  if ( v3 )
  {
    BugCheckParameter3[0] = *(_QWORD *)(v2 + 448);
    *(_QWORD *)(v2 + 448) = BugCheckParameter3;
    BugCheckParameter3[1] = v3;
    HMLockObject(v3);
    CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(v7);
    if ( CurrentThreadWin32Thread )
      v9 = *CurrentThreadWin32Thread;
    else
      v9 = 0LL;
    v10 = 0;
    v11 = 1LL;
    while ( 1 )
    {
      if ( v10 >= 2 )
      {
        v12 = 5;
        goto LABEL_9;
      }
      if ( *(_QWORD *)(v9 + 8LL * v10 + 1656) )
        break;
      ++v10;
    }
    for ( i = 0; i < 2; ++i )
    {
      if ( *(_QWORD *)(v9 + 8LL * i + 1656) == v6 )
      {
        if ( i != 2LL )
        {
          xxxDrainQueueCompletions(i);
          goto LABEL_15;
        }
        break;
      }
    }
    v12 = 87;
LABEL_9:
    UserSetLastError(v12);
    v11 = 0LL;
LABEL_15:
    v15 = (ULONG_PTR *)PsGetCurrentThreadWin32Thread(v13);
    if ( v15 )
      v16 = *v15;
    else
      v16 = 0LL;
    v17 = *(ULONG_PTR **)(v16 + 448);
    if ( v17 != BugCheckParameter3 )
      KeBugCheckEx(0x164u, 0x3BuLL, v16, (ULONG_PTR)BugCheckParameter3, 0LL);
    *(_QWORD *)(v16 + 448) = *v17;
    HMUnlockObject(v17[1]);
    v5 = v11;
  }
  UserSessionSwitchLeaveCrit(v4);
  return v5;
}
