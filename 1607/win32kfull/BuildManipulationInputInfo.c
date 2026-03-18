/*
 * XREFs of BuildManipulationInputInfo @ 0x1C01F2EA0
 * Callers:
 *     xxxClientCallManipulationThread @ 0x1C020C898 (xxxClientCallManipulationThread.c)
 * Callees:
 *     memmove @ 0x1C015A040 (memmove.c)
 *     ?CountMTNodesReadyForRouting@@YAIPEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C01EEB4C (-CountMTNodesReadyForRouting@@YAIPEBUtagPOINTERINPUTFRAME@@@Z.c)
 *     ?IsManipulationThreadNode@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C01F00C8 (-IsManipulationThreadNode@@YAHPEBUtagPOINTERINFONODE@@@Z.c)
 *     CalcManipulationInputInfoSize @ 0x1C01F2F90 (CalcManipulationInputInfoSize.c)
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
  if ( *(_DWORD *)(a3 + 40) )
  {
    if ( *(_DWORD *)(*(_QWORD *)(a3 + 88) + 56LL) == 1 )
    {
      result = 96LL;
      goto LABEL_11;
    }
    if ( *(_DWORD *)(*(_QWORD *)(a3 + 88) + 56LL) != 2 )
    {
      if ( *(_DWORD *)(*(_QWORD *)(a3 + 88) + 56LL) == 3 )
      {
        result = 120LL;
        goto LABEL_11;
      }
      if ( *(_DWORD *)(*(_QWORD *)(a3 + 88) + 56LL) != 5 )
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
  for ( i = 0; i < *(_DWORD *)(a3 + 40); ++i )
  {
    v10 = *(_QWORD *)(a3 + 88) + 216LL * i;
    result = IsManipulationThreadNode((const struct tagPOINTERINFONODE *)v10);
    if ( (_DWORD)result )
    {
      v11 = 36LL * (unsigned int)*a1;
      memmove(&a1[v11 + 2], (const void *)(v10 + 56), v8);
      if ( (*(_DWORD *)(v10 + 4) & 0x80u) == 0 )
        result = 0LL;
      else
        result = *(unsigned int *)(v10 + 212);
      *(_QWORD *)&a1[v11 + 8] = result;
      ++*a1;
    }
  }
  return result;
}
