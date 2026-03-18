/*
 * XREFs of MxCopyPage @ 0x140747934
 * Callers:
 *     MiMakeZeroedPageTableRange @ 0x140017CAC (MiMakeZeroedPageTableRange.c)
 * Callees:
 *     MiMakeValidKernelPte @ 0x14004D080 (MiMakeValidKernelPte.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     KeCopyPage @ 0x140157550 (KeCopyPage.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     MxGetPhase0Mapping @ 0x140748514 (MxGetPhase0Mapping.c)
 */

__int64 __fastcall MxCopyPage(__int64 a1, __int64 a2)
{
  unsigned __int64 Phase0Mapping; // rax
  __int64 v4; // r9
  ULONG_PTR v5; // r10
  __int64 v6; // rsi
  unsigned __int64 *v7; // rdi
  unsigned __int64 v8; // rbx
  BOOL v9; // r14d

  Phase0Mapping = MxGetPhase0Mapping();
  v6 = Phase0Mapping;
  if ( !Phase0Mapping )
    KeBugCheckEx(0x1Au, 0x3030305uLL, v5, 0LL, 0LL);
  v7 = (unsigned __int64 *)(((Phase0Mapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v8 = MiMakeValidKernelPte(v5, 4, (unsigned __int64)v7, v4) | 0x42;
  *v7 = v8;
  v9 = MiPteInShadowRange((__int64)v7);
  if ( v9 )
    MiWritePteShadow((__int64)v7, v8);
  KeCopyPage(v6, a2);
  *v7 = 0LL;
  if ( v9 )
    MiWritePteShadow((__int64)v7, 0LL);
  return KeFlushSingleTb(v6, 0, 1u);
}
