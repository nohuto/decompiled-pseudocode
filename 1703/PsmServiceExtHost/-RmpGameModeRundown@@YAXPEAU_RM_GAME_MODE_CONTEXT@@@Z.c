/*
 * XREFs of ?RmpGameModeRundown@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x1800310AC
 * Callers:
 *     RmpDestroyResourceManagerServer @ 0x18002A6E4 (RmpDestroyResourceManagerServer.c)
 * Callees:
 *     ?RmpGameModeQueuePolicyWorkerWithLock@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x180004F50 (-RmpGameModeQueuePolicyWorkerWithLock@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 *     ?RmpGameModeRundownRecipientProcessTreeCallback@@YAXPEAU_RTL_BALANCED_NODE@@PEAX@Z @ 0x1800311A0 (-RmpGameModeRundownRecipientProcessTreeCallback@@YAXPEAU_RTL_BALANCED_NODE@@PEAX@Z.c)
 */

void __fastcall RmpGameModeRundown(struct _RM_GAME_MODE_CONTEXT *a1)
{
  DWORD CurrentThreadId; // eax
  struct _RTL_BALANCED_NODE *v3; // rcx
  int v4; // esi
  struct _RTL_BALANCED_NODE *v5; // rdx
  unsigned __int64 v6; // rax
  struct _RTL_BALANCED_NODE *v7; // rdx
  unsigned __int64 v8; // rbx
  char v9; // al

  if ( *((_QWORD *)a1 + 6) )
  {
    RtlAcquireSRWLockExclusive((char *)a1 + 40);
    CurrentThreadId = GetCurrentThreadId();
    *((_BYTE *)a1 + 77) &= ~0x10u;
    *((_DWORD *)a1 + 14) = CurrentThreadId;
    RmpGameModeQueuePolicyWorkerWithLock(a1);
    *((_BYTE *)a1 + 77) |= 4u;
    *((_DWORD *)a1 + 14) = 0;
    RtlReleaseSRWLockExclusive((char *)a1 + 40);
    TpWaitForWork(*((_QWORD *)a1 + 6), 0LL);
  }
  v3 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)a1 + 1);
  v4 = *((_BYTE *)a1 + 16) & 1;
  if ( v3 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( v3->Children[0] )
        {
          v5 = v3;
          if ( v4 )
            v3 = (struct _RTL_BALANCED_NODE *)((unsigned __int64)v3->Children[0] ^ (unsigned __int64)v3);
          else
            v3 = v3->Children[0];
          v5->Children[0] = 0LL;
        }
        v6 = (unsigned __int64)v3->Children[1];
        if ( !v6 )
          break;
        v7 = v3;
        if ( v4 )
          v3 = (struct _RTL_BALANCED_NODE *)(v6 ^ (unsigned __int64)v3);
        else
          v3 = v3->Children[1];
        v7->Children[1] = 0LL;
      }
      v8 = v3->ParentValue & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v4 && v8 )
        v8 ^= (unsigned __int64)v3;
      RmpGameModeRundownRecipientProcessTreeCallback(v3, 0LL);
      if ( !v8 )
        break;
      v3 = (struct _RTL_BALANCED_NODE *)v8;
    }
  }
  v9 = *((_BYTE *)a1 + 16);
  *((_QWORD *)a1 + 1) = 0LL;
  *((_QWORD *)a1 + 2) = 0LL;
  if ( (v9 & 1) != 0 )
    *((_BYTE *)a1 + 16) |= 1u;
}
