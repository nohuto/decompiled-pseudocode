/*
 * XREFs of ComputeInputColorInfo @ 0x1C00F7758
 * Callers:
 *     SetupAAHeader @ 0x1C00F649C (SetupAAHeader.c)
 *     GetDstBFInfo @ 0x1C024A770 (GetDstBFInfo.c)
 * Callees:
 *     <none>
 */

char __fastcall ComputeInputColorInfo(__int64 a1, unsigned int a2, unsigned int a3, _BYTE *a4, __int64 a5)
{
  _BYTE *v5; // r10
  int v6; // ebx
  __int64 (__fastcall *v7)(); // rax
  _BYTE *v8; // r9
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // rsi
  __int64 v12; // rbp
  __int64 (__fastcall *v13)(); // rax
  _BYTE *v14; // rcx
  unsigned __int8 *v15; // rax
  __int64 v16; // r8
  __int64 v17; // rdi
  int v18; // edx
  int v19; // ecx
  unsigned int v20; // ebx
  char v21; // bl
  unsigned int v22; // ecx

  v5 = (_BYTE *)(a5 + 64);
  if ( a1 )
  {
    v6 = *(unsigned __int16 *)(a5 + 2);
    if ( *(_WORD *)(a5 + 2) )
    {
      v8 = *(_BYTE **)(a5 + 80);
      v9 = a3;
      v10 = BYTE1(SrcOrderTable[a3]);
      v11 = BYTE2(SrcOrderTable[v9]);
      v12 = HIBYTE(SrcOrderTable[v9]);
      if ( *(_BYTE *)(a5 + 65) == 1 )
      {
        v13 = (__int64 (__fastcall *)())Input1BPPToAA24;
      }
      else
      {
        if ( *(_BYTE *)(a5 + 65) != 2 )
        {
          if ( *(_BYTE *)(a5 + 65) == 3 || *(unsigned __int8 *)(a5 + 65) == 254 )
          {
            v13 = Input8BPPToAA24;
            goto LABEL_12;
          }
          if ( *(unsigned __int8 *)(a5 + 65) != 255 )
          {
LABEL_13:
            v14 = (_BYTE *)(v11 + a1);
            do
            {
              v8[2] = v14[v10 - v11];
              v8[1] = *v14;
              LOBYTE(v7) = v14[v12 - v11];
              v14 += a2;
              *v8 = (_BYTE)v7;
              v8 += 4;
              --v6;
            }
            while ( v6 );
            return (char)v7;
          }
        }
        v13 = Input4BPPToAA24;
      }
LABEL_12:
      *(_QWORD *)(a5 + 16) = v13;
      goto LABEL_13;
    }
  }
  *(_QWORD *)(a5 + 16) = InputAABFDATAToAA24;
  if ( (*a4 & 1) != 0 )
  {
    *v5 |= 1u;
    *(_BYTE *)(a5 + 66) = a4[21];
    *(_BYTE *)(a5 + 67) = a4[22];
    *(_BYTE *)(a5 + 68) = a4[23];
  }
  else
  {
    v15 = a4 + 8;
    v16 = v5 - a4;
    v17 = 3LL;
    do
    {
      v18 = *(v15 - 4);
      --v15;
      LOBYTE(v19) = 0;
      v20 = *v15;
      if ( v20 < 8 )
      {
        v22 = 8 - v20;
        v21 = -1 << (8 - v20);
        v18 -= v22;
        if ( v18 >= 0 )
        {
          LOBYTE(v19) = 0;
        }
        else
        {
          v19 = -v18;
          LOBYTE(v18) = 0;
        }
      }
      else
      {
        LOBYTE(v18) = v20 + v18 - 8;
        v21 = -1;
      }
      v15[v16 - 3] = v21;
      v15[v16] = v19;
      v15[v16 + 3] = v18;
      --v17;
    }
    while ( v17 );
  }
  LOBYTE(v7) = a4[1];
  if ( (_BYTE)v7 == 5 )
  {
    if ( a4[20] == 4 )
      *v5 |= 2u;
    *(_BYTE *)(a5 + 75) = 3;
  }
  else if ( (_BYTE)v7 == 6 )
  {
    LOBYTE(v7) = *(_BYTE *)a5;
    if ( (*(_BYTE *)a5 & 8) != 0 )
    {
      LOBYTE(v7) = a4[20];
      if ( (_BYTE)v7 )
      {
        if ( (_BYTE)v7 == 4 )
          *v5 |= 4u;
      }
      else
      {
        *v5 |= 8u;
      }
      if ( !dwABPreMul )
      {
        v7 = InputPreMul32BPPToAA24;
        *(_QWORD *)(a5 + 16) = InputPreMul32BPPToAA24;
      }
    }
    *(_BYTE *)(a5 + 75) = 4;
  }
  else if ( (_BYTE)v7 == 4 || (unsigned __int8)v7 > 0xFBu && (unsigned __int8)v7 <= 0xFDu )
  {
    *(_BYTE *)(a5 + 75) = 2;
  }
  return (char)v7;
}
