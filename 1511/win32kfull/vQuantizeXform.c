/*
 * XREFs of vQuantizeXform @ 0x1C01189B4
 * Callers:
 *     bComputeMaxGlyph @ 0x1C0119094 (bComputeMaxGlyph.c)
 * Callees:
 *     FixMul @ 0x1C00AFF84 (FixMul.c)
 *     CompDiv @ 0x1C00DA168 (CompDiv.c)
 *     bSearchVdmxTable @ 0x1C0118CA0 (bSearchVdmxTable.c)
 */

__int64 __fastcall vQuantizeXform(__int64 a1)
{
  __int64 v1; // r8
  int v3; // r13d
  unsigned int *v4; // rcx
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // r12
  __int64 v8; // rdx
  __int64 v9; // r15
  __int64 v10; // rdi
  int v11; // r14d
  int v12; // edx
  int fixed; // esi
  int v14; // r11d
  __int64 v15; // r10
  __int64 v16; // r11
  int v17; // r14d
  int v18; // eax
  unsigned int v19; // r10d
  int v20; // r15d
  int v21; // edi
  unsigned int v22; // eax
  __int16 v23; // r10
  unsigned int v24; // edx
  __int16 v25; // r11
  int v26; // eax
  int v27; // [rsp+30h] [rbp-28h]
  unsigned int v28; // [rsp+34h] [rbp-24h]
  _BYTE v29[6]; // [rsp+3Ch] [rbp-1Ch] BYREF
  int v30; // [rsp+44h] [rbp-14h]
  __int16 v31; // [rsp+A0h] [rbp+48h]
  unsigned int v32; // [rsp+A8h] [rbp+50h]
  int v33; // [rsp+B0h] [rbp+58h]
  int v34; // [rsp+B8h] [rbp+60h]

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
  v33 = *(__int16 *)(v1 + 408);
  if ( (v11 & 1) == 0 || v3 <= 0 || !v7 )
    return result;
  if ( (*(_DWORD *)(a1 + 40) & 0x8000) != 0 )
    v12 = -*(__int16 *)(v1 + 408);
  else
    v12 = *(__int16 *)(v1 + 412) + *(__int16 *)(v1 + 414);
  fixed = FixMul(v3, v12);
  if ( (unsigned int)bSearchVdmxTable(v7, *(_DWORD *)(a1 + 44), *(_DWORD *)(a1 + 48), fixed, (__int64)v29, a1) )
  {
    *(_DWORD *)(a1 + 164) = -*(__int16 *)&v29[4];
    *(_DWORD *)(a1 + 160) = -*(__int16 *)&v29[2];
    *(_DWORD *)(a1 + 124) = *(unsigned __int16 *)v29;
    *(_DWORD *)(a1 + 116) = v11 | 4;
    goto LABEL_12;
  }
  if ( v10 )
    v17 = (__int16)__ROR2__(*(_WORD *)(v10 + 74), 8) + (__int16)__ROR2__(*(_WORD *)(v10 + 76), 8);
  else
    v17 = (__int16)__ROR2__(*(_WORD *)(v9 + 42), 8) - (__int16)__ROR2__(*(_WORD *)(v9 + 38), 8);
  if ( fixed >= 0 )
  {
    v18 = FixMul(v3, v33);
    *(_DWORD *)&v29[2] = v19;
    *(_WORD *)v29 = v19;
    v20 = -v18;
    v21 = v18;
    v27 = v19;
    v34 = v19;
    v28 = v19;
    v30 = *(_DWORD *)v29;
    v31 = v19;
    v32 = v19;
    while ( 1 )
    {
      v22 = bSearchVdmxTable(v7, *(_DWORD *)(a1 + 44), *(_DWORD *)(a1 + 48), v20, (__int64)v29, a1);
      v23 = *(_WORD *)&v29[4];
      v24 = v22;
      v25 = *(_WORD *)&v29[2];
      if ( v22 )
      {
        result = (unsigned int)(*(__int16 *)&v29[2] - *(__int16 *)&v29[4]);
        if ( (_DWORD)result == fixed )
        {
          *(_DWORD *)(a1 + 164) = -*(__int16 *)&v29[4];
          *(_DWORD *)(a1 + 160) = -v25;
          result = *(unsigned __int16 *)v29;
          *(_DWORD *)(a1 + 124) = *(unsigned __int16 *)v29;
          goto LABEL_33;
        }
      }
      else
      {
        result = CompDiv(v33, v17 * (__int64)v21);
        if ( (_DWORD)result == fixed )
          goto LABEL_34;
        v24 = 0;
      }
      if ( (int)result < fixed )
      {
        if ( v27 )
        {
          if ( !v24 )
            goto LABEL_34;
          *(_DWORD *)(a1 + 164) = -v23;
          v26 = v25;
LABEL_32:
          result = (unsigned int)-v26;
          *(_DWORD *)(a1 + 160) = result;
LABEL_33:
          *(_DWORD *)(a1 + 116) |= 4u;
          goto LABEL_34;
        }
        ++v21;
        v34 = 1;
        --v20;
      }
      else
      {
        --v21;
        ++v20;
        if ( v34 )
        {
          result = v28;
          if ( v28 )
          {
            *(_DWORD *)(a1 + 164) = -v31;
            v26 = SHIWORD(v30);
            goto LABEL_32;
          }
LABEL_34:
          if ( v32 < 0x100 )
          {
            *(_DWORD *)(a1 + 124) = v21;
            goto LABEL_12;
          }
          return result;
        }
        v27 = 1;
      }
      ++v32;
      result = *(unsigned int *)v29;
      v28 = v24;
      v30 = *(_DWORD *)v29;
      v31 = v23;
      if ( v32 >= 0x100 )
        goto LABEL_34;
    }
  }
  *(_DWORD *)(a1 + 124) = -fixed;
LABEL_12:
  result = CompDiv(v33, __SPAIR64__(*(int *)(a1 + 124) >> 16, *(_DWORD *)(a1 + 124) << 16));
  v14 = *(_DWORD *)(a1 + 80);
  LODWORD(v15) = result;
  *(_DWORD *)(a1 + 96) = result;
  if ( v14 != v3 && (result = FixMul(v14 - (int)result, *(__int16 *)(*(_QWORD *)(a1 + 8) + 428LL)), (_DWORD)result) )
  {
    result = CompDiv(v3, v15 * v16);
    *(_DWORD *)(a1 + 80) = result;
  }
  else
  {
    *(_DWORD *)(a1 + 80) = v15;
  }
  return result;
}
