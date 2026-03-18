/*
 * XREFs of ?NodeMatchesMTGeneration@@YAHPEBUtagPOINTERINFONODE@@H@Z @ 0x1C01F92C0
 * Callers:
 *     ?ShouldGenerateMessagesForNode@@YAHPEBUtagPOINTERINPUTFRAME@@PEBUtagPOINTERINFONODE@@H@Z @ 0x1C01F9AA0 (-ShouldGenerateMessagesForNode@@YAHPEBUtagPOINTERINPUTFRAME@@PEBUtagPOINTERINFONODE@@H@Z.c)
 *     ?xxxGeneratePointerInputMessagesCore@@YAHHHHPEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C01FA3E4 (-xxxGeneratePointerInputMessagesCore@@YAHHHHPEBUtagPOINTERINPUTFRAME@@@Z.c)
 * Callees:
 *     ?IsManipulationThreadNode@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C01F8EE0 (-IsManipulationThreadNode@@YAHPEBUtagPOINTERINFONODE@@@Z.c)
 */

__int64 __fastcall NodeMatchesMTGeneration(const struct tagPOINTERINFONODE *a1)
{
  BOOL v1; // eax
  int v2; // edx
  __int64 v3; // rcx
  unsigned int v4; // r9d
  int v5; // eax

  v1 = IsManipulationThreadNode(a1);
  v4 = 0;
  if ( v1 == (v2 != 0) )
  {
    if ( !v2 )
      return 1;
    v5 = *(_DWORD *)(v3 + 4);
    if ( (v5 & 0x100) != 0 && (v5 & 0x200) == 0 )
      return 1;
  }
  return v4;
}
