/*
 * XREFs of MiBeginProcessClean @ 0x140075668
 * Callers:
 *     MiReAcquireOutSwappedProcessCommit @ 0x1401E045C (MiReAcquireOutSwappedProcessCommit.c)
 *     MmCleanProcessAddressSpace @ 0x14045DCCC (MmCleanProcessAddressSpace.c)
 * Callees:
 *     LOCK_ADDRESS_SPACE @ 0x14002BF10 (LOCK_ADDRESS_SPACE.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x14002CB50 (UNLOCK_ADDRESS_SPACE.c)
 *     MiUnlockWorkingSetExclusive @ 0x14002E4B0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     MiOutlawInswaps @ 0x14007574C (MiOutlawInswaps.c)
 *     MiFreeWorkingSetSwapContext @ 0x1404D37C0 (MiFreeWorkingSetSwapContext.c)
 */

__int64 __fastcall MiBeginProcessClean(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  LONG *SharedVm; // rbx
  KIRQL v6; // al
  unsigned int v7; // esi
  __int64 v8; // rdx
  unsigned __int64 v9; // rbx
  int *v11; // rax

  v2 = a2 + 1280;
  if ( (*(_DWORD *)(a2 + 772) & 0x20) != 0 )
    return 1LL;
  LOCK_ADDRESS_SPACE(a1, a2);
  SharedVm = MiGetSharedVm(v2);
  v6 = ExAcquireSpinLockExclusive(SharedVm);
  v7 = 0;
  SharedVm[1] = 0;
  _InterlockedOr((volatile signed __int32 *)(a2 + 772), 0x20u);
  v8 = HIBYTE(*(_DWORD *)(v2 + 184));
  LOBYTE(v8) = HIBYTE(*(_DWORD *)(v2 + 184)) | 2;
  if ( (*(_BYTE *)(v2 + 187) & 0xC0) != 0xC0 )
    LOBYTE(v8) = HIBYTE(*(_DWORD *)(v2 + 184)) & 0x3D | 2;
  *(_BYTE *)(v2 + 187) = v8;
  LOBYTE(v8) = v6;
  MiUnlockWorkingSetExclusive(v2, v8);
  UNLOCK_ADDRESS_SPACE(a1, a2);
  v9 = MiOutlawInswaps(a2);
  if ( v9 > 2 )
  {
    v11 = MiPartitionIdToPointer(*(_WORD *)(a2 + 1444));
    MiFreeWorkingSetSwapContext(v11, v9);
  }
  LOBYTE(v7) = v9 != 0;
  return v7;
}
