/*
 * XREFs of ?ProcessQFrameNode@@YAXPEAUtagPOINTERQFRAME@@PEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@@Z @ 0x1C022FC38
 * Callers:
 *     ?CommitAndReferenceFrame@PointerFrameList@@YAPEBUtagPOINTERINPUTFRAME@@PEAX0@Z @ 0x1C022E6D4 (-CommitAndReferenceFrame@PointerFrameList@@YAPEBUtagPOINTERINPUTFRAME@@PEAX0@Z.c)
 *     ?EndQFrameNodeDeferment@@YAXPEAUtagPOINTERQFRAME@@PEAUtagPOINTERINFONODE@@PEAUtagPOINTERINPUTFRAME@@_K@Z @ 0x1C022F0F0 (-EndQFrameNodeDeferment@@YAXPEAUtagPOINTERQFRAME@@PEAUtagPOINTERINFONODE@@PEAUtagPOINTERINPUTFRA.c)
 *     xxxSetManipulationInputTarget @ 0x1C0230EE8 (xxxSetManipulationInputTarget.c)
 * Callees:
 *     ?IsManipulationThreadNode@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C01F8A30 (-IsManipulationThreadNode@@YAHPEBUtagPOINTERINFONODE@@@Z.c)
 *     ?CanCoalesceNodeWithPrevious@@YAHPEBUtagPOINTERINPUTFRAME@@PEBUtagPOINTERINFONODE@@PEAUtagQMSG@@PEAUtagPOINTERQFRAME@@PEAW4tagPOINTERCOALESCE@@@Z @ 0x1C022E090 (-CanCoalesceNodeWithPrevious@@YAHPEBUtagPOINTERINPUTFRAME@@PEBUtagPOINTERINFONODE@@PEAUtagQMSG@@.c)
 *     ?ProcessWindowEnterLeave@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@@Z @ 0x1C022FD7C (-ProcessWindowEnterLeave@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@@Z.c)
 */

void __fastcall ProcessQFrameNode(
        struct tagPOINTERQFRAME *a1,
        const struct tagPOINTERINPUTFRAME *a2,
        struct tagPOINTERINFONODE *a3)
{
  __int64 v6; // rdx
  const struct tagPOINTERINFONODE *v7; // rcx
  __int64 v8; // r8
  BOOL v9; // esi
  int v10; // eax
  int v11; // ecx
  int v12; // ecx
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  int v16; // [rsp+40h] [rbp+8h] BYREF

  v9 = IsManipulationThreadNode(a3) && (*(_DWORD *)(v8 + 4) & 0x100) == 0;
  if ( ((*(_DWORD *)v8 & 4) == 0 && v6 || IsManipulationThreadNode(v7)) && !v9 )
    ProcessWindowEnterLeave(a2, (struct tagPOINTERINFONODE *)v8);
  v10 = *((_DWORD *)a1 + 5);
  if ( (v10 & 1) != 0 && v9 )
  {
    *((_DWORD *)a1 + 6) = 22;
    *((_DWORD *)a1 + 5) = v10 & 0xFFFFFFFE;
  }
  v11 = *((_DWORD *)a1 + 5);
  if ( (v11 & 1) != 0 && (*(_DWORD *)a3 & 1) == 0 )
  {
    *((_DWORD *)a1 + 6) = 2;
    *((_DWORD *)a1 + 5) = v11 & 0xFFFFFFFE;
  }
  v12 = *((_DWORD *)a1 + 5);
  if ( (v12 & 1) != 0 )
  {
    v13 = *(_DWORD *)a3;
    if ( (*(_DWORD *)a3 & 8) != 0 || (v13 & 0x10) != 0 || (v13 & 0x40) != 0 || (v13 & 0x20) != 0 )
    {
      *((_DWORD *)a1 + 6) = 16;
      *((_DWORD *)a1 + 5) = v12 & 0xFFFFFFFE;
    }
  }
  v14 = *((_DWORD *)a1 + 5);
  if ( (v14 & 8) == 0 && (*(_DWORD *)a3 & 0x80000) != 0 && !v9 )
  {
    *((_DWORD *)a1 + 6) = 9;
    *((_DWORD *)a1 + 5) = v14 | 8;
  }
  v15 = *((_DWORD *)a1 + 5);
  if ( (v15 & 1) == 0 || (v15 & 8) != 0 )
    *((_DWORD *)a1 + 5) = v15 & 0xFFFFFFFD;
  if ( (*((_DWORD *)a1 + 5) & 2) != 0 )
  {
    v16 = 1;
    *((_DWORD *)a1 + 5) ^= (*((_DWORD *)a1 + 5) ^ (2
                                                 * CanCoalesceNodeWithPrevious(
                                                     a2,
                                                     a3,
                                                     0LL,
                                                     a1,
                                                     (enum tagPOINTERCOALESCE *)&v16))) & 2;
    if ( (*((_DWORD *)a1 + 5) & 2) == 0 )
      *((_DWORD *)a1 + 6) = v16;
  }
}
