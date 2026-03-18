/*
 * XREFs of MxFillPhysicalPage @ 0x140748414
 * Callers:
 *     MiInitializeSystemPageTable @ 0x140017F70 (MiInitializeSystemPageTable.c)
 *     MiZeroPfn @ 0x140131BE0 (MiZeroPfn.c)
 *     MiInitializeDummyPages @ 0x1407460E4 (MiInitializeDummyPages.c)
 *     MxMapVa @ 0x140747468 (MxMapVa.c)
 * Callees:
 *     MiMakeValidKernelPte @ 0x14004D080 (MiMakeValidKernelPte.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     KeZeroPages @ 0x140157480 (KeZeroPages.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     MxGetPhase0Mapping @ 0x140748514 (MxGetPhase0Mapping.c)
 */

__int64 __fastcall MxFillPhysicalPage(ULONG_PTR BugCheckParameter2, unsigned __int64 a2)
{
  unsigned __int64 Phase0Mapping; // rax
  __int64 v5; // r9
  void *v6; // rsi
  unsigned __int64 *v7; // rbx
  unsigned __int64 v8; // rdi
  BOOL v9; // r14d

  Phase0Mapping = MxGetPhase0Mapping();
  v6 = (void *)Phase0Mapping;
  if ( !Phase0Mapping )
    KeBugCheckEx(0x1Au, 0x3030305uLL, BugCheckParameter2, 0LL, 0LL);
  v7 = (unsigned __int64 *)(((Phase0Mapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v8 = MiMakeValidKernelPte(BugCheckParameter2, 4, (unsigned __int64)v7, v5) | 0x42;
  *v7 = v8;
  v9 = MiPteInShadowRange((__int64)v7);
  if ( v9 )
    MiWritePteShadow((__int64)v7, v8);
  if ( a2 )
    memset64(v6, a2, 0x200uLL);
  else
    KeZeroPages((int *)v6, 0x1000uLL);
  *v7 = 0LL;
  if ( v9 )
    MiWritePteShadow((__int64)v7, 0LL);
  return KeFlushSingleTb((__int64)v6, 0, 1u);
}
