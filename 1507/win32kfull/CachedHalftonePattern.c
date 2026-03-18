/*
 * XREFs of CachedHalftonePattern @ 0x1C00A55D8
 * Callers:
 *     CreateDyesColorMappingTable @ 0x1C00A5548 (CreateDyesColorMappingTable.c)
 *     CreateHalftoneBrushPat @ 0x1C024F4A4 (CreateHalftoneBrushPat.c)
 * Callees:
 *     Generate_HTSC_WORD @ 0x1C00A7DDC (Generate_HTSC_WORD.c)
 */

__int64 __fastcall CachedHalftonePattern(__int64 a1, __int64 a2, __int64 a3, __int16 a4, __int16 a5, int a6)
{
  __int128 v10; // xmm0
  char *v11; // rax
  int v12; // r10d
  int v13; // r11d
  int v14; // edi
  int v15; // ecx
  int v16; // edx
  int v17; // r8d
  __int64 result; // rax
  int v19; // r8d
  unsigned __int16 v20; // [rsp+32h] [rbp-1Fh]
  __int64 v21; // [rsp+38h] [rbp-19h]
  __int128 v22; // [rsp+48h] [rbp-9h]
  __int128 v23; // [rsp+58h] [rbp+7h]
  __int128 v24; // [rsp+68h] [rbp+17h]
  __int128 v25; // [rsp+78h] [rbp+27h]
  __int64 v26; // [rsp+88h] [rbp+37h]

  if ( !*(_QWORD *)(a1 + 176) && !(unsigned int)Generate_HTSC_WORD(a1 + 160) )
    return 4294967294LL;
  v10 = *(_OWORD *)(a1 + 160);
  DWORD1(v24) = *(_DWORD *)(a2 + 48);
  v21 = *(_QWORD *)(a1 + 176);
  v20 = WORD1(*(_QWORD *)(a1 + 168));
  v19 = a4 % 65 + (a4 % 65 < 0 ? 0x41 : 0);
  HIDWORD(v26) = 64 - v19;
  *((_QWORD *)&v24 + 1) = (char *)&RGB555Pat + v19 + (__int64)(66 * (a5 % 65 + (a5 % 65 < 0 ? 0x41 : 0)));
  if ( a6 )
  {
    LODWORD(v26) = -66;
    *(_QWORD *)&v25 = (char *)&RGB555Pat + v19 - 66;
    v11 = (char *)(v25 + 4290);
  }
  else
  {
    LODWORD(v26) = 66;
    *(_QWORD *)&v25 = (char *)&RGB555Pat + v19 + 4290;
    v11 = (char *)&RGB555Pat + v19;
  }
  *((_QWORD *)&v25 + 1) = v11;
  v12 = 6 * WORD4(v10);
  v13 = v12 * WORD5(v10);
  v14 = WORD3(v10);
  v15 = a4 % v14;
  if ( v15 < 0 )
    v15 += v14;
  v16 = a5 % (int)v20;
  if ( v16 < 0 )
    v16 += v20;
  v17 = 6 * v15;
  *(_QWORD *)&v22 = v21 + 6 * v15 + (__int64)(v16 * v12);
  if ( a6 )
  {
    *((_QWORD *)&v22 + 1) = v21 + v17 - (__int64)v12;
    *(_QWORD *)&v23 = *((_QWORD *)&v22 + 1) + v13;
    v12 = -6 * WORD4(v10);
  }
  else
  {
    *((_QWORD *)&v22 + 1) = v21 + v13 + (__int64)v17;
    *(_QWORD *)&v23 = *((_QWORD *)&v22 + 1) - v13;
  }
  result = (unsigned int)v13;
  *(_OWORD *)a3 = v22;
  DWORD2(v23) = v12;
  HIDWORD(v23) = -(-6 * v14 + 6 * v15);
  *(_OWORD *)(a3 + 16) = v23;
  LODWORD(v24) = -6 * v14;
  *(_OWORD *)(a3 + 32) = v24;
  *(_OWORD *)(a3 + 48) = v25;
  *(_QWORD *)(a3 + 64) = v26;
  return result;
}
