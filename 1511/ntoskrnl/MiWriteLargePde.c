/*
 * XREFs of MiWriteLargePde @ 0x1401E2CA4
 * Callers:
 *     MiMapViewOfDataSection @ 0x140416C00 (MiMapViewOfDataSection.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MI_INCREMENT_USED_PTES_BY_HANDLE_CLUSTER @ 0x14001EC70 (MI_INCREMENT_USED_PTES_BY_HANDLE_CLUSTER.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     MiLockPageAtDpcInline @ 0x1400A5010 (MiLockPageAtDpcInline.c)
 *     MiMakeSystemAddressValid @ 0x1400B82F0 (MiMakeSystemAddressValid.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

__int64 __fastcall MiWriteLargePde(__int64 a1, unsigned __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // rsi
  KIRQL v7; // bp
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // r8

  v4 = a1 + 1280;
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1280));
  MiMakeSystemAddressValid(a2, 0LL, a4, v7, 1);
  v8 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) - 0x58000000000LL;
  MiLockPageAtDpcInline(v8, v9, v10);
  *(_QWORD *)(v8 + 24) ^= (*(_QWORD *)(v8 + 24) ^ (*(_QWORD *)(v8 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MI_INCREMENT_USED_PTES_BY_HANDLE_CLUSTER(v8, 1u);
  *(_QWORD *)a2 = a3;
  if ( MiPteInShadowRange(a2) )
    MiWritePteShadow(a2, a3);
  LOBYTE(v11) = v7;
  return MiUnlockWorkingSetExclusive(v4, v11, v12);
}
