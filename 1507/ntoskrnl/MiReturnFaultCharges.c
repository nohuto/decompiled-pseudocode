/*
 * XREFs of MiReturnFaultCharges @ 0x14013019C
 * Callers:
 *     MiPfPutPagesInTransition @ 0x1400356F0 (MiPfPutPagesInTransition.c)
 *     MiResolveMappedFileFault @ 0x14005D550 (MiResolveMappedFileFault.c)
 *     MiPrivateFixup @ 0x14007991C (MiPrivateFixup.c)
 *     MiObtainFaultCharges @ 0x14008F350 (MiObtainFaultCharges.c)
 *     MiMigratePfn @ 0x1400B9D20 (MiMigratePfn.c)
 *     MiGetPageForHeader @ 0x1400E1178 (MiGetPageForHeader.c)
 *     MiResolvePageFileFault @ 0x140145F70 (MiResolvePageFileFault.c)
 *     MiSwitchToTransition @ 0x140219964 (MiSwitchToTransition.c)
 *     MiFreeReadListPages @ 0x14049D6C4 (MiFreeReadListPages.c)
 *     MiPfPrepareSequentialReadList @ 0x14049D9A0 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x14049E0C0 (MiPfPrepareReadList.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x1400380DC (MiReturnResidentAvailable.c)
 *     MiReturnCommit @ 0x1400B7E40 (MiReturnCommit.c)
 */

__int64 __fastcall MiReturnFaultCharges(__int64 a1, unsigned __int64 a2, char a3)
{
  __int64 result; // rax

  if ( (__int16 *)a1 == MiSystemPartition )
  {
    MiReturnResidentAvailable(a2);
    result = _InterlockedExchangeAdd64(&qword_14034FA80, a2);
  }
  else
  {
    result = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 5568), a2);
  }
  if ( (a3 & 1) != 0 )
    return MiReturnCommit(a1, a2);
  return result;
}
