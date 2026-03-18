/*
 * XREFs of bVerifyTTF @ 0x1C0155F40
 * Callers:
 *     bLoadTTF @ 0x1C00207C4 (bLoadTTF.c)
 * Callees:
 *     bGetTablePointers @ 0x1C0156144 (bGetTablePointers.c)
 *     bCheckLocaTable @ 0x1C0156400 (bCheckLocaTable.c)
 *     bComputeIFISIZE @ 0x1C01564B4 (bComputeIFISIZE.c)
 *     bComputeIDs @ 0x1C0156C80 (bComputeIDs.c)
 */

__int64 __fastcall bVerifyTTF(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int16 a4,
        unsigned int *a5,
        void *a6,
        unsigned __int16 *a7,
        unsigned __int16 *a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  __int64 v16; // rax
  __int64 v17; // rbp
  __int64 v18; // r15
  __int64 v19; // rsi
  __int64 v20; // rax
  _WORD *v21; // rdx
  unsigned int v22; // ecx
  int v23; // r8d
  __int16 v24; // cx
  __int64 v25; // r9
  __int64 v26; // rcx
  unsigned __int64 v28; // rdx

  if ( !(unsigned int)bGetTablePointers(a1, a2, a3, a5) )
    return 0LL;
  v16 = a5[18];
  v17 = a5[4];
  v18 = a5[12];
  v19 = a1 + v16;
  if ( !(_DWORD)v16 )
    v19 = 0LL;
  v20 = a5[16];
  v21 = (_WORD *)(a1 + v20);
  if ( !(_DWORD)v20 )
    v21 = 0LL;
  if ( a5[5] < 0x36
    || a5[7] < 0x24
    || a5[13] < 0x20
    || 4 * (unsigned __int64)(unsigned __int16)__ROR2__(*(_WORD *)(a5[6] + a1 + 34), 8) > a5[9] )
  {
    return 0LL;
  }
  if ( v21 )
  {
    v22 = a5[17];
    if ( v22 < 0x4E || __ROR2__(*v21, 8) && v22 < 0x56 )
      *((_QWORD *)a5 + 8) = 0LL;
  }
  if ( _byteswap_ulong(*(_DWORD *)(v17 + a1 + 12)) != 1594834165
    || !(unsigned int)bComputeIDs(a1, (_DWORD)a5, (_DWORD)a7, (_DWORD)a8, a9, a10, a11, a12) )
  {
    return 0LL;
  }
  v23 = *a7;
  v24 = (_WORD)v23 == 3 ? a4 : word_1C02F08F0[a4 & 0x1F];
  if ( !(unsigned int)bComputeIFISIZE(a1, (int)a5, v23, *a8, v24, a6, a13, a14) )
    return 0LL;
  v25 = *(unsigned __int16 *)(v18 + a1 + 4);
  v26 = *(unsigned __int16 *)(v17 + a1 + 50);
  LOWORD(v25) = __ROR2__(v25, 8);
  LOWORD(v26) = __ROR2__(v26, 8);
  if ( !(unsigned int)bCheckLocaTable(v26, a1, a5, v25) )
    return 0LL;
  if ( v19 )
  {
    v28 = a5[19];
    if ( (unsigned int)v28 < 8
      || (unsigned __int64)(_byteswap_ulong(*(_DWORD *)(v19 + 4)) * (unsigned __int16)__ROR2__(*(_WORD *)(v19 + 2), 8))
       + 8 > v28 )
    {
      a5[19] = 0;
      a5[18] = 0;
    }
  }
  return 1LL;
}
