/*
 * XREFs of fsc_RemoveDups @ 0x1C00C2F1C
 * Callers:
 *     fs_FindBitMapSize @ 0x1C00C408C (fs_FindBitMapSize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall fsc_RemoveDups(__int64 a1)
{
  unsigned __int16 i; // r10
  __int64 v3; // r9
  __int64 v4; // rdi
  __int16 v5; // r11
  __int16 v6; // r14
  int *v7; // rsi
  int *v8; // rbx
  bool v9; // zf
  int v10; // eax
  int v11; // ecx
  __int16 v13; // r12
  __int64 v14; // r15
  int v15; // eax
  __int64 v16; // rdx

  for ( i = 0; i < *(_WORD *)a1; ++i )
  {
    v3 = *(__int16 *)(*(_QWORD *)(a1 + 8) + 2LL * i);
    v4 = v3;
    v5 = *(_WORD *)(*(_QWORD *)(a1 + 8) + 2LL * i);
    v6 = *(_WORD *)(*(_QWORD *)(a1 + 16) + 2LL * i);
    v7 = (int *)(*(_QWORD *)(a1 + 24) + 4 * v3);
    v8 = (int *)(*(_QWORD *)(a1 + 32) + 4 * v3);
    v9 = (_WORD)v3 == (unsigned __int16)v6;
    if ( (__int16)v3 < v6 )
    {
      do
      {
        v10 = *v7++;
        v11 = *v8++;
        if ( *v7 == v10 && *v8 == v11 )
        {
          v13 = v5;
          if ( v5 > (__int16)v3 )
          {
            v14 = v4;
            do
            {
              v15 = v13--;
              v16 = v15 - 1;
              *(_DWORD *)(*(_QWORD *)(a1 + 24) + 4 * v14) = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 4 * v16);
              *(_DWORD *)(*(_QWORD *)(a1 + 32) + 4 * v14) = *(_DWORD *)(*(_QWORD *)(a1 + 32) + 4 * v16);
              *(_BYTE *)(v14 + *(_QWORD *)(a1 + 40)) = *(_BYTE *)(*(_QWORD *)(a1 + 40) + v16);
              --v14;
            }
            while ( v13 > (__int16)v3 );
          }
          LOWORD(v3) = v3 + 1;
          *(_WORD *)(*(_QWORD *)(a1 + 8) + 2LL * i) = v3;
          *(_BYTE *)(v5 + 1 + *(_QWORD *)(a1 + 40)) |= 1u;
        }
        ++v5;
        ++v4;
      }
      while ( v5 < v6 );
      v9 = (_WORD)v3 == (unsigned __int16)v6;
    }
    if ( !v9
      && *v7 == *(_DWORD *)(*(_QWORD *)(a1 + 24) + 4LL * (__int16)v3)
      && *v8 == *(_DWORD *)(*(_QWORD *)(a1 + 32) + 4LL * (__int16)v3) )
    {
      ++*(_WORD *)(*(_QWORD *)(a1 + 8) + 2LL * i);
      *(_BYTE *)(*(_QWORD *)(a1 + 40) + v6) |= 1u;
    }
  }
  return 0LL;
}
