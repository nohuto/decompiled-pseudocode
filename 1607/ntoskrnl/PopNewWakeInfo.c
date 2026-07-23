/*
 * XREFs of PopNewWakeInfo @ 0x1403D0BE4
 * Callers:
 *     NtSetSystemPowerState @ 0x1403CF658 (NtSetSystemPowerState.c)
 * Callees:
 *     KeResetEvent @ 0x14002E1B0 (KeResetEvent.c)
 *     PopReleaseWakeSourceSpinLock @ 0x140114E84 (PopReleaseWakeSourceSpinLock.c)
 *     PopAcquireWakeSourceSpinLock @ 0x140114E8C (PopAcquireWakeSourceSpinLock.c)
 *     PopWakeInfoDereference @ 0x140125D7C (PopWakeInfoDereference.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

LONG PopNewWakeInfo()
{
  PVOID PoolWithTag; // rax
  __int64 v1; // rbx
  _QWORD *v2; // rax
  int v3; // ecx
  _QWORD *v4; // rdx
  LONG result; // eax
  __int64 v6; // rcx
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
  v2 = (_QWORD *)PopPendingWakeInfo;
  if ( PopPendingWakeInfo )
  {
    v6 = PopWakeInfoList;
    if ( *(__int64 **)(PopWakeInfoList + 8) != &PopWakeInfoList )
      __fastfail(3u);
    PopPendingWakeInfo = 0LL;
    *v2 = PopWakeInfoList;
    v2[1] = &PopWakeInfoList;
    *(_QWORD *)(v6 + 8) = v2;
    v3 = PopWakeInfoCount + 1;
    PopWakeInfoList = (__int64)v2;
    ++PopWakeInfoCount;
  }
  else
  {
    v2 = (_QWORD *)PopWakeInfoList;
    v3 = PopWakeInfoCount;
  }
  v4 = (_QWORD *)PopCurrentWakeInfo;
  if ( PopCurrentWakeInfo )
  {
    if ( (__int64 *)v2[1] != &PopWakeInfoList )
      __fastfail(3u);
    PopCurrentWakeInfo = 0LL;
    *v4 = v2;
    ++v3;
    v4[1] = &PopWakeInfoList;
    v2[1] = v4;
    PopWakeInfoCount = v3;
    PopWakeInfoList = (__int64)v4;
  }
  if ( v1 )
  {
    PopCurrentWakeInfo = v1;
    if ( v3 == 1 )
    {
      v7 = (_QWORD *)qword_140304228;
      v8 = *(_QWORD **)(qword_140304228 + 8);
      if ( *(__int64 **)qword_140304228 != &PopWakeInfoList || *v8 != qword_140304228 )
        __fastfail(3u);
      qword_140304228 = *(_QWORD *)(qword_140304228 + 8);
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
