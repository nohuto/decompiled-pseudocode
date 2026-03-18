/*
 * XREFs of PfSnFailProcessTrace @ 0x14052A490
 * Callers:
 *     PfSnVolumeKeyQuery @ 0x1404C9F88 (PfSnVolumeKeyQuery.c)
 *     PfSnLogStreamDelete @ 0x1404ED0F0 (PfSnLogStreamDelete.c)
 *     PfSnLogHelper @ 0x140514B80 (PfSnLogHelper.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PfSnFailProcessTrace(__int64 a1)
{
  if ( (*(_BYTE *)(a1 + 484) & 2) == 0 )
    _InterlockedOr16((volatile signed __int16 *)(a1 + 484), 2u);
  return PfSnEndProcessTrace(*(_QWORD *)(a1 + 352), 10, (const void *)(a1 + 24));
}
