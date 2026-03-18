/*
 * XREFs of PfSnFailProcessTrace @ 0x1405607C4
 * Callers:
 *     PfSnLogHelper @ 0x140443494 (PfSnLogHelper.c)
 *     PfSnVolumeKeyQuery @ 0x140476D60 (PfSnVolumeKeyQuery.c)
 *     PfSnLogStreamDelete @ 0x14052B778 (PfSnLogStreamDelete.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PfSnFailProcessTrace(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 484) & 2) == 0 )
    _InterlockedOr16((volatile signed __int16 *)(a1 + 484), 2u);
  return PfSnEndProcessTrace(*(_QWORD *)(a1 + 352), 10, (const void *)(a1 + 24));
}
