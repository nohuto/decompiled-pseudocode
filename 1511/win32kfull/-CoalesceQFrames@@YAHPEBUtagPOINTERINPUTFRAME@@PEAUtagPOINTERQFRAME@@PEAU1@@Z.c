/*
 * XREFs of ?CoalesceQFrames@@YAHPEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERQFRAME@@PEAU1@@Z @ 0x1C022E7F8
 * Callers:
 *     ?DelegateCoalesceQFrame@PointerFrameList@@YAHPEBUtagPOINTERINPUTFRAME@@K@Z @ 0x1C022F440 (-DelegateCoalesceQFrame@PointerFrameList@@YAHPEBUtagPOINTERINPUTFRAME@@K@Z.c)
 * Callees:
 *     DelQEntry @ 0x1C0064CC4 (DelQEntry.c)
 *     ?IsNodeFullyReleased@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C01F8F00 (-IsNodeFullyReleased@@YAHPEBUtagPOINTERINFONODE@@@Z.c)
 *     ?CanCoalesceIgnoreNode@@YAHPEBUtagPOINTERINPUTFRAME@@PEBUtagPOINTERINFONODE@@PEAW4tagPOINTERCOALESCE@@@Z @ 0x1C022E46C (-CanCoalesceIgnoreNode@@YAHPEBUtagPOINTERINPUTFRAME@@PEBUtagPOINTERINFONODE@@PEAW4tagPOINTERCOAL.c)
 *     ?CanCoalesceNodeWithPrevious@@YAHPEBUtagPOINTERINPUTFRAME@@PEBUtagPOINTERINFONODE@@PEAUtagQMSG@@PEAUtagPOINTERQFRAME@@PEAW4tagPOINTERCOALESCE@@@Z @ 0x1C022E4B8 (-CanCoalesceNodeWithPrevious@@YAHPEBUtagPOINTERINPUTFRAME@@PEBUtagPOINTERINFONODE@@PEAUtagQMSG@@.c)
 *     ?CoalesceNodeWithPrevious@@YA_KPEBUtagPOINTERINPUTFRAME@@0PEAUtagPOINTERINFONODE@@KH@Z @ 0x1C022E710 (-CoalesceNodeWithPrevious@@YA_KPEBUtagPOINTERINPUTFRAME@@0PEAUtagPOINTERINFONODE@@KH@Z.c)
 *     ?FindNodeQueuedMessage@@YAPEAUtagQMSG@@PEBUtagPOINTERINFONODE@@HPEAPEAUtagQ@@@Z @ 0x1C022F6A8 (-FindNodeQueuedMessage@@YAPEAUtagQMSG@@PEBUtagPOINTERINFONODE@@HPEAPEAUtagQ@@@Z.c)
 */

__int64 __fastcall CoalesceQFrames(
        const struct tagPOINTERINPUTFRAME *a1,
        struct tagPOINTERQFRAME *a2,
        struct tagPOINTERINPUTFRAME *a3)
{
  __int64 v3; // rbx
  unsigned int v4; // r13d
  __int64 result; // rax
  unsigned int v9; // ecx
  unsigned int v10; // esi
  __int64 v11; // rbx
  int v12; // r14d
  unsigned int v13; // edi
  int v14; // edx
  struct tagQMSG *NodeQueuedMessage; // rax
  int v16; // r14d
  __int64 v17; // r12
  unsigned int v18; // r14d
  __int64 v19; // rdi
  __int64 *v20; // rbx
  struct tagQ *v21; // [rsp+30h] [rbp-48h] BYREF
  int v22; // [rsp+88h] [rbp+10h]
  int v24; // [rsp+98h] [rbp+20h] BYREF

  v3 = *((unsigned int *)a2 + 4);
  v4 = 0;
  result = qword_1C032B900;
  dword_1C032B8FC = 0;
  if ( gPointerCoalesceInfo < (unsigned int)v3 )
  {
    if ( qword_1C032B900 )
    {
      Win32FreePool(qword_1C032B900);
      result = 0LL;
      gPointerCoalesceInfo = 0;
      qword_1C032B900 = 0LL;
    }
    if ( (_DWORD)v3 )
    {
      v9 = 16 * v3;
      if ( (unsigned __int64)(16 * v3) <= 0xFFFFFFFF )
      {
        if ( v9 )
        {
          result = Win32AllocPoolZInit(v9, 1885631317LL);
          qword_1C032B900 = result;
          gPointerCoalesceInfo = v3;
        }
      }
    }
  }
  if ( !result )
    return result;
  v10 = 1;
  v11 = *((_QWORD *)a1 + 9);
  v12 = 0;
  v22 = 1;
  v13 = 0;
  v24 = 1;
  if ( !*((_DWORD *)a1 + 6) )
    goto LABEL_28;
  while ( 1 )
  {
    if ( *(_DWORD *)(v11 + 8) == *(_DWORD *)a2 )
    {
      if ( (*(_DWORD *)v11 & 0x1000) == 0 && !(unsigned int)IsNodeFullyReleased((const struct tagPOINTERINFONODE *)v11) )
      {
        NodeQueuedMessage = FindNodeQueuedMessage((const struct tagPOINTERINFONODE *)v11, v14, &v21);
        if ( NodeQueuedMessage )
        {
          if ( *((_QWORD *)NodeQueuedMessage + 1) )
          {
            *(_QWORD *)(qword_1C032B900 + 16LL * (unsigned int)dword_1C032B8FC) = v21;
            *(_QWORD *)(qword_1C032B900 + 16LL * (unsigned int)dword_1C032B8FC++ + 8) = NodeQueuedMessage;
            v22 = CanCoalesceNodeWithPrevious(
                    a3,
                    (const struct tagPOINTERINFONODE *)v11,
                    NodeQueuedMessage,
                    a2,
                    (enum tagPOINTERCOALESCE *)&v24);
            v10 = v22;
            if ( !v22 )
              goto LABEL_27;
            v12 = 1;
            goto LABEL_18;
          }
          v16 = 18;
        }
        else
        {
          v16 = 15;
        }
        v10 = 0;
        goto LABEL_42;
      }
      if ( !(unsigned int)CanCoalesceIgnoreNode(
                            a3,
                            (const struct tagPOINTERINFONODE *)v11,
                            (enum tagPOINTERCOALESCE *)&v24) )
        break;
    }
LABEL_18:
    ++v13;
    v11 += 216LL;
    if ( v13 >= *((_DWORD *)a1 + 6) )
      goto LABEL_24;
  }
  v10 = 0;
  v22 = 0;
LABEL_24:
  if ( !v10 )
  {
LABEL_27:
    v16 = v24;
    goto LABEL_42;
  }
  if ( !v12 )
  {
LABEL_28:
    v16 = 19;
    v22 = 0;
    v10 = 0;
    goto LABEL_29;
  }
  v16 = v24;
LABEL_29:
  v24 = v16;
  if ( v10 )
  {
    if ( *((_DWORD *)a2 + 4) != *(_DWORD *)(*((_QWORD *)a2 + 4) + 16LL) )
    {
      v16 = 17;
      v22 = 0;
      v24 = 17;
      v10 = 0;
    }
    if ( v10 )
    {
      EtwTraceBeginPointerFrameCoalesce(*((unsigned int *)a1 + 4), *((unsigned int *)a1 + 6), 1LL);
      v17 = *((_QWORD *)a1 + 9);
      if ( *((_DWORD *)a1 + 6) )
      {
        v18 = 0;
        do
        {
          if ( *(_DWORD *)(v17 + 8) == *(_DWORD *)a2
            && (*(_DWORD *)v17 & 0x1000) == 0
            && !(unsigned int)IsNodeFullyReleased((const struct tagPOINTERINFONODE *)v17) )
          {
            v19 = *(_QWORD *)(qword_1C032B900 + 16LL * v18);
            v20 = *(__int64 **)(qword_1C032B900 + 16LL * v18 + 8);
            CoalesceNodeWithPrevious(a1, a3, (struct tagPOINTERINFONODE *)v17, v4, 1);
            DelQEntry(v19, v20, 1);
            ++v18;
          }
          ++v4;
          v17 += 216LL;
        }
        while ( v4 < *((_DWORD *)a1 + 6) );
        v10 = v22;
        v16 = v24;
      }
      EtwTraceEndPointerFrameCoalesce(*((unsigned int *)a1 + 4), *((unsigned int *)a1 + 6), 1LL);
    }
  }
LABEL_42:
  *((_DWORD *)a2 + 7) = v16;
  result = v10;
  *((_DWORD *)a2 + 5) = *((_DWORD *)a2 + 5) & 0xFFFFFFF9 | (2 * ((2 * (v10 & 1)) | v10 & 1));
  return result;
}
