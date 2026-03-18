/*
 * XREFs of fsc_RemoveDups @ 0x1C00AB3AC
 * Callers:
 *     fs_FindBitMapSize @ 0x1C00AC4E8 (fs_FindBitMapSize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall fsc_RemoveDups(__int64 a1)
{
  unsigned __int16 i; // r10
  __int64 v3; // r8
  __int16 v4; // r9
  __int16 v5; // bp
  int *v6; // rbx
  int *v7; // r11
  bool v8; // zf
  int v9; // eax
  int v10; // ecx
  __int64 v12; // rsi
  __int64 v13; // r14

  for ( i = 0; i < *(_WORD *)a1; ++i )
  {
    v3 = *(__int16 *)(*(_QWORD *)(a1 + 8) + 2LL * i);
    v4 = *(_WORD *)(*(_QWORD *)(a1 + 8) + 2LL * i);
    v5 = *(_WORD *)(*(_QWORD *)(a1 + 16) + 2LL * i);
    v6 = (int *)(*(_QWORD *)(a1 + 24) + 4 * v3);
    v7 = (int *)(*(_QWORD *)(a1 + 32) + 4 * v3);
    v8 = (_WORD)v3 == (unsigned __int16)v5;
    if ( (__int16)v3 < v5 )
    {
      do
      {
        v9 = *v6++;
        v10 = *v7++;
        if ( *v6 == v9 && *v7 == v10 )
        {
          if ( v4 > (__int16)v3 )
          {
            v12 = v4;
            v13 = (unsigned __int16)(v4 - v3);
            do
            {
              *(_DWORD *)(*(_QWORD *)(a1 + 24) + 4 * v12) = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 4 * v12 - 4);
              *(_DWORD *)(*(_QWORD *)(a1 + 32) + 4 * v12) = *(_DWORD *)(*(_QWORD *)(a1 + 32) + 4 * v12 - 4);
              *(_BYTE *)(*(_QWORD *)(a1 + 40) + v12) = *(_BYTE *)(*(_QWORD *)(a1 + 40) + v12 - 1);
              --v12;
              --v13;
            }
            while ( v13 );
          }
          LOWORD(v3) = v3 + 1;
          *(_WORD *)(*(_QWORD *)(a1 + 8) + 2LL * i) = v3;
          *(_BYTE *)(*(_QWORD *)(a1 + 40) + v4 + 1LL) |= 1u;
        }
        ++v4;
      }
      while ( v4 < v5 );
      v8 = (_WORD)v3 == (unsigned __int16)v5;
    }
    if ( !v8
      && *v6 == *(_DWORD *)(*(_QWORD *)(a1 + 24) + 4LL * (__int16)v3)
      && *v7 == *(_DWORD *)(*(_QWORD *)(a1 + 32) + 4LL * (__int16)v3) )
    {
      ++*(_WORD *)(*(_QWORD *)(a1 + 8) + 2LL * i);
      *(_BYTE *)(*(_QWORD *)(a1 + 40) + v5) |= 1u;
    }
  }
  return 0LL;
}
