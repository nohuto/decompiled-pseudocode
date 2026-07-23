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

int __fastcall RtlpSetBlockInfo(_QWORD *a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rax
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rdx
  _QWORD *v10; // rdi
  _QWORD *Heap; // rax
  unsigned __int64 v13; // [rsp+40h] [rbp+8h]
  __int64 v14; // [rsp+50h] [rbp+18h]
  __int64 v15; // [rsp+58h] [rbp+20h]

  v15 = a4;
  v14 = a3;
  v5 = a1[1];
  v6 = a2 + a3 - 1;
  if ( v6 >= v5 && a2 <= a1[2] )
  {
    if ( a2 <= v5 )
      v8 = 0LL;
    else
      v8 = (a2 - v5) / *a1;
    v6 = (a3 + a2 - v5 - 1) / *a1;
    v9 = (a3 + a2 - v5 - 1) % *a1;
    if ( v6 > 0xFF )
      v6 = 255LL;
    v13 = v6;
    if ( v8 <= v6 )
    {
      v10 = &a1[v8 + 7];
      while ( *a1 == 4096LL )
      {
        if ( !a4 )
        {
          v9 = v8 >> 3;
          *((_BYTE *)a1 + (v8 >> 3) + 24) |= 1 << (v8 & 7);
LABEL_21:
          v6 = v13;
          goto LABEL_22;
        }
        if ( *v10 && *v10 != a4 )
        {
          DbgPrint("Error\n", v9);
          a4 = v15;
          v6 = v13;
        }
        *v10 = a4;
LABEL_22:
        ++v8;
        ++v10;
        if ( v8 > v6 )
          return v6;
        a3 = v14;
      }
      if ( !*v10 )
      {
        Heap = RtlAllocateHeap(RtlpLeakHeap, 0, 0x840uLL);
        *v10 = Heap;
        if ( !Heap )
        {
          LODWORD(v6) = DbgPrint("Not enough memory to complete\n");
          return v6;
        }
        RtlpInitializeMap(Heap, a1);
        a4 = v15;
        a3 = v14;
        *(_QWORD *)(*v10 + 8LL) = a1[1] + v8 * *a1;
        *(_QWORD *)(*v10 + 16LL) = a1[1] - 1LL + *a1 * (v8 + 1);
      }
      RtlpSetBlockInfo(*v10, a2, a3, a4);
      a4 = v15;
      goto LABEL_21;
    }
  }
  return v6;
}
