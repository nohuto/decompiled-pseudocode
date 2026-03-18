/*
 * XREFs of itrp_ISECT @ 0x1C0152F30
 * Callers:
 *     <none>
 * Callees:
 *     Mul26Dot6 @ 0x1C00C7BD4 (Mul26Dot6.c)
 *     CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND @ 0x1C00CF110 (CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND.c)
 *     AddProportion @ 0x1C00CFA40 (AddProportion.c)
 *     CompDiv @ 0x1C00F85F4 (CompDiv.c)
 */

__int64 __fastcall itrp_ISECT(__int64 a1)
{
  __int64 v1; // rsi
  _WORD *v2; // rdx
  __int64 v3; // rbp
  int v4; // ebx
  unsigned __int16 v5; // di
  __int64 v6; // r15
  int v7; // eax
  int v8; // r14d
  int v9; // r13d
  __int16 v10; // r12
  int v11; // eax
  int v12; // r14d
  int v13; // r13d
  __int64 v14; // r14
  __int64 v15; // rax
  __int64 v16; // r12
  int v17; // r13d
  int v18; // eax
  int v19; // esi
  int v20; // ebp
  __int16 v21; // r15
  int v22; // eax
  int v23; // ebp
  int v24; // esi
  int v25; // r13d
  int v26; // r15d
  __int64 v27; // rax
  int v28; // r12d
  int v29; // ebp
  __int64 v30; // rsi
  int v31; // eax
  __int64 v32; // rdi
  __int64 v33; // rcx
  __int16 v34; // ax
  __int64 v35; // rbx
  int v36; // r9d
  __int64 v37; // rsi
  __int64 v38; // r14
  int v39; // r8d
  int v40; // edi
  __int64 v41; // r10
  int v42; // r11d
  int v43; // edx
  int v44; // ecx
  __int64 v45; // r10
  int v46; // r11d
  int v48; // esi
  int v49; // eax
  __int64 v50; // r10
  int v51; // [rsp+30h] [rbp-88h]
  int v52; // [rsp+34h] [rbp-84h]
  int v53; // [rsp+38h] [rbp-80h]
  int v54; // [rsp+3Ch] [rbp-7Ch]
  int v55; // [rsp+40h] [rbp-78h]
  __int64 v56; // [rsp+48h] [rbp-70h]
  int v57; // [rsp+48h] [rbp-70h]
  __int64 v58; // [rsp+50h] [rbp-68h]
  int *v59; // [rsp+50h] [rbp-68h]
  int *v60; // [rsp+50h] [rbp-68h]
  __int64 v61; // [rsp+58h] [rbp-60h]
  _WORD *v62; // [rsp+60h] [rbp-58h]
  int v63; // [rsp+68h] [rbp-50h]
  char v65; // [rsp+C8h] [rbp+10h]
  int v66; // [rsp+D0h] [rbp+18h]
  int v67; // [rsp+D8h] [rbp+20h]

  v55 = 0;
  v54 = 0;
  v1 = LocalGS;
  v56 = qword_1C03294E0;
  if ( (qword_1C03294E0 ^ *(_QWORD *)qword_1C03294E0 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C03294E0 + 424)) != *(_QWORD *)(qword_1C03294E0 + 432)
    || (unsigned __int64)((qword_1C03294C8 - *(_QWORD *)qword_1C03294E0) >> 2) < 5 )
  {
    dword_1C0329530 = 4368;
    return qword_1C0329538;
  }
  v2 = *(_WORD **)(qword_1C03294E0 + 344);
  v3 = *(int *)(qword_1C03294C8 - 4);
  v63 = 4;
  v58 = qword_1C03294C8 - 8;
  LOWORD(v4) = v2[4];
  v5 = v2[6];
  v6 = *(int *)(qword_1C03294C8 - 8);
  v7 = (unsigned __int16)v4;
  v62 = v2;
  if ( (unsigned __int16)v4 <= v5 )
    v7 = v5;
  if ( v7 <= 1 )
  {
    v8 = 1;
  }
  else if ( (unsigned __int16)v4 <= v5 )
  {
    v8 = v5;
  }
  else
  {
    v8 = (unsigned __int16)v4;
  }
  v61 = qword_1C03294D8;
  if ( qword_1C03294D8 == LocalGS )
  {
    if ( (int)v3 >= (unsigned __int16)v2[8] || (int)v3 < 0 )
      goto LABEL_102;
    v9 = 0;
  }
  else
  {
    if ( (int)v3 >= *(_DWORD *)(qword_1C03294E0 + 440) || (int)v3 < 0 )
      goto LABEL_102;
    v9 = 4;
  }
  if ( (unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, LocalGS) )
  {
    v10 = *(_WORD *)(v1 + 80);
    if ( v10 < 1 || v10 > v8 || (int)v3 < v9 + *(__int16 *)(*(_QWORD *)(v1 + 64) + 2LL * (v10 - 1)) + 1 )
    {
      v11 = (unsigned __int16)v4;
      if ( (unsigned __int16)v4 <= v5 )
        v11 = v5;
      if ( v11 <= 1 )
        v12 = 1;
      else
        v12 = (unsigned __int16)v4 <= v5 ? v5 : (unsigned __int16)v4;
      if ( v61 == v1 )
      {
        if ( (int)v6 >= (unsigned __int16)v62[8] || (int)v6 < 0 )
          goto LABEL_102;
        v13 = 0;
      }
      else
      {
        if ( (int)v6 >= *(_DWORD *)(v56 + 440) || (int)v6 < 0 )
          goto LABEL_102;
        v13 = 4;
      }
      if ( (unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, v1)
        && (v10 < 1 || v10 > v12 || (int)v6 < v13 + *(__int16 *)(*(_QWORD *)(v1 + 64) + 2LL * (v10 - 1)) + 1) )
      {
        v14 = v56;
        v66 = *(_DWORD *)(*(_QWORD *)v1 + 4 * v6);
        v51 = *(_DWORD *)(*(_QWORD *)v1 + 4 * v3) - v66;
        v15 = *(_QWORD *)(v1 + 8);
        v67 = *(_DWORD *)(v15 + 4 * v6);
        v52 = *(_DWORD *)(v15 + 4 * v3) - v67;
        v65 = *(_BYTE *)(v56 + 333);
        if ( v65 == 2 && (*(_BYTE *)(v56 + 452) & 2) != 0 )
        {
          v54 = v3;
          v55 = v6;
        }
        v16 = qword_1C03294A8;
        v17 = *(_DWORD *)(v58 - 4);
        v59 = (int *)(v58 - 8);
        v57 = v17;
        v53 = *v59;
        v18 = (unsigned __int16)v4;
        if ( (unsigned __int16)v4 <= v5 )
          v18 = v5;
        if ( v18 <= 1 )
          v19 = 1;
        else
          v19 = (unsigned __int16)v4 <= v5 ? v5 : (unsigned __int16)v4;
        if ( v61 == qword_1C03294A8 )
        {
          if ( v17 >= (unsigned __int16)v62[8] || v17 < 0 )
            goto LABEL_102;
          v20 = 0;
        }
        else
        {
          if ( v17 >= *(_DWORD *)(v14 + 440) || v17 < 0 )
            goto LABEL_102;
          v20 = 4;
        }
        if ( (unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, qword_1C03294A8) )
        {
          v21 = *(_WORD *)(v16 + 80);
          if ( v21 < 1 || v21 > v19 || v17 < v20 + *(__int16 *)(*(_QWORD *)(v16 + 64) + 2LL * (v21 - 1)) + 1 )
          {
            v22 = (unsigned __int16)v4;
            if ( (unsigned __int16)v4 <= v5 )
              v22 = v5;
            if ( v22 <= 1 )
            {
              v23 = 1;
            }
            else if ( (unsigned __int16)v4 <= v5 )
            {
              v23 = v5;
            }
            else
            {
              v23 = (unsigned __int16)v4;
            }
            if ( v61 == v16 )
            {
              if ( v53 >= (unsigned __int16)v62[8] || v53 < 0 )
                goto LABEL_102;
              v24 = 0;
            }
            else
            {
              if ( v53 >= *(_DWORD *)(v14 + 440) || v53 < 0 )
                goto LABEL_102;
              v24 = 4;
            }
            if ( (unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, v16)
              && (v21 < 1 || v21 > v23 || v53 < v24 + *(__int16 *)(*(_QWORD *)(v16 + 64) + 2LL * (v21 - 1)) + 1) )
            {
              v25 = *(_DWORD *)(*(_QWORD *)v16 + 4LL * v53);
              v26 = *(_DWORD *)(*(_QWORD *)v16 + 4LL * v57) - v25;
              v27 = *(_QWORD *)(v16 + 8);
              v28 = *(_DWORD *)(v27 + 4LL * v53);
              v29 = *(_DWORD *)(v27 + 4LL * v57) - v28;
              if ( v65 == 2 && (*(_BYTE *)(v14 + 452) & 2) != 0 )
              {
                v48 = Mul26Dot6(v29, v51);
                if ( v48 < 0 )
                  v48 = -v48;
                v49 = Mul26Dot6(v26, v52);
                if ( v49 < 0 )
                  v49 = -v49;
                if ( v48 > v49 )
                {
                  v54 = v57;
                  v55 = v53;
                }
              }
              v60 = v59 - 1;
              v30 = *v60;
              v31 = (unsigned __int16)v4;
              if ( (unsigned __int16)v4 <= v5 )
                v31 = v5;
              if ( v31 <= 1 )
              {
                v4 = 1;
              }
              else if ( (unsigned __int16)v4 <= v5 )
              {
                v4 = v5;
              }
              else
              {
                v4 = (unsigned __int16)v4;
              }
              v32 = qword_1C03294B0;
              if ( v61 == qword_1C03294B0 )
              {
                if ( (int)v30 < (unsigned __int16)v62[8] && (int)v30 >= 0 )
                {
                  v63 = 0;
                  goto LABEL_68;
                }
              }
              else if ( (int)v30 < *(_DWORD *)(v14 + 440) && (int)v30 >= 0 )
              {
LABEL_68:
                if ( (unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, qword_1C03294B0) )
                {
                  v34 = *(_WORD *)(v32 + 80);
                  if ( v34 < 1
                    || v34 > v4
                    || (v33 = (unsigned int)*(__int16 *)(*(_QWORD *)(v32 + 64) + 2LL * (v34 - 1)),
                        (int)v30 < (int)v33 + v63 + 1) )
                  {
                    qword_1C03294C8 = (__int64)v60;
                    if ( v32 != v61 && *(_BYTE *)(v14 + 333) == 2 && (*(_BYTE *)(v14 + 452) & 2) != 0 )
                    {
                      AddProportion(v33, v32, v55, v30, v54);
                      v32 = qword_1C03294B0;
                    }
                    v35 = v30;
                    v36 = v52;
                    *(_BYTE *)(*(_QWORD *)(v32 + 72) + v30) |= 3u;
                    v37 = *(_QWORD *)qword_1C03294B0;
                    v38 = *(_QWORD *)(qword_1C03294B0 + 8);
                    if ( v52 )
                    {
                      v39 = v51;
                      if ( v51 )
                      {
                        if ( (int)abs32(v51) >= (int)abs32(v52) )
                        {
                          v40 = v28 - v67 - CompDiv(v51, v52 * (__int64)(v25 - v66));
                          v42 = CompDiv(v51, v50 * v26) - v29;
                        }
                        else
                        {
                          v40 = CompDiv(v52, v51 * (__int64)(v28 - v67)) + v66 - v25;
                          v42 = v26 - CompDiv(v52, v41 * v29);
                        }
                        v43 = v67;
                        v36 = v52;
                        goto LABEL_81;
                      }
                      v44 = v66;
                      if ( v29 )
                      {
                        v43 = v67;
                        v40 = v25 - v66;
                        v42 = -v26;
LABEL_82:
                        if ( v42 )
                        {
                          *(_DWORD *)(v37 + 4 * v35) = v25 + CompDiv(v42, v40 * (__int64)v26);
                          *(_DWORD *)(v38 + 4 * v35) = v28 + CompDiv(v46, v45 * v29);
                        }
                        else
                        {
                          *(_DWORD *)(v37 + 4 * v35) = (v44 + (v26 >> 1) + v25 + (v39 >> 1)) >> 1;
                          *(_DWORD *)(v38 + 4 * v35) = (v43 + v28 + (v29 >> 1) + (v36 >> 1)) >> 1;
                        }
                        return a1;
                      }
                      *(_DWORD *)(v37 + 4 * v35) = v66;
                      *(_DWORD *)(v38 + 4 * v35) = v28;
                    }
                    else
                    {
                      if ( v26 )
                      {
                        v43 = v67;
                        v40 = v28 - v67;
                        v42 = -v29;
LABEL_81:
                        v39 = v51;
                        v44 = v66;
                        goto LABEL_82;
                      }
                      *(_DWORD *)(v37 + 4 * v35) = v25;
                      *(_DWORD *)(v38 + 4 * v35) = v67;
                    }
                    return a1;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_102:
  dword_1C0329530 = 4370;
  return qword_1C0329538;
}
