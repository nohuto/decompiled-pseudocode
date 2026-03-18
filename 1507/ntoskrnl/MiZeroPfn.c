/*
 * XREFs of MiZeroPfn @ 0x140156414
 * Callers:
 *     MiMakeZeroedPageTables @ 0x1400697D8 (MiMakeZeroedPageTables.c)
 *     MiCreateZeroThreadContext @ 0x140123730 (MiCreateZeroThreadContext.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiZeroPfn(__int64 a1)
{
  unsigned __int64 v1; // rcx
  ULONG_PTR v2; // rcx

  v1 = (__int64)((unsigned __int128)((a1 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3;
  v2 = (v1 >> 63) + v1;
  if ( KeGetCurrentPrcb()->HyperPte )
    return MiZeroPhysicalPage(v2, 0, 1);
  else
    return MxFillPhysicalPage(v2);
}
