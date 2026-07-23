/*
 * XREFs of MiLockProbePacketWorkingSet @ 0x14009A2A8
 * Callers:
 *     MiProbeLeafFrame @ 0x14002F940 (MiProbeLeafFrame.c)
 *     MiInitializeProbePacketVm @ 0x14009A124 (MiInitializeProbePacketVm.c)
 *     MiSplitReducedCommitClonePage @ 0x1401E2D84 (MiSplitReducedCommitClonePage.c)
 * Callees:
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockShared @ 0x1400E9040 (ExAcquireSpinLockShared.c)
 */

void __fastcall MiLockProbePacketWorkingSet(__int64 a1)
{
  PVOID v2; // rcx
  LONG *SharedVm; // rbx
  KIRQL v4; // al
  bool v5; // zf
  __int64 v6; // rax

  *(_WORD *)(a1 + 60) = 0;
  *(_QWORD *)(a1 + 112) = 0LL;
  v2 = *(PVOID *)(a1 + 88);
  if ( v2 == MmBadPointer )
  {
    *(_BYTE *)(a1 + 80) = 17;
  }
  else
  {
    SharedVm = MiGetSharedVm((__int64)v2);
    if ( *(_BYTE *)(a1 + 62) == 1 )
    {
      v4 = ExAcquireSpinLockExclusive(SharedVm);
      SharedVm[1] = 0;
    }
    else
    {
      v4 = ExAcquireSpinLockShared(SharedVm);
      if ( SharedVm[1] )
        _InterlockedExchange(SharedVm + 1, 0);
    }
    v5 = *(_DWORD *)(a1 + 56) == 1;
    *(_BYTE *)(a1 + 80) = v4;
    if ( v5 )
    {
      v6 = *(_QWORD *)(a1 + 72);
      if ( *(_QWORD *)(v6 + 1032) )
        *(_BYTE *)(a1 + 60) = 1;
      if ( *(_QWORD *)(v6 + 912) )
        *(_BYTE *)(a1 + 61) = 1;
    }
  }
}
