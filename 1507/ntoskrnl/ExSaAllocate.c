/*
 * XREFs of ExSaAllocate @ 0x14015BA4C
 * Callers:
 *     ExpAllocateFannedOutPushLock @ 0x14015B9A8 (ExpAllocateFannedOutPushLock.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExpSaAllocatorAllocate @ 0x14015BAD0 (ExpSaAllocatorAllocate.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 */

__int64 __fastcall ExSaAllocate(__int64 a1, unsigned int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v3; // rcx
  __int64 v4; // rax
  struct _KTHREAD *v5; // rcx
  __int64 v6; // rbx

  if ( (a2 & 0xFFFFFFFE) != 0 )
    KeBugCheckEx(0x16Du, a2, 0LL, 0LL, 0LL);
  CurrentThread = KeGetCurrentThread();
  v3 = ExSaNonPagedSlotAllocator;
  if ( (a2 & 1) != 0 )
    v3 = ExSaPagedSlotAllocator;
  --CurrentThread->SpecialApcDisable;
  v4 = ExpSaAllocatorAllocate(v3);
  v5 = KeGetCurrentThread();
  v6 = v4;
  LOWORD(v4) = v5->SpecialApcDisable + 1;
  v5->SpecialApcDisable = v4;
  if ( !(_WORD)v4 && ($CD287064E7C9F7953DE243E927CFCB99 *)v5->ApcState.ApcListHead[0].Flink != &v5->152 )
    KiCheckForKernelApcDelivery();
  return v6;
}
