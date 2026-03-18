/*
 * XREFs of vQuantizeXform @ 0x1C001A7D4
 * Callers:
 *     bComputeMaxGlyph @ 0x1C0019FE0 (bComputeMaxGlyph.c)
 * Callees:
 *     bSearchVdmxTable @ 0x1C001AAC0 (bSearchVdmxTable.c)
 *     FixMul @ 0x1C00C947C (FixMul.c)
 *     CompDiv @ 0x1C00F85F4 (CompDiv.c)
 */

__int64 __fastcall vQuantizeXform(__int64 a1)
{
  __int64 v1; // r8
  unsigned int v3; // r13d
  unsigned int *v4; // rcx
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // r12
  __int64 v8; // rdx
  __int64 v9; // r15
  __int64 v10; // rdi
  int v11; // r14d
  __int64 v12; // rdx
  int fixed; // esi
  __int64 v14; // r8
  __int64 v15; // r8
  int v16; // r11d
  __int64 v17; // r10
  __int64 v18; // r11
  int v19; // r14d
  int v20; // eax
  unsigned int v21; // r10d
  int v22; // r15d
  int v23; // edi
  unsigned int v24; // eax
  __int16 v25; // r10
  unsigned int v26; // edx
  __int16 v27; // r11
  int v28; // eax
  int v29; // [rsp+30h] [rbp-28h]
  unsigned int v30; // [rsp+34h] [rbp-24h]
  _BYTE v31[6]; // [rsp+3Ch] [rbp-1Ch] BYREF
  int v32; // [rsp+44h] [rbp-14h]
  __int16 v33; // [rsp+A0h] [rbp+48h]
  unsigned int v34; // [rsp+A8h] [rbp+50h]
  unsigned int v35; // [rsp+B0h] [rbp+58h]
  int v36; // [rsp+B8h] [rbp+60h]

  v1 = *(_QWORD *)(a1 + 8);
  v3 = *(_DWORD *)(a1 + 96);
  v4 = *(unsigned int **)(a1 + 192);
  result = *(_QWORD *)(v1 + 64);
  v6 = v4[20];
  v7 = result + v6;
  if ( !(_DWORD)v6 )
    v7 = 0LL;
  v8 = v4[16];
  v9 = result + v4[4];
  v10 = result + v8;
  if ( !(_DWORD)v8 )
    v10 = 0LL;
  v11 = *(_DWORD *)(a1 + 116);
  v35 = *(__int16 *)(v1 + 408);
  if ( (v11 & 1) == 0 || (int)v3 <= 0 || !v7 )
    return result;
  if ( (*(_DWORD *)(a1 + 40) & 0x8000) != 0 )
    v12 = (unsigned int)-*(__int16 *)(v1 + 408);
  else
    v12 = (unsigned int)(*(__int16 *)(v1 + 412) + *(__int16 *)(v1 + 414));
  fixed = FixMul(v3, v12, v1);
  if ( (unsigned int)bSearchVdmxTable(v7, *(_DWORD *)(a1 + 44), *(_DWORD *)(a1 + 48), fixed, (__int64)v31, a1) )
  {
    *(_DWORD *)(a1 + 164) = -*(__int16 *)&v31[4];
    *(_DWORD *)(a1 + 160) = -*(__int16 *)&v31[2];
    *(_DWORD *)(a1 + 124) = *(unsigned __int16 *)v31;
    *(_DWORD *)(a1 + 116) = v11 | 4;
    goto LABEL_12;
  }
  if ( v10 )
    v19 = (__int16)__ROR2__(*(_WORD *)(v10 + 74), 8) + (__int16)__ROR2__(*(_WORD *)(v10 + 76), 8);
  else
    v19 = (__int16)__ROR2__(*(_WORD *)(v9 + 42), 8) - (__int16)__ROR2__(*(_WORD *)(v9 + 38), 8);
  if ( fixed >= 0 )
  {
    v20 = FixMul(v3, v35, v14);
    *(_DWORD *)&v31[2] = v21;
    *(_WORD *)v31 = v21;
    v22 = -v20;
    v23 = v20;
    v29 = v21;
    v36 = v21;
    v30 = v21;
    v32 = *(_DWORD *)v31;
    v33 = v21;
    v34 = v21;
    while ( 1 )
    {
      v24 = bSearchVdmxTable(v7, *(_DWORD *)(a1 + 44), *(_DWORD *)(a1 + 48), v22, (__int64)v31, a1);
      v25 = *(_WORD *)&v31[4];
      v26 = v24;
      v27 = *(_WORD *)&v31[2];
      if ( v24 )
      {
        result = (unsigned int)(*(__int16 *)&v31[2] - *(__int16 *)&v31[4]);
        if ( (_DWORD)result == fixed )
        {
          *(_DWORD *)(a1 + 164) = -*(__int16 *)&v31[4];
          *(_DWORD *)(a1 + 160) = -v27;
          result = *(unsigned __int16 *)v31;
          *(_DWORD *)(a1 + 124) = *(unsigned __int16 *)v31;
          goto LABEL_29;
        }
      }
      else
      {
        result = CompDiv(v35, v19 * (__int64)v23);
        if ( (_DWORD)result == fixed )
          goto LABEL_30;
        v26 = 0;
      }
      if ( (int)result >= fixed )
      {
        --v23;
        ++v22;
        if ( v36 )
        {
          result = v30;
          if ( v30 )
          {
            *(_DWORD *)(a1 + 164) = -v33;
            v28 = SHIWORD(v32);
            goto LABEL_28;
          }
LABEL_30:
          if ( v34 < 0x100 )
          {
            *(_DWORD *)(a1 + 124) = v23;
            goto LABEL_12;
          }
          return result;
        }
        v29 = 1;
      }
      else
      {
        if ( v29 )
        {
          if ( !v26 )
            goto LABEL_30;
          *(_DWORD *)(a1 + 164) = -v25;
          v28 = v27;
LABEL_28:
          result = (unsigned int)-v28;
          *(_DWORD *)(a1 + 160) = result;
LABEL_29:
          *(_DWORD *)(a1 + 116) |= 4u;
          goto LABEL_30;
        }
        ++v23;
        v36 = 1;
        --v22;
      }
      ++v34;
      result = *(unsigned int *)v31;
      v30 = v26;
      v32 = *(_DWORD *)v31;
      v33 = v25;
      if ( v34 >= 0x100 )
        goto LABEL_30;
    }
  }
  *(_DWORD *)(a1 + 124) = -fixed;
LABEL_12:
  result = CompDiv(v35, __PAIR64__(*(int *)(a1 + 124) >> 16, *(_DWORD *)(a1 + 124) << 16));
  v16 = *(_DWORD *)(a1 + 80);
  LODWORD(v17) = result;
  *(_DWORD *)(a1 + 96) = result;
  if ( v16 == v3
    || (result = FixMul((unsigned int)(v16 - result), (unsigned int)*(__int16 *)(*(_QWORD *)(a1 + 8) + 428LL), v15),
        !(_DWORD)result) )
  {
    *(_DWORD *)(a1 + 80) = v17;
  }
  else
  {
    result = CompDiv(v3, v17 * v18);
    *(_DWORD *)(a1 + 80) = result;
  }
  return result;
}
