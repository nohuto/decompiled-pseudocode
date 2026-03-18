/*
 * XREFs of ProcessorpSelectProcessorSet @ 0x1C006A934
 * Callers:
 *     ProcessorpFindIdtEntriesApic @ 0x1C0068F60 (ProcessorpFindIdtEntriesApic.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ProcessorpSelectProcessorSet(__int16 a1, char a2, __int64 *a3, __int64 a4)
{
  __int64 v7; // rbx
  __int64 v8; // rcx
  _QWORD *v9; // rax
  __int64 **v10; // rcx
  __int64 *v11; // rax
  __int64 *v12; // rsi
  __int64 v13; // rcx
  __int64 **v14; // rcx
  __int64 v15; // rdx
  int v16; // eax
  __int64 result; // rax
  __int64 v18; // rcx
  int v19; // ecx
  ULONGLONG v20; // rcx

  if ( *(_BYTE *)a4 )
  {
    v7 = *(_QWORD *)(a4 + 16);
  }
  else
  {
    if ( a2 )
    {
      v7 = ProcessorGroupListHead;
      v18 = *(_QWORD *)ProcessorGroupListHead;
      if ( *(__int64 **)(ProcessorGroupListHead + 8) != &ProcessorGroupListHead
        || *(_QWORD *)(v18 + 8) != ProcessorGroupListHead )
      {
        __fastfail(3u);
      }
      ProcessorGroupListHead = *(_QWORD *)ProcessorGroupListHead;
      *(_QWORD *)(v18 + 8) = &ProcessorGroupListHead;
      v10 = (__int64 **)qword_1C00590D8;
      *(_QWORD *)v7 = &ProcessorGroupListHead;
      *(_QWORD *)(v7 + 8) = v10;
      if ( *v10 != &ProcessorGroupListHead )
        __fastfail(3u);
    }
    else
    {
      v7 = *(_QWORD *)ProcessorGroupByNumber;
      v8 = **(_QWORD **)ProcessorGroupByNumber;
      v9 = *(_QWORD **)(*(_QWORD *)ProcessorGroupByNumber + 8LL);
      if ( *(_QWORD *)(v8 + 8) != *(_QWORD *)ProcessorGroupByNumber || *v9 != v7 )
        __fastfail(3u);
      *v9 = v8;
      *(_QWORD *)(v8 + 8) = v9;
      v10 = (__int64 **)qword_1C00590D8;
      *(_QWORD *)v7 = &ProcessorGroupListHead;
      *(_QWORD *)(v7 + 8) = v10;
      if ( *v10 != &ProcessorGroupListHead )
        __fastfail(3u);
    }
    *v10 = (__int64 *)v7;
    qword_1C00590D8 = v7;
  }
  if ( *(_DWORD *)(v7 + 36) != 1 && (unsigned __int16)(a1 - 1) > 2u )
    return 3221225485LL;
  v11 = (__int64 *)(v7 + 16);
  v12 = *(__int64 **)(v7 + 16);
  v13 = *v12;
  if ( v12[1] != v7 + 16 || *(__int64 **)(v13 + 8) != v12 )
    __fastfail(3u);
  *v11 = v13;
  *(_QWORD *)(v13 + 8) = v11;
  v14 = *(__int64 ***)(v7 + 24);
  *v12 = (__int64)v11;
  v12[1] = (__int64)v14;
  if ( *v14 != v11 )
    __fastfail(3u);
  *v14 = v12;
  *(_QWORD *)(v7 + 24) = v12;
  if ( a1 == 2 || *(_DWORD *)(v7 + 36) == 1 )
  {
    v19 = *((_DWORD *)v12 + 8);
    *(_DWORD *)(a4 + 8) = v19;
    v20 = v12[3] & ~(2 * (1LL << v19) - 1);
    if ( !v20 )
      v20 = v12[3];
    *((_DWORD *)v12 + 8) = RtlFindLeastSignificantBit(v20);
    v15 = 1LL << *(_DWORD *)(a4 + 8);
  }
  else
  {
    v15 = v12[3];
    *(_DWORD *)(a4 + 8) = *((_DWORD *)v12 + 4);
  }
  v16 = *(_DWORD *)(a4 + 8);
  if ( !*(_BYTE *)a4 )
  {
    *(_DWORD *)(a4 + 4) = v16;
    *(_BYTE *)a4 = 1;
    *(_QWORD *)(a4 + 16) = v7;
LABEL_17:
    a3[1] = 0LL;
    *((_WORD *)a3 + 4) = *(_WORD *)(v7 + 32);
    result = 0LL;
    *a3 = v15;
    return result;
  }
  if ( *(_DWORD *)(a4 + 4) != v16 )
    goto LABEL_17;
  return 3221226021LL;
}
