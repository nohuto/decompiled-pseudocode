/*
 * XREFs of ?CoalesceQFrames@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERQFRAME@@PEAU1@@Z @ 0x1C022E3D8
 * Callers:
 *     ?DelegateCoalesceQFrame@PointerFrameList@@YAHPEBUtagPOINTERINPUTFRAME@@K@Z @ 0x1C022EFF4 (-DelegateCoalesceQFrame@PointerFrameList@@YAHPEBUtagPOINTERINPUTFRAME@@K@Z.c)
 * Callees:
 *     DelQEntry @ 0x1C008C604 (DelQEntry.c)
 *     ?IsNodeFullyReleased@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C01F8A50 (-IsNodeFullyReleased@@YAHPEBUtagPOINTERINFONODE@@@Z.c)
 *     ?CanCoalesceIgnoreNode@@YAHPEBUtagPOINTERINPUTFRAME@@PEBUtagPOINTERINFONODE@@PEAW4tagPOINTERCOALESCE@@@Z @ 0x1C022E044 (-CanCoalesceIgnoreNode@@YAHPEBUtagPOINTERINPUTFRAME@@PEBUtagPOINTERINFONODE@@PEAW4tagPOINTERCOAL.c)
 *     ?CanCoalesceNodeWithPrevious@@YAHPEBUtagPOINTERINPUTFRAME@@PEBUtagPOINTERINFONODE@@PEAUtagQMSG@@PEAUtagPOINTERQFRAME@@PEAW4tagPOINTERCOALESCE@@@Z @ 0x1C022E090 (-CanCoalesceNodeWithPrevious@@YAHPEBUtagPOINTERINPUTFRAME@@PEBUtagPOINTERINFONODE@@PEAUtagQMSG@@.c)
 *     ?CoalesceNodeWithPrevious@@YA_KPEBUtagPOINTERINPUTFRAME@@0PEAUtagPOINTERINFONODE@@KH@Z @ 0x1C022E2F0 (-CoalesceNodeWithPrevious@@YA_KPEBUtagPOINTERINPUTFRAME@@0PEAUtagPOINTERINFONODE@@KH@Z.c)
 *     ?FindNodeQueuedMessage@@YAPEAUtagQMSG@@PEBUtagPOINTERINFONODE@@HPEAPEAUtagQ@@@Z @ 0x1C022F258 (-FindNodeQueuedMessage@@YAPEAUtagQMSG@@PEBUtagPOINTERINFONODE@@HPEAPEAUtagQ@@@Z.c)
 */

__int64 __fastcall CoalesceQFrames(
        const struct tagPOINTERINPUTFRAME *a1,
        struct tagPOINTERQFRAME *a2,
        struct tagPOINTERINPUTFRAME *a3)
{
  __int64 v3; // rbx
  __int64 result; // rax
  unsigned int v8; // ecx
  unsigned int v9; // ebx
  __int64 v10; // rdi
  int v11; // r15d
  unsigned int v12; // ebp
  int v13; // edx
  struct tagQMSG *NodeQueuedMessage; // rax
  int v15; // edi
  unsigned int v16; // r12d
  __int64 v17; // r15
  unsigned int v18; // ebp
  struct tagPOINTERINPUTFRAME *v19; // rdi
  __int64 v20; // r13
  __int64 v21; // r9
  __int64 *v22; // rax
  int v23; // [rsp+78h] [rbp+10h] BYREF
  struct tagPOINTERINPUTFRAME *v24; // [rsp+80h] [rbp+18h]
  struct tagQ *v25; // [rsp+88h] [rbp+20h] BYREF

  v24 = a3;
  v3 = *((unsigned int *)a2 + 4);
  result = qword_1C032CA38;
  dword_1C032CA34 = 0;
  if ( gPointerCoalesceInfo < (unsigned int)v3 )
  {
    if ( qword_1C032CA38 )
    {
      Win32FreePool(qword_1C032CA38);
      result = 0LL;
      gPointerCoalesceInfo = 0;
      qword_1C032CA38 = 0LL;
    }
    if ( (_DWORD)v3 )
    {
      v8 = 16 * v3;
      if ( (unsigned __int64)(16 * v3) <= 0xFFFFFFFF )
      {
        if ( v8 )
        {
          result = Win32AllocPoolZInit(v8, 1885631317LL);
          qword_1C032CA38 = result;
          gPointerCoalesceInfo = v3;
        }
      }
    }
  }
  if ( !result )
    return result;
  v9 = 1;
  v10 = *((_QWORD *)a1 + 9);
  v11 = 0;
  v23 = 1;
  v12 = 0;
  if ( !*((_DWORD *)a1 + 6) )
    goto LABEL_28;
  while ( 1 )
  {
    if ( *(_DWORD *)(v10 + 8) == *(_DWORD *)a2 )
    {
      if ( (*(_DWORD *)v10 & 0x1000) == 0 && !(unsigned int)IsNodeFullyReleased((const struct tagPOINTERINFONODE *)v10) )
      {
        NodeQueuedMessage = FindNodeQueuedMessage((const struct tagPOINTERINFONODE *)v10, v13, &v25);
        if ( NodeQueuedMessage )
        {
          if ( *((_QWORD *)NodeQueuedMessage + 1) )
          {
            *(_QWORD *)(qword_1C032CA38 + 16LL * (unsigned int)dword_1C032CA34) = v25;
            *(_QWORD *)(qword_1C032CA38 + 16LL * (unsigned int)dword_1C032CA34++ + 8) = NodeQueuedMessage;
            v9 = CanCoalesceNodeWithPrevious(
                   a3,
                   (const struct tagPOINTERINFONODE *)v10,
                   NodeQueuedMessage,
                   a2,
                   (enum tagPOINTERCOALESCE *)&v23);
            if ( !v9 )
              goto LABEL_27;
            v11 = 1;
            goto LABEL_18;
          }
          v15 = 18;
        }
        else
        {
          v15 = 15;
        }
        v9 = 0;
        goto LABEL_44;
      }
      if ( !(unsigned int)CanCoalesceIgnoreNode(
                            a3,
                            (const struct tagPOINTERINFONODE *)v10,
                            (enum tagPOINTERCOALESCE *)&v23) )
        break;
    }
LABEL_18:
    ++v12;
    v10 += 216LL;
    if ( v12 >= *((_DWORD *)a1 + 6) )
      goto LABEL_24;
  }
  v9 = 0;
LABEL_24:
  if ( !v9 )
  {
LABEL_27:
    v15 = v23;
    goto LABEL_44;
  }
  if ( !v11 )
  {
LABEL_28:
    v15 = 19;
    v9 = 0;
    goto LABEL_29;
  }
  v15 = v23;
LABEL_29:
  v23 = v15;
  if ( v9 )
  {
    if ( *((_DWORD *)a2 + 4) != *(_DWORD *)(*((_QWORD *)a2 + 4) + 16LL) )
    {
      v15 = 17;
      v9 = 0;
      v23 = 17;
    }
    if ( v9 )
    {
      EtwTraceBeginPointerFrameCoalesce(*((unsigned int *)a1 + 4), *((unsigned int *)a1 + 6), 1LL);
      v16 = 0;
      v17 = *((_QWORD *)a1 + 9);
      v18 = 0;
      if ( *((_DWORD *)a1 + 6) )
      {
        v19 = v24;
        do
        {
          if ( *(_DWORD *)(v17 + 8) == *(_DWORD *)a2
            && (*(_DWORD *)v17 & 0x1000) == 0
            && !(unsigned int)IsNodeFullyReleased((const struct tagPOINTERINFONODE *)v17) )
          {
            v20 = *(_QWORD *)(qword_1C032CA38 + 16LL * v16);
            v25 = *(struct tagQ **)(qword_1C032CA38 + 16LL * v16 + 8);
            CoalesceNodeWithPrevious(a1, v19, (struct tagPOINTERINFONODE *)v17, v18, 1);
            v22 = (__int64 *)v25;
            if ( *(struct tagQ **)(v20 + 40) == v25 )
              *(_QWORD *)(v20 + 40) = 0LL;
            DelQEntry(v20, v22, 1LL, v21);
            ++v16;
          }
          ++v18;
          v17 += 216LL;
        }
        while ( v18 < *((_DWORD *)a1 + 6) );
        v15 = v23;
      }
      EtwTraceEndPointerFrameCoalesce(*((unsigned int *)a1 + 4), *((unsigned int *)a1 + 6), 1LL);
    }
  }
LABEL_44:
  *((_DWORD *)a2 + 7) = v15;
  result = v9;
  *((_DWORD *)a2 + 5) = *((_DWORD *)a2 + 5) & 0xFFFFFFF9 | (2 * ((2 * (v9 & 1)) | v9 & 1));
  return result;
}
