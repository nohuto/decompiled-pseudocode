/*
 * XREFs of TppWorkCallbackPrologRelease @ 0x18003C414
 * Callers:
 *     TppExecuteWaitCallback @ 0x18000B324 (TppExecuteWaitCallback.c)
 *     TppTimerpExecuteCallback @ 0x18003C590 (TppTimerpExecuteCallback.c)
 *     TppSimplepExecuteCallback @ 0x180072360 (TppSimplepExecuteCallback.c)
 * Callees:
 *     RtlpTpETWCallbackEnqueue @ 0x180001684 (RtlpTpETWCallbackEnqueue.c)
 *     LdrLockLoaderLock @ 0x1800086A0 (LdrLockLoaderLock.c)
 *     TpPostTask @ 0x180027C78 (TpPostTask.c)
 *     TppCleanupGroupMemberCallbackProlog @ 0x18003C274 (TppCleanupGroupMemberCallbackProlog.c)
 *     TppCleanupGroupMemberRelease @ 0x18003D61C (TppCleanupGroupMemberRelease.c)
 *     LdrUnlockLoaderLock @ 0x180070A40 (LdrUnlockLoaderLock.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 *     LdrAddRefDll @ 0x18007CCA0 (LdrAddRefDll.c)
 *     TppBarrierAdjust @ 0x18007DD84 (TppBarrierAdjust.c)
 *     TppWorkCancelPendingCallbacks @ 0x18007DF30 (TppWorkCancelPendingCallbacks.c)
 */

__int64 __fastcall TppWorkCallbackPrologRelease(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rbx
  int v4; // r15d
  unsigned __int32 v8; // ecx
  __int64 v9; // r8
  signed __int32 v10; // eax
  __int64 v11; // rdx
  int v12; // ebp
  int v13; // esi
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h]
  unsigned __int64 v16; // [rsp+68h] [rbp+10h] BYREF

  v3 = *(_QWORD *)(a2 + 128);
  v4 = 0;
  v16 = 0LL;
  if ( v3 )
    LdrLockLoaderLock(0, 0LL, &v16);
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
      if ( (int)LdrAddRefDll(0LL, v3) < 0 )
      {
        v12 = 0;
        v13 = 0;
        v4 = 1;
      }
      else
      {
        *(_DWORD *)(a1 + 144) |= 0x100u;
        *(_QWORD *)(a1 + 168) = v3;
      }
    }
    LdrUnlockLoaderLock(0LL, v16);
    if ( v4 )
    {
      TppBarrierAdjust(a2 + 56, 0xFFFFFFFFLL);
      TppWorkCancelPendingCallbacks(a2);
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
    TpPostTask(a2 + 192, *(_QWORD *)(a2 + 136), *(_DWORD *)(a2 + 184), 0LL);
    if ( !_InterlockedDecrement((volatile signed __int32 *)a2) )
      (**(void (__fastcall ***)(__int64))(a2 + 8))(a2);
  }
  if ( a3 )
  {
    if ( (unsigned int)TppCleanupGroupMemberRelease(a2, 0LL, v9) )
    {
      *(_QWORD *)(a2 + 176) = retaddr;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)a2, 0xFFFFFFFF) == 1 )
        (**(void (__fastcall ***)(__int64))(a2 + 8))(a2);
    }
  }
  if ( v12 )
  {
    TppCleanupGroupMemberCallbackProlog(a1, a2);
    return 1LL;
  }
  else
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)a2, 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(__int64, __int64, __int64))(a2 + 8))(a2, v11, v9);
    return 0LL;
  }
}
