/*
 * XREFs of CreateNewEventEntry @ 0x1C00F8A74
 * Callers:
 *     InsertEventEntryInLookUpTable @ 0x1C00F8FD8 (InsertEventEntryInLookUpTable.c)
 * Callees:
 *     memmove @ 0x1C0089D40 (memmove.c)
 *     memset @ 0x1C008A080 (memset.c)
 *     CBufferGetNextOffset @ 0x1C00F8A48 (CBufferGetNextOffset.c)
 */

__int64 __fastcall CreateNewEventEntry(
        __int128 *a1,
        unsigned __int8 a2,
        __int64 a3,
        unsigned __int8 a4,
        int a5,
        __int64 *a6)
{
  unsigned __int8 v6; // si
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int8 v12; // dl
  unsigned int *v13; // rcx
  __int64 v14; // rax
  __int64 v16; // rbx
  size_t v17; // rdi
  PVOID PoolWithTag; // rax
  __int64 NextOffset; // r12
  int v20; // r13d
  unsigned int v21; // edx
  void *v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // rdi
  __int128 v25; // xmm0
  unsigned __int8 v26; // r14
  const void **v27; // rsi
  __int64 v28; // r12
  __int64 v29; // rbp
  unsigned int v30; // edx
  void *v31; // rbx
  char *v32; // rdx
  int v33; // eax
  _OWORD v34[3]; // [rsp+20h] [rbp-38h] BYREF

  v6 = 0;
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0;
  v34[0] = 0LL;
  *a6 = 0LL;
  if ( a2 )
  {
    v13 = (unsigned int *)(a3 + 8);
    do
    {
      v14 = *v13;
      if ( v12 >= 2u )
        v11 += v14;
      else
        v10 += v14;
      ++v12;
      v13 += 4;
    }
    while ( v12 < a2 );
  }
  if ( (unsigned __int64)(v11 + v10) > 0xFFFF )
    return 3221225621LL;
  v16 = 16LL * a2;
  v17 = v11 + v16 + 46;
  if ( !v17 )
    return 3221225495LL;
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, v11 + v16 + 46, 0x47417254u);
  *(_QWORD *)&v34[0] = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225495LL;
  memset(PoolWithTag, 0, v17);
  *((_QWORD *)&v34[0] + 1) = v17;
  NextOffset = CBufferGetNextOffset((__int64 *)v34, 16LL * a2);
  v20 = a4 + 2;
  if ( v20 > 0 )
  {
    do
    {
      if ( v6 >= 2u )
      {
        v22 = (void *)CBufferGetNextOffset((__int64 *)v34, *(unsigned int *)(a3 + 16LL * v6 + 8));
        memmove(v22, *(const void **)(a3 + 16LL * v6), v21);
        *(_QWORD *)(NextOffset + 16LL * v6) = v22;
        *(_DWORD *)(NextOffset + 16LL * v6 + 12) = *(_DWORD *)(a3 + 16LL * v6 + 12);
        *(_DWORD *)(NextOffset + 16LL * v6 + 8) = *(_DWORD *)(a3 + 16LL * v6 + 8);
      }
      else
      {
        *(_OWORD *)(NextOffset + 16LL * v6) = *(_OWORD *)(a3 + 16LL * v6);
      }
      ++v6;
    }
    while ( v6 < v20 );
  }
  v24 = CBufferGetNextOffset((__int64 *)v34, 0x2EuLL);
  *(_QWORD *)(v24 + 16) = NextOffset;
  v25 = *a1;
  *(_BYTE *)(v24 + 45) = a4;
  v26 = a4 + 2;
  *(_BYTE *)(v24 + 44) = a2;
  *(_DWORD *)(v24 + 40) = a5;
  *(_OWORD *)v24 = v25;
  if ( v26 < a2 )
  {
    v27 = (const void **)(16LL * v26 + a3 + 8);
    v28 = v23 - 54 - a3;
    v29 = (unsigned __int8)(a2 - v26);
    do
    {
      v31 = (void *)CBufferGetNextOffset((__int64 *)v34, *(unsigned int *)v27);
      memmove(v31, *(v27 - 1), v30);
      v32 = (char *)v27 + v28;
      *(_QWORD *)&v32[*(_QWORD *)(v24 + 16)] = v31;
      *(_DWORD *)&v32[*(_QWORD *)(v24 + 16) + 12] = *((_DWORD *)v27 + 1);
      v33 = *(_DWORD *)v27;
      v27 += 2;
      *(_DWORD *)&v32[*(_QWORD *)(v24 + 16) + 8] = v33;
      --v29;
    }
    while ( v29 );
  }
  *a6 = v24;
  return 0LL;
}
