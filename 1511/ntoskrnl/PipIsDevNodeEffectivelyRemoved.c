/*
 * XREFs of PipIsDevNodeEffectivelyRemoved @ 0x1401BF960
 * Callers:
 *     IopRetryDeviceRemovalForReset @ 0x1406027D4 (IopRetryDeviceRemovalForReset.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PipIsDevNodeEffectivelyRemoved(__int64 a1)
{
  return (unsigned int)(*(_DWORD *)(a1 + 300) - 782) <= 6;
}
