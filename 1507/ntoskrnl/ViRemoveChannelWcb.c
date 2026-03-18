/*
 * XREFs of ViRemoveChannelWcb @ 0x14025A86C
 * Callers:
 *     VfCancelAdapterChannel @ 0x14073B648 (VfCancelAdapterChannel.c)
 *     VfFreeAdapterChannel @ 0x14073B9A4 (VfFreeAdapterChannel.c)
 *     VfFreeMapRegisters @ 0x14073BC54 (VfFreeMapRegisters.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

__int64 __fastcall ViRemoveChannelWcb(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  char v7; // r15
  volatile signed __int32 *v9; // rsi
  unsigned __int8 CurrentIrql; // r12
  __int64 v11; // rcx
  __int64 i; // rdi
  __int64 v13; // rdi
  __int64 v14; // rdx
  _QWORD *v15; // rcx
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  v3 = 0LL;
  v7 = 0;
  if ( a2 && a3 )
    return 0LL;
  v9 = (volatile signed __int32 *)(a1 + 144);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented((volatile signed __int32 *)(a1 + 144));
  }
  else if ( _interlockedbittestandset64(v9, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(a1 + 144));
  }
  v11 = a1 + 128;
  for ( i = *(_QWORD *)(a1 + 128); ; i = *(_QWORD *)(v13 + 72) )
  {
    v13 = i - 72;
    if ( v11 == v13 + 72 )
      break;
    if ( a2 && (*(_QWORD *)(v13 + 96) == a2 || *(_QWORD *)(v13 + 88) == a2)
      || a3 && *(_QWORD *)(v13 + 40) == a3
      || *(_DWORD *)(v13 + 52) <= 1u )
    {
      v14 = *(_QWORD *)(v13 + 72);
      v15 = *(_QWORD **)(v13 + 80);
      if ( *(_QWORD *)(v14 + 8) != v13 + 72 || *v15 != v13 + 72 )
        __fastfail(3u);
      *v15 = v14;
      v7 = 1;
      *(_QWORD *)(v14 + 8) = v15;
      break;
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented((volatile signed __int64 *)v9, retaddr);
  else
    _InterlockedAnd64((volatile signed __int64 *)v9, 0LL);
  __writecr8(CurrentIrql);
  if ( v7 == 1 )
    return v13;
  return v3;
}
