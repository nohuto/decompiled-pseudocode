/*
 * XREFs of TppIopExecuteCallback @ 0x18003C020
 * Callers:
 *     TppWorkerThread @ 0x180039390 (TppWorkerThread.c)
 * Callees:
 *     RtlpTpETWCallbackStop @ 0x180001320 (RtlpTpETWCallbackStop.c)
 *     RtlpTpETWCallbackStart @ 0x180001398 (RtlpTpETWCallbackStart.c)
 *     LdrLockLoaderLock @ 0x1800086A0 (LdrLockLoaderLock.c)
 *     TppStartThreadData @ 0x18003C1E0 (TppStartThreadData.c)
 *     TppCleanupGroupMemberCallbackProlog @ 0x18003C274 (TppCleanupGroupMemberCallbackProlog.c)
 *     TppCompleteThreadData @ 0x18003C368 (TppCompleteThreadData.c)
 *     LdrUnlockLoaderLock @ 0x180070A40 (LdrUnlockLoaderLock.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 *     LdrAddRefDll @ 0x18007CCA0 (LdrAddRefDll.c)
 */

__int64 __fastcall TppIopExecuteCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rdi
  __int64 v8; // r15
  int v9; // ebx
  int v10; // esi
  signed __int32 v11; // ecx
  bool v12; // zf
  signed __int32 v13; // eax
  __int64 result; // rax
  unsigned __int64 v15; // [rsp+38h] [rbp-40h] BYREF
  __int64 v16; // [rsp+40h] [rbp-38h] BYREF

  v15 = 0LL;
  v7 = a2 - 192;
  v8 = *(_QWORD *)(a2 - 192 + 128);
  v9 = 1;
  if ( v8 )
  {
    v10 = 1;
    LdrLockLoaderLock(0, 0LL, &v15);
  }
  else
  {
    v10 = 0;
  }
  _m_prefetchw((const void *)(v7 + 272));
  v11 = *(_DWORD *)(v7 + 272);
  while ( v11 > 0 )
  {
    v13 = _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 272), v11 - 1, v11);
    v12 = v11 == v13;
    v11 = v13;
    if ( v12 )
      goto LABEL_6;
  }
  v9 = 0;
LABEL_6:
  if ( v10 && v9 )
  {
    if ( (int)LdrAddRefDll(0LL, v8) >= 0 )
    {
      *(_QWORD *)(a1 + 168) = v8;
      *(_DWORD *)(a1 + 144) |= 0x100u;
    }
    else
    {
      v9 = 0;
    }
  }
  if ( v10 )
    LdrUnlockLoaderLock(0LL, v15);
  if ( v9 )
  {
    TppCleanupGroupMemberCallbackProlog(a1, v7);
    if ( MEMORY[0x7FFE0386] )
      RtlpTpETWCallbackStart(
        *(_QWORD *)(v7 + 136),
        a2,
        *(_QWORD *)(v7 + 80),
        *(_QWORD *)(v7 + 88),
        *(_QWORD *)(v7 + 104));
    TppStartThreadData(&v16, *(_QWORD *)(v7 + 80), *(_QWORD *)(v7 + 88), *(_QWORD *)(v7 + 104));
    *(_QWORD *)(a1 + 88) = *(_QWORD *)(v7 + 80);
    *(_QWORD *)(a1 + 96) = *(_QWORD *)(v7 + 88);
    (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64))(v7 + 80))(a1, *(_QWORD *)(v7 + 88), a3, a4, v7);
    if ( MEMORY[0x7FFE0386] )
      RtlpTpETWCallbackStop(
        *(_QWORD *)(v7 + 136),
        a2,
        *(_QWORD *)(v7 + 80),
        *(_QWORD *)(v7 + 88),
        *(_QWORD *)(v7 + 104));
    return TppCompleteThreadData(v16);
  }
  else
  {
    result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)v7, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
      return (**(__int64 (__fastcall ***)(__int64))(v7 + 8))(v7);
  }
  return result;
}
