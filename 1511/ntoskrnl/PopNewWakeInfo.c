/*
 * XREFs of PopNewWakeInfo @ 0x1403A5AF0
 * Callers:
 *     NtSetSystemPowerState @ 0x1403A3E04 (NtSetSystemPowerState.c)
 * Callees:
 *     KeResetEvent @ 0x14008E310 (KeResetEvent.c)
 *     PopReleaseWakeSourceSpinLock @ 0x14011A5C4 (PopReleaseWakeSourceSpinLock.c)
 *     PopWakeInfoDereference @ 0x14011A63C (PopWakeInfoDereference.c)
 *     PopAcquireWakeSourceSpinLock @ 0x14011A800 (PopAcquireWakeSourceSpinLock.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 */

LONG PopNewWakeInfo()
{
  PVOID PoolWithTag; // rax
  __int64 v1; // rbx
  __int64 v2; // rcx
  int v3; // eax
  __int64 v4; // rdx
  LONG result; // eax
  __int64 v6; // rax
  _QWORD *v7; // rcx
  _QWORD *v8; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0xB0uLL, 0x206D654Du);
  v1 = (__int64)PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0xB0uLL);
    *(_DWORD *)(v1 + 16) = 1;
    *(_QWORD *)(v1 + 8) = v1;
    *(_QWORD *)v1 = v1;
    *(_QWORD *)(v1 + 32) = v1 + 24;
    *(_QWORD *)(v1 + 24) = v1 + 24;
  }
  PopAcquireWakeSourceSpinLock(&LockHandle);
  v2 = PopPendingWakeInfo;
  if ( PopPendingWakeInfo )
  {
    v6 = PopWakeInfoList;
    *(_QWORD *)PopPendingWakeInfo = PopWakeInfoList;
    *(_QWORD *)(v2 + 8) = &PopWakeInfoList;
    if ( *(__int64 **)(v6 + 8) != &PopWakeInfoList )
      __fastfail(3u);
    PopPendingWakeInfo = 0LL;
    *(_QWORD *)(v6 + 8) = v2;
    v3 = PopWakeInfoCount + 1;
    PopWakeInfoList = v2;
    ++PopWakeInfoCount;
  }
  else
  {
    v2 = PopWakeInfoList;
    v3 = PopWakeInfoCount;
  }
  v4 = PopCurrentWakeInfo;
  if ( PopCurrentWakeInfo )
  {
    *(_QWORD *)PopCurrentWakeInfo = v2;
    *(_QWORD *)(v4 + 8) = &PopWakeInfoList;
    if ( *(__int64 **)(v2 + 8) != &PopWakeInfoList )
      __fastfail(3u);
    PopCurrentWakeInfo = 0LL;
    ++v3;
    *(_QWORD *)(v2 + 8) = v4;
    PopWakeInfoCount = v3;
    PopWakeInfoList = v4;
  }
  if ( v1 )
  {
    PopCurrentWakeInfo = v1;
    if ( v3 == 1 )
    {
      v7 = (_QWORD *)qword_1402DEC88;
      v8 = *(_QWORD **)(qword_1402DEC88 + 8);
      if ( *(__int64 **)qword_1402DEC88 != &PopWakeInfoList || *v8 != qword_1402DEC88 )
        __fastfail(3u);
      qword_1402DEC88 = *(_QWORD *)(qword_1402DEC88 + 8);
      *v8 = &PopWakeInfoList;
      v7[1] = v7;
      *v7 = v7;
      PopWakeInfoDereference((__int64)v7);
      --PopWakeInfoCount;
    }
  }
  PopReleaseWakeSourceSpinLock(&LockHandle);
  result = KeResetEvent(&PopWakeSourceAvailable);
  PopFixedWakeSourceMask = 0;
  return result;
}
