/*
 * XREFs of PfSnFailProcessTrace @ 0x1404E3598
 * Callers:
 *     PfSnVolumeKeyQuery @ 0x1403C77D8 (PfSnVolumeKeyQuery.c)
 *     PfSnLogStreamDelete @ 0x1404C4900 (PfSnLogStreamDelete.c)
 *     PfSnLogHelper @ 0x1404D6B68 (PfSnLogHelper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PfSnFailProcessTrace(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 484) & 2) == 0 )
    _InterlockedOr16((volatile signed __int16 *)(a1 + 484), 2u);
  return PfSnEndProcessTrace(*(_QWORD *)(a1 + 352), 10, (const void *)(a1 + 24));
}
