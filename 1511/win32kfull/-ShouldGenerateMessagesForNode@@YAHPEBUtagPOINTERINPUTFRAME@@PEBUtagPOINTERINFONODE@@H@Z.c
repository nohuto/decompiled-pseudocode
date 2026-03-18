/*
 * XREFs of ?ShouldGenerateMessagesForNode@@YAHPEBUtagPOINTERINPUTFRAME@@PEBUtagPOINTERINFONODE@@H@Z @ 0x1C01F9AA0
 * Callers:
 *     ?GeneratePointerInputMessages@@YAXPEBUtagPOINTERINPUTFRAME@@KHHKKH@Z @ 0x1C01F7BDC (-GeneratePointerInputMessages@@YAXPEBUtagPOINTERINPUTFRAME@@KHHKKH@Z.c)
 *     ?xxxGeneratePointerInputMessagesCore@@YAHHHHPEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C01FA3E4 (-xxxGeneratePointerInputMessagesCore@@YAHHHHPEBUtagPOINTERINPUTFRAME@@@Z.c)
 * Callees:
 *     ?NodeMatchesMTGeneration@@YAHPEBUtagPOINTERINFONODE@@H@Z @ 0x1C01F92C0 (-NodeMatchesMTGeneration@@YAHPEBUtagPOINTERINFONODE@@H@Z.c)
 */

__int64 __fastcall ShouldGenerateMessagesForNode(
        const struct tagPOINTERINPUTFRAME *a1,
        const struct tagPOINTERINFONODE *a2)
{
  unsigned int v2; // r10d

  v2 = 0;
  if ( *((_QWORD *)a2 + 2) && (*(_DWORD *)(*((_QWORD *)a1 + 10) + 40LL * *((unsigned int *)a2 + 2) + 20) & 4) == 0 )
    return (unsigned int)NodeMatchesMTGeneration(a2) != 0;
  return v2;
}
