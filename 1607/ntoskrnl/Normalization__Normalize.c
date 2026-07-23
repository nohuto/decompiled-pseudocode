/*
 * XREFs of Normalization__Normalize @ 0x14068B598
 * Callers:
 *     RtlpNormalizeStringWorker @ 0x14068C088 (RtlpNormalizeStringWorker.c)
 * Callees:
 *     NormBuffer__Append @ 0x140214F70 (NormBuffer__Append.c)
 *     Normalization__GuessCharCountBySize @ 0x14068AEBC (Normalization__GuessCharCountBySize.c)
 *     Normalization__NormalizeCharacter @ 0x14068B744 (Normalization__NormalizeCharacter.c)
 */

__int64 __fastcall Normalization__Normalize(
        __int64 a1,
        unsigned __int16 *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        _DWORD *a6)
{
  unsigned __int16 *v6; // r10
  unsigned int v8; // r11d
  unsigned int v9; // eax
  __int64 v10; // rdx
  int v11; // r14d
  __int64 v12; // rdi
  int v13; // r9d
  int v14; // r10d
  unsigned __int16 *v16; // [rsp+28h] [rbp-39h] BYREF
  unsigned __int16 *v17; // [rsp+30h] [rbp-31h]
  unsigned __int16 *v18; // [rsp+38h] [rbp-29h]
  __int64 v19; // [rsp+40h] [rbp-21h]
  __int64 v20; // [rsp+48h] [rbp-19h]
  __int64 v21; // [rsp+50h] [rbp-11h]
  int v22; // [rsp+58h] [rbp-9h]
  int v23; // [rsp+5Ch] [rbp-5h]
  int v24; // [rsp+60h] [rbp-1h]
  __int64 v25; // [rsp+68h] [rbp+7h]
  __int16 v26; // [rsp+70h] [rbp+Fh]
  __int64 v27; // [rsp+78h] [rbp+17h]
  int v28; // [rsp+80h] [rbp+1Fh]
  __int16 v29; // [rsp+84h] [rbp+23h]
  __int64 v30; // [rsp+98h] [rbp+37h]

  v6 = a2;
  if ( !a2 || !a4 || !a6 )
    return 3221225485LL;
  v24 = 0;
  v26 = 0;
  v28 = 0;
  v29 = 0;
  *a6 = 0;
  v8 = 0;
  v16 = a2;
  v23 = a3;
  v19 = a4;
  v21 = a4;
  v17 = &a2[(int)a3];
  v22 = a5;
  v27 = a4;
  v30 = a1;
  v20 = a4 + 2LL * a5;
  v25 = a4 - 2;
  while ( v6 != v17 )
  {
    if ( v8 )
      goto LABEL_17;
    v9 = *v6;
    v10 = *v6;
    v18 = v6 + 1;
    if ( (signed int)v9 < *(_DWORD *)(a1 + 28)
      || (LOBYTE(a3) = *(_BYTE *)(((__int64)v9 >> 7) + *(_QWORD *)(a1 + 32)), !(_BYTE)a3)
      || (_BYTE)a3 == 0xFB && *(_BYTE *)(a1 + 113) )
    {
      if ( !NormBuffer__Append((__int64)&v16, v10) )
      {
        v6 = v18;
        v8 = -1073741789;
        break;
      }
    }
    else
    {
      v8 = Normalization__NormalizeCharacter(a1, v10, a3, &v16);
    }
    v6 = v18;
  }
  if ( !v8 )
  {
    *a6 = (v21 - v19) >> 1;
    return v8;
  }
LABEL_17:
  if ( v8 == -1073741789 )
  {
    v11 = v17 - v6 + 1;
    v12 = (v21 - v19) >> 1;
    if ( !(unsigned int)(v6 - v16) )
      LODWORD(v12) = *(_DWORD *)(a1 + 24) + v12;
    v13 = Normalization__GuessCharCountBySize(a1, v11);
    if ( v11 * (int)v12 / v14 > v13 )
      v13 = v11 * (int)v12 / v14;
    *a6 = v12 + v13 + (v13 >> 3);
  }
  else
  {
    *a6 = v6 - v16 - 1;
  }
  return v8;
}
