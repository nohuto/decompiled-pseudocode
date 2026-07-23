/*
 * XREFs of MiRemoveFromSystemSpace @ 0x1400FDE10
 * Callers:
 *     MiUnmapImageInSystemSpace @ 0x140508E5C (MiUnmapImageInSystemSpace.c)
 *     MmUnmapViewInSystemSpace @ 0x140508E94 (MmUnmapViewInSystemSpace.c)
 *     MiMapViewInSystemSpace @ 0x140508F34 (MiMapViewInSystemSpace.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiManageSubsectionView @ 0x1400138A0 (MiManageSubsectionView.c)
 *     MiGetAnyMultiplexedVm @ 0x14001CBDC (MiGetAnyMultiplexedVm.c)
 *     RtlAvlRemoveNode @ 0x140028080 (RtlAvlRemoveNode.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     MiUnlockWorkingSetExclusive @ 0x14002E4B0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     MiReleasePtes @ 0x140051250 (MiReleasePtes.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     MiChargeWsles @ 0x1400DF9C0 (MiChargeWsles.c)
 *     MiRemoveMappedPtes @ 0x1400FE0A0 (MiRemoveMappedPtes.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     MiDereferencePerSessionProtos @ 0x140661DDC (MiDereferencePerSessionProtos.c)
 */

void __fastcall MiRemoveFromSystemSpace(__int64 a1, ULONG_PTR a2, int a3)
{
  struct _KTHREAD *CurrentThread; // r13
  __int64 v6; // rsi
  char *AnyMultiplexedVm; // r14
  unsigned __int64 *v8; // rdi
  _BYTE *v9; // rax
  _BYTE *v10; // rbx
  LONG *SharedVm; // rbx
  KIRQL v12; // al
  KIRQL v13; // di
  _QWORD *i; // rbx
  unsigned __int64 v15; // r8
  __int64 v16; // rdx
  void *v17; // r12
  unsigned __int64 v18; // rbp
  volatile signed __int64 *v19; // rdi
  __int64 v20; // rdi
  __int64 v21; // rdx
  unsigned __int64 v22[21]; // [rsp+30h] [rbp-A8h] BYREF
  unsigned __int64 v23; // [rsp+E0h] [rbp+8h]
  __int64 v24; // [rsp+E8h] [rbp+10h]

  CurrentThread = KeGetCurrentThread();
  v6 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( (_UNKNOWN *)a1 == &unk_1403268C0 )
  {
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
    v23 = 0LL;
  }
  else
  {
    AnyMultiplexedVm = (char *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 3008);
    v23 = CurrentThread->ApcState.Process[1].ActiveProcessors.Bitmap[2];
  }
  --CurrentThread->SpecialApcDisable;
  v8 = *(unsigned __int64 **)(a1 + 8);
  v9 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)v8, 0LL, 0);
  v10 = v9;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0LL) )
    ExfAcquirePushLockExclusiveEx(v8, v9, (ULONG_PTR)v8);
  if ( v10 )
    v10[26] |= 1u;
  SharedVm = MiGetSharedVm((__int64)AnyMultiplexedVm);
  v12 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v13 = v12;
  for ( i = *(_QWORD **)(a1 + 16); ; i = (_QWORD *)*i )
  {
    while ( 1 )
    {
      if ( !i )
        KeBugCheckEx(0xD7u, a2, 1uLL, 0LL, 0LL);
      v15 = i[10] & 0xFFFFFFFFFFFFF000uLL;
      if ( a2 < v15 + i[4] )
        break;
      i = (_QWORD *)i[1];
    }
    if ( a2 >= v15 )
      break;
  }
  --*(_DWORD *)(a1 + 24);
  RtlAvlRemoveNode((unsigned __int64 *)(a1 + 16), (__int64)i);
  LOBYTE(v16) = v13;
  MiUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v16);
  v17 = (void *)i[7];
  v18 = i[6] & 0xFFFFFFFFFFFFFFF8uLL;
  v24 = i[6] & 1LL;
  v22[0] = v18;
  MiManageSubsectionView((__int64 *)v22, i + 8, 4);
  v19 = *(volatile signed __int64 **)(a1 + 8);
  if ( (_InterlockedExchangeAdd64(v19, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v19);
  KeAbPostRelease((ULONG_PTR)v19);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  if ( v17 )
    ObfDereferenceObjectWithTag(v17, 0x746C6644u);
  if ( v24 == 1 )
    _InterlockedDecrement((volatile signed __int32 *)(v18 + 92));
  v20 = i[4] >> 12;
  if ( a3 == 1 )
    MiRemoveMappedPtes(i, AnyMultiplexedVm);
  v21 = *((unsigned int *)i + 23);
  if ( (_DWORD)v21 != 0x7FFFF )
    MiDereferencePerSessionProtos(v18, v21);
  if ( (_UNKNOWN *)a1 == &unk_1403268C0 )
  {
    MiReleasePtes((__int64)&unk_140327518, v6, v20);
    MiChargeWsles((ULONG_PTR)AnyMultiplexedVm, -v20, 0);
  }
  else
  {
    MiReleasePtes(v23 + 7952, v6, v20);
  }
  ExFreePoolWithTag(i, 0);
}
