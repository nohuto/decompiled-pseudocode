/*
 * XREFs of SmKmEtwAppendProductName @ 0x140220714
 * Callers:
 *     SmKmStoreTerminateWorker @ 0x140220B74 (SmKmStoreTerminateWorker.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     SmUniqueIdParseProductName @ 0x14021FCA8 (SmUniqueIdParseProductName.c)
 *     SmKmStoreFileOpenVolume @ 0x140699848 (SmKmStoreFileOpenVolume.c)
 *     SmKmVolumeQueryUniqueId @ 0x140699BC0 (SmKmVolumeQueryUniqueId.c)
 */

LONG_PTR __fastcall SmKmEtwAppendProductName(__int64 *a1, __int64 a2)
{
  __int64 v3; // rcx
  void *v4; // rbp
  __int64 v5; // rdx
  wchar_t *v6; // rsi
  unsigned int v7; // ebx
  __int64 v8; // r8
  unsigned __int64 v9; // rdx
  int UniqueId; // eax
  __int64 v11; // rdi
  __int64 v12; // rcx
  wchar_t *v13; // r15
  __int64 v14; // r8
  unsigned int v15; // ebx
  unsigned int v16; // ecx
  __int64 v17; // r9
  __int16 v18; // ax
  __int64 v19; // r13
  int v20; // r12d
  unsigned int v21; // esi
  void *v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rax
  LONG_PTR result; // rax
  void *v26; // [rsp+60h] [rbp+8h] BYREF
  __int64 v27; // [rsp+68h] [rbp+10h] BYREF

  v3 = *(_QWORD *)(a2 + 24);
  v26 = 0LL;
  v4 = 0LL;
  v27 = v3;
  if ( !v3 )
  {
    SmKmStoreFileOpenVolume(*(_QWORD *)(a2 + 8), &v26, &v27);
    v3 = v27;
    v4 = v26;
  }
  v5 = a1[1] + *((unsigned int *)a1 + 6);
  v6 = (wchar_t *)((v5 + 1) & 0xFFFFFFFFFFFFFFFEuLL);
  v7 = v5 + *((_DWORD *)a1 + 7) - *((_DWORD *)a1 + 6) - (_DWORD)v6;
  if ( v3 )
  {
    v8 = 256LL;
    v9 = (v5 + 1) & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v7 < 0x100 )
      v8 = v7;
    UniqueId = SmKmVolumeQueryUniqueId(v3, v9, v8);
  }
  else
  {
    UniqueId = -1073741275;
  }
  if ( UniqueId < 0 )
    *v6 = 0;
  v11 = -1LL;
  v12 = -1LL;
  do
    ++v12;
  while ( v6[v12] );
  v13 = &v6[(unsigned int)v12 + 1];
  if ( (int)SmUniqueIdParseProductName(v6, v13, v7 - 2 * (_DWORD)v12 - 2) < 0 )
  {
    LODWORD(v11) = 0;
    LODWORD(v26) = 0;
  }
  else
  {
    do
      ++v11;
    while ( v13[v11] );
    LODWORD(v26) = v11;
  }
  v14 = *((unsigned int *)a1 + 6);
  v15 = 2 * v11;
  v16 = *((_DWORD *)a1 + 4);
  v17 = a1[1];
  v18 = (__int16)v26;
  v19 = *a1;
  v20 = v14 + 2;
  v21 = v16 + 1;
  *((_DWORD *)a1 + 4) = v16 + 1;
  *(_WORD *)(v17 + v14) = v18;
  v22 = (void *)(v17 + (unsigned int)(v14 + 2));
  *((_DWORD *)a1 + 6) = v14 + 2;
  v23 = 2LL * v16;
  *(_QWORD *)(v19 + 8 * v23) = v17 + v14;
  *(_QWORD *)(v19 + 8 * v23 + 8) = 2LL;
  if ( v13 )
    memmove(v22, v13, v15);
  v24 = v19 + 16LL * v21;
  *(_DWORD *)(v24 + 12) = 0;
  *(_QWORD *)v24 = v22;
  *(_DWORD *)(v24 + 8) = v15;
  *((_DWORD *)a1 + 4) = v21 + 1;
  result = v20 + v15;
  *((_DWORD *)a1 + 6) = result;
  if ( v4 )
    return ObfDereferenceObjectWithTag(v4, 0x746C6644u);
  return result;
}
