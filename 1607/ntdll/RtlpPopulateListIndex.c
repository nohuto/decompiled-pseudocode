/*
 * XREFs of RtlpPopulateListIndex @ 0x18004CB2C
 * Callers:
 *     RtlCreateHeap @ 0x18002BA10 (RtlCreateHeap.c)
 *     RtlpExtendListLookup @ 0x18004D1D4 (RtlpExtendListLookup.c)
 * Callees:
 *     RtlpHeapRemoveListEntry @ 0x1800289DC (RtlpHeapRemoveListEntry.c)
 *     RtlpHeapAddListEntry @ 0x18004C2E4 (RtlpHeapAddListEntry.c)
 *     DbgPrint @ 0x18005C3D0 (DbgPrint.c)
 *     RtlpAnalyzeHeapFailure @ 0x1800F79F4 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapHandleError @ 0x1800F7D80 (RtlpHeapHandleError.c)
 */

__int64 __fastcall RtlpPopulateListIndex(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 *i; // rbp
  __int64 v6; // r15
  int v7; // r14d
  unsigned int v8; // eax
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  __int64 v11; // rax
  unsigned int v12; // eax
  int v13; // ecx
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  *(_QWORD *)(a1 + 312) = a2;
  if ( *(_QWORD *)a2 )
  {
    v12 = *(_DWORD *)(a2 + 8) - *(_DWORD *)(a2 + 24) - 1;
    if ( *(_DWORD *)(a2 + 12) )
      v12 *= 2;
    *(_QWORD *)(*(_QWORD *)(a2 + 48) + 8LL * v12) = 0LL;
    v13 = *(_DWORD *)(a2 + 8) - *(_DWORD *)(a2 + 24);
    result = (unsigned int)~(1 << ((v13 - 1) & 0x1F));
    *(_DWORD *)(*(_QWORD *)(a2 + 40) + 4LL * ((unsigned int)(v13 - 1) >> 5)) &= result;
  }
  for ( i = *(__int64 **)(a1 + 344); (__int64 *)(a1 + 336) != i; i = (__int64 *)i[1] )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      *((_DWORD *)i - 2) ^= *(_DWORD *)(a1 + 136);
      if ( *((_BYTE *)i - 5) != (*((_BYTE *)i - 8) ^ (unsigned __int8)(*((_BYTE *)i - 7) ^ *((_BYTE *)i - 6))) )
        RtlpAnalyzeHeapFailure(a1, i - 2);
    }
    v9 = *((unsigned __int16 *)i - 4);
    v6 = a2;
    v10 = *(unsigned int *)(a2 + 8);
    if ( v9 < v10 )
    {
LABEL_4:
      v7 = *((unsigned __int16 *)i - 4);
    }
    else
    {
      while ( 1 )
      {
        v11 = *(_QWORD *)v6;
        if ( !*(_QWORD *)v6 )
          break;
        v6 = *(_QWORD *)v6;
        if ( v9 < *(unsigned int *)(v11 + 8) )
          goto LABEL_4;
      }
      v7 = *(_DWORD *)(v6 + 8) - 1;
    }
    if ( *(_QWORD *)a2 )
    {
      v8 = *((unsigned __int16 *)i - 4);
      if ( (unsigned int)v9 >= (unsigned int)v10 )
        v8 = v10 - 1;
      RtlpHeapRemoveListEntry(a1, a2, 1, i, v8, *((unsigned __int16 *)i - 4));
    }
    result = RtlpHeapAddListEntry(a1, v6, 1, (__int64)i, v7, *((unsigned __int16 *)i - 4));
    if ( RtlpHeapErrorHandlerThreshold >= 1 )
    {
      result = *(unsigned int *)(*(_QWORD *)(v6 + 40)
                               + 4 * ((unsigned __int64)(unsigned int)(v7 - *(_DWORD *)(v6 + 24)) >> 5));
      if ( !_bittest((const int *)&result, ((_BYTE)v7 - *(_BYTE *)(v6 + 24)) & 0x1F) )
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        else
          DbgPrint("HEAP: ");
        DbgPrint("RtlpGetBitState(LookupTable, (ULONG)(LookupIndex - LookupTable->BaseIndex))");
        result = RtlpHeapHandleError(1LL);
      }
    }
    if ( *(_DWORD *)(a1 + 124) )
    {
      *((_BYTE *)i - 5) = *((_BYTE *)i - 8) ^ *((_BYTE *)i - 7) ^ *((_BYTE *)i - 6);
      result = *(unsigned int *)(a1 + 136);
      *((_DWORD *)i - 2) ^= result;
    }
  }
  return result;
}
