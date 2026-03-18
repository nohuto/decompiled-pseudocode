/*
 * XREFs of itrp_DeltaEngine @ 0x1C00CD854
 * Callers:
 *     itrp_DELTAP1 @ 0x1C00CD830 (itrp_DELTAP1.c)
 *     itrp_DELTAC1 @ 0x1C00D0060 (itrp_DELTAC1.c)
 *     itrp_DELTAP2 @ 0x1C00D0570 (itrp_DELTAP2.c)
 *     itrp_DELTAC2 @ 0x1C0113CC0 (itrp_DELTAC2.c)
 *     itrp_DELTAP3 @ 0x1C0118B80 (itrp_DELTAP3.c)
 *     itrp_DELTAC3 @ 0x1C011CE70 (itrp_DELTAC3.c)
 * Callees:
 *     FixMul @ 0x1C00C947C (FixMul.c)
 *     CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND @ 0x1C00CF110 (CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND.c)
 *     InvokeMovePoint @ 0x1C00D0084 (InvokeMovePoint.c)
 *     itrp_GetCVTScale @ 0x1C0144104 (itrp_GetCVTScale.c)
 */

__int64 __fastcall itrp_DeltaEngine(__int64 a1, unsigned int a2, __int16 a3, char a4)
{
  __int64 v4; // rbx
  __int64 v7; // r9
  _DWORD *v8; // rcx
  __int64 v9; // rdx
  int v10; // edi
  __int64 v11; // r15
  int v12; // ebp
  unsigned int v13; // ebp
  int v14; // ebp
  int v15; // r9d
  signed int v16; // r8d
  __int16 v17; // r8
  __int64 v18; // r13
  __int64 v19; // rsi
  __int16 v20; // r9
  char v21; // cl
  __int64 v22; // r12
  int v23; // edx
  unsigned int v25; // edx
  _WORD *v26; // r8
  unsigned __int16 v27; // ax
  unsigned __int16 v28; // cx
  int v29; // edx
  int v30; // r14d
  int v31; // edi
  int v32; // esi
  __int16 v33; // ax
  __int16 v34; // cx
  bool v35; // zf
  __int64 v36; // rax
  int CVTScale; // eax
  int fixed; // eax
  __int16 v39; // [rsp+20h] [rbp-58h]
  __int16 v40; // [rsp+22h] [rbp-56h]
  char v41; // [rsp+24h] [rbp-54h]
  unsigned int v42; // [rsp+28h] [rbp-50h]
  __int64 v43; // [rsp+30h] [rbp-48h]
  __int64 v44; // [rsp+38h] [rbp-40h]

  v4 = qword_1C03294E0;
  v7 = a1;
  if ( (*(_QWORD *)(qword_1C03294E0 + 424) ^ qword_1C03294E0 ^ *(_QWORD *)qword_1C03294E0 ^ MEMORY[0xFFFFF78000000330]) == *(_QWORD *)(qword_1C03294E0 + 432)
    && (qword_1C03294C8 - *(_QWORD *)qword_1C03294E0) >> 2
    && (v8 = (_DWORD *)(qword_1C03294C8 - 4),
        qword_1C03294C8 = (__int64)v8,
        v9 = *(_QWORD *)qword_1C03294E0,
        v10 = 2 * *v8,
        (*(_QWORD *)(qword_1C03294E0 + 424) ^ qword_1C03294E0 ^ *(_QWORD *)qword_1C03294E0 ^ MEMORY[0xFFFFF78000000330]) == *(_QWORD *)(qword_1C03294E0 + 432))
    && (v44 = v10, v10 <= (unsigned __int64)(((__int64)v8 - v9) >> 2)) )
  {
    v11 = (__int64)&v8[-v10];
    qword_1C03294C8 = v11;
    v12 = *(unsigned __int16 *)(qword_1C03294E0 + 24);
    if ( !*(_BYTE *)(qword_1C03294E0 + 340) )
    {
      CVTScale = itrp_GetCVTScale(v8, v9, v10, v7);
      fixed = FixMul(v12, CVTScale);
      v4 = qword_1C03294E0;
      v11 = qword_1C03294C8;
      v12 = fixed;
      v7 = a1;
    }
    v13 = v12 - a3;
    if ( v13 > 0xF )
    {
      return v7;
    }
    else
    {
      v14 = 16 * v13;
      v15 = 0;
      v16 = v10;
      while ( 1 )
      {
        v16 = (v16 >> 1) & 0xFFFFFFFE;
        if ( v16 <= 2 )
          break;
        if ( (int)(*(_DWORD *)(v11 + 4LL * (v15 + v16)) & 0xFFFFFFF0) < v14 )
          v15 += v16;
      }
      if ( v15 < v10 )
      {
        v17 = HIWORD(dword_1C03294B8);
        v18 = LocalGS;
        v19 = v15;
        v20 = dword_1C03294B8;
        v21 = a4;
        v41 = a4;
        v22 = 4 * v19 + 4;
        v43 = v19;
        v39 = HIWORD(dword_1C03294B8);
        v40 = dword_1C03294B8;
        do
        {
          v23 = *(_DWORD *)(v22 + v11 - 4);
          if ( (v23 & 0xFFFFFFF0) != v14 )
          {
            if ( (int)(v23 & 0xFFFFFFF0) > v14 )
              return a1;
            goto LABEL_34;
          }
          v25 = ((v23 & 0xF) - (((v23 & 0xFu) < 8) + 7)) << 6 >> v21;
          v42 = v25;
          if ( a2 == dword_1C032950C )
          {
            v26 = *(_WORD **)(v4 + 344);
            v27 = v26[4];
            v28 = v26[6];
            v29 = v27;
            if ( v27 <= v28 )
              v29 = v28;
            if ( v29 <= 1 )
            {
              v30 = 1;
            }
            else if ( v27 <= v28 )
            {
              v30 = v28;
            }
            else
            {
              v30 = v27;
            }
            v31 = *(_DWORD *)(v22 + v11);
            if ( qword_1C03294D8 == v18 )
            {
              if ( v31 >= (unsigned __int16)v26[8] || v31 < 0 )
              {
LABEL_63:
                dword_1C0329530 = 4370;
                return qword_1C0329538;
              }
              v32 = 0;
            }
            else
            {
              if ( v31 >= *(_DWORD *)(v4 + 440) || v31 < 0 )
                goto LABEL_63;
              v32 = 4;
            }
            if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND(&LocalGS, v18) )
              goto LABEL_63;
            v33 = *(_WORD *)(v18 + 80);
            if ( v33 >= 1 && v33 <= v30 && v31 >= *(__int16 *)(*(_QWORD *)(v18 + 64) + 2LL * (v33 - 1)) + v32 + 1 )
              goto LABEL_63;
            v25 = v42;
            v19 = v43;
            v17 = v39;
            v20 = v40;
          }
          else
          {
            v36 = *(unsigned __int16 *)(v4 + 360);
            v31 = *(_DWORD *)(v22 + v11);
            if ( v31 >= (int)v36
              || v31 < 0
              || (v4 ^ MEMORY[0xFFFFF78000000330] ^ v36 ^ *(_QWORD *)(v4 + 16)) != *(_QWORD *)(v4 + 368) )
            {
              dword_1C0329530 = 4379;
              return qword_1C0329538;
            }
          }
          if ( a2 != dword_1C0329524 )
          {
            v34 = *(_WORD *)(v4 + 452);
            if ( (v34 & 1) != 0 && (*(_BYTE *)(v4 + 120) & 4) == 0 )
            {
              if ( (v34 & 4) != 0 )
              {
                if ( v20 != 0x4000 || v17 )
                  goto LABEL_33;
                if ( !*(_BYTE *)(v4 + 341) )
                {
                  if ( (*(_BYTE *)(*(__int16 *)(v22 + v11) + *(_QWORD *)(v18 + 72)) & 1) == 0 )
                    goto LABEL_33;
                  v35 = (*(_BYTE *)(v4 + 454) & 1) == 0;
LABEL_47:
                  if ( !v35 )
                    goto LABEL_33;
                }
              }
              else
              {
                if ( v17 != 0x4000 || v20 )
                  goto LABEL_33;
                if ( !*(_BYTE *)(v4 + 341) )
                {
                  if ( (*(_BYTE *)(*(__int16 *)(v22 + v11) + *(_QWORD *)(v18 + 72)) & 2) == 0 )
                    goto LABEL_33;
                  v35 = (*(_BYTE *)(v4 + 454) & 2) == 0;
                  goto LABEL_47;
                }
              }
            }
          }
          InvokeMovePoint(a2, v18, (unsigned int)v31, v25);
          v17 = HIWORD(dword_1C03294B8);
          v20 = dword_1C03294B8;
          v4 = qword_1C03294E0;
          v11 = qword_1C03294C8;
          v18 = LocalGS;
          v39 = HIWORD(dword_1C03294B8);
          v40 = dword_1C03294B8;
LABEL_33:
          v21 = v41;
LABEL_34:
          v19 += 2LL;
          v22 += 8LL;
          v43 = v19;
        }
        while ( v19 < v44 );
      }
      return a1;
    }
  }
  else
  {
    dword_1C0329530 = 4368;
    return qword_1C0329538;
  }
}
