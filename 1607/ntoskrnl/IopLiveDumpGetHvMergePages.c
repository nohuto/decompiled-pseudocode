/*
 * XREFs of IopLiveDumpGetHvMergePages @ 0x1406271AC
 * Callers:
 *     IopLiveDumpWriteDumpFileWithHvPages @ 0x1406278E0 (IopLiveDumpWriteDumpFileWithHvPages.c)
 * Callees:
 *     <none>
 */

char __fastcall IopLiveDumpGetHvMergePages(__int64 a1, unsigned __int64 *a2, _QWORD *a3, _DWORD *a4, __int64 *a5)
{
  __int64 v5; // rbx
  __int64 v9; // rax
  char v10; // di
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  unsigned int v16; // ecx
  __int64 v17; // rcx
  __int64 v18; // r9
  _QWORD *v19; // r8
  unsigned __int64 v20; // rcx

  v5 = *(_QWORD *)(a1 + 232);
  if ( v5 == *(_QWORD *)(a1 + 176) )
  {
    *a4 = 0;
    return 0;
  }
  else
  {
    v9 = *(_QWORD *)(a1 + 192);
    v10 = 1;
    *a4 = 64;
    *a5 = v9;
    v11 = *a5;
    *(_QWORD *)(a1 + 192) = v9 + 1;
    v12 = *(_QWORD *)(*(_QWORD *)(a1 + 552) + 8 * v11);
    v13 = *(_QWORD *)(a1 + 200);
    *a3 = v12;
    if ( v13 )
    {
      v10 = 0;
      *a4 = 64 - v13;
      *(_QWORD *)(a1 + 200) = 0LL;
      *a3 = v12 + (v13 << 12);
    }
    v14 = (unsigned int)*a4;
    v15 = *(_QWORD *)(a1 + 208);
    v16 = *(_DWORD *)(a1 + 176) - v5;
    if ( (unsigned int)v14 > v16 )
      v14 = v16;
    v17 = *(_QWORD *)(a1 + 216);
    *a4 = v14;
    v18 = (unsigned int)v14;
    *(_QWORD *)(a1 + 232) = v5 + v14;
    v19 = (_QWORD *)((v17 << 12) + *(_QWORD *)(*(_QWORD *)(a1 + 552) + 8 * v15) + 8LL * *(unsigned int *)(a1 + 224));
    if ( (_DWORD)v14 )
    {
      do
      {
        v20 = *v19 >> 12;
        *a2 = v20;
        _bittestandset64(*(signed __int64 **)(a1 + 448), v20);
        if ( (++*(_DWORD *)(a1 + 224) & 0x1FF) != 0 )
        {
          ++v19;
        }
        else
        {
          if ( (++*(_QWORD *)(a1 + 216) & 0x3F) == 0 )
          {
            *(_QWORD *)(a1 + 216) = 0LL;
            ++*(_QWORD *)(a1 + 208);
          }
          *(_DWORD *)(a1 + 224) = 0;
          v19 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 552) + 8LL * *(_QWORD *)(a1 + 208))
                         + (*(_QWORD *)(a1 + 216) << 12));
        }
        ++a2;
        --v18;
      }
      while ( v18 );
    }
    return v10;
  }
}
