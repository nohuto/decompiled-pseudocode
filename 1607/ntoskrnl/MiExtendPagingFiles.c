/*
 * XREFs of MiExtendPagingFiles @ 0x14065B078
 * Callers:
 *     MiProcessDereferenceList @ 0x140122B0C (MiProcessDereferenceList.c)
 * Callees:
 *     MiIncreaseCommitLimits @ 0x140142F68 (MiIncreaseCommitLimits.c)
 *     MiUpdatePagingFileMinimum @ 0x1401EEC18 (MiUpdatePagingFileMinimum.c)
 *     MiAttemptPageFileExtension @ 0x14065ADBC (MiAttemptPageFileExtension.c)
 */

void __fastcall MiExtendPagingFiles(__int64 a1)
{
  __int64 v1; // r15
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned int v5; // r14d
  __int64 v6; // r14
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdi
  BOOL v9; // ebp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // r9
  unsigned int v16; // r13d
  __int64 *v17; // r12

  v1 = *(_QWORD *)(a1 + 24);
  v3 = *(_QWORD *)(a1 + 32);
  v4 = *(unsigned __int8 *)(a1 + 76);
  v5 = *(_DWORD *)(v1 + 6296);
  if ( !v5 )
    return;
  if ( (unsigned int)v4 < v5 )
  {
    _mm_lfence();
    v6 = *(_QWORD *)(v1 + 8 * v4 + 6304);
    if ( *(_QWORD *)(v6 + 8) - *(_QWORD *)v6 < v3 )
      return;
    v7 = MiAttemptPageFileExtension(*(_QWORD *)(v1 + 8 * v4 + 6304), v3);
    v8 = v7;
    if ( v7 && (*(_BYTE *)(a1 + 79) & 2) != 0 )
      MiUpdatePagingFileMinimum(v6, v7);
    v9 = (*(_BYTE *)(v6 + 204) & 0x50) == 0;
    goto LABEL_24;
  }
  v9 = 1;
  if ( (*(_BYTE *)(a1 + 79) & 1) == 0 )
  {
    v10 = *(_QWORD *)(v1 + 7208);
    v11 = *(_QWORD *)(v1 + 7336);
    v12 = v3 + v10 + *(_QWORD *)(v1 + 5680);
    if ( v12 < v10 )
      return;
    if ( v12 <= v11 )
    {
      *(_QWORD *)(a1 + 40) = 1LL;
      return;
    }
    v3 = v12 - v11;
  }
  v13 = 0LL;
  v14 = v1 + 6304;
  v15 = *(unsigned int *)(v1 + 6296);
  do
  {
    if ( (*(_BYTE *)(*(_QWORD *)v14 + 204LL) & 0x50) == 0 )
      v13 += *(_QWORD *)(*(_QWORD *)v14 + 8LL) - **(_QWORD **)v14;
    v14 += 8LL;
    --v15;
  }
  while ( v15 );
  if ( v13 >= v3 )
  {
    v8 = 0LL;
    v16 = 0;
    v17 = (__int64 *)(v1 + 6304);
    do
    {
      if ( (*(_BYTE *)(*v17 + 204) & 0x50) == 0 )
      {
        v8 += MiAttemptPageFileExtension(*v17, v3 - v8);
        if ( v8 >= v3 )
          break;
      }
      ++v16;
      ++v17;
    }
    while ( v16 < v5 );
LABEL_24:
    if ( v8 )
    {
      *(_QWORD *)(a1 + 40) = v8;
      if ( v9 )
        MiIncreaseCommitLimits(v1, v8, 0LL, 0, 0LL);
    }
  }
}
