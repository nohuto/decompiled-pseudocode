/*
 * XREFs of ExpSaPageGroupDescriptorFree @ 0x140135454
 * Callers:
 *     ExpSaAllocatorOptimizeList @ 0x1401353D0 (ExpSaAllocatorOptimizeList.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     KeQueryMaximumProcessorCountEx @ 0x140087824 (KeQueryMaximumProcessorCountEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     ExpSaBinaryArrayRemove @ 0x140135540 (ExpSaBinaryArrayRemove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall ExpSaPageGroupDescriptorFree(unsigned int *a1)
{
  __int64 MaximumProcessorCount; // rbp
  _BYTE *v3; // rax
  signed __int8 v4; // cf
  _BYTE *v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rdx
  unsigned int v8; // ecx
  void *v9; // rbx

  MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
  v3 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&ExSaPageGroupDescriptorArrayLock, 0LL, 0);
  v4 = _interlockedbittestandset64((volatile signed __int32 *)&ExSaPageGroupDescriptorArrayLock, 0LL);
  v5 = v3;
  if ( v4 )
    ExfAcquirePushLockExclusiveEx(&ExSaPageGroupDescriptorArrayLock, v3, (ULONG_PTR)&ExSaPageGroupDescriptorArrayLock);
  v6 = 0LL;
  if ( v5 )
    v5[26] |= 1u;
  if ( (_DWORD)MaximumProcessorCount )
  {
    do
    {
      v7 = a1[8];
      _BitScanReverse(&v8, v7);
      v9 = *(void **)(*(_QWORD *)(*(_QWORD *)(v6 + ExSaPageArrays) + 8LL * (v8 - 2))
                    + 8LL * ((unsigned int)v7 ^ (1 << v8))
                    + 8);
      ExpSaBinaryArrayRemove(*(_QWORD *)(v6 + ExSaPageArrays), v7);
      ExFreePoolWithTag(v9, 0);
      v6 += 8LL;
      --MaximumProcessorCount;
    }
    while ( MaximumProcessorCount );
  }
  ExpSaBinaryArrayRemove(ExSaPageGroupDescriptorArray, a1[8]);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExSaPageGroupDescriptorArrayLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExSaPageGroupDescriptorArrayLock);
  KeAbPostRelease((ULONG_PTR)&ExSaPageGroupDescriptorArrayLock);
  ExFreePoolWithTag(a1, 0);
}
