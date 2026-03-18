/*
 * XREFs of IoIsDeviceEjectable @ 0x1400E03F0
 * Callers:
 *     MiCreateImageFileMap @ 0x1404FCC48 (MiCreateImageFileMap.c)
 * Callees:
 *     <none>
 */

bool __fastcall IoIsDeviceEjectable(__int64 a1)
{
  return (((*(_BYTE *)(a1 + 52) & 4) == 0) & !_bittest(&InitWinPEModeType, 0x1Fu)) == 0;
}
