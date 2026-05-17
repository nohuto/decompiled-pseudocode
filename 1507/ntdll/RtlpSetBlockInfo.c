/*
 * XREFs of RtlpSetBlockInfo @ 0x1800DF484
 * Callers:
 *     RtlpLeakCallbackRoutine @ 0x1800DED80 (RtlpLeakCallbackRoutine.c)
 *     RtlpPushPageDescriptor @ 0x1800DEEF4 (RtlpPushPageDescriptor.c)
 *     RtlpSetBlockInfo @ 0x1800DF484 (RtlpSetBlockInfo.c)
 * Callees:
 *     DbgPrint @ 0x180010000 (DbgPrint.c)
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     RtlpInitializeMap @ 0x1800DED30 (RtlpInitializeMap.c)
 *     RtlpSetBlockInfo @ 0x1800DF484 (RtlpSetBlockInfo.c)
 */

unsigned __int64 __fastcall RtlpSetBlockInfo(_QWORD *a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // rcx
  unsigned __int64 result; // rax
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rdx
  _QWORD *v10; // rdi
  _QWORD *Heap; // rax
  unsigned __int64 v12; // [rsp+40h] [rbp+8h]
  __int64 v13; // [rsp+50h] [rbp+18h]
  __int64 v14; // [rsp+58h] [rbp+20h]

  v14 = a4;
  v13 = a3;
  v5 = a1[1];
  result = a2 + a3 - 1;
  if ( result >= v5 && a2 <= a1[2] )
  {
    if ( a2 <= v5 )
      v8 = 0LL;
    else
      v8 = (a2 - v5) / *a1;
    result = (a3 + a2 - v5 - 1) / *a1;
    v9 = (a3 + a2 - v5 - 1) % *a1;
    if ( result > 0xFF )
      result = 255LL;
    v12 = result;
    if ( v8 <= result )
    {
      v10 = &a1[v8 + 7];
      while ( *a1 == 4096LL )
      {
        if ( !a4 )
        {
          v9 = v8 >> 3;
          *((_BYTE *)a1 + (v8 >> 3) + 24) |= 1 << (v8 & 7);
LABEL_21:
          result = v12;
          goto LABEL_22;
        }
        if ( *v10 )
        {
          if ( *v10 != a4 )
          {
            DbgPrint("Error\n", v9);
            a4 = v14;
            result = v12;
          }
        }
        *v10 = a4;
LABEL_22:
        ++v8;
        ++v10;
        if ( v8 > result )
          return result;
        a3 = v13;
      }
      if ( !*v10 )
      {
        Heap = (_QWORD *)RtlAllocateHeap(RtlpLeakHeap, 0, 2112LL);
        *v10 = Heap;
        if ( !Heap )
          return DbgPrint("Not enough memory to complete\n");
        RtlpInitializeMap(Heap, a1);
        a4 = v14;
        a3 = v13;
        *(_QWORD *)(*v10 + 8LL) = a1[1] + v8 * *a1;
        *(_QWORD *)(*v10 + 16LL) = a1[1] - 1LL + *a1 * (v8 + 1);
      }
      RtlpSetBlockInfo(*v10, a2, a3, a4);
      a4 = v14;
      goto LABEL_21;
    }
  }
  return result;
}
