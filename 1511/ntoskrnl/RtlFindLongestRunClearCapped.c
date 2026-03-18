/*
 * XREFs of RtlFindLongestRunClearCapped @ 0x1401F8574
 * Callers:
 *     MiFindPageFileWriteCluster @ 0x1401084F0 (MiFindPageFileWriteCluster.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlFindLongestRunClearCapped(unsigned int *a1, unsigned int a2, unsigned int *a3)
{
  unsigned int v3; // r12d
  int v6; // ecx
  unsigned int v7; // r13d
  unsigned int v8; // ebp
  unsigned int v9; // r15d
  unsigned int v10; // r8d
  unsigned int v11; // r14d
  unsigned int v12; // ebx
  unsigned int v13; // r11d
  unsigned __int8 *v14; // rsi
  unsigned int *v15; // rdx
  unsigned __int8 v16; // r9
  unsigned __int8 *v17; // rsi
  unsigned int v18; // ecx
  unsigned int v19; // edx
  char v20; // cl
  __int64 v21; // r12
  int v22; // eax
  int v24; // [rsp+0h] [rbp-48h]
  unsigned int v26; // [rsp+60h] [rbp+18h]
  char v27; // [rsp+68h] [rbp+20h]

  v3 = *a1;
  v27 = v3;
  v15 = a1;
  v6 = *a1 & 7;
  v24 = v3 & 7;
  v7 = (v24 != 0) + (v3 >> 3);
  v8 = 0;
  v9 = (*a3 < v3 ? *a3 : 0) & 0xFFFFFFF8;
  v10 = 0;
  v11 = 0;
  v12 = v9 >> 3;
  v13 = v9;
  v14 = (unsigned __int8 *)(*((_QWORD *)v15 + 1) + (v9 >> 3));
  LODWORD(v15) = 0;
  v16 = *v14;
  v17 = v14 + 1;
  if ( v9 >> 3 == v7 - 1 && v6 )
    v16 |= byte_1402453A0[v3 & 7];
  v18 = 0;
  v26 = 0;
  if ( !v7 )
  {
LABEL_46:
    *a3 = 0;
    return 0LL;
  }
  do
  {
    if ( v16 )
    {
      v19 = RtlpBitsClearLow[v16] + (_DWORD)v15;
      if ( v19 )
      {
        if ( v19 >= a2 )
        {
LABEL_39:
          *a3 = v13;
          return a2;
        }
        if ( v19 > v10 )
        {
          v10 = v19;
          v8 = v13;
        }
      }
      if ( v13 == v9 )
        v11 = v19;
      v15 = (unsigned int *)RtlpBitsClearHigh[v16];
      v13 = 8 * v12 - (_DWORD)v15 + 8;
      v20 = byte_140247340[RtlpBitsClearLow[v16]] | *(_BYTE *)(&unk_1402453A8 - (_UNKNOWN *)v15);
      while ( 1 )
      {
        v16 |= v20;
        if ( v16 == 0xFF || (v21 = RtlpBitsClearAnywhere[v16], v10 >= (unsigned int)v21) )
        {
          v18 = v26;
          LOBYTE(v3) = v27;
          goto LABEL_21;
        }
        v20 = byte_140247340[v21];
        v22 = 0;
        while ( ((unsigned __int8)v20 & v16) != 0 )
        {
          v20 *= 2;
          ++v22;
        }
        v10 = RtlpBitsClearAnywhere[v16];
        if ( (unsigned int)v21 >= a2 )
          break;
        v8 = v22 + 8 * v12;
      }
      *a3 = v22 + 8 * v12;
      return a2;
    }
    LODWORD(v15) = (_DWORD)v15 + 8;
    if ( (unsigned int)v15 >= a2 )
      goto LABEL_39;
LABEL_21:
    if ( ++v12 >= v7 )
    {
      if ( (_DWORD)v15 )
      {
        if ( v13 == v9 )
          v11 = (unsigned int)v15;
        if ( (unsigned int)v15 > v10 )
        {
          v10 = (unsigned int)v15;
          v8 = v13;
        }
        LODWORD(v15) = 0;
      }
      v12 = 0;
      v17 = (unsigned __int8 *)*((_QWORD *)a1 + 1);
    }
    v16 = *v17++;
    if ( v12 == v7 - 1 && v24 )
    {
      v16 |= byte_1402453A0[v3 & 7];
      v18 = v26;
    }
    v26 = ++v18;
  }
  while ( v18 < v7 );
  if ( !(_DWORD)v15 )
  {
    if ( v10 )
      goto LABEL_43;
    goto LABEL_46;
  }
  if ( v13 + (_DWORD)v15 == v9 )
    LODWORD(v15) = v11 + (_DWORD)v15;
  if ( (unsigned int)v15 > v10 )
  {
    v10 = (unsigned int)v15;
    v8 = v13;
  }
LABEL_43:
  *a3 = v8;
  if ( v10 > a2 )
    return a2;
  return v10;
}
