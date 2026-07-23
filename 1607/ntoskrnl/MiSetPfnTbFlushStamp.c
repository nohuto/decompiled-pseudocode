/*
 * XREFs of MiSetPfnTbFlushStamp @ 0x1400E5330
 * Callers:
 *     MiFinalizePageAttribute @ 0x1400232DC (MiFinalizePageAttribute.c)
 *     MiGetPageChain @ 0x14003D000 (MiGetPageChain.c)
 *     MiFindNonPagedPoolPages @ 0x1400E4F00 (MiFindNonPagedPoolPages.c)
 *     MiInitializePfn @ 0x1400E5120 (MiInitializePfn.c)
 *     MiGetPageTablePages @ 0x140100588 (MiGetPageTablePages.c)
 *     MiClaimPhysicalRun @ 0x14010415C (MiClaimPhysicalRun.c)
 *     MiMapPageFileHash @ 0x140116EA0 (MiMapPageFileHash.c)
 *     MiPerformFinalZeroing @ 0x1401F2C6C (MiPerformFinalZeroing.c)
 *     MiSwapNumaStandbyPage @ 0x1401F38F8 (MiSwapNumaStandbyPage.c)
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
