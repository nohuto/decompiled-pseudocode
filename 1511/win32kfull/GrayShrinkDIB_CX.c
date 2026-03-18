/*
 * XREFs of GrayShrinkDIB_CX @ 0x1C0258580
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall GrayShrinkDIB_CX(__int64 a1, unsigned __int8 *a2, _BYTE *a3, __int64 a4, int a5)
{
  int v7; // r10d
  unsigned __int16 v8; // r14
  _WORD *v9; // r11
  int v10; // edi
  __int64 v11; // r15
  unsigned int v12; // r9d
  __int64 v13; // r8
  __int64 v14; // rcx
  int v15; // r9d
  int v16; // r9d
  int v17; // edi
  __int64 v18; // rcx
  int v19; // r8d
  int v20; // eax
  unsigned int v21; // r8d
  int v22; // ecx
  _BYTE v23[12]; // [rsp+0h] [rbp-10h]

  if ( a2 )
  {
    if ( *(_WORD *)(a1 + 14) )
    {
      v7 = *(unsigned __int16 *)(a1 + 14) * *a2;
      a2 += *(unsigned __int16 *)(a1 + 10);
    }
    else
    {
      v7 = 0;
    }
    v8 = *(_WORD *)(a1 + 12);
    v9 = *(_WORD **)(a1 + 40);
    v10 = v8;
    v11 = *(_QWORD *)(a1 + 24);
    if ( v8 )
    {
      do
      {
        v12 = (unsigned __int16)*v9++;
        v13 = v11 + ((v12 >> 5) & 0x400);
        if ( (v12 & 0x4000) != 0 )
        {
          v14 = *a2;
          v15 = v14 * (v12 & 0x3FFF);
          ++a2;
          *(_DWORD *)&v23[8] = v15 + v7;
          v7 = *(_DWORD *)(v13 + 4 * v14) - v15;
          --v10;
          *(_QWORD *)v23 = *(_QWORD *)&v23[4];
        }
        else
        {
          v7 += *(_DWORD *)(v13 + 4LL * *a2++);
        }
      }
      while ( v10 );
    }
    v16 = *(_DWORD *)v23;
    v17 = *(_DWORD *)&v23[4];
    if ( v8 == 1 )
      v16 = *(_DWORD *)&v23[4];
    while ( 1 )
    {
      v21 = (unsigned __int16)*v9;
      if ( !*v9 )
        break;
      ++v9;
      v18 = v11 + ((v21 >> 5) & 0x400);
      if ( (v21 & 0x4000) != 0 )
      {
        v19 = *a2 * (v21 & 0x3FFF);
        v20 = (6 * v17 - v16 - (v19 + v7)) >> 15;
        if ( (v20 & 0xFF00) != 0 )
          LOBYTE(v20) = ~HIBYTE(v20);
        *a3 = v20;
        a3 += a5;
        *(_DWORD *)&v23[8] = v19 + v7;
        *(_QWORD *)v23 = *(_QWORD *)&v23[4];
        v17 = *(_DWORD *)&v23[4];
        v16 = *(_DWORD *)v23;
        v7 = *(_DWORD *)(v18 + 4LL * *a2) - v19;
      }
      else
      {
        v7 += *(_DWORD *)(v18 + 4LL * *a2);
      }
      ++a2;
    }
    if ( a3 == (_BYTE *)(a4 - a5) )
    {
      v22 = (5 * *(_DWORD *)&v23[4] - v16) >> 15;
      if ( (v22 & 0xFF00) != 0 )
        LOBYTE(v22) = ~HIBYTE(v22);
      *a3 = v22;
    }
  }
}
