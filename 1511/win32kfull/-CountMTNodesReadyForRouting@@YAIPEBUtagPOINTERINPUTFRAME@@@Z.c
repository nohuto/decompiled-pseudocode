/*
 * XREFs of ?CountMTNodesReadyForRouting@@YAIPEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C01F797C
 * Callers:
 *     ?xxxGeneratePointerInputMessagesCore@@YAHHHHPEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C01FA3E4 (-xxxGeneratePointerInputMessagesCore@@YAHHHHPEBUtagPOINTERINPUTFRAME@@@Z.c)
 *     BuildManipulationInputInfo @ 0x1C01FBB38 (BuildManipulationInputInfo.c)
 * Callees:
 *     ?IsManipulationThreadNode@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C01F8EE0 (-IsManipulationThreadNode@@YAHPEBUtagPOINTERINFONODE@@@Z.c)
 */

__int64 __fastcall CountMTNodesReadyForRouting(const struct tagPOINTERINPUTFRAME *a1)
{
  unsigned int v1; // edx
  const struct tagPOINTERINFONODE *v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // r8

  v1 = 0;
  if ( *((_DWORD *)a1 + 6) )
  {
    v2 = (const struct tagPOINTERINFONODE *)*((_QWORD *)a1 + 9);
    do
    {
      if ( (unsigned int)IsManipulationThreadNode(v2) )
        ++v1;
      v2 = (const struct tagPOINTERINFONODE *)(v3 + 216);
    }
    while ( v4 != 1 );
  }
  return v1;
}
