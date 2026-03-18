/*
 * XREFs of BuildManipulationInputInfo @ 0x1C01FB6A8
 * Callers:
 *     xxxClientCallManipulationThread @ 0x1C0213E2C (xxxClientCallManipulationThread.c)
 * Callees:
 *     memmove @ 0x1C015D180 (memmove.c)
 *     ?CountMTNodesReadyForRouting@@YAIPEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C01F74B8 (-CountMTNodesReadyForRouting@@YAIPEBUtagPOINTERINPUTFRAME@@@Z.c)
 *     ?IsManipulationThreadNode@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C01F8A30 (-IsManipulationThreadNode@@YAHPEBUtagPOINTERINFONODE@@@Z.c)
 *     CalcManipulationInputInfoSize @ 0x1C01FB798 (CalcManipulationInputInfoSize.c)
 */

__int64 __fastcall BuildManipulationInputInfo(_DWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // eax
  __int64 result; // rax
  unsigned int v7; // r9d
  size_t v8; // rbp
  unsigned int i; // edi
  __int64 v10; // rsi
  __int64 v11; // r15

  v5 = CountMTNodesReadyForRouting((const struct tagPOINTERINPUTFRAME *)a3);
  result = CalcManipulationInputInfoSize(v5);
  if ( v7 < (unsigned int)result )
    return result;
  v8 = 0LL;
  if ( *(_DWORD *)(a3 + 24) )
  {
    if ( *(_DWORD *)(*(_QWORD *)(a3 + 72) + 56LL) == 1 )
    {
      result = 96LL;
      goto LABEL_11;
    }
    if ( *(_DWORD *)(*(_QWORD *)(a3 + 72) + 56LL) != 2 )
    {
      if ( *(_DWORD *)(*(_QWORD *)(a3 + 72) + 56LL) == 3 )
      {
        result = 120LL;
        goto LABEL_11;
      }
      if ( *(_DWORD *)(*(_QWORD *)(a3 + 72) + 56LL) != 5 )
      {
        result = 0LL;
LABEL_11:
        v8 = (unsigned int)result;
        goto LABEL_12;
      }
    }
    result = 144LL;
    goto LABEL_11;
  }
LABEL_12:
  *a1 = 0;
  for ( i = 0; i < *(_DWORD *)(a3 + 24); ++i )
  {
    v10 = *(_QWORD *)(a3 + 72) + 216LL * i;
    result = IsManipulationThreadNode((const struct tagPOINTERINFONODE *)v10);
    if ( (_DWORD)result )
    {
      v11 = 36LL * (unsigned int)*a1;
      memmove(&a1[v11 + 2], (const void *)(v10 + 56), v8);
      if ( (*(_DWORD *)(v10 + 4) & 0x40) != 0 )
        result = *(unsigned int *)(v10 + 212);
      else
        result = 0LL;
      *(_QWORD *)&a1[v11 + 8] = result;
      ++*a1;
    }
  }
  return result;
}
