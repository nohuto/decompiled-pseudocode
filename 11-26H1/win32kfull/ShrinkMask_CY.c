/*
 * XREFs of ShrinkMask_CY @ 0x140309050
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 */

__int64 __fastcall ShrinkMask_CY(__int64 a1)
{
  int *v1; // rdx
  unsigned __int64 v3; // r9
  size_t v4; // rcx
  unsigned int v5; // r8d
  int v6; // ecx
  __int64 i; // r8
  int v8; // eax
  int v9; // eax
  char *v10; // rdx
  unsigned __int16 *v11; // rax
  int v12; // r10d
  int j; // r10d
  unsigned int v14; // r8d
  __int64 v15; // rcx
  int v16; // eax
  int v17; // eax
  char v18; // al

  v1 = *(int **)(a1 + 216);
  v3 = *(_QWORD *)(a1 + 208);
  v4 = *(unsigned int *)(a1 + 200);
  if ( (*(_DWORD *)a1 & 0x100) != 0 )
  {
    v5 = v4;
    v6 = v4 & 3;
    for ( i = v5 >> 2; (_DWORD)i; i = (unsigned int)(i - 1) )
    {
      v8 = *v1++;
      *(_DWORD *)v3 = ~v8;
      v3 += 4LL;
    }
    if ( v6 )
    {
      v3 -= (unsigned __int64)v1;
      do
      {
        *((_BYTE *)v1 + v3) = ~*(_BYTE *)v1;
        v1 = (int *)((char *)v1 + 1);
        --v6;
      }
      while ( v6 );
    }
  }
  else
  {
    memmove((void *)v3, v1, v4);
  }
  v9 = *(_DWORD *)(a1 + 228) - 1;
  *(_DWORD *)(a1 + 228) = v9;
  if ( v9 > 0 )
    *(_QWORD *)(a1 + 216) += *(int *)(a1 + 224);
  v10 = *(char **)(a1 + 312);
  v11 = (unsigned __int16 *)*((_QWORD *)v10 + 19);
  v12 = *v11;
  *((_QWORD *)v10 + 19) = v11 + 1;
  for ( j = v12 - 1; j; --j )
  {
    v14 = *(_DWORD *)(a1 + 200);
    v10 = *(char **)(a1 + 216);
    v3 = v14 & 3;
    v15 = *(_QWORD *)(a1 + 208);
    i = v14 >> 2;
    if ( (*(_DWORD *)a1 & 0x100) != 0 )
    {
      for ( ; (_DWORD)i; i = (unsigned int)(i - 1) )
      {
        v16 = *(_DWORD *)v10;
        v10 += 4;
        *(_DWORD *)v15 |= ~v16;
        v15 += 4LL;
      }
      if ( (_DWORD)v3 )
      {
        v10 -= v15;
        do
        {
          *(_BYTE *)v15 |= ~v10[v15];
          ++v15;
          v3 = (unsigned int)(v3 - 1);
        }
        while ( (_DWORD)v3 );
      }
    }
    else
    {
      for ( ; (_DWORD)i; i = (unsigned int)(i - 1) )
      {
        v17 = *(_DWORD *)v10;
        v10 += 4;
        *(_DWORD *)v15 |= v17;
        v15 += 4LL;
      }
      for ( ; (_DWORD)v3; v3 = (unsigned int)(v3 - 1) )
      {
        v18 = *v10++;
        *(_BYTE *)v15++ |= v18;
      }
    }
    if ( (int)--*(_DWORD *)(a1 + 228) > 0 )
      *(_QWORD *)(a1 + 216) += *(int *)(a1 + 224);
  }
  return (*(__int64 (__fastcall **)(__int64, char *, __int64, unsigned __int64))(a1 + 184))(a1, v10, i, v3);
}
