/*
 * XREFs of PfSnFailProcessTrace @ 0x14052A9D0
 * Callers:
 *     PfSnVolumeKeyQuery @ 0x1404AFD08 (PfSnVolumeKeyQuery.c)
 *     PfSnLogStreamDelete @ 0x1404CF25C (PfSnLogStreamDelete.c)
 *     PfSnLogHelper @ 0x1404F7F70 (PfSnLogHelper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PfSnFailProcessTrace(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 484) & 2) == 0 )
    _InterlockedOr16((volatile signed __int16 *)(a1 + 484), 2u);
  return PfSnEndProcessTrace(*(_QWORD *)(a1 + 352), 10, (const void *)(a1 + 24));
}
