/*
 * XREFs of RtlpAllocateHeapInternal @ 0x14010A1EC
 * Callers:
 *     RtlAllocateHeap @ 0x14010A1D0 (RtlAllocateHeap.c)
 *     RtlpHpAllocWithExceptionProtection @ 0x140246B44 (RtlpHpAllocWithExceptionProtection.c)
 * Callees:
 *     RtlFreeHeap @ 0x140109854 (RtlFreeHeap.c)
 *     RtlpAllocateHeap @ 0x14010A2D0 (RtlpAllocateHeap.c)
 *     RtlpAllocateHeapRaiseException @ 0x1402484A0 (RtlpAllocateHeapRaiseException.c)
 *     RtlpSetupExtendedBlock @ 0x140248644 (RtlpSetupExtendedBlock.c)
 *     RtlpLogHeapAllocateEvent @ 0x14024E90C (RtlpLogHeapAllocateEvent.c)
 */

char *__fastcall RtlpAllocateHeapInternal(_DWORD *HeapHandle, unsigned __int64 a2, int a3)
{
  unsigned int v3; // edi
  int v4; // r12d
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // r14
  int v9; // ebp
  int v10; // r13d
  __int64 v11; // r15
  __int64 Heap; // rax
  int v13; // r9d
  char *v14; // rbx
  int v16; // eax
  __int64 v17; // rdi
  char *v18; // rdx
  unsigned __int64 v19; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v20; // [rsp+80h] [rbp+18h]

  v3 = 0;
  v4 = HeapHandle[29] | a3;
  v6 = 0LL;
  v20 = 0;
  v19 = 0LL;
  v7 = 0LL;
  v8 = a2;
  if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
  {
    v3 = 5;
    goto LABEL_12;
  }
  v9 = HeapHandle[36];
  v10 = -1073741823;
  if ( v9 )
  {
    if ( (v4 & 0x3C000102) != 0 )
    {
      v9 = 0;
      goto LABEL_3;
    }
    if ( (_WORD)v9 == 1 )
    {
      v16 = CLFS_LSN_NULL_EXT(HeapHandle, 0LL, 1LL, &v19);
      v6 = v19;
    }
    else
    {
      v16 = -1073741823;
    }
    if ( v16 >= 0 )
    {
      v19 = ((v6 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 16;
      v8 += v19;
      goto LABEL_3;
    }
LABEL_12:
    v14 = 0LL;
    goto LABEL_13;
  }
LABEL_3:
  v11 = 1LL;
  if ( v8 )
    v11 = v8;
  v7 = (v11 + 23) & 0xFFFFFFFFFFFFFFF0uLL;
  Heap = RtlpAllocateHeap((_DWORD)HeapHandle, v4 | 2u, v8, v7);
  v14 = (char *)Heap;
  if ( Heap )
  {
    if ( !v9 )
      goto LABEL_7;
    v8 -= v19;
    v17 = Heap;
    v14 = (char *)RtlpSetupExtendedBlock((_DWORD)HeapHandle, v4, Heap, v13, v19, v9);
    if ( (_WORD)v9 == 1 )
      v10 = CLFS_LSN_NULL_EXT(HeapHandle, v14, 2LL, v17);
    if ( v10 >= 0 )
    {
LABEL_7:
      v3 = v20;
      goto LABEL_8;
    }
    RtlFreeHeap(HeapHandle, 0, v14);
    v14 = 0LL;
  }
  v3 = v20;
LABEL_13:
  if ( (v4 & 4) != 0 )
  {
    if ( !v7 )
      v7 = v8;
    RtlpAllocateHeapRaiseException(v7);
  }
LABEL_8:
  if ( (BYTE8(PerfGlobalGroupMask) & 0x20) != 0 && v3 != 5 )
  {
    if ( !v14 )
      goto LABEL_33;
    v18 = v14 - 16;
    _m_prefetchw(v14 - 16);
    if ( *(v14 - 1) == 5 )
      v18 -= 16 * (unsigned __int8)v18[14];
    if ( (((unsigned __int8)v18[10] ^ (unsigned __int8)(*((_BYTE *)HeapHandle + 138) & (HeapHandle[31] >> 17))) & 8) == 0 )
LABEL_33:
      RtlpLogHeapAllocateEvent(HeapHandle, v14, v8, v3);
  }
  return v14;
}
