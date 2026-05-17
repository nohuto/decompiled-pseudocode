/*
 * XREFs of RtlpHpVsFreeChunkInsert @ 0x18002ACD0
 * Callers:
 *     RtlpFreeHeapInternal @ 0x1800214A0 (RtlpFreeHeapInternal.c)
 *     RtlpHpVsContextAllocate @ 0x18002B090 (RtlpHpVsContextAllocate.c)
 *     RtlpHpVsChunkFree @ 0x180050C3C (RtlpHpVsChunkFree.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlpHpVsFreeChunkInsert(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // r9
  __int16 v7; // r10
  unsigned int v8; // r8d
  unsigned int v9; // edx
  unsigned int v10; // edx
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // rax
  __int64 v13; // r9
  __int16 v14; // dx
  bool v15; // r10
  unsigned __int64 *v16; // rcx
  unsigned __int64 result; // rax
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rdx
  BOOL v20; // r9d
  __int64 v21; // r11
  unsigned __int64 *v22; // r11
  unsigned __int64 *v23; // rbx
  unsigned __int64 v24; // r10
  unsigned int v25; // r9d
  __int64 v26; // r10
  unsigned __int64 **v27; // r9
  unsigned __int64 v28; // r8
  __int64 v29; // r11
  __int64 v30; // rsi

  v6 = 16 * (WORD1(RtlpLFHKey) ^ WORD1(a3) ^ *(unsigned __int16 *)(a3 + 2));
  v7 = ((v6 + (unsigned __int64)(a3 & 0xFFF) + 4095) >> 12) - ((unsigned __int64)(v6 + 4095) >> 12);
  v8 = (a3 - a2 + 4127) & 0xFFFFF000;
  v9 = (v6 + a3 - a2) & 0xFFFFF000;
  if ( v8 < v9 )
  {
    v10 = v9 - v8;
    v11 = *(_QWORD *)(a2 + 16) & (-1LL << (v8 >> 12)) & (0xFFFFFFFFFFFFFFFFuLL >> (63
                                                                                 - (unsigned __int8)((unsigned __int64)(v10 + v8 - 1) >> 12)));
  }
  else
  {
    v10 = 0;
    v11 = 0LL;
  }
  v12 = ((v11 - ((v11 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
      + (((v11 - ((v11 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL);
  v13 = RtlpLFHKey;
  a1[6] += (unsigned int)((0x101010101010101LL * ((v12 + (v12 >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
  v14 = a3 ^ (v7 + (v10 >> 12) - ((0x101010101010101LL * ((v12 + (v12 >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56));
  v15 = 0;
  *(_WORD *)a3 = v13 ^ v14;
  v16 = (unsigned __int64 *)a1[1];
  result = a3 ^ v13 ^ *(_QWORD *)a3;
  if ( v16 )
  {
    while ( 1 )
    {
      if ( ((unsigned int)a3 ^ (unsigned int)v13 ^ *(_DWORD *)a3) < ((unsigned int)v13 ^ ((_DWORD)v16 - 8) ^ *((_DWORD *)v16 - 2)) )
      {
        result = *v16;
        if ( !*v16 )
        {
          v15 = 0;
          break;
        }
      }
      else
      {
        result = v16[1];
        if ( !result )
        {
          v15 = 1;
          break;
        }
      }
      v16 = (unsigned __int64 *)result;
    }
  }
  *(_QWORD *)(a3 + 8) = 0LL;
  v18 = a3 + 8;
  *(_QWORD *)(a3 + 16) = 0LL;
  if ( v16 )
  {
    v16[v15] = v18;
    result = (unsigned __int64)v16 | 1;
    *(_QWORD *)(a3 + 24) = (unsigned __int64)v16 | 1;
    if ( !v15 && v16 == (unsigned __int64 *)a1[2] )
      a1[2] = v18;
    if ( (v16[2] & 1) != 0 )
    {
      while ( 1 )
      {
        v19 = v16[2] & 0xFFFFFFFFFFFFFFFCuLL;
        v20 = *(_QWORD *)v19 != (_QWORD)v16;
        result = *(_QWORD *)v19 == (_QWORD)v16;
        v21 = *(_QWORD *)(v19 + 8 * result);
        if ( !v21 || (*(_BYTE *)(v21 + 16) & 1) == 0 )
          break;
        *((_BYTE *)v16 + 16) &= ~1u;
        v18 = v19;
        *(_BYTE *)(v21 + 16) &= ~1u;
        v16 = (unsigned __int64 *)(*(_QWORD *)(v19 + 16) & 0xFFFFFFFFFFFFFFFCuLL);
        if ( v16 )
        {
          *(_BYTE *)(v19 + 16) |= 1u;
          v15 = v19 != *v16;
          if ( (v16[2] & 1) != 0 )
            continue;
        }
        return result;
      }
      if ( v15 != v20 )
      {
        if ( (unsigned __int64 *)(*(_QWORD *)(v18 + 16) & 0xFFFFFFFFFFFFFFFCuLL) != v16 )
          __fastfail(0x1Du);
        v22 = &v16[*(_QWORD *)v19 == (_QWORD)v16];
        if ( *v22 != v18 )
          __fastfail(0x1Du);
        if ( *(unsigned __int64 **)(v19 + 8LL * (*(_QWORD *)v19 != (_QWORD)v16)) != v16 )
          __fastfail(0x1Du);
        *(_QWORD *)(v19 + 8LL * (*(_QWORD *)v19 != (_QWORD)v16)) = v18;
        v23 = (unsigned __int64 *)(v18 + 8LL * v20);
        *(_QWORD *)(v18 + 16) &= 3uLL;
        *(_QWORD *)(v18 + 16) |= v19;
        v24 = *v23;
        if ( *v23 )
        {
          v30 = *(_QWORD *)(v24 + 16);
          if ( (v30 & 0xFFFFFFFFFFFFFFFCuLL) != v18 )
            __fastfail(0x1Du);
          *(_QWORD *)(v24 + 16) = (unsigned __int64)v16 | v30 & 3;
        }
        *v22 = v24;
        *v23 = (unsigned __int64)v16;
        v16[2] &= 3uLL;
        v16[2] |= v18;
        v16 = (unsigned __int64 *)v18;
      }
      v25 = !v20;
      if ( (v16[2] & 0xFFFFFFFFFFFFFFFCuLL) != v19 )
        __fastfail(0x1Du);
      v26 = v25;
      v27 = (unsigned __int64 **)(v19 + 8 * (v25 ^ 1LL));
      if ( *v27 != v16 )
        __fastfail(0x1Du);
      result = *(_QWORD *)(v19 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( result )
      {
        if ( *(_QWORD *)(result + 8) == v19 )
        {
          *(_QWORD *)(result + 8) = v16;
        }
        else
        {
          if ( *(_QWORD *)result != v19 )
            __fastfail(0x1Du);
          *(_QWORD *)result = v16;
        }
      }
      else
      {
        if ( a1[1] != v19 )
          __fastfail(0x1Du);
        a1[1] = v16;
      }
      v16[2] &= 3uLL;
      v16[2] |= result;
      v28 = v16[v26];
      if ( v28 )
      {
        v29 = *(_QWORD *)(v28 + 16);
        result = v29 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( (unsigned __int64 *)(v29 & 0xFFFFFFFFFFFFFFFCuLL) != v16 )
          __fastfail(0x1Du);
        *(_QWORD *)(v28 + 16) = v19 | v29 & 3;
      }
      *v27 = (unsigned __int64 *)v28;
      v16[v26] = v19;
      *(_QWORD *)(v19 + 16) &= 3uLL;
      *(_QWORD *)(v19 + 16) |= (unsigned __int64)v16;
      *(_BYTE *)(v19 + 16) |= 1u;
      *((_BYTE *)v16 + 16) &= ~1u;
    }
  }
  else
  {
    a1[1] = v18;
    a1[2] = v18;
    *(_QWORD *)(a3 + 24) = 0LL;
  }
  return result;
}
