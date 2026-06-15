/*
 * XREFs of ?HnsToBlocksRU@@YAJ_KKKPEAK@Z @ 0x18008992C
 * Callers:
 *     ?DiscoverPeriodicityCharacteristicsForFormat@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEBUtWAVEFORMATEX@@PEAUPacketSizeConstraints@@_N_JPEAI6666@Z @ 0x1800883A0 (-DiscoverPeriodicityCharacteristicsForFormat@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_.c)
 *     ?GetPacketSizesFromConstraints@@YAJPEBUPacketSizeConstraints@@KGU_GUID@@_K22PEAI333@Z @ 0x1800894BC (-GetPacketSizesFromConstraints@@YAJPEBUPacketSizeConstraints@@KGU_GUID@@_K22PEAI333@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HnsToBlocksRU(unsigned __int64 a1, unsigned int a2, int a3, unsigned int *a4)
{
  unsigned int v4; // r10d
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rcx

  v4 = 0;
  v5 = a1 * a2;
  *a4 = -1;
  if ( is_mul_ok(a1, a2) )
  {
    if ( !v5 )
    {
      *a4 = 0;
      return v4;
    }
    v6 = (v5 - 1) / (unsigned int)(10000000 * a3);
    v7 = v6 + 1;
    if ( v6 + 1 >= v6 )
    {
      if ( v7 <= 0xFFFFFFFF )
      {
        *a4 = v7;
        return v4;
      }
      *a4 = -1;
    }
  }
  return (unsigned int)-2147024362;
}
