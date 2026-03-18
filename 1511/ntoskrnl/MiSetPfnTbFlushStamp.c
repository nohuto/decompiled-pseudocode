/*
 * XREFs of MiSetPfnTbFlushStamp @ 0x140071D20
 * Callers:
 *     MiZeroFault @ 0x14004D290 (MiZeroFault.c)
 *     MiResolveDemandZeroFault @ 0x140052430 (MiResolveDemandZeroFault.c)
 *     MiReplaceTransitionPage @ 0x1400714A0 (MiReplaceTransitionPage.c)
 *     MiClaimPhysicalRun @ 0x1400720B0 (MiClaimPhysicalRun.c)
 *     MiFinalizePageAttribute @ 0x140072854 (MiFinalizePageAttribute.c)
 *     MiMapWsMetaPage @ 0x1400A90C0 (MiMapWsMetaPage.c)
 *     MiInitializePfn @ 0x1400AA390 (MiInitializePfn.c)
 *     MiMapPageFileHash @ 0x140108CF0 (MiMapPageFileHash.c)
 *     MiSwapNumaStandbyPage @ 0x1401E4470 (MiSwapNumaStandbyPage.c)
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
