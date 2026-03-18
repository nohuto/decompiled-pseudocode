/*
 * XREFs of MiIsRangeFullyCommitted @ 0x140474834
 * Callers:
 *     MmSecureVirtualMemoryAgainstWrites @ 0x140474640 (MmSecureVirtualMemoryAgainstWrites.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     MiGetProtoPteAddress @ 0x1400BF2B0 (MiGetProtoPteAddress.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     MiPteInShadowRange @ 0x140225548 (MiPteInShadowRange.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 */

__int64 __fastcall MiIsRangeFullyCommitted(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 *ProtoPteAddress; // rdi
  __int64 v7; // r9
  __int64 v8; // r13
  struct _KTHREAD *CurrentThread; // r15
  unsigned int v10; // r12d
  __int64 v11; // rbp
  unsigned __int64 *v12; // rbp
  __int64 v13; // rbx
  __int64 v14; // r9
  unsigned int *v15; // rsi
  unsigned __int64 v16; // r14
  __int64 PteShadow; // rbx
  __int16 v18; // cx
  unsigned int *v19; // [rsp+60h] [rbp+8h] BYREF
  unsigned int *v20; // [rsp+68h] [rbp+10h] BYREF

  ProtoPteAddress = (__int64 *)MiGetProtoPteAddress(a1, a2 >> 12, 5u, &v20);
  if ( !ProtoPteAddress )
    return 0LL;
  v8 = MiGetProtoPteAddress(a1, a3 >> 12, 5u, &v19);
  if ( !v8 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  v10 = 1;
  v11 = ***(_QWORD ***)(a1 + 72);
  --CurrentThread->SpecialApcDisable;
  v12 = (unsigned __int64 *)(v11 + 40);
  v13 = KeAbPreAcquire((ULONG_PTR)v12, 0LL, 0LL, v7);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v12, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v12, v13, (ULONG_PTR)v12, v14);
  if ( v13 )
    *(_BYTE *)(v13 + 26) |= 1u;
  v15 = v20;
  while ( 1 )
  {
    v16 = v15 == v19 ? v8 : *((_QWORD *)v15 + 1) + 8LL * (v15[11] - 1);
    while ( (unsigned __int64)ProtoPteAddress <= v16 )
    {
      PteShadow = *ProtoPteAddress;
      if ( MiPteInShadowRange((__int64)ProtoPteAddress) )
        PteShadow = MiReadPteShadow((__int64)ProtoPteAddress, PteShadow);
      if ( !PteShadow )
      {
        v10 = 0;
        break;
      }
      ++ProtoPteAddress;
    }
    if ( v15 == v19 )
      break;
    v15 = (unsigned int *)*((_QWORD *)v15 + 2);
    v20 = v15;
    ProtoPteAddress = (__int64 *)*((_QWORD *)v15 + 1);
    if ( !ProtoPteAddress )
    {
      v10 = 0;
      break;
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v12, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)v12);
  KeAbPostRelease((ULONG_PTR)v12);
  v18 = CurrentThread->SpecialApcDisable + 1;
  CurrentThread->SpecialApcDisable = v18;
  if ( !v18 && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  return v10;
}
