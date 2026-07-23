/*
 * XREFs of TppIopExecuteCallback @ 0x180009AF0
 * Callers:
 *     TppWorkerThread @ 0x18002B350 (TppWorkerThread.c)
 * Callees:
 *     RtlpTpETWCallbackStart @ 0x180001280 (RtlpTpETWCallbackStart.c)
 *     RtlpTpETWCallbackStop @ 0x1800012F8 (RtlpTpETWCallbackStop.c)
 *     LdrUnlockLoaderLock @ 0x180006690 (LdrUnlockLoaderLock.c)
 *     LdrAddRefDll @ 0x180008BF0 (LdrAddRefDll.c)
 *     TppCompleteThreadData @ 0x180009CC4 (TppCompleteThreadData.c)
 *     TppStartThreadData @ 0x180009D00 (TppStartThreadData.c)
 *     TppCleanupGroupMemberCallbackProlog @ 0x180009F20 (TppCleanupGroupMemberCallbackProlog.c)
 *     LdrLockLoaderLock @ 0x180050F10 (LdrLockLoaderLock.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 */

__int64 __fastcall TppIopExecuteCallback(_QWORD *Instance, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rdi
  void *v8; // r15
  int v9; // ebx
  int v10; // esi
  signed __int32 v11; // ecx
  bool v12; // zf
  signed __int32 v13; // eax
  __int64 result; // rax
  PVOID Cookie; // [rsp+38h] [rbp-40h] BYREF
  __int64 v16; // [rsp+40h] [rbp-38h] BYREF

  Cookie = 0LL;
  v7 = a2 - 192;
  v8 = *(void **)(a2 - 192 + 128);
  v9 = 1;
  if ( v8 )
  {
    v10 = 1;
    LdrLockLoaderLock(0, 0LL, &Cookie);
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
      goto LABEL_9;
  }
  v9 = 0;
LABEL_9:
  if ( v10 && v9 )
  {
    if ( LdrAddRefDll(0, v8) >= 0 )
    {
      Instance[21] = v8;
      *((_DWORD *)Instance + 36) |= 0x100u;
    }
    else
    {
      v9 = 0;
    }
  }
  if ( v10 )
    LdrUnlockLoaderLock(0, Cookie);
  if ( v9 )
  {
    TppCleanupGroupMemberCallbackProlog((PTP_CALLBACK_INSTANCE)Instance);
    if ( MEMORY[0x7FFE0386] )
      RtlpTpETWCallbackStart(
        *(_QWORD *)(v7 + 136),
        a2,
        *(_QWORD *)(v7 + 80),
        *(_QWORD *)(v7 + 88),
        *(_QWORD *)(v7 + 104));
    TppStartThreadData(&v16, *(_QWORD *)(v7 + 80), *(_QWORD *)(v7 + 88), *(_QWORD *)(v7 + 104));
    Instance[11] = *(_QWORD *)(v7 + 80);
    Instance[12] = *(_QWORD *)(v7 + 88);
    (*(void (__fastcall **)(_QWORD *, _QWORD, __int64, __int64, __int64))(v7 + 80))(
      Instance,
      *(_QWORD *)(v7 + 88),
      a3,
      a4,
      v7);
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
