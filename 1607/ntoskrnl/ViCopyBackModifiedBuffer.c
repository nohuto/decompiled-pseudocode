/*
 * XREFs of ViCopyBackModifiedBuffer @ 0x140709084
 * Callers:
 *     ViFlushDoubleBuffer @ 0x1407092D8 (ViFlushDoubleBuffer.c)
 * Callees:
 *     RtlCompareMemory @ 0x1401679D0 (RtlCompareMemory.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ViGetMdlBufferSa @ 0x140709844 (ViGetMdlBufferSa.c)
 */

__int64 __fastcall ViCopyBackModifiedBuffer(ULONG_PTR a1, int a2, char *a3, char *a4, SIZE_T Length)
{
  SIZE_T v5; // rbx
  SIZE_T v11; // rdx
  char *v12; // rax
  size_t v13; // rbx
  char *v14; // r14
  SIZE_T i; // rsi
  ULONG_PTR v16; // rax
  size_t v17; // rsi
  void *MdlBufferSa; // rax

  v5 = Length;
  if ( !Length )
    return 0LL;
  v11 = RtlCompareMemory(a3, a4, Length);
  if ( Length > v11 )
  {
    v12 = &a4[Length - 1];
    do
    {
      if ( v12[a3 - a4] != *v12 )
        break;
      --v5;
      --v12;
    }
    while ( v5 > v11 );
  }
  if ( v5 == v11 )
    return 0LL;
  v13 = v5 - v11;
  v14 = &a3[v11];
  for ( i = (unsigned int)(*(_DWORD *)(a1 + 32) + *(_DWORD *)(a1 + 40) + *(_DWORD *)(a1 + 44) - a2);
        v11 >= i;
        i = *(unsigned int *)(v16 + 40) )
  {
    v16 = *(_QWORD *)a1;
    if ( !*(_QWORD *)a1 )
      break;
    v11 -= i;
    a1 = *(_QWORD *)a1;
  }
  if ( *(_QWORD *)a1 )
    v17 = i - v11;
  else
    v17 = v13;
  while ( 1 )
  {
    MdlBufferSa = (void *)ViGetMdlBufferSa(a1);
    if ( !MdlBufferSa )
      break;
    if ( !*(_QWORD *)a1 )
    {
      memmove(MdlBufferSa, v14, v13);
      return 0LL;
    }
    if ( v17 > v13 )
      v17 = v13;
    memmove(MdlBufferSa, v14, v17);
    v14 += v17;
    if ( v17 <= v13 )
      v13 -= v17;
    else
      v13 = 0LL;
    a1 = *(_QWORD *)a1;
    v17 = *(unsigned int *)(a1 + 40);
    if ( !v13 )
      return 0LL;
  }
  return 3221225473LL;
}
