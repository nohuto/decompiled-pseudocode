/*
 * XREFs of MiGetContainingPageTable @ 0x140225A80
 * Callers:
 *     MiInitializeReadInProgressPfn @ 0x1400363F0 (MiInitializeReadInProgressPfn.c)
 *     MiCopyOnWriteEx @ 0x140058250 (MiCopyOnWriteEx.c)
 *     MiInitializePfn @ 0x140069490 (MiInitializePfn.c)
 *     MiDeletePteList @ 0x140093740 (MiDeletePteList.c)
 *     MmUnmapViewInSystemCache @ 0x140098640 (MmUnmapViewInSystemCache.c)
 *     MiDeletePteRun @ 0x1400C3A20 (MiDeletePteRun.c)
 *     MiInitializeTransitionPfn @ 0x1400E2B5C (MiInitializeTransitionPfn.c)
 *     MiSwitchToTransition @ 0x140219964 (MiSwitchToTransition.c)
 *     MmAllocateSpecialPool @ 0x14021F6C4 (MmAllocateSpecialPool.c)
 *     MiConvertPrivateToProto @ 0x140228698 (MiConvertPrivateToProto.c)
 *     MiConvertStandbyToProto @ 0x14022926C (MiConvertStandbyToProto.c)
 *     MiResolveProtoCombine @ 0x14022B144 (MiResolveProtoCombine.c)
 *     MxZeroPageTablePfns @ 0x1407C7B48 (MxZeroPageTablePfns.c)
 * Callees:
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 */

__int64 __fastcall MiGetContainingPageTable(unsigned __int64 a1)
{
  __int64 v1; // r10
  unsigned __int64 v2; // r9
  __int64 *v3; // rcx
  unsigned __int64 PteShadow; // rax
  unsigned __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0x90482413000LL;
  v2 = 2040LL;
  v3 = (__int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  PteShadow = *v3;
  if ( (unsigned __int64)(v3 + 0x12090482600LL) <= 0x7F8 )
    PteShadow = MiReadPteShadow((__int64)v3, *v3);
  v6 = PteShadow;
  if ( (unsigned __int64)&v6 + v1 <= v2 )
    PteShadow = MiReadPteShadow((__int64)&v6, PteShadow);
  return (PteShadow >> 12) & 0xFFFFFFFFFLL;
}
