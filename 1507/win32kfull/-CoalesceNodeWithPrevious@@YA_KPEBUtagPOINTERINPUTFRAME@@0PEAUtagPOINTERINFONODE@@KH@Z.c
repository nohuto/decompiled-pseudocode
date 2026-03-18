/*
 * XREFs of ?CoalesceNodeWithPrevious@@YA_KPEBUtagPOINTERINPUTFRAME@@0PEAUtagPOINTERINFONODE@@KH@Z @ 0x1C022E2F0
 * Callers:
 *     ?CoalesceQFrames@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERQFRAME@@PEAU1@@Z @ 0x1C022E3D8 (-CoalesceQFrames@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERQFRAME@@PEAU1@@Z.c)
 *     ?TryCoalesceQFrame@@YAXPEAUtagPOINTERINPUTFRAME@@PEBU1@PEBUtagPOINTERQFRAME@@@Z @ 0x1C023063C (-TryCoalesceQFrame@@YAXPEAUtagPOINTERINPUTFRAME@@PEBU1@PEBUtagPOINTERQFRAME@@@Z.c)
 * Callees:
 *     ?ReferenceMsgData@PointerList@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01FC6C4 (-ReferenceMsgData@PointerList@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?UnreferenceMsgData@PointerList@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01FCA2C (-UnreferenceMsgData@PointerList@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?FindValidNodeInFrame@@YAPEAUtagPOINTERINFONODE@@PEBUtagPOINTERINPUTFRAME@@GPEAK@Z @ 0x1C022F3A8 (-FindValidNodeInFrame@@YAPEAUtagPOINTERINFONODE@@PEBUtagPOINTERINPUTFRAME@@GPEAK@Z.c)
 */

unsigned __int64 __fastcall CoalesceNodeWithPrevious(
        const struct tagPOINTERINPUTFRAME *a1,
        const struct tagPOINTERINPUTFRAME *a2,
        struct tagPOINTERINFONODE *a3,
        int a4,
        int a5)
{
  struct tagPOINTERINFONODE *ValidNodeInFrame; // rax
  __int64 v9; // rbp
  struct tagPOINTERINFONODE *v10; // r14
  __int64 v11; // rcx
  int v12; // edx
  __int64 v13; // r8
  unsigned int v14; // r9d
  int v15; // r8d
  int v16; // ecx
  int v17; // edx
  unsigned int v19; // [rsp+58h] [rbp+20h] BYREF

  ValidNodeInFrame = FindValidNodeInFrame(a2, *((_WORD *)a3 + 30), &v19);
  v9 = *((_QWORD *)a3 + 2);
  v10 = ValidNodeInFrame;
  v11 = *((_QWORD *)ValidNodeInFrame + 2);
  *(_DWORD *)(v11 + 28) = *((_DWORD *)a1 + 4);
  *(_DWORD *)(v11 + 32) = a4;
  if ( v9 )
  {
    if ( (*(_DWORD *)(v9 + 36) & 0x20) != 0 )
    {
      PointerList::ReferenceMsgData(v11, 1);
      PointerList::UnreferenceMsgData(v9, v12, v13, v14);
    }
    *(_DWORD *)(v9 + 36) |= 0x10u;
  }
  v15 = a5;
  *((_QWORD *)a3 + 2) = *((_QWORD *)v10 + 2);
  *((_DWORD *)a3 + 31) = *((_DWORD *)v10 + 31) + 1;
  *((_DWORD *)a3 + 52) = v19;
  if ( !v15 )
  {
    *(_DWORD *)a3 |= 0x40000u;
    v16 = *(_DWORD *)a3 ^ (*(_DWORD *)a3 ^ *(_DWORD *)v10) & 0x80000;
    *(_DWORD *)a3 = v16;
    v17 = v16 ^ (v16 ^ *(_DWORD *)v10) & 0x100000;
    *(_DWORD *)a3 = v17;
    *(_DWORD *)a3 = v17 ^ (v17 ^ *(_DWORD *)v10) & 0x200000;
  }
  *(_DWORD *)v10 |= 2u;
  EtwTracePointerCoalesce(*((unsigned __int16 *)a3 + 24), *((unsigned __int16 *)a3 + 30));
  return *((_QWORD *)a3 + 2);
}
