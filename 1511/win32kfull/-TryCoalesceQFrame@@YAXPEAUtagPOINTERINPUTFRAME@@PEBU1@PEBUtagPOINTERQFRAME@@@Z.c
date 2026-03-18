/*
 * XREFs of ?TryCoalesceQFrame@@YAXPEAUtagPOINTERINPUTFRAME@@PEBU1@PEBUtagPOINTERQFRAME@@@Z @ 0x1C0230A6C
 * Callers:
 *     ?CommitAndReferenceFrame@PointerFrameList@@YAPEBUtagPOINTERINPUTFRAME@@PEAX0@Z @ 0x1C022EB20 (-CommitAndReferenceFrame@PointerFrameList@@YAPEBUtagPOINTERINPUTFRAME@@PEAX0@Z.c)
 *     ?EndQFrameNodeDeferment@@YAXPEAUtagPOINTERQFRAME@@PEAUtagPOINTERINFONODE@@PEAUtagPOINTERINPUTFRAME@@_K@Z @ 0x1C022F540 (-EndQFrameNodeDeferment@@YAXPEAUtagPOINTERQFRAME@@PEAUtagPOINTERINFONODE@@PEAUtagPOINTERINPUTFRA.c)
 *     xxxSetManipulationInputTarget @ 0x1C0231318 (xxxSetManipulationInputTarget.c)
 * Callees:
 *     ?IsPointerInfoNodeValid@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C01DB740 (-IsPointerInfoNodeValid@@YAHPEBUtagPOINTERINFONODE@@@Z.c)
 *     ?CreateAndReferenceMsgData@PointerList@@YA_KGKKIH@Z @ 0x1C01FC3D0 (-CreateAndReferenceMsgData@PointerList@@YA_KGKKIH@Z.c)
 *     ?CoalesceNodeWithPrevious@@YA_KPEBUtagPOINTERINPUTFRAME@@0PEAUtagPOINTERINFONODE@@KH@Z @ 0x1C022E710 (-CoalesceNodeWithPrevious@@YA_KPEBUtagPOINTERINPUTFRAME@@0PEAUtagPOINTERINFONODE@@KH@Z.c)
 */

void __fastcall TryCoalesceQFrame(
        struct tagPOINTERINPUTFRAME *a1,
        const struct tagPOINTERINPUTFRAME *a2,
        const struct tagPOINTERQFRAME *a3)
{
  __int64 v3; // r9
  int v4; // r11d
  int v5; // eax
  int v8; // ebp
  int v9; // r12d
  int v10; // edi
  unsigned int v11; // r8d
  int v12; // edx
  int v13; // eax
  int v14; // r8d
  int v15; // r13d
  unsigned int v16; // r14d
  _DWORD *i; // rsi
  const struct tagPOINTERINPUTFRAME *v18; // r10
  __int64 v19; // rbp
  _QWORD *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rcx
  bool v24; // zf
  int v25; // eax
  int v26; // [rsp+70h] [rbp+8h]
  int v27; // [rsp+80h] [rbp+18h]

  v3 = *((_QWORD *)a1 + 10);
  v4 = 0;
  v5 = 0;
  v8 = 0;
  v26 = 0;
  v27 = 0;
  v9 = 1;
  v10 = 0;
  v11 = 0;
  if ( *((_DWORD *)a1 + 6) )
  {
    do
    {
      if ( *(_DWORD *)v3 == -1 )
        break;
      if ( !a3 || a3 == (const struct tagPOINTERQFRAME *)v3 )
      {
        v12 = *(_DWORD *)(v3 + 20);
        if ( (v12 & 2) != 0 && *(_DWORD *)(v3 + 16) != *(_DWORD *)(*(_QWORD *)(v3 + 32) + 16LL) )
        {
          *(_DWORD *)(v3 + 24) = 17;
          *(_DWORD *)(v3 + 20) = v12 & 0xFFFFFFFD;
        }
        v13 = *(_DWORD *)(v3 + 20);
        if ( (v13 & 2) != 0 )
        {
          *(_DWORD *)(v3 + 20) = v13 | 4;
          v5 = 1;
          v26 = 1;
        }
        else
        {
          v5 = v26;
        }
        *(_QWORD *)(v3 + 32) = 0LL;
      }
      ++v11;
      v3 += 40LL;
    }
    while ( v11 < *((_DWORD *)a1 + 6) );
    if ( v5 )
    {
      EtwTraceBeginPointerFrameCoalesce(*((unsigned int *)a1 + 4), *((unsigned int *)a1 + 6), 0LL);
      v4 = 0;
    }
  }
  v14 = 1;
  v15 = 1;
  v16 = 0;
  for ( i = (_DWORD *)*((_QWORD *)a1 + 9); v16 < *((_DWORD *)a1 + 6); i += 54 )
  {
    if ( (unsigned int)IsPointerInfoNodeValid((const struct tagPOINTERINFONODE *)i) )
    {
      v19 = *((_QWORD *)a1 + 10) + 40LL * (unsigned int)i[2];
      if ( (a3 || *(_QWORD *)(v19 + 8) == -1LL) && a3 != (const struct tagPOINTERQFRAME *)v19 )
      {
        v15 = (*(_BYTE *)(v19 + 20) & 4) != 0 ? v15 : 0;
      }
      else
      {
        if ( (*(_DWORD *)(v19 + 20) & 2) != 0 )
        {
          *((_QWORD *)i + 2) = CoalesceNodeWithPrevious(a1, v18, (struct tagPOINTERINFONODE *)i, v16, v4);
        }
        else
        {
          v15 = v4;
          v20 = PointerList::CreateAndReferenceMsgData(
                  (PointerList *)*((unsigned __int16 *)i + 30),
                  *((_DWORD *)a1 + 4),
                  v16,
                  i[17],
                  -__CFSHR__(*i, 7));
          v21 = *((unsigned __int16 *)i + 30);
          v22 = *((unsigned __int16 *)i + 24);
          *((_QWORD *)i + 2) = v20;
          EtwTracePointerNoCoalesce(v22, v21, *(unsigned int *)(v19 + 24), 0LL);
        }
        v4 = 0;
        v14 = 1;
        if ( !*((_QWORD *)i + 2) )
        {
          v23 = *((_QWORD *)a1 + 9) + 216LL * v16;
          *(_DWORD *)v23 |= 0x1000u;
          *(_QWORD *)(v23 + 16) = 0LL;
          ++*((_DWORD *)a1 + 7);
        }
      }
      v24 = *(_QWORD *)(v19 + 8) == -1LL;
      v8 = v27;
      if ( !v24 )
        v9 = v4;
    }
    if ( !a3 )
    {
      if ( (unsigned int)IsPointerInfoNodeValid((const struct tagPOINTERINFONODE *)i) )
      {
        v25 = i[17];
        if ( (v25 & 0x2000) != 0 )
        {
          v27 = v14;
          v8 = v14;
          if ( (v25 & 0x10000) != 0 )
            v10 = v14;
        }
      }
    }
    v16 += v14;
  }
  if ( v26 != v4 )
  {
    EtwTraceEndPointerFrameCoalesce(*((unsigned int *)a1 + 4), *((unsigned int *)a1 + 6), 0LL);
    v14 = 1;
  }
  *((_DWORD *)a1 + 14) ^= (*((_DWORD *)a1 + 14) ^ (2 * v15)) & 2;
  if ( !a3 )
    *((_DWORD *)a1 + 14) = *((_DWORD *)a1 + 14) & 0xFFFFFFE3 | (4 * (v14 & v9 | (2 * (v14 & v8 | (2 * (v14 & v10))))));
}
