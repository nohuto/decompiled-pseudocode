/*
 * XREFs of TppWorkCallbackPrologRelease @ 0x18003AFD0
 * Callers:
 *     TppExecuteWaitCallback @ 0x18003AD54 (TppExecuteWaitCallback.c)
 *     TppTimerpExecuteCallback @ 0x18003AEA0 (TppTimerpExecuteCallback.c)
 *     TppSimplepExecuteCallback @ 0x180081170 (TppSimplepExecuteCallback.c)
 * Callees:
 *     RtlpTpETWCallbackEnqueue @ 0x180001338 (RtlpTpETWCallbackEnqueue.c)
 *     LdrUnlockLoaderLock @ 0x180029EC0 (LdrUnlockLoaderLock.c)
 *     LdrAddRefDll @ 0x180039C20 (LdrAddRefDll.c)
 *     TppCleanupGroupMemberCallbackProlog @ 0x18003B404 (TppCleanupGroupMemberCallbackProlog.c)
 *     TppCleanupGroupMemberRelease @ 0x18003B9D0 (TppCleanupGroupMemberRelease.c)
 *     TpPostTask @ 0x18003D028 (TpPostTask.c)
 *     LdrLockLoaderLock @ 0x18004E640 (LdrLockLoaderLock.c)
 *     TppBarrierAdjust @ 0x180063E84 (TppBarrierAdjust.c)
 *     TppWorkCancelPendingCallbacks @ 0x180064030 (TppWorkCancelPendingCallbacks.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TppWorkCallbackPrologRelease(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v4; // rdi
  int v5; // r15d
  unsigned __int32 v9; // ecx
  __int64 v10; // r8
  signed __int32 v11; // eax
  __int64 v12; // rdx
  int v13; // ebp
  int v14; // esi
  __int64 v16; // r9
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h]
  unsigned __int64 v18; // [rsp+68h] [rbp+10h] BYREF

  v4 = *(_QWORD *)(a2 + 136);
  v5 = 0;
  v18 = 0LL;
  if ( v4 )
    LdrLockLoaderLock(0LL, 0LL, &v18);
  _m_prefetchw((const void *)(a2 + 232));
  v9 = *(_DWORD *)(a2 + 232);
  v10 = 1LL;
  do
  {
    v11 = v9;
    v12 = v9 >> 1;
    if ( v9 >> 1 )
    {
      v12 = v9 & 1 | (2 * (_DWORD)v12 - 2);
      v13 = 1;
      v9 = v12;
      v14 = 1;
      if ( (v12 & 0xFFFFFFFE) != 0 )
        goto LABEL_7;
    }
    else
    {
      v13 = 0;
    }
    v14 = 0;
    v9 |= 1u;
LABEL_7:
    v9 = _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 232), v9, v11);
  }
  while ( v11 != v9 );
  if ( v4 )
  {
    if ( v13 )
    {
      if ( (int)LdrAddRefDll(0, v4, 1LL, a4) < 0 )
      {
        v13 = 0;
        v14 = 0;
        v5 = 1;
      }
      else
      {
        *(_DWORD *)(a1 + 144) |= 0x100u;
        *(_QWORD *)(a1 + 168) = v4;
      }
    }
    LdrUnlockLoaderLock(0LL, v18);
    if ( v5 )
    {
      TppBarrierAdjust(a2 + 56, 0xFFFFFFFFLL, 0LL, v16);
      TppWorkCancelPendingCallbacks(a2);
    }
  }
  if ( v14 )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)a2, 2u);
    if ( MEMORY[0x7FFE0386] )
      RtlpTpETWCallbackEnqueue(
        *(_QWORD *)(a2 + 144),
        a2 + 200,
        *(_QWORD *)(a2 + 80),
        *(_QWORD *)(a2 + 88),
        *(_QWORD *)(a2 + 104));
    TpPostTask(a2 + 200, *(_QWORD *)(a2 + 144), *(unsigned int *)(a2 + 192), 0LL);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)a2, 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(__int64))(a2 + 8))(a2);
  }
  if ( a3 )
  {
    if ( (unsigned int)TppCleanupGroupMemberRelease(a2, 0LL) )
    {
      *(_QWORD *)(a2 + 184) = retaddr;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)a2, 0xFFFFFFFF) == 1 )
        (**(void (__fastcall ***)(__int64))(a2 + 8))(a2);
    }
  }
  if ( v13 )
  {
    TppCleanupGroupMemberCallbackProlog(a1, a2);
    return 1LL;
  }
  else
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)a2, 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(__int64, __int64, __int64))(a2 + 8))(a2, v12, v10);
    return 0LL;
  }
}
