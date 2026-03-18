/*
 * XREFs of MxCopyPage @ 0x1407977D0
 * Callers:
 *     MiMakeZeroedPageTableRange @ 0x140020CC8 (MiMakeZeroedPageTableRange.c)
 * Callees:
 *     MiMakeValidKernelPte @ 0x140034D10 (MiMakeValidKernelPte.c)
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
 *     KeCopyPage @ 0x140161F20 (KeCopyPage.c)
 *     MiPteInShadowRange @ 0x1401EF3B8 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF658 (MiWritePteShadow.c)
 *     MxGetPhase0Mapping @ 0x14079826C (MxGetPhase0Mapping.c)
 */

__int64 __fastcall MxCopyPage(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  unsigned __int64 Phase0Mapping; // rax
  unsigned __int64 v5; // rdi
  unsigned __int64 *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  BOOL v9; // esi

  Phase0Mapping = MxGetPhase0Mapping();
  v5 = Phase0Mapping;
  if ( !Phase0Mapping )
    KeBugCheckEx(0x1Au, 0x3030305uLL, BugCheckParameter2, 0LL, 0LL);
  v6 = (unsigned __int64 *)(((Phase0Mapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  *v6 = MiMakeValidKernelPte(BugCheckParameter2, 4, (unsigned __int64)v6) | 0x42;
  v9 = MiPteInShadowRange((unsigned __int64)v6);
  if ( v9 )
    MiWritePteShadow(v8, v7);
  KeCopyPage(v5, a2);
  *v6 = 0LL;
  if ( v9 )
    MiWritePteShadow((__int64)v6, 0LL);
  return KeFlushSingleTb(v5, 0, 1u);
}
