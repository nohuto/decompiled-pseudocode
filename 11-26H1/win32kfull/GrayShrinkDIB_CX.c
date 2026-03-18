/*
 * XREFs of GrayShrinkDIB_CX @ 0x1401BA570
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall GrayShrinkDIB_CX(__int64 a1, unsigned __int8 *a2, _BYTE *a3, __int64 a4, int a5)
{
  int v8; // ecx
  int v9; // r8d
  unsigned __int16 v10; // r15
  _WORD *v11; // rbx
  int v12; // r9d
  __int64 v13; // r12
  int v14; // r11d
  unsigned int v15; // ecx
  __int64 v16; // r10
  __int64 v17; // r14
  int v18; // r11d
  int v19; // r14d
  int v20; // r8^4
  unsigned int v21; // r9d
  __int64 v22; // rax
  __int64 v23; // r10
  int v24; // r9d
  int v25; // eax
  int v26; // ecx
  unsigned int v27; // eax
  _BYTE v28[12]; // [rsp+0h] [rbp-10h]

  if ( a2 )
  {
    if ( *(_WORD *)(a1 + 14) )
    {
      v8 = *(unsigned __int16 *)(a1 + 14) * *a2;
      a2 += *(unsigned __int16 *)(a1 + 10);
      v9 = v8;
    }
    else
    {
      v8 = 0;
      v9 = 0;
    }
    v10 = *(_WORD *)(a1 + 12);
    v11 = *(_WORD **)(a1 + 40);
    v12 = v10;
    v13 = *(_QWORD *)(a1 + 24);
    if ( v10 )
    {
      v14 = v9;
      do
      {
        v15 = (unsigned __int16)*v11++;
        v16 = *a2;
        v17 = v13 + ((v15 >> 5) & 0x400);
        if ( (v15 & 0x4000) != 0 )
        {
          v26 = v16 * (v15 & 0x3FFF);
          *(_DWORD *)&v28[8] = v26 + v9;
          v9 = *(_DWORD *)(v17 + 4 * v16) - v26;
          --v12;
          *(_QWORD *)v28 = *(_QWORD *)&v28[4];
        }
        else
        {
          v9 = v14 + *(_DWORD *)(v17 + 4 * v16);
        }
        ++a2;
        v8 = v9;
        v14 = v9;
      }
      while ( v12 );
    }
    v18 = *(_DWORD *)v28;
    v19 = *(_DWORD *)&v28[4];
    if ( v10 == 1 )
      v18 = *(_DWORD *)&v28[4];
    v20 = *(_DWORD *)&v28[4];
    while ( 1 )
    {
      v21 = (unsigned __int16)*v11;
      if ( !*v11 )
        break;
      v22 = *a2;
      ++v11;
      v23 = v13 + ((v21 >> 5) & 0x400);
      if ( (v21 & 0x4000) != 0 )
      {
        v24 = v22 * (v21 & 0x3FFF);
        v25 = (6 * v19 - (v24 + v8) - v18) >> 15;
        if ( (v25 & 0xFF00) != 0 )
          LOBYTE(v25) = ~HIBYTE(v25);
        v20 = v24 + v8;
        *a3 = v25;
        v18 = *(_DWORD *)&v28[4];
        a3 += a5;
        *(_DWORD *)&v28[4] = v24 + v8;
        v19 = v24 + v8;
        v8 = *(_DWORD *)(v23 + 4LL * *a2) - v24;
      }
      else
      {
        v8 += *(_DWORD *)(v23 + 4 * v22);
      }
      ++a2;
    }
    if ( a3 == (_BYTE *)(a4 - a5) )
    {
      v27 = (5 * v20 - v18) >> 15;
      if ( (v27 & 0xFF00) != 0 )
        v27 = ~HIBYTE(v27);
      *a3 = v27;
    }
  }
}
