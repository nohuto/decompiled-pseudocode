/*
 * XREFs of DbgkpTriageDumpSnapData @ 0x1401B7D40
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     DbgkpTriageDumpCheckPresentHashTable @ 0x1401B7CC0 (DbgkpTriageDumpCheckPresentHashTable.c)
 */

__int64 __fastcall DbgkpTriageDumpSnapData(__int64 a1, _QWORD *a2, unsigned int a3, int a4, _QWORD *a5, _QWORD *a6)
{
  _QWORD *v7; // r14
  __int64 v9; // rbx
  size_t v11; // r15
  __int64 v13; // r12
  __int64 v14; // rcx
  unsigned int v15; // r13d
  __int64 v16; // rdx
  unsigned int v17; // eax
  _QWORD *v18; // rax
  int v19; // esi
  int v20; // esi
  int v21; // esi
  __int64 v22; // rax
  __int64 v23; // [rsp+50h] [rbp+8h] BYREF

  v23 = -1LL;
  v7 = a6;
  v9 = *(_QWORD *)a1;
  v11 = a3;
  if ( a6 )
    *a6 = 0LL;
  if ( !a2 || !a3 )
    return 3221225485LL;
  if ( a4 == 1 && !a5 && (*(_DWORD *)(v9 + 4152) & 1) == 0 )
  {
    memmove((void *)(v9 + 840), a2, a3);
    *(_DWORD *)(v9 + 4152) |= 1u;
    return 0LL;
  }
  v13 = *(_QWORD *)(a1 + 32);
  if ( v13 && DbgkpTriageDumpCheckPresentHashTable(a1, (unsigned __int64)a2, a3, &v23) )
  {
    if ( !v7 )
      return 0LL;
    v14 = *(_QWORD *)(v13 + 8 * v23);
LABEL_14:
    *v7 = *(_QWORD *)a1 + *(unsigned int *)(v14 + 8);
    return 0LL;
  }
  v15 = (v11 + 7) & 0xFFFFFFF8;
  if ( v15 + 16 >= v15 )
  {
    v16 = *(unsigned int *)(a1 + 24);
    v17 = *(_DWORD *)(v9 + 8312);
    if ( v17 >= (unsigned int)v16 && v15 + 16 <= v17 - (unsigned int)v16 )
    {
      memmove((void *)(v9 + v16), a2, v11);
      *(_DWORD *)(v9 + 4152) |= 0x800u;
      *(_DWORD *)(v9 + 8312) -= 16;
      v18 = a2;
      ++*(_DWORD *)(v9 + 8316);
      v14 = v9 + *(unsigned int *)(v9 + 8312);
      if ( a5 )
        v18 = a5;
      *(_QWORD *)v14 = v18;
      *(_DWORD *)(v14 + 8) = *(_DWORD *)(a1 + 24);
      *(_DWORD *)(v14 + 12) = v11;
      *(_DWORD *)(a1 + 24) += v15;
      v19 = a4 - 2;
      if ( v19 )
      {
        v20 = v19 - 1;
        if ( v20 )
        {
          v21 = v20 - 1;
          if ( v21 )
          {
            if ( v21 == 1 && !*(_DWORD *)(v9 + 8232) )
            {
              *(_DWORD *)(v9 + 8232) = *(_DWORD *)(v14 + 8);
              *(_DWORD *)(v9 + 8236) = *(_DWORD *)(v14 + 12);
              *(_QWORD *)(v9 + 8264) = a2;
              *(_DWORD *)(v9 + 4152) |= 0x20u;
            }
          }
          else if ( !*(_DWORD *)(v9 + 8224) )
          {
            *(_DWORD *)(v9 + 8224) = *(_DWORD *)(v14 + 8);
            *(_DWORD *)(v9 + 4152) |= 8u;
            *(_QWORD *)(v9 + 16) = a2[5] & 0xFFFFFFFFFFFFF000uLL;
          }
        }
        else if ( !*(_DWORD *)(v9 + 8228) )
        {
          *(_DWORD *)(v9 + 8228) = *(_DWORD *)(v14 + 8);
          *(_DWORD *)(v9 + 4152) |= 0x10u;
        }
      }
      else if ( !*(_DWORD *)(v9 + 8220) )
      {
        *(_DWORD *)(v9 + 8220) = *(_DWORD *)(v14 + 8);
        *(_DWORD *)(v9 + 4152) |= 4u;
      }
      v22 = *(_QWORD *)(a1 + 32);
      if ( v22 )
      {
        if ( *(_DWORD *)(a1 + 40) < 0x6F9u )
        {
          *(_QWORD *)(v22 + 8 * v23) = v14;
          ++*(_DWORD *)(a1 + 40);
        }
      }
      if ( !v7 )
        return 0LL;
      goto LABEL_14;
    }
  }
  return 3221225626LL;
}
