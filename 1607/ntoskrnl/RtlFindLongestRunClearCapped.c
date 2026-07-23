/*
 * XREFs of RtlFindLongestRunClearCapped @ 0x1402126DC
 * Callers:
 *     MiFindPageFileWriteCluster @ 0x140125FB0 (MiFindPageFileWriteCluster.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlFindLongestRunClearCapped(__int64 a1, unsigned int a2, int *a3)
{
  unsigned int v6; // ecx
  unsigned int v7; // r15d
  int v8; // ebp
  unsigned int v9; // r14d
  unsigned int v10; // r8d
  unsigned int v11; // r12d
  unsigned int v12; // ebx
  int v13; // r11d
  unsigned __int8 *v14; // rsi
  unsigned int v15; // edx
  unsigned __int8 v16; // r9
  unsigned __int8 *v17; // rsi
  unsigned int v18; // r13d
  unsigned int v19; // edx
  unsigned __int8 i; // r9
  __int64 v21; // r13
  int v22; // eax
  char j; // cl
  int v25; // [rsp+0h] [rbp-48h]
  unsigned int v27; // [rsp+60h] [rbp+18h]
  char v28; // [rsp+68h] [rbp+20h]

  v6 = *(_DWORD *)a1;
  v28 = v6;
  v25 = v6 & 7;
  v7 = (v25 != 0) + (v6 >> 3);
  v8 = 0;
  v9 = (*a3 < v6 ? *a3 : 0) & 0xFFFFFFF8;
  v10 = 0;
  v11 = 0;
  v12 = v9 >> 3;
  v13 = v9;
  v14 = (unsigned __int8 *)(*(_QWORD *)(a1 + 8) + (v9 >> 3));
  v15 = 0;
  v16 = *v14;
  v17 = v14 + 1;
  if ( v9 >> 3 == v7 - 1 && (v6 & 7) != 0 )
    v16 |= byte_14026F6C8[v6 & 7];
  v18 = 0;
  v27 = 0;
  if ( v7 )
  {
    do
    {
      if ( v16 )
      {
        v19 = RtlpBitsClearLow[v16] + v15;
        if ( v19 )
        {
          if ( v19 >= a2 )
            goto LABEL_39;
          if ( v19 > v10 )
          {
            v10 = v19;
            v8 = v13;
          }
        }
        if ( v13 == v9 )
          v11 = v19;
        v15 = RtlpBitsClearHigh[v16];
        v13 = 8 * v12 - v15 + 8;
        for ( i = byte_14026F6B8[RtlpBitsClearLow[v16]] | byte_14026F6C8[8 - v15] | v16; i != 0xFF; v8 = v22 + 8 * v12 )
        {
          v21 = RtlpBitsClearAnywhere[i];
          if ( v10 >= (unsigned int)v21 )
            break;
          v22 = 0;
          for ( j = byte_14026F6B8[v21]; ((unsigned __int8)j & i) != 0; j *= 2 )
            ++v22;
          v10 = RtlpBitsClearAnywhere[i];
          if ( (unsigned int)v21 >= a2 )
          {
            *a3 = v22 + 8 * v12;
            return a2;
          }
          i |= j;
        }
        LOBYTE(v6) = v28;
        v18 = v27;
      }
      else
      {
        v15 += 8;
        if ( v15 >= a2 )
        {
LABEL_39:
          *a3 = v13;
          return a2;
        }
      }
      if ( ++v12 >= v7 )
      {
        if ( v15 )
        {
          if ( v13 == v9 )
            v11 = v15;
          if ( v15 > v10 )
          {
            v10 = v15;
            v8 = v13;
          }
          v15 = 0;
        }
        v12 = 0;
        v17 = *(unsigned __int8 **)(a1 + 8);
      }
      v16 = *v17++;
      if ( v12 == v7 - 1 && v25 )
      {
        v16 |= byte_14026F6C8[v6 & 7];
        v18 = v27;
      }
      v27 = ++v18;
    }
    while ( v18 < v7 );
    if ( v15 )
    {
      if ( v13 + v15 == v9 )
        v15 += v11;
      if ( v15 > v10 )
      {
        v10 = v15;
        v8 = v13;
      }
    }
    else if ( !v10 )
    {
      goto LABEL_46;
    }
    *a3 = v8;
    if ( v10 > a2 )
      return a2;
    return v10;
  }
  else
  {
LABEL_46:
    *a3 = 0;
    return 0LL;
  }
}
