/*
 * XREFs of ?TestPointerInfoNodePointerFlag@@YAHPEBUtagPOINTERINFONODE@@I@Z @ 0x1C01F9634
 * Callers:
 *     ?PopulatePointerInfoNode@@YAHPEAUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@@Z @ 0x1C022F904 (-PopulatePointerInfoNode@@YAHPEAUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall TestPointerInfoNodePointerFlag(const struct tagPOINTERINFONODE *a1, int a2)
{
  return (a2 & *((_DWORD *)a1 + 17)) != 0;
}
