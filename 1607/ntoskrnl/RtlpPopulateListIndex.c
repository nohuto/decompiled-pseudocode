/*
 * XREFs of RtlpPopulateListIndex @ 0x14012EC00
 * Callers:
 *     RtlCreateHeap @ 0x140540768 (RtlCreateHeap.c)
 * Callees:
 *     DbgPrint @ 0x140084CC8 (DbgPrint.c)
 *     RtlpHeapAddListEntry @ 0x1400936E8 (RtlpHeapAddListEntry.c)
 *     RtlpHeapRemoveListEntry @ 0x1400941E8 (RtlpHeapRemoveListEntry.c)
 *     RtlpAnalyzeHeapFailure @ 0x1402183D8 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapHandleError @ 0x140218708 (RtlpHeapHandleError.c)
 */

__int64 __fastcall RtlpPopulateListIndex(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 *v6; // r13
  __int64 *i; // rbp
  unsigned __int64 v8; // rcx
  __int64 v9; // r15
  unsigned __int64 v10; // rdx
  __int64 v11; // rax
  int v12; // r14d
  __int64 v13; // rdx
  unsigned int v14; // r8d
  int v15; // eax
  unsigned int v16; // eax
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  *(_QWORD *)(a1 + 312) = a2;
  if ( *(_QWORD *)a2 )
  {
    v13 = (unsigned int)(*(_DWORD *)(a2 + 8) - *(_DWORD *)(a2 + 24) - 1);
    if ( *(_DWORD *)(a2 + 12) )
      v13 = (unsigned int)(2 * v13);
    *(_QWORD *)(*(_QWORD *)(a2 + 48) + 8 * v13) = 0LL;
    v14 = *(_DWORD *)(a2 + 8) - *(_DWORD *)(a2 + 24) - 1;
    v15 = 1 << (v14 & 0x1F);
    a3 = v14 >> 5;
    result = (unsigned int)~v15;
    *(_DWORD *)(*(_QWORD *)(a2 + 40) + 4 * a3) &= result;
  }
  v6 = (__int64 *)(a1 + 336);
  for ( i = *(__int64 **)(a1 + 344); v6 != i; i = (__int64 *)i[1] )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      *((_DWORD *)i - 2) ^= *(_DWORD *)(a1 + 136);
      if ( *((_BYTE *)i - 5) != (*((_BYTE *)i - 8) ^ (unsigned __int8)(*((_BYTE *)i - 7) ^ *((_BYTE *)i - 6))) )
        RtlpAnalyzeHeapFailure(a1);
    }
    v8 = *((unsigned __int16 *)i - 4);
    v9 = a2;
    v10 = *(unsigned int *)(a2 + 8);
    if ( v8 < v10 )
    {
LABEL_16:
      v12 = *((unsigned __int16 *)i - 4);
    }
    else
    {
      while ( 1 )
      {
        v11 = *(_QWORD *)v9;
        if ( !*(_QWORD *)v9 )
          break;
        v9 = *(_QWORD *)v9;
        if ( v8 < *(unsigned int *)(v11 + 8) )
          goto LABEL_16;
      }
      v12 = *(_DWORD *)(v9 + 8) - 1;
    }
    if ( *(_QWORD *)a2 )
    {
      v16 = *((unsigned __int16 *)i - 4);
      if ( (unsigned int)v8 >= (unsigned int)v10 )
        v16 = v10 - 1;
      RtlpHeapRemoveListEntry(a1, a2, a3, i, v16, *((unsigned __int16 *)i - 4));
    }
    result = RtlpHeapAddListEntry(a1, v9, a3, (__int64)i, v12, *((unsigned __int16 *)i - 4));
    if ( RtlpHeapErrorHandlerThreshold >= 1 )
    {
      result = *(unsigned int *)(*(_QWORD *)(v9 + 40)
                               + 4 * ((unsigned __int64)(unsigned int)(v12 - *(_DWORD *)(v9 + 24)) >> 5));
      if ( !_bittest((const int *)&result, ((_BYTE)v12 - *(_BYTE *)(v9 + 24)) & 0x1F) )
      {
        DbgPrint("RtlpGetBitState(LookupTable, (ULONG)(LookupIndex - LookupTable->BaseIndex))");
        RtlpHeapHandleError();
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
