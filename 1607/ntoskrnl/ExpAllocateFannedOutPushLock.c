/*
 * XREFs of ExpAllocateFannedOutPushLock @ 0x140133948
 * Callers:
 *     ExpTryExpandAutoExpandPushLock @ 0x1401338E0 (ExpTryExpandAutoExpandPushLock.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeQueryMaximumProcessorCountEx @ 0x140087824 (KeQueryMaximumProcessorCountEx.c)
 *     ExpSaAllocatorAllocate @ 0x140133BCC (ExpSaAllocatorAllocate.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

unsigned __int64 __fastcall ExpAllocateFannedOutPushLock(__int64 a1, char a2)
{
  ULONG_PTR v3; // rcx
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v5; // rbx
  ULONG MaximumProcessorCount; // eax
  __int64 *v7; // r11
  unsigned int v8; // r9d
  __int64 v9; // r10
  __int64 v10; // rdi
  __int64 v11; // rax
  unsigned int v12; // ecx
  __int64 v13; // rdx

  v3 = ExSaNonPagedSlotAllocator;
  CurrentThread = KeGetCurrentThread();
  if ( (a2 & 1) == 0 )
    v3 = ExSaPagedSlotAllocator;
  --CurrentThread->SpecialApcDisable;
  v5 = ExpSaAllocatorAllocate(v3);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v5 != -1LL )
  {
    MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
    if ( MaximumProcessorCount )
    {
      v7 = (__int64 *)ExSaPageArrays;
      v8 = ((unsigned int)v5 >> 13) & 0x3FFFF;
      v9 = (v5 >> 4) & 0x1FF;
      v10 = MaximumProcessorCount;
      do
      {
        v11 = *v7;
        _BitScanReverse(&v12, v8);
        ++v7;
        v13 = *(_QWORD *)(*(_QWORD *)(v11 + 8LL * (v12 - 2)) + 8LL * (v8 ^ (1 << v12)) + 8);
        *(_QWORD *)(v13 + 8 * v9) = 0LL;
        *(_QWORD *)(v13 + 8 * v9 + 8) = a1;
        --v10;
      }
      while ( v10 );
    }
  }
  return v5;
}
