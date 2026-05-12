/*
 * XREFs of RaidRemoveTrailingBlanks @ 0x1C00022D0
 * Callers:
 *     RaidBusEnumeratorVisitUnit @ 0x1C0011FD0 (RaidBusEnumeratorVisitUnit.c)
 *     RaidAtaIdFormatString @ 0x1C00176C4 (RaidAtaIdFormatString.c)
 *     RaGetUnitStorageDeviceProperty @ 0x1C0057164 (RaGetUnitStorageDeviceProperty.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidRemoveTrailingBlanks(__int64 a1, int a2)
{
  int v3; // ecx
  _BYTE *v4; // rdx

  if ( a2 )
  {
    *(_BYTE *)((unsigned int)(a2 - 1) + a1) = 0;
    v3 = a2 - 2;
    if ( a2 - 2 >= 0 )
    {
      v4 = (_BYTE *)(v3 + a1);
      do
      {
        if ( *v4 == 32 )
        {
          *v4 = 0;
        }
        else if ( *v4 )
        {
          break;
        }
        --v4;
        --v3;
      }
      while ( (__int64)&v4[-a1] >= 0 );
    }
    *(_BYTE *)(v3 + 1 + a1) = 0;
  }
}
