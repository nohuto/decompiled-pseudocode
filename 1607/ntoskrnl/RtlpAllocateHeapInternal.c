/*
 * XREFs of RtlpAllocateHeapInternal @ 0x1400937B8
 * Callers:
 *     RtlAllocateHeap @ 0x140093790 (RtlAllocateHeap.c)
 *     RtlpHpAllocWithExceptionProtection @ 0x140211D58 (RtlpHpAllocWithExceptionProtection.c)
 * Callees:
 *     RtlFreeHeap @ 0x140092CA4 (RtlFreeHeap.c)
 *     RtlpAllocateHeap @ 0x14009389C (RtlpAllocateHeap.c)
 *     RtlpAllocateHeapRaiseException @ 0x1402135A4 (RtlpAllocateHeapRaiseException.c)
 *     RtlpSetupExtendedBlock @ 0x140213748 (RtlpSetupExtendedBlock.c)
 *     RtlpLogHeapAllocateEvent @ 0x140218C64 (RtlpLogHeapAllocateEvent.c)
 */

char *__fastcall RtlpAllocateHeapInternal(_DWORD *HeapHandle, unsigned __int64 a2, int a3, __int16 a4)
{
  unsigned int v4; // edi
  int v5; // r12d
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // r14
  int v10; // ebp
  int v11; // r13d
  __int64 v12; // r15
  __int64 Heap; // rax
  int v14; // r9d
  char *v15; // rbx
  int v17; // eax
  __int64 v18; // rdi
  char *v19; // rdx
  unsigned __int64 v20; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v21; // [rsp+88h] [rbp+20h]

  LOWORD(v21) = a4;
  v4 = 0;
  v5 = HeapHandle[29] | a3;
  v7 = 0LL;
  v21 = 0;
  v20 = 0LL;
  v8 = 0LL;
  v9 = a2;
  if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
  {
    v4 = 5;
    goto LABEL_12;
  }
  v10 = HeapHandle[36];
  v11 = -1073741823;
  if ( v10 )
  {
    if ( (v5 & 0x3C000102) != 0 )
    {
      v10 = 0;
      goto LABEL_3;
    }
    if ( (_WORD)v10 == 1 )
    {
      v17 = CLFS_LSN_NULL_EXT(HeapHandle, 0LL, 1LL, &v20);
      v7 = v20;
    }
    else
    {
      v17 = -1073741823;
    }
    if ( v17 >= 0 )
    {
      v20 = ((v7 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 16;
      v9 += v20;
      goto LABEL_3;
    }
LABEL_12:
    v15 = 0LL;
    goto LABEL_13;
  }
LABEL_3:
  v12 = 1LL;
  if ( v9 )
    v12 = v9;
  v8 = (v12 + 23) & 0xFFFFFFFFFFFFFFF0uLL;
  Heap = RtlpAllocateHeap((_DWORD)HeapHandle, v5 | 2u, v9, v8);
  v15 = (char *)Heap;
  if ( Heap )
  {
    if ( !v10 )
      goto LABEL_7;
    v9 -= v20;
    v18 = Heap;
    v15 = (char *)RtlpSetupExtendedBlock((_DWORD)HeapHandle, v5, Heap, v14, v20, v10);
    if ( (_WORD)v10 == 1 )
      v11 = CLFS_LSN_NULL_EXT(HeapHandle, v15, 2LL, v18);
    if ( v11 >= 0 )
    {
LABEL_7:
      v4 = v21;
      goto LABEL_8;
    }
    RtlFreeHeap(HeapHandle, 0, v15);
    v15 = 0LL;
  }
  v4 = v21;
LABEL_13:
  if ( (v5 & 4) != 0 )
  {
    if ( !v8 )
      v8 = v9;
    RtlpAllocateHeapRaiseException(v8);
  }
LABEL_8:
  if ( (BYTE8(PerfGlobalGroupMask) & 0x20) != 0 && v4 != 5 )
  {
    if ( !v15 )
      goto LABEL_33;
    v19 = v15 - 16;
    _m_prefetchw(v15 - 16);
    if ( *(v15 - 1) == 5 )
      v19 -= 16 * (unsigned __int8)v19[14];
    if ( (((unsigned __int8)v19[10] ^ (unsigned __int8)(*((_BYTE *)HeapHandle + 138) & (HeapHandle[31] >> 17))) & 8) == 0 )
LABEL_33:
      RtlpLogHeapAllocateEvent(HeapHandle, v15, v9, v4);
  }
  return v15;
}
