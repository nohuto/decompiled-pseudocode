/*
 * XREFs of ExpAllocateFannedOutPushLock @ 0x14012CC3C
 * Callers:
 *     ExpTryExpandAutoExpandPushLock @ 0x14012CBD4 (ExpTryExpandAutoExpandPushLock.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeQueryMaximumProcessorCountEx @ 0x14009CFE0 (KeQueryMaximumProcessorCountEx.c)
 *     ExSaDecodeHandleForIndex @ 0x14012CDD8 (ExSaDecodeHandleForIndex.c)
 *     ExpSaAllocatorAllocate @ 0x14012CE14 (ExpSaAllocatorAllocate.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 */

__int64 __fastcall ExpAllocateFannedOutPushLock(__int64 a1, char a2)
{
  ULONG_PTR v3; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rbx
  ULONG v6; // edi
  ULONG MaximumProcessorCount; // esi
  _QWORD *v8; // rax

  v3 = ExSaNonPagedSlotAllocator;
  CurrentThread = KeGetCurrentThread();
  if ( (a2 & 1) == 0 )
    v3 = ExSaPagedSlotAllocator;
  --CurrentThread->SpecialApcDisable;
  v5 = ExpSaAllocatorAllocate(v3);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v5 != -1 )
  {
    v6 = 0;
    MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
    if ( MaximumProcessorCount )
    {
      do
      {
        v8 = (_QWORD *)ExSaDecodeHandleForIndex(v5, v6++);
        *v8 = 0LL;
        v8[1] = a1;
      }
      while ( v6 < MaximumProcessorCount );
    }
  }
  return v5;
}
