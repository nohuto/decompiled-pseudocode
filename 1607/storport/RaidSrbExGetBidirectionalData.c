/*
 * XREFs of RaidSrbExGetBidirectionalData @ 0x1C0019460
 * Callers:
 *     RaidUnitClaimIrp @ 0x1C0004D00 (RaidUnitClaimIrp.c)
 *     RaidXrbSetDataBufferAddress @ 0x1C0005D30 (RaidXrbSetDataBufferAddress.c)
 *     RaidUnitCompleteRequest @ 0x1C0006180 (RaidUnitCompleteRequest.c)
 *     RaidUnitReleaseIrp @ 0x1C000C880 (RaidUnitReleaseIrp.c)
 *     StorPortGetPhysicalAddress @ 0x1C0016220 (StorPortGetPhysicalAddress.c)
 *     RaidAdapterScatterGatherExecuteBidirectionalRequest @ 0x1C002810C (RaidAdapterScatterGatherExecuteBidirectionalRequest.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidSrbExGetBidirectionalData(__int64 a1)
{
  __int64 v1; // r9
  unsigned int v3; // r11d
  char v4; // bl
  __int64 i; // r8
  __int64 v6; // rcx
  unsigned __int64 v7; // rdi

  v1 = 0LL;
  if ( *(_BYTE *)(a1 + 2) == 40 && (*(_BYTE *)(a1 + 24) & 0xC0) == 0xC0 )
  {
    v3 = *(_DWORD *)(a1 + 56);
    v4 = 0;
    for ( i = 0LL; (unsigned int)i < v3; i = (unsigned int)(i + 1) )
    {
      v6 = *(unsigned int *)(a1 + 4 * i + 120);
      if ( (unsigned int)v6 >= 0x80 )
      {
        v7 = *(unsigned int *)(a1 + 16);
        if ( (unsigned int)v6 <= (unsigned int)v7 )
        {
          if ( *(_DWORD *)(v6 + a1) == 1 && v6 + 24 <= v7 )
          {
            v1 = v6 + a1;
            v4 = 1;
          }
          if ( v4 )
            break;
        }
      }
    }
  }
  return v1;
}
