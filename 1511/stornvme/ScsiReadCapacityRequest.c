/*
 * XREFs of ScsiReadCapacityRequest @ 0x1C0006FFC
 * Callers:
 *     ScsiToNVMe @ 0x1C00088F0 (ScsiToNVMe.c)
 * Callees:
 *     NVMeSetSenseData @ 0x1C000D49C (NVMeSetSenseData.c)
 */

__int64 __fastcall ScsiReadCapacityRequest(__int64 a1, __int64 a2, _BYTE *a3, __int64 a4)
{
  char v4; // al
  _BYTE *v8; // r10
  _DWORD *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rax
  unsigned int v12; // r8d
  __int64 v13; // r15
  int v14; // r14d
  unsigned __int64 v15; // rcx
  __int64 v16; // rdx
  char v18; // cl
  unsigned __int64 v19; // [rsp+68h] [rbp+38h]

  v4 = *(_BYTE *)(a2 + 2);
  if ( v4 == 40 )
  {
    v8 = *(_BYTE **)(a2 + 64);
    v9 = (_DWORD *)(a2 + 60);
  }
  else
  {
    v8 = *(_BYTE **)(a2 + 24);
    v9 = (_DWORD *)(a2 + 16);
  }
  if ( v4 == 40 )
    v10 = *(unsigned __int8 *)(*(unsigned int *)(a2 + 52) + a2 + 10);
  else
    v10 = *(unsigned __int8 *)(a2 + 7);
  v11 = *(_QWORD *)(a1 + 8 * v10 + 1176);
  v12 = 0;
  v13 = (unsigned int)v10;
  v14 = *(_DWORD *)(v11 + 52);
  v15 = *(_QWORD *)(v11 + 56) - 1LL;
  v19 = v15;
  v16 = *(_QWORD *)(a1 + 8LL * (unsigned __int8)v10 + 1176);
  if ( *(_BYTE *)(v16 + 66) || *(_WORD *)(v16 + 48) )
  {
    v15 = 0LL;
    v19 = 0LL;
  }
  if ( *v9 < 8u || (v16 = 12LL, (_DWORD)a4 == 16) && *v9 < 0xCu || !v8 )
  {
    LOBYTE(a4) = 36;
    LOBYTE(v16) = 6;
    NVMeSetSenseData(a2, v16, 0LL, a4);
    return 3238002692LL;
  }
  if ( (_DWORD)a4 != 16 || *a3 != 0x9E )
  {
    v8[6] = BYTE1(v14);
    v8[5] = BYTE2(v14);
    v8[4] = HIBYTE(v14);
    v8[7] = v14;
    if ( v15 < 0xFFFFFFFF )
    {
      v8[3] = v15;
      v8[2] = BYTE1(v19);
      v8[1] = BYTE2(v19);
      *v8 = BYTE3(v19);
    }
    else
    {
      *(_DWORD *)v8 = -1;
    }
    *v9 = 8;
    goto LABEL_26;
  }
  if ( (a3[1] & 0x1F) == 0x10 )
  {
    v8[6] = BYTE1(v19);
    v8[5] = BYTE2(v19);
    v8[4] = BYTE3(v19);
    v8[3] = BYTE4(v19);
    v8[2] = BYTE5(v19);
    v8[1] = BYTE6(v19);
    *v8 = HIBYTE(v19);
    v8[7] = v15;
    v8[10] = BYTE1(v14);
    v8[9] = BYTE2(v14);
    v8[8] = HIBYTE(v14);
    v8[11] = v14;
    if ( *v9 >= 0x10u )
    {
      v8[14] &= 0xC0u;
      v8[12] &= 0xF0u;
      v8[13] &= 0xF0u;
      v18 = v8[14];
      v8[15] = 0;
      v8[14] = v18 & 0x3F | (*(_BYTE *)(*(_QWORD *)(a1 + 8 * v13 + 1176) + 65LL) << 7);
      LODWORD(v16) = 16;
    }
    *v9 = v16;
LABEL_26:
    *(_BYTE *)(a2 + 3) = 1;
    return v12;
  }
  LOBYTE(a4) = 32;
  LOBYTE(v16) = 6;
  NVMeSetSenseData(a2, v16, 0LL, a4);
  return (unsigned int)-1056964601;
}
