/*
 * XREFs of RtlpCoalesceHeap @ 0x180078F24
 * Callers:
 *     RtlpExtendHeap @ 0x1800334C0 (RtlpExtendHeap.c)
 *     RtlCompactHeap @ 0x180078DE0 (RtlCompactHeap.c)
 * Callees:
 *     RtlpHeapRemoveListEntry @ 0x180006F18 (RtlpHeapRemoveListEntry.c)
 *     RtlpDeCommitFreeBlock @ 0x180029048 (RtlpDeCommitFreeBlock.c)
 *     RtlpInsertFreeBlock @ 0x180029B50 (RtlpInsertFreeBlock.c)
 *     RtlpCommitBlock @ 0x180036FB4 (RtlpCommitBlock.c)
 *     RtlpCoalesceFreeBlocks @ 0x18007902C (RtlpCoalesceFreeBlocks.c)
 *     RtlpLogHeapFailure @ 0x180093344 (RtlpLogHeapFailure.c)
 *     RtlpAnalyzeHeapFailure @ 0x1800EEA14 (RtlpAnalyzeHeapFailure.c)
 */

__int64 __fastcall RtlpCoalesceHeap(_QWORD *BaseAddress)
{
  char *v1; // rbp
  __int64 v2; // rsi
  char *v3; // r14
  unsigned __int64 v5; // rdi
  __int64 v6; // r15
  __int64 v7; // rax
  __int64 *v9; // r12
  unsigned __int64 v10; // r8
  __int64 v11; // r14
  __int64 v12; // rax
  __int64 v13; // r9
  __int64 v14; // rdx
  unsigned __int64 i; // rax
  __int64 v16; // rax
  unsigned int v17; // ecx

  v1 = (char *)(BaseAddress + 42);
  v2 = 0LL;
  v3 = (char *)BaseAddress[43];
  if ( BaseAddress + 42 != (_QWORD *)v3 )
  {
    do
    {
      v5 = (unsigned __int64)(v3 - 16);
      if ( *((_DWORD *)BaseAddress + 31) )
      {
        *(_DWORD *)(v5 + 8) ^= *((_DWORD *)BaseAddress + 34);
        if ( *(_BYTE *)(v5 + 11) != (*(_BYTE *)(v5 + 8) ^ (unsigned __int8)(*(_BYTE *)(v5 + 9) ^ *(_BYTE *)(v5 + 10))) )
          RtlpAnalyzeHeapFailure(BaseAddress, v3 - 16);
      }
      v6 = *(unsigned __int16 *)(v5 + 8);
      v3 = *(char **)v3;
      if ( (*(_BYTE *)(v5 + 10) & 8) != 0 )
      {
        v9 = *(__int64 **)(v5 + 24);
        v10 = v5 + 16;
        v11 = *(_QWORD *)(v5 + 16);
        v12 = *v9;
        v13 = *(_QWORD *)(v11 + 8);
        if ( *v9 == v13 && v12 == v10 )
        {
          BaseAddress[24] -= v6;
          v14 = BaseAddress[39];
          if ( v14 )
          {
            for ( i = *(unsigned int *)(v14 + 8); ; i = *(unsigned int *)(v16 + 8) )
            {
              if ( *(unsigned __int16 *)(v5 + 8) < i )
              {
                v17 = *(unsigned __int16 *)(v5 + 8);
                goto LABEL_25;
              }
              v16 = *(_QWORD *)v14;
              if ( !*(_QWORD *)v14 )
                break;
              v14 = *(_QWORD *)v14;
            }
            v17 = *(_DWORD *)(v14 + 8) - 1;
LABEL_25:
            RtlpHeapRemoveListEntry(
              (__int64)BaseAddress,
              v14,
              1,
              (__int64 *)(v5 + 16),
              v17,
              *(unsigned __int16 *)(v5 + 8));
          }
          *v9 = v11;
          *(_QWORD *)(v11 + 8) = v9;
          if ( (*(_BYTE *)(v5 + 10) & 8) != 0 )
            RtlpCommitBlock(BaseAddress, v5);
          RtlpDeCommitFreeBlock(BaseAddress, v5, *(unsigned __int16 *)(v5 + 8), 1);
        }
        else
        {
          RtlpLogHeapFailure(12, (_DWORD)BaseAddress, v10, v13, v12, 0LL);
        }
        v3 = (char *)*((_QWORD *)v1 + 1);
      }
      else
      {
        v7 = RtlpCoalesceFreeBlocks(BaseAddress);
        if ( !v2 || *(_WORD *)(v2 + 8) < *(_WORD *)(v7 + 8) )
          v2 = v7;
        if ( *((_DWORD *)BaseAddress + 31) )
        {
          *(_BYTE *)(v7 + 11) = *(_BYTE *)(v7 + 8) ^ *(_BYTE *)(v7 + 9) ^ *(_BYTE *)(v7 + 10);
          *(_DWORD *)(v7 + 8) ^= *((_DWORD *)BaseAddress + 34);
        }
      }
    }
    while ( v1 != v3 );
    if ( v2 )
    {
      if ( *((_DWORD *)BaseAddress + 31) )
      {
        *(_DWORD *)(v2 + 8) ^= *((_DWORD *)BaseAddress + 34);
        if ( *(_BYTE *)(v2 + 11) != (*(_BYTE *)(v2 + 8) ^ (unsigned __int8)(*(_BYTE *)(v2 + 9) ^ *(_BYTE *)(v2 + 10))) )
          RtlpAnalyzeHeapFailure(BaseAddress, v2);
      }
    }
  }
  return v2;
}
