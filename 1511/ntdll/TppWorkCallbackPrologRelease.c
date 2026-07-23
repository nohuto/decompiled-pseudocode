/*
 * XREFs of TppWorkCallbackPrologRelease @ 0x180009D94
 * Callers:
 *     TppSimplepExecuteCallback @ 0x180006730 (TppSimplepExecuteCallback.c)
 *     TppExecuteWaitCallback @ 0x180009874 (TppExecuteWaitCallback.c)
 *     TppTimerpExecuteCallback @ 0x1800099C0 (TppTimerpExecuteCallback.c)
 * Callees:
 *     RtlpTpETWCallbackEnqueue @ 0x18000165C (RtlpTpETWCallbackEnqueue.c)
 *     TppBarrierAdjust @ 0x1800042B4 (TppBarrierAdjust.c)
 *     TppWorkCancelPendingCallbacks @ 0x180004460 (TppWorkCancelPendingCallbacks.c)
 *     LdrUnlockLoaderLock @ 0x180006690 (LdrUnlockLoaderLock.c)
 *     LdrAddRefDll @ 0x180008BF0 (LdrAddRefDll.c)
 *     TppCleanupGroupMemberCallbackProlog @ 0x180009F20 (TppCleanupGroupMemberCallbackProlog.c)
 *     TppCleanupGroupMemberRelease @ 0x18000B990 (TppCleanupGroupMemberRelease.c)
 *     TpPostTask @ 0x18002E55C (TpPostTask.c)
 *     LdrLockLoaderLock @ 0x180050F10 (LdrLockLoaderLock.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 */

__int64 __fastcall TppWorkCallbackPrologRelease(_DWORD *Instance, __int64 a2, int a3)
{
  void *v3; // rbx
  int v4; // r15d
  unsigned __int32 v8; // ecx
  __int64 v9; // r8
  signed __int32 v10; // eax
  __int64 v11; // rdx
  int v12; // ebp
  int v13; // esi
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h]
  PVOID Cookie; // [rsp+68h] [rbp+10h] BYREF

  v3 = *(void **)(a2 + 128);
  v4 = 0;
  Cookie = 0LL;
  if ( v3 )
    LdrLockLoaderLock(0, 0LL, &Cookie);
  _m_prefetchw((const void *)(a2 + 224));
  v8 = *(_DWORD *)(a2 + 224);
  v9 = 1LL;
  do
  {
    v10 = v8;
    v11 = v8 >> 1;
    if ( v8 >> 1 )
    {
      v11 = v8 & 1 | (2 * (_DWORD)v11 - 2);
      v12 = 1;
      v8 = v11;
      v13 = 1;
      if ( (v11 & 0xFFFFFFFE) != 0 )
        goto LABEL_7;
    }
    else
    {
      v12 = 0;
    }
    v13 = 0;
    v8 |= 1u;
LABEL_7:
    v8 = _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 224), v8, v10);
  }
  while ( v10 != v8 );
  if ( v3 )
  {
    if ( v12 )
    {
      if ( LdrAddRefDll(0, v3) < 0 )
      {
        v12 = 0;
        v13 = 0;
        v4 = 1;
      }
      else
      {
        Instance[36] |= 0x100u;
        *((_QWORD *)Instance + 21) = v3;
      }
    }
    LdrUnlockLoaderLock(0, Cookie);
    if ( v4 )
    {
      TppBarrierAdjust((_RTL_SRWLOCK *)(a2 + 56), -1, 0);
      TppWorkCancelPendingCallbacks((_RTL_SRWLOCK *)a2);
    }
  }
  if ( v13 )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)a2, 2u);
    if ( MEMORY[0x7FFE0386] )
      RtlpTpETWCallbackEnqueue(
        *(_QWORD *)(a2 + 136),
        a2 + 192,
        *(_QWORD *)(a2 + 80),
        *(_QWORD *)(a2 + 88),
        *(_QWORD *)(a2 + 104));
    TpPostTask(a2 + 192, *(_QWORD *)(a2 + 136), *(unsigned int *)(a2 + 184), 0LL);
    if ( !_InterlockedDecrement((volatile signed __int32 *)a2) )
      (**(void (__fastcall ***)(__int64))(a2 + 8))(a2);
  }
  if ( a3 )
  {
    if ( (unsigned int)TppCleanupGroupMemberRelease(a2, 0LL) )
    {
      *(_QWORD *)(a2 + 176) = retaddr;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)a2, 0xFFFFFFFF) == 1 )
        (**(void (__fastcall ***)(__int64))(a2 + 8))(a2);
    }
  }
  if ( v12 )
  {
    TppCleanupGroupMemberCallbackProlog((PTP_CALLBACK_INSTANCE)Instance);
    return 1LL;
  }
  else
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)a2, 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(__int64, __int64, __int64))(a2 + 8))(a2, v11, v9);
    return 0LL;
  }
}
