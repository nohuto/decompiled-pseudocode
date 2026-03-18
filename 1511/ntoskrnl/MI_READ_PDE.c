/*
 * XREFs of MI_READ_PDE @ 0x14006DE04
 * Callers:
 *     MiInitializeTransitionPfn @ 0x140011764 (MiInitializeTransitionPfn.c)
 *     MiTrimSystemImagePages @ 0x14001A618 (MiTrimSystemImagePages.c)
 *     MiDeleteSystemPagableVm @ 0x14003C140 (MiDeleteSystemPagableVm.c)
 *     MiSwapWslEntries @ 0x140057020 (MiSwapWslEntries.c)
 *     MiFreeWsleList @ 0x14006C330 (MiFreeWsleList.c)
 *     MiCopyOnWriteEx @ 0x14006EE60 (MiCopyOnWriteEx.c)
 *     MiExchangeWsle @ 0x140106588 (MiExchangeWsle.c)
 *     MiSwitchToTransition @ 0x1401D6E6C (MiSwitchToTransition.c)
 *     MmAllocateSpecialPool @ 0x1401DAD04 (MmAllocateSpecialPool.c)
 * Callees:
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MI_READ_PDE(_BYTE *a1)
{
  ULONG_PTR v3; // rax

  if ( (*a1 & 1) == 0 )
  {
    v3 = MI_READ_PTE_LOCK_FREE(a1);
    KeBugCheckEx(0x1Au, 0x61940uLL, (__int64)((_QWORD)a1 << 25) >> 16, v3, 0LL);
  }
  return MI_READ_PTE_LOCK_FREE(a1);
}
