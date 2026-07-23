/*
 * XREFs of DecodeAttributeName @ 0x1406CC818
 * Callers:
 *     GetAttributeName @ 0x1406CCBF4 (GetAttributeName.c)
 *     LocalGetRelativeAttributeForString @ 0x1406CE9C4 (LocalGetRelativeAttributeForString.c)
 * Callees:
 *     SddlpFree @ 0x1404BA0C0 (SddlpFree.c)
 *     SddlpAlloc @ 0x1404BAB78 (SddlpAlloc.c)
 *     GetDigitFromChar2 @ 0x1406CCF2C (GetDigitFromChar2.c)
 *     IsEncodedAttributeChar @ 0x1406CE1E0 (IsEncodedAttributeChar.c)
 */

__int64 __fastcall DecodeAttributeName(__int64 a1, unsigned int a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  unsigned int v6; // r12d
  _WORD *v7; // rsi
  unsigned int v8; // edi
  unsigned int v9; // r14d
  unsigned int v10; // r15d
  int v11; // r8d
  unsigned int v12; // ecx
  __int16 v13; // dx
  unsigned int v14; // r8d
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  unsigned __int8 v19; // [rsp+20h] [rbp-10h] BYREF
  unsigned __int8 v20; // [rsp+21h] [rbp-Fh] BYREF
  __int16 v21; // [rsp+22h] [rbp-Eh]
  int v22; // [rsp+24h] [rbp-Ch]
  int v23; // [rsp+28h] [rbp-8h]
  int v24; // [rsp+2Ch] [rbp-4h]
  unsigned __int8 v25; // [rsp+70h] [rbp+40h] BYREF
  _QWORD *v26; // [rsp+80h] [rbp+50h]
  unsigned __int8 v27; // [rsp+88h] [rbp+58h] BYREF

  v26 = a3;
  v3 = 0;
  v22 = 0;
  v25 = 0;
  v27 = 0;
  v19 = 0;
  v20 = 0;
  if ( !a1 || !a2 || !a3 )
    return 87LL;
  if ( (a2 & 1) != 0 )
    return 1336;
  v6 = 2;
  v7 = SddlpAlloc(a2 + 2LL);
  if ( !v7 )
    return 8;
  v8 = a2 >> 1;
  v9 = 0;
  if ( !v8 )
  {
LABEL_20:
    *v26 = v7;
    return v3;
  }
  v10 = 4;
  v11 = 3;
  v12 = 1;
  v24 = 3;
  v23 = 1;
  while ( 1 )
  {
    v13 = *(_WORD *)(a1 + 2LL * v9);
    if ( v13 != 37 )
    {
      v17 = v22;
      v7[v22] = v13;
      v22 = v17 + 1;
      v16 = v23;
      goto LABEL_19;
    }
    if ( v10 >= v8 )
      break;
    if ( !(unsigned __int8)GetDigitFromChar2(*(unsigned __int16 *)(a1 + 2LL * v12), &v25) )
      break;
    if ( !(unsigned __int8)GetDigitFromChar2(*(unsigned __int16 *)(a1 + 2LL * v6), &v27) )
      break;
    if ( !(unsigned __int8)GetDigitFromChar2(*(unsigned __int16 *)(a1 + 2LL * v14), &v19) )
      break;
    if ( !(unsigned __int8)GetDigitFromChar2(*(unsigned __int16 *)(a1 + 2LL * v10), &v20) )
      break;
    v21 = v20 | (unsigned __int16)(16 * (v19 | (unsigned __int16)(16 * (v27 | (unsigned __int16)(16 * v25)))));
    if ( !(unsigned __int8)IsEncodedAttributeChar() )
      break;
    v15 = v22;
    v9 += 4;
    v6 += 4;
    v11 = v24 + 4;
    v7[v22] = v21;
    v22 = v15 + 1;
    v16 = v23 + 4;
    v10 += 4;
LABEL_19:
    v12 = v16 + 1;
    ++v11;
    ++v9;
    v23 = v12;
    ++v6;
    v24 = v11;
    ++v10;
    if ( v9 >= v8 )
      goto LABEL_20;
  }
  v3 = 1336;
  SddlpFree(v7);
  return v3;
}
