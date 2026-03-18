/*
 * XREFs of ViIsActiveChannelWcb @ 0x14025A7A8
 * Callers:
 *     VfAllocateAdapterChannel @ 0x14073A974 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x14073AB94 (VfAllocateAdapterChannelEx.c)
 *     ViAdapterCallback @ 0x14073CEBC (ViAdapterCallback.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

char __fastcall ViIsActiveChannelWcb(__int64 a1, __int64 a2)
{
  volatile signed __int32 *v3; // rbx
  char v5; // di
  unsigned __int8 CurrentIrql; // bp
  __int64 i; // rax
  __int64 v8; // rax
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v3 = (volatile signed __int32 *)(a1 + 144);
  v5 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented((volatile signed __int32 *)(a1 + 144));
  }
  else if ( _interlockedbittestandset64(v3, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(a1 + 144));
  }
  for ( i = *(_QWORD *)(a1 + 128); ; i = *(_QWORD *)(v8 + 72) )
  {
    v8 = i - 72;
    if ( a1 + 128 == v8 + 72 )
      break;
    if ( a2 == v8 )
    {
      v5 = 1;
      break;
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented((volatile signed __int64 *)v3, retaddr);
  else
    _InterlockedAnd64((volatile signed __int64 *)v3, 0LL);
  __writecr8(CurrentIrql);
  return v5;
}
