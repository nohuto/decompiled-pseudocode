/*
 * XREFs of MxFillPhysicalPage @ 0x140798170
 * Callers:
 *     MiInitializeSystemPageTable @ 0x140020FBC (MiInitializeSystemPageTable.c)
 *     MiZeroPhysicalPage @ 0x14010A488 (MiZeroPhysicalPage.c)
 *     MiInitializeDummyPages @ 0x140796198 (MiInitializeDummyPages.c)
 *     MxMapVa @ 0x14079747C (MxMapVa.c)
 * Callees:
 *     MiMakeValidKernelPte @ 0x140034D10 (MiMakeValidKernelPte.c)
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
 *     KeZeroPages @ 0x140161E50 (KeZeroPages.c)
 *     MiPteInShadowRange @ 0x1401EF3B8 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF658 (MiWritePteShadow.c)
 *     MxGetPhase0Mapping @ 0x14079826C (MxGetPhase0Mapping.c)
 */

__int64 __fastcall MxFillPhysicalPage(ULONG_PTR BugCheckParameter2, unsigned __int64 a2)
{
  unsigned __int64 Phase0Mapping; // rax
  void *v5; // rsi
  unsigned __int64 *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  BOOL v9; // r14d

  Phase0Mapping = MxGetPhase0Mapping();
  v5 = (void *)Phase0Mapping;
  if ( !Phase0Mapping )
    KeBugCheckEx(0x1Au, 0x3030305uLL, BugCheckParameter2, 0LL, 0LL);
  v6 = (unsigned __int64 *)(((Phase0Mapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  *v6 = MiMakeValidKernelPte(BugCheckParameter2, 4, (unsigned __int64)v6) | 0x42;
  v9 = MiPteInShadowRange((unsigned __int64)v6);
  if ( v9 )
    MiWritePteShadow(v8, v7);
  if ( a2 )
    memset64(v5, a2, 0x200uLL);
  else
    KeZeroPages((int *)v5, 0x1000uLL);
  *v6 = 0LL;
  if ( v9 )
    MiWritePteShadow((__int64)v6, 0LL);
  return KeFlushSingleTb((unsigned __int64)v5, 0, 1u);
}
