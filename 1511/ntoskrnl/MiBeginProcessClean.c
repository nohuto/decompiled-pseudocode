/*
 * XREFs of MiBeginProcessClean @ 0x14001BE64
 * Callers:
 *     MiReAcquireOutSwappedProcessCommit @ 0x1401D03B4 (MiReAcquireOutSwappedProcessCommit.c)
 *     MmCleanProcessAddressSpace @ 0x1403E7980 (MmCleanProcessAddressSpace.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiOutlawInswaps @ 0x14001BF20 (MiOutlawInswaps.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x14002E2D0 (UNLOCK_ADDRESS_SPACE.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     LOCK_ADDRESS_SPACE @ 0x1400622C0 (LOCK_ADDRESS_SPACE.c)
 *     MiPartitionIdToPointer @ 0x1400AA2C0 (MiPartitionIdToPointer.c)
 *     MiFreeWorkingSetSwapContext @ 0x1403B5964 (MiFreeWorkingSetSwapContext.c)
 */

_BOOL8 __fastcall MiBeginProcessClean(__int64 a1, __int64 a2)
{
  KIRQL v4; // al
  __int64 v5; // rdx
  unsigned __int64 v6; // rdi
  __int64 v8; // rax

  if ( (*(_DWORD *)(a2 + 772) & 0x20) != 0 )
    return 1LL;
  LOCK_ADDRESS_SPACE(a1, a2);
  v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a2 + 1280));
  _InterlockedOr((volatile signed __int32 *)(a2 + 772), 0x20u);
  *(_BYTE *)(a2 + 1499) |= 2u;
  if ( (*(_BYTE *)(a2 + 1499) & 0xC0) != 0xC0 )
    *(_BYTE *)(a2 + 1499) &= 0x3Fu;
  LOBYTE(v5) = v4;
  MiUnlockWorkingSetExclusive(a2 + 1280, v5);
  UNLOCK_ADDRESS_SPACE(a1, a2);
  v6 = MiOutlawInswaps(a2);
  if ( v6 > 2 )
  {
    v8 = MiPartitionIdToPointer(*(unsigned __int16 *)(a2 + 1460));
    MiFreeWorkingSetSwapContext(v8, v6);
  }
  return v6 != 0;
}
