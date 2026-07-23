/*
 * XREFs of EtwpPreserveLogger @ 0x1406A9FC4
 * Callers:
 *     EtwpKsrCallback @ 0x1406A9EBC (EtwpKsrCallback.c)
 *     EtwpSetSoftRestartInformation @ 0x1406AA840 (EtwpSetSoftRestartInformation.c)
 * Callees:
 *     EtwpResetBufferHeader @ 0x1400870E4 (EtwpResetBufferHeader.c)
 *     EtwpInitializeBufferHeader @ 0x140087134 (EtwpInitializeBufferHeader.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     EtwpAddLogHeader @ 0x1404948D8 (EtwpAddLogHeader.c)
 *     EtwpBuildMdlForTraceBuffer @ 0x1406A9D20 (EtwpBuildMdlForTraceBuffer.c)
 *     EtwpPreserveMdlList @ 0x1406AA1E4 (EtwpPreserveMdlList.c)
 */

__int64 __fastcall EtwpPreserveLogger(__int64 a1)
{
  __m128i *v1; // rbp
  PVOID v4; // r14
  SIZE_T v5; // r15
  __m128i v6; // xmm7
  unsigned __int16 v7; // ax
  unsigned int v8; // ebx
  _DWORD *PoolWithTag; // rax
  _DWORD *v10; // rsi
  int v11; // ebx
  unsigned int *v12; // rax
  unsigned int *v13; // r12
  __int128 v14; // xmm6
  _QWORD *v15; // r15
  _QWORD *v16; // r13
  _QWORD *v17; // rdi
  _QWORD *v18; // rax
  _QWORD *v19; // rax
  unsigned int v20; // [rsp+80h] [rbp+8h]
  PVOID P; // [rsp+88h] [rbp+10h] BYREF

  v1 = *(__m128i **)(a1 + 896);
  if ( v1[2].m128i_i8[1] )
    return 0LL;
  v4 = 0LL;
  v5 = *(unsigned int *)(a1 + 4);
  v6 = v1[1];
  if ( ((v5 * (unsigned int)(*(_DWORD *)(a1 + 232) + 1)) & 0xFFFFFFFFFFFFF000uLL) > 0xFFFFFFFF000LL )
    return 3221225659LL;
  v7 = _mm_cvtsi128_si32(v6);
  v8 = v7 + 2;
  v20 = v7 + 18;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v20, 0x4B777445u);
  v10 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v20);
    v10[2] = *(_DWORD *)(a1 + 4);
    v10[3] = 16;
    memmove(v10 + 4, (const void *)_mm_srli_si128(v6, 8).m128i_i64[0], v8);
    v12 = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, v5, 0x4B777445u);
    v13 = v12;
    if ( v12 )
    {
      EtwpInitializeBufferHeader((__int16 *)a1, v12);
      EtwpResetBufferHeader((__int64)v13, 4);
      v14 = *(_OWORD *)(a1 + 152);
      *(__m128i *)(a1 + 152) = v6;
      EtwpAddLogHeader(a1, v13);
      *(_OWORD *)(a1 + 152) = v14;
      v11 = EtwpBuildMdlForTraceBuffer(v13, (struct _MDL **)&P);
      if ( v11 < 0 )
        goto LABEL_19;
      ++v10[1];
      v15 = (_QWORD *)(a1 + 96);
      v4 = P;
      v16 = P;
      v17 = (_QWORD *)*v15 == v15 ? 0LL : (_QWORD *)*v15;
      while ( v17 )
      {
        v11 = EtwpBuildMdlForTraceBuffer((_DWORD *)v17[2], (struct _MDL **)&P);
        if ( v11 < 0 )
          goto LABEL_19;
        v18 = P;
        *v16 = P;
        v16 = v18;
        ++v10[1];
        v19 = (_QWORD *)*v17;
        v17 = 0LL;
        if ( v19 != v15 )
          v17 = v19;
      }
      v11 = EtwpPreserveMdlList(v4, v10, v20, v1);
      if ( v11 < 0 )
      {
LABEL_19:
        ExFreePoolWithTag(v13, 0);
      }
      else
      {
        v1->m128i_i64[1] = (__int64)v13;
        v1[2].m128i_i8[1] = 1;
      }
      if ( v4 )
        ExFreePoolWithTag(v4, 0);
    }
    else
    {
      v11 = -1073741801;
    }
    ExFreePoolWithTag(v10, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v11;
}
