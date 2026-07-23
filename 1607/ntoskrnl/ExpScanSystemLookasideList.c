/*
 * XREFs of ExpScanSystemLookasideList @ 0x14008CE00
 * Callers:
 *     KeBalanceSetManager @ 0x14013F4AC (KeBalanceSetManager.c)
 * Callees:
 *     ExpComputeLookasideDepth @ 0x14008CF84 (ExpComputeLookasideDepth.c)
 */

__int64 ExpScanSystemLookasideList()
{
  __int64 v0; // rdi
  unsigned int v1; // ebp
  int v2; // ebx
  __int64 v3; // r14
  __int64 *v4; // rsi
  __int64 v5; // rcx
  __int64 v6; // rdx
  _DWORD *v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 result; // rax
  _GENERAL_LOOKASIDE **p_L; // rbx
  _GENERAL_LOOKASIDE *v14; // rcx
  __int64 v15; // rdx

  v0 = 9LL;
  v1 = 3 * KeNumberProcessors_0;
  v2 = ExpPoolScanCount;
  if ( ExpPoolScanCount == (_DWORD)KeNumberProcessors_0 )
  {
    p_L = &KeGetCurrentPrcb()->PPLookasideList[0].L;
    do
    {
      v14 = *p_L;
      if ( *p_L )
      {
        v15 = v14->AllocateMisses - v14->LastAllocateMisses;
        v14->LastAllocateMisses = v14->AllocateMisses;
        ExpComputeLookasideDepth(v14, v15, v1);
      }
      p_L += 2;
      --v0;
    }
    while ( v0 );
    v2 = ExpPoolScanCount;
  }
  else
  {
    v3 = KiProcessorBlock[ExpPoolScanCount];
    v4 = (__int64 *)(v3 + 1920);
    do
    {
      v5 = *v4;
      if ( *v4 )
      {
        v6 = (unsigned int)(*(_DWORD *)(v5 + 24) - *(_DWORD *)(v5 + 84));
        *(_DWORD *)(v5 + 84) = *(_DWORD *)(v5 + 24);
        ExpComputeLookasideDepth(v5, v6, v1);
      }
      v4 += 2;
      --v0;
    }
    while ( v0 );
    v7 = (_DWORD *)(v3 + 2260);
    v8 = 32LL;
    do
    {
      v9 = (unsigned int)(*(v7 - 16) - *(v7 - 1) - (*(v7 - 15) - *v7));
      *v7 = *(v7 - 15);
      ExpComputeLookasideDepth(v7 - 21, v9, v1);
      v10 = (unsigned int)(v7[752] - v7[767] - (v7[753] - v7[768]));
      v7[768] = v7[753];
      ExpComputeLookasideDepth(v7 + 747, v10, v1);
      v11 = (unsigned int)(v7[1520] - v7[1535] - (v7[1521] - v7[1536]));
      v7[1536] = v7[1521];
      ExpComputeLookasideDepth(v7 + 1515, v11, v1);
      v7 += 24;
      --v8;
    }
    while ( v8 );
  }
  result = (unsigned int)KeNumberProcessors_0;
  ExpPoolScanCount = v2 + 1;
  if ( v2 + 1 > (unsigned int)KeNumberProcessors_0 )
    ExpPoolScanCount = 0;
  return result;
}
