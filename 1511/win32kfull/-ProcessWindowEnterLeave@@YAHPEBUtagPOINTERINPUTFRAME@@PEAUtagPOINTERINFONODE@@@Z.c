/*
 * XREFs of ?ProcessWindowEnterLeave@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@@Z @ 0x1C02301AC
 * Callers:
 *     xxxGeneratePointerInputMessages @ 0x1C01FC05C (xxxGeneratePointerInputMessages.c)
 *     ?ProcessQFrameNode@@YAXPEAUtagPOINTERQFRAME@@PEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@@Z @ 0x1C0230068 (-ProcessQFrameNode@@YAXPEAUtagPOINTERQFRAME@@PEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@@.c)
 *     xxxSetManipulationInputTarget @ 0x1C0231318 (xxxSetManipulationInputTarget.c)
 * Callees:
 *     ?IsManipulationThreadNode@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C01F8EE0 (-IsManipulationThreadNode@@YAHPEBUtagPOINTERINFONODE@@@Z.c)
 *     ?FindValidNodeInFrame@@YAPEAUtagPOINTERINFONODE@@PEBUtagPOINTERINPUTFRAME@@GPEAK@Z @ 0x1C022F7F4 (-FindValidNodeInFrame@@YAPEAUtagPOINTERINFONODE@@PEBUtagPOINTERINPUTFRAME@@GPEAK@Z.c)
 */

__int64 __fastcall ProcessWindowEnterLeave(const struct tagPOINTERINPUTFRAME *a1, struct tagPOINTERINFONODE *a2)
{
  __int64 v4; // rdi
  const struct tagPOINTERINFONODE *v5; // rcx
  struct tagPOINTERINFONODE *v6; // r8
  struct tagPOINTERINFONODE *ValidNodeInFrame; // rax
  int v9; // ecx
  __int64 v10; // rax
  int v11; // eax

  v4 = 0LL;
  if ( a1 )
  {
    ValidNodeInFrame = FindValidNodeInFrame(a1, *((_WORD *)a2 + 30), 0LL);
    v6 = ValidNodeInFrame;
    if ( ValidNodeInFrame )
    {
      if ( (*(_BYTE *)ValidNodeInFrame & 0x80) != 0 )
        v6 = 0LL;
      if ( v6 )
      {
        if ( (*(_DWORD *)v6 & 4) != 0 || (*(_DWORD *)v6 & 0x400) != 0 )
          v4 = *((_QWORD *)v6 + 10);
        else
          v4 = *((_QWORD *)v6 + 3);
      }
      goto LABEL_14;
    }
    v5 = a2;
  }
  else
  {
    v5 = a2;
  }
  if ( !IsManipulationThreadNode(v5) )
    return 0LL;
LABEL_14:
  v9 = *(_DWORD *)a2;
  if ( (*(_DWORD *)a2 & 0x400) != 0 )
    v10 = *((_QWORD *)a2 + 10);
  else
    v10 = *((_QWORD *)a2 + 3);
  if ( v4 == v10 )
    return 0LL;
  if ( (*((_DWORD *)a2 + 1) & 0x100) != 0
    && ((v11 = *((_DWORD *)a2 + 17), (v11 & 4) != 0) || (v11 & 0x40000) != 0)
    && (v11 & 0x10000) == 0 )
  {
    *(_DWORD *)a2 = v9 | 0x40;
    if ( v6 )
    {
      *(_DWORD *)v6 |= 0x20u;
LABEL_26:
      *(_DWORD *)(*((_QWORD *)a1 + 10) + 40LL * *((unsigned int *)v6 + 2) + 20) &= ~1u;
    }
  }
  else
  {
    *(_DWORD *)a2 = v9 | 8;
    if ( v6 )
    {
      *(_DWORD *)v6 |= 0x10u;
      goto LABEL_26;
    }
  }
  return 1LL;
}
