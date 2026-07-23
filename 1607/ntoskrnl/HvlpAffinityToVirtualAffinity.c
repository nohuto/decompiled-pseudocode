/*
 * XREFs of HvlpAffinityToVirtualAffinity @ 0x1401BFDD0
 * Callers:
 *     HvlSendSyntheticClusterIpi @ 0x1401BD9BC (HvlSendSyntheticClusterIpi.c)
 *     HvlParkedVirtualProcessors @ 0x1401BF0CC (HvlParkedVirtualProcessors.c)
 *     HvlpPrepareFlushHeader @ 0x1401C1938 (HvlpPrepareFlushHeader.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall HvlpAffinityToVirtualAffinity(unsigned __int64 a1)
{
  __int64 v1; // rdx
  _BYTE *i; // r8
  unsigned __int64 v4; // rcx

  v1 = 0LL;
  if ( HvlpVirtualProcessorsIdentityMapped )
    return a1;
  for ( i = &unk_1403ACD11; ; i += 4 )
  {
    if ( (a1 & 1) != 0 )
      v1 |= 1LL << *i;
    v4 = a1 >> 1;
    if ( !v4 )
      break;
    if ( (v4 & 1) != 0 )
      v1 |= 1LL << i[2];
    a1 = v4 >> 1;
    if ( !a1 )
      break;
  }
  return v1;
}
