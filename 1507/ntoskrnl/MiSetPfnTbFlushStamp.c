/*
 * XREFs of MiSetPfnTbFlushStamp @ 0x140059A30
 * Callers:
 *     MiCopyOnWriteEx @ 0x140058250 (MiCopyOnWriteEx.c)
 *     MiFindNonPagedPoolPages @ 0x140059840 (MiFindNonPagedPoolPages.c)
 *     MiFinalizePageAttribute @ 0x140059C28 (MiFinalizePageAttribute.c)
 *     MiReplaceTransitionPage @ 0x140059C70 (MiReplaceTransitionPage.c)
 *     MiClaimPhysicalRun @ 0x14005ACA0 (MiClaimPhysicalRun.c)
 *     MiGetZeroedPages @ 0x140077560 (MiGetZeroedPages.c)
 *     MiMigratePfn @ 0x1400B9D20 (MiMigratePfn.c)
 *     MiResolveDemandZeroFault @ 0x1400BBC00 (MiResolveDemandZeroFault.c)
 *     MiZeroFault @ 0x1400C0DC0 (MiZeroFault.c)
 *     MiMapPageFileHash @ 0x14013BAD4 (MiMapPageFileHash.c)
 *     MiGetPageTablePages @ 0x14021EB20 (MiGetPageTablePages.c)
 *     MiSwapNumaStandbyPage @ 0x14022E2D8 (MiSwapNumaStandbyPage.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall MiSetPfnTbFlushStamp(__int64 a1, __int64 a2, int a3)
{
  char v3; // r9
  signed __int64 result; // rax
  signed __int64 v6; // rdx
  unsigned __int64 v7; // r9
  signed __int64 v8; // r8
  signed __int64 v9; // rcx

  v3 = a2;
  if ( a3 == 1 )
  {
    result = 0xF00000000000000LL;
    *(_QWORD *)(a1 + 24) ^= (*(_QWORD *)(a1 + 24) ^ (a2 << 56)) & 0xF00000000000000LL;
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 24);
    v7 = (unsigned __int64)(v3 & 0xF) << 56;
    result = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 24), v7 | v6 & 0xF0FFFFFFFFFFFFFFuLL, v6);
    v8 = result;
    if ( v6 != result )
    {
      do
      {
        v9 = v8;
        result = _InterlockedCompareExchange64(
                   (volatile signed __int64 *)(a1 + 24),
                   v7 | v8 & 0xF0FFFFFFFFFFFFFFuLL,
                   v8);
        v8 = result;
      }
      while ( v9 != result );
    }
  }
  return result;
}
