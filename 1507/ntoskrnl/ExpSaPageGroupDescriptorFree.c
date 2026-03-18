/*
 * XREFs of ExpSaPageGroupDescriptorFree @ 0x140266300
 * Callers:
 *     ExpSaAllocatorOptimizeList @ 0x1402661EC (ExpSaAllocatorOptimizeList.c)
 * Callees:
 *     KeQueryMaximumProcessorCountEx @ 0x140014408 (KeQueryMaximumProcessorCountEx.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     ExpSaBinaryArrayRemove @ 0x1402662C4 (ExpSaBinaryArrayRemove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

void __fastcall ExpSaPageGroupDescriptorFree(unsigned int *a1)
{
  __int64 MaximumProcessorCount; // rbp
  __int64 v3; // r9
  __int64 v4; // rax
  __int64 v5; // r9
  signed __int8 v6; // cf
  __int64 v7; // rbx
  __int64 v8; // rdi
  unsigned int v9; // edx
  unsigned int v10; // ecx
  void *v11; // rbx

  MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
  v4 = KeAbPreAcquire((ULONG_PTR)&ExSaPageGroupDescriptorArrayLock, 0LL, 0LL, v3);
  v6 = _interlockedbittestandset64((volatile signed __int32 *)&ExSaPageGroupDescriptorArrayLock, 0LL);
  v7 = v4;
  if ( v6 )
    ExfAcquirePushLockExclusiveEx(
      &ExSaPageGroupDescriptorArrayLock,
      v4,
      (ULONG_PTR)&ExSaPageGroupDescriptorArrayLock,
      v5);
  v8 = 0LL;
  if ( v7 )
    *(_BYTE *)(v7 + 26) |= 1u;
  if ( (_DWORD)MaximumProcessorCount )
  {
    do
    {
      v9 = a1[8];
      _BitScanReverse(&v10, v9);
      v11 = *(void **)(*(_QWORD *)(*(_QWORD *)(v8 + ExSaPageArrays) + 8LL * (v10 - 2)) + 8LL * (v9 ^ (1 << v10)) + 8);
      ExpSaBinaryArrayRemove(*(_QWORD *)(v8 + ExSaPageArrays), v9);
      ExFreePoolWithTag(v11, 0);
      v8 += 8LL;
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
