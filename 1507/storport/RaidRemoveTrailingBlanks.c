/*
 * XREFs of RaidRemoveTrailingBlanks @ 0x1C0003B00
 * Callers:
 *     RaidAtaIdFormatString @ 0x1C0011584 (RaidAtaIdFormatString.c)
 *     RaGetUnitStorageDeviceProperty @ 0x1C004C200 (RaGetUnitStorageDeviceProperty.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidRemoveTrailingBlanks(__int64 a1, unsigned int a2)
{
  int v2; // eax
  __int64 v3; // rdx

  if ( a2 >= 2 )
  {
    *(_BYTE *)(a2 - 1 + a1) = 0;
    v2 = a2 - 2;
    v3 = (int)(a2 - 2);
    if ( v2 >= 0 )
    {
      do
      {
        if ( *(_BYTE *)(v3 + a1) != 32 )
          break;
        --v2;
        --v3;
      }
      while ( v3 >= 0 );
    }
    *(_BYTE *)(v2 + a1 + 1) = 0;
  }
}
