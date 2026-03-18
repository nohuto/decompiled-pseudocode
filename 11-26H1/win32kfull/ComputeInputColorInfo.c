/*
 * XREFs of ComputeInputColorInfo @ 0x140143FD8
 * Callers:
 *     SetupAAHeader @ 0x140142A9C (SetupAAHeader.c)
 *     GetDstBFInfo @ 0x14030405C (GetDstBFInfo.c)
 * Callees:
 *     <none>
 */

char __fastcall ComputeInputColorInfo(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4, __int64 a5)
{
  __int64 v6; // r11
  _BYTE *v7; // rbx
  int v8; // r9d
  _BYTE *v9; // rdx
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // rdi
  __int64 v13; // rbp
  __int64 (__fastcall *v14)(); // rax
  _BYTE *v15; // rcx
  __int64 v16; // r8
  __int64 (__fastcall *v17)(); // rax
  __int64 v18; // r11
  int v19; // r10d
  unsigned int v20; // r9d
  char v21; // cl
  char v22; // r9
  char v23; // cl
  unsigned int v24; // ecx
  bool v25; // sf
  int v26; // edx
  __int64 v27; // rcx

  v6 = (unsigned int)a2;
  v7 = (_BYTE *)(a5 + 64);
  if ( a1 )
  {
    v8 = *(unsigned __int16 *)(a5 + 2);
    if ( *(_WORD *)(a5 + 2) )
    {
      v9 = *(_BYTE **)(a5 + 80);
      v10 = (unsigned int)a3;
      v11 = BYTE1(SrcOrderTable[(unsigned int)a3]);
      v12 = BYTE2(SrcOrderTable[v10]);
      v13 = HIBYTE(SrcOrderTable[v10]);
      if ( *(_BYTE *)(a5 + 65) == 1 )
      {
        v14 = Input1BPPToAA24;
      }
      else
      {
        if ( *(_BYTE *)(a5 + 65) != 2 )
        {
          if ( *(_BYTE *)(a5 + 65) == 3 || *(unsigned __int8 *)(a5 + 65) == 254 )
          {
            v14 = Input8BPPToAA24;
            goto LABEL_5;
          }
          if ( *(unsigned __int8 *)(a5 + 65) != 255 )
          {
LABEL_6:
            v15 = (_BYTE *)(v12 + a1);
            v16 = v11 - v12;
            do
            {
              v9[2] = v15[v16];
              v9[1] = *v15;
              LOBYTE(v17) = v15[v13 - v12];
              v15 += v6;
              *v9 = (_BYTE)v17;
              v9 += 4;
              --v8;
            }
            while ( v8 );
            return (char)v17;
          }
        }
        v14 = Input4BPPToAA24;
      }
LABEL_5:
      *(_QWORD *)(a5 + 16) = v14;
      goto LABEL_6;
    }
  }
  *(_QWORD *)(a5 + 16) = InputAABFDATAToAA24;
  if ( (*a4 & 1) != 0 )
  {
    *v7 |= 1u;
    *(_BYTE *)(a5 + 66) = a4[21];
    *(_BYTE *)(a5 + 67) = a4[22];
    LOBYTE(v17) = a4[23];
    *(_BYTE *)(a5 + 68) = (_BYTE)v17;
  }
  else
  {
    v17 = (__int64 (__fastcall *)())(a4 + 8);
    a3 = v7 - a4;
    v18 = 3LL;
    do
    {
      v19 = *((unsigned __int8 *)v17 - 4);
      v17 = (__int64 (__fastcall *)())((char *)v17 - 1);
      a2 = 0LL;
      v20 = *(unsigned __int8 *)v17;
      if ( v20 < 8 )
      {
        v24 = 8 - v20;
        v22 = -1 << (8 - v20);
        v25 = (int)(v19 - v24) < 0;
        v26 = v19 - v24;
        v23 = v19 - v24;
        if ( v25 )
        {
          a2 = (unsigned int)-v26;
          v23 = 0;
        }
        else
        {
          a2 = 0LL;
        }
      }
      else
      {
        v21 = v20 - 8;
        v22 = -1;
        v23 = v19 + v21;
      }
      *((_BYTE *)v17 + a3 - 3) = v22;
      *((_BYTE *)v17 + a3) = a2;
      *((_BYTE *)v17 + a3 + 3) = v23;
      --v18;
    }
    while ( v18 );
  }
  if ( a4[1] == 4 )
    goto LABEL_26;
  if ( a4[1] != 5 )
  {
    if ( a4[1] == 6 )
    {
      if ( (*(_BYTE *)a5 & 8) != 0 )
      {
        v27 = *(_QWORD *)(W32GetSessionState((unsigned int)(unsigned __int8)a4[1] - 6, a2, a3) + 112);
        LOBYTE(v17) = a4[20];
        if ( (_BYTE)v17 )
        {
          if ( (_BYTE)v17 == 4 )
            *v7 |= 4u;
        }
        else
        {
          *v7 |= 8u;
        }
        if ( !*(_DWORD *)(v27 + 80) )
        {
          v17 = InputPreMul32BPPToAA24;
          *(_QWORD *)(a5 + 16) = InputPreMul32BPPToAA24;
        }
      }
      *(_BYTE *)(a5 + 75) = 4;
      return (char)v17;
    }
    if ( (unsigned int)(unsigned __int8)a4[1] - 252 > 1 )
      return (char)v17;
LABEL_26:
    *(_BYTE *)(a5 + 75) = 2;
    return (char)v17;
  }
  if ( a4[20] == 4 )
    *v7 |= 2u;
  *(_BYTE *)(a5 + 75) = 3;
  return (char)v17;
}
