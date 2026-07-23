/*
 * XREFs of SymCryptSha256AppendBlocks @ 0x140136F2C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptSha256AppendBlocks(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( (g_SymCryptCpuFeaturesNotPresent & 0x42) != 0 )
    return SymCryptSha256AppendBlocks_ul1(a1, a2, a3, a4);
  else
    return SymCryptSha256AppendBlocks_shani(a1, a2, a3, a4);
}
