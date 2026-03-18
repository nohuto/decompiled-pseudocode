/*
 * XREFs of MiScrubAweMappedPage @ 0x1401E5AB4
 * Callers:
 *     MiScrubProcesses @ 0x14062CF2C (MiScrubProcesses.c)
 * Callees:
 *     KeFlushSingleTb @ 0x1400076D8 (KeFlushSingleTb.c)
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     MiScrubPage @ 0x1401E5FC4 (MiScrubPage.c)
 */

__int64 __fastcall MiScrubAweMappedPage(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // r8
  BOOL v12; // ebp
  __int64 v13; // rbx
  unsigned int v14; // edi
  KIRQL v16; // [rsp+50h] [rbp+8h]

  v4 = 48 * a2 - 0x58000000000LL;
  v5 = a1 << 25 >> 16;
  v9 = MI_READ_PTE_LOCK_FREE((__int64 *)a1);
  v16 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a4 + 1280));
  if ( *(_WORD *)(v4 + 32) == 2 )
  {
    *(_QWORD *)a1 = 0LL;
    v12 = MiPteInShadowRange(a1);
    if ( v12 )
      MiWritePteShadow(a1, 0LL);
    KeFlushSingleTb(v5, 1u, 0);
    v13 = v9 | 0x20;
    v14 = MiScrubPage(a3, *(_QWORD *)(a3 + 24), v4);
    *(_QWORD *)a1 = v13;
    if ( v12 )
      MiWritePteShadow(a1, v13);
  }
  else
  {
    v14 = 0;
  }
  LOBYTE(v10) = v16;
  MiUnlockWorkingSetExclusive(a4 + 1280, v10, v11);
  return v14;
}
