/*
 * XREFs of ?IsNodeFullyReleased@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C01F8F00
 * Callers:
 *     ?GetPointerFrameDataWithHistory@@YAH_KKHKPEAI1PEAE@Z @ 0x1C01F87B0 (-GetPointerFrameDataWithHistory@@YAH_KKHKPEAI1PEAE@Z.c)
 *     ?CanCoalesceIgnoreNode@@YAHPEBUtagPOINTERINPUTFRAME@@PEBUtagPOINTERINFONODE@@PEAW4tagPOINTERCOALESCE@@@Z @ 0x1C022E46C (-CanCoalesceIgnoreNode@@YAHPEBUtagPOINTERINPUTFRAME@@PEBUtagPOINTERINFONODE@@PEAW4tagPOINTERCOAL.c)
 *     ?CoalesceQFrames@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERQFRAME@@PEAU1@@Z @ 0x1C022E7F8 (-CoalesceQFrames@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERQFRAME@@PEAU1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsNodeFullyReleased(const struct tagPOINTERINFONODE *a1)
{
  int v1; // eax
  unsigned int v3; // ecx
  int v4; // eax

  v1 = *(_DWORD *)a1;
  if ( (*(_DWORD *)a1 & 0x100000) == 0 || (v1 & 0x400000) != 0 && (v1 & 0x1000000) == 0 )
    return 0;
  if ( (v1 & 0x4000000) != 0 && (v1 & 0x10000000) == 0 )
    return 0;
  v3 = 1;
  if ( (v1 & 0x40000000) != 0 && (*((_DWORD *)a1 + 1) & 1) == 0 )
    return 0;
  v4 = *((_DWORD *)a1 + 1);
  if ( (v4 & 4) != 0 && (v4 & 0x10) == 0 )
    return 0;
  return v3;
}
