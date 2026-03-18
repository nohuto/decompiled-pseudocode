/*
 * XREFs of itrp_DeltaEngine @ 0x1C00B4844
 * Callers:
 *     itrp_DELTAC2 @ 0x1C00B32B0 (itrp_DELTAC2.c)
 *     itrp_DELTAP2 @ 0x1C00B4120 (itrp_DELTAP2.c)
 *     itrp_DELTAC1 @ 0x1C00B47F0 (itrp_DELTAC1.c)
 *     itrp_DELTAP1 @ 0x1C00B4820 (itrp_DELTAP1.c)
 *     itrp_DELTAC3 @ 0x1C00F82E0 (itrp_DELTAC3.c)
 *     itrp_DELTAP3 @ 0x1C00F8DD0 (itrp_DELTAP3.c)
 * Callees:
 *     FixMul @ 0x1C00AFF84 (FixMul.c)
 *     itrp_GetCVTScale @ 0x1C00B0D08 (itrp_GetCVTScale.c)
 *     CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND @ 0x1C00B7030 (CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND.c)
 *     InvokeMovePoint @ 0x1C00B80C8 (InvokeMovePoint.c)
 */

__int64 __fastcall itrp_DeltaEngine(__int64 a1, unsigned int a2, __int16 a3, char a4)
{
  __int64 v4; // rbx
  __int64 v7; // r9
  _DWORD *v8; // rcx
  int v9; // edi
  __int64 v10; // r15
  int v11; // ebp
  unsigned int v12; // ebp
  int v13; // ebp
  int v14; // r8d
  signed int v15; // edx
  __int16 v16; // r9
  __int64 v17; // r13
  __int64 v18; // rsi
  __int16 v19; // r8
  char v20; // cl
  __int64 v21; // r12
  int v22; // edx
  unsigned int v24; // edx
  _WORD *v25; // r8
  unsigned __int16 v26; // ax
  unsigned __int16 v27; // cx
  int v28; // edx
  int v29; // r14d
  int v30; // edi
  int v31; // esi
  __int16 v32; // cx
  __int16 v33; // cx
  bool v34; // zf
  int CVTScale; // eax
  int fixed; // eax
  __int64 v37; // rax
  __int16 v38; // [rsp+20h] [rbp-58h]
  __int16 v39; // [rsp+22h] [rbp-56h]
  char v40; // [rsp+24h] [rbp-54h]
  unsigned int v41; // [rsp+28h] [rbp-50h]
  __int64 v42; // [rsp+30h] [rbp-48h]
  __int64 v43; // [rsp+38h] [rbp-40h]

  v4 = qword_1C0323E30;
  v7 = a1;
  if ( (*(_QWORD *)(qword_1C0323E30 + 424) ^ qword_1C0323E30 ^ *(_QWORD *)qword_1C0323E30 ^ MEMORY[0xFFFFF78000000330]) == *(_QWORD *)(qword_1C0323E30 + 432)
    && (qword_1C0323E18 - *(_QWORD *)qword_1C0323E30) >> 2
    && (v8 = (_DWORD *)(qword_1C0323E18 - 4),
        qword_1C0323E18 = (__int64)v8,
        v9 = 2 * *v8,
        (*(_QWORD *)(qword_1C0323E30 + 424) ^ qword_1C0323E30 ^ *(_QWORD *)qword_1C0323E30 ^ MEMORY[0xFFFFF78000000330]) == *(_QWORD *)(qword_1C0323E30 + 432))
    && (v43 = v9, v9 <= (unsigned __int64)(((__int64)v8 - *(_QWORD *)qword_1C0323E30) >> 2)) )
  {
    v10 = (__int64)&v8[-v9];
    qword_1C0323E18 = v10;
    v11 = *(unsigned __int16 *)(qword_1C0323E30 + 24);
    if ( !*(_BYTE *)(qword_1C0323E30 + 340) )
    {
      CVTScale = itrp_GetCVTScale();
      fixed = FixMul(v11, CVTScale);
      v4 = qword_1C0323E30;
      v10 = qword_1C0323E18;
      v11 = fixed;
      v7 = a1;
    }
    v12 = v11 - a3;
    if ( v12 > 0xF )
    {
      return v7;
    }
    else
    {
      v13 = 16 * v12;
      v14 = 0;
      v15 = v9;
      while ( 1 )
      {
        v15 = (v15 >> 1) & 0xFFFFFFFE;
        if ( v15 <= 2 )
          break;
        if ( (int)(*(_DWORD *)(v10 + 4 * (v14 + (__int64)v15)) & 0xFFFFFFF0) < v13 )
          v14 += v15;
      }
      if ( v14 < v9 )
      {
        v16 = dword_1C0323E08;
        v17 = LocalGS;
        v18 = v14;
        v19 = HIWORD(dword_1C0323E08);
        v20 = a4;
        v40 = a4;
        v21 = 4 * v18 + 4;
        v42 = v18;
        v38 = HIWORD(dword_1C0323E08);
        v39 = dword_1C0323E08;
        do
        {
          v22 = *(_DWORD *)(v21 + v10 - 4);
          if ( (v22 & 0xFFFFFFF0) != v13 )
          {
            if ( (int)(v22 & 0xFFFFFFF0) > v13 )
              return a1;
            goto LABEL_34;
          }
          v24 = ((v22 & 0xF) - (((v22 & 0xFu) < 8) + 7)) << 6 >> v20;
          v41 = v24;
          if ( a2 == dword_1C0323E5C )
          {
            v25 = *(_WORD **)(v4 + 344);
            v26 = v25[4];
            v27 = v25[6];
            v28 = v26;
            if ( v26 <= v27 )
              v28 = v27;
            if ( v28 <= 1 )
            {
              v29 = 1;
            }
            else if ( v26 <= v27 )
            {
              v29 = v27;
            }
            else
            {
              v29 = v26;
            }
            v30 = *(_DWORD *)(v21 + v10);
            if ( qword_1C0323E28 == v17 )
            {
              if ( v30 >= (unsigned __int16)v25[8] || v30 < 0 )
              {
LABEL_62:
                dword_1C0323E80 = 4370;
                return qword_1C0323E88;
              }
              v31 = 0;
            }
            else
            {
              if ( v30 >= *(_DWORD *)(v4 + 440) || v30 < 0 )
                goto LABEL_62;
              v31 = 4;
            }
            if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND(&LocalGS, v17) )
              goto LABEL_62;
            v32 = *(_WORD *)(v17 + 80);
            if ( v32 >= 1 && v32 <= v29 && v30 >= *(__int16 *)(*(_QWORD *)(v17 + 64) + 2LL * v32 - 2) + v31 + 1 )
              goto LABEL_62;
            v24 = v41;
            v18 = v42;
            v19 = v38;
            v16 = v39;
          }
          else
          {
            v37 = *(unsigned __int16 *)(v4 + 360);
            v30 = *(_DWORD *)(v21 + v10);
            if ( v30 >= (int)v37
              || v30 < 0
              || (v4 ^ MEMORY[0xFFFFF78000000330] ^ v37 ^ *(_QWORD *)(v4 + 16)) != *(_QWORD *)(v4 + 368) )
            {
              dword_1C0323E80 = 4379;
              return qword_1C0323E88;
            }
          }
          if ( a2 != dword_1C0323E74 )
          {
            v33 = *(_WORD *)(v4 + 452);
            if ( (v33 & 1) != 0 && (*(_BYTE *)(v4 + 120) & 4) == 0 )
            {
              if ( (v33 & 4) != 0 )
              {
                if ( v16 != 0x4000 || v19 )
                  goto LABEL_33;
                if ( !*(_BYTE *)(v4 + 341) )
                {
                  if ( (*(_BYTE *)(*(__int16 *)(v21 + v10) + *(_QWORD *)(v17 + 72)) & 1) == 0 )
                    goto LABEL_33;
                  v34 = (*(_BYTE *)(v4 + 454) & 1) == 0;
LABEL_46:
                  if ( !v34 )
                    goto LABEL_33;
                }
              }
              else
              {
                if ( v19 != 0x4000 || v16 )
                  goto LABEL_33;
                if ( !*(_BYTE *)(v4 + 341) )
                {
                  if ( (*(_BYTE *)(*(__int16 *)(v21 + v10) + *(_QWORD *)(v17 + 72)) & 2) == 0 )
                    goto LABEL_33;
                  v34 = (*(_BYTE *)(v4 + 454) & 2) == 0;
                  goto LABEL_46;
                }
              }
            }
          }
          InvokeMovePoint(a2, v17, (unsigned int)v30, v24);
          v19 = HIWORD(dword_1C0323E08);
          v16 = dword_1C0323E08;
          v4 = qword_1C0323E30;
          v10 = qword_1C0323E18;
          v17 = LocalGS;
          v38 = HIWORD(dword_1C0323E08);
          v39 = dword_1C0323E08;
LABEL_33:
          v20 = v40;
LABEL_34:
          v18 += 2LL;
          v21 += 8LL;
          v42 = v18;
        }
        while ( v18 < v43 );
      }
      return a1;
    }
  }
  else
  {
    dword_1C0323E80 = 4368;
    return qword_1C0323E88;
  }
}
