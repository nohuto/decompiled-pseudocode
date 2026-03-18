/*
 * XREFs of itrp_ISECT @ 0x1C00B8460
 * Callers:
 *     <none>
 * Callees:
 *     CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND @ 0x1C00B7030 (CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND.c)
 *     AddProportion @ 0x1C00B7AAC (AddProportion.c)
 *     Mul26Dot6 @ 0x1C00B8FB4 (Mul26Dot6.c)
 *     CompDiv @ 0x1C00DA168 (CompDiv.c)
 */

__int64 __fastcall itrp_ISECT(__int64 a1)
{
  __int64 v1; // rsi
  _WORD *v2; // rdx
  __int64 v3; // r14
  int v4; // ebx
  unsigned __int16 v5; // di
  __int64 v6; // r15
  int v7; // eax
  int v8; // r12d
  int v9; // r13d
  __int16 v10; // bp
  int v11; // eax
  int v12; // r12d
  int v13; // r13d
  __int64 v14; // rax
  int v15; // ebp
  int v16; // r12d
  __int64 v17; // r15
  int v18; // ecx
  int v19; // eax
  int v20; // r14d
  int v21; // esi
  __int16 v22; // r15
  int v23; // eax
  int v24; // r14d
  int v25; // r13d
  int v26; // esi
  _QWORD *v27; // r8
  __int64 v28; // rdx
  int v29; // r13d
  __int64 v30; // rax
  int v31; // r15d
  __int64 v32; // rsi
  int v33; // eax
  __int64 v34; // rdi
  __int64 v35; // rcx
  __int64 v36; // rbx
  __int64 v37; // rsi
  __int64 v38; // r14
  int v39; // ecx
  int v41; // esi
  __int64 v42; // r8
  int v43; // eax
  int v44; // ecx
  int v45; // eax
  int v46; // edi
  __int64 v47; // r10
  unsigned int v48; // r11d
  int v49; // r8d
  int v50; // ecx
  int v51; // eax
  int v52; // edx
  unsigned int v53; // r11d
  __int64 v54; // r10
  __int64 v55; // r10
  int v56; // [rsp+30h] [rbp-88h]
  int v57; // [rsp+34h] [rbp-84h]
  int v58; // [rsp+38h] [rbp-80h]
  int v59; // [rsp+3Ch] [rbp-7Ch]
  int v60; // [rsp+40h] [rbp-78h]
  int v61; // [rsp+44h] [rbp-74h]
  __int64 v62; // [rsp+48h] [rbp-70h]
  __int64 v63; // [rsp+50h] [rbp-68h]
  int *v64; // [rsp+50h] [rbp-68h]
  int *v65; // [rsp+50h] [rbp-68h]
  __int64 v66; // [rsp+58h] [rbp-60h]
  _WORD *v67; // [rsp+60h] [rbp-58h]
  int v68; // [rsp+68h] [rbp-50h]
  char v70; // [rsp+C8h] [rbp+10h]
  _QWORD *v71; // [rsp+D0h] [rbp+18h]
  int v72; // [rsp+D0h] [rbp+18h]
  int v73; // [rsp+D8h] [rbp+20h]

  v59 = 0;
  v60 = 0;
  v1 = LocalGS;
  v66 = qword_1C0323E30;
  if ( (qword_1C0323E30 ^ *(_QWORD *)qword_1C0323E30 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C0323E30 + 424)) != *(_QWORD *)(qword_1C0323E30 + 432)
    || (unsigned __int64)((qword_1C0323E18 - *(_QWORD *)qword_1C0323E30) >> 2) < 5 )
  {
    dword_1C0323E80 = 4368;
    return qword_1C0323E88;
  }
  v2 = *(_WORD **)(qword_1C0323E30 + 344);
  v3 = *(int *)(qword_1C0323E18 - 4);
  v68 = 4;
  v63 = qword_1C0323E18 - 8;
  LOWORD(v4) = v2[4];
  v5 = v2[6];
  v6 = *(int *)(qword_1C0323E18 - 8);
  v7 = (unsigned __int16)v4;
  v67 = v2;
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
  v62 = qword_1C0323E28;
  if ( qword_1C0323E28 == LocalGS )
  {
    if ( (int)v3 >= (unsigned __int16)v2[8] || (int)v3 < 0 )
      goto LABEL_112;
    v9 = 0;
  }
  else
  {
    if ( (int)v3 >= *(_DWORD *)(qword_1C0323E30 + 440) || (int)v3 < 0 )
      goto LABEL_112;
    v9 = 4;
  }
  if ( (unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, LocalGS) )
  {
    v10 = *(_WORD *)(v1 + 80);
    if ( v10 < 1 || v10 > v8 || (int)v3 < v9 + *(__int16 *)(*(_QWORD *)(v1 + 64) + 2LL * v10 - 2) + 1 )
    {
      v11 = (unsigned __int16)v4;
      if ( (unsigned __int16)v4 <= v5 )
        v11 = v5;
      if ( v11 <= 1 )
        v12 = 1;
      else
        v12 = (unsigned __int16)v4 <= v5 ? v5 : (unsigned __int16)v4;
      if ( v62 == v1 )
      {
        if ( (int)v6 >= (unsigned __int16)v67[8] || (int)v6 < 0 )
          goto LABEL_112;
        v13 = 0;
      }
      else
      {
        if ( (int)v6 >= *(_DWORD *)(v66 + 440) || (int)v6 < 0 )
          goto LABEL_112;
        v13 = 4;
      }
      if ( (unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, v1)
        && (v10 < 1 || v10 > v12 || (int)v6 < v13 + *(__int16 *)(*(_QWORD *)(v1 + 64) + 2LL * v10 - 2) + 1) )
      {
        v14 = *(_QWORD *)(v1 + 8);
        v15 = *(_DWORD *)(*(_QWORD *)v1 + 4 * v3) - *(_DWORD *)(*(_QWORD *)v1 + 4 * v6);
        v57 = *(_DWORD *)(*(_QWORD *)v1 + 4 * v6);
        v16 = *(_DWORD *)(v14 + 4 * v3) - *(_DWORD *)(v14 + 4 * v6);
        v56 = *(_DWORD *)(v14 + 4 * v6);
        v70 = *(_BYTE *)(v66 + 333);
        if ( v70 == 2 && (*(_BYTE *)(v66 + 452) & 2) != 0 )
        {
          v60 = v3;
          v59 = v6;
        }
        v17 = qword_1C0323DF8;
        v71 = (_QWORD *)qword_1C0323DF8;
        v18 = *(_DWORD *)(v63 - 4);
        v64 = (int *)(v63 - 8);
        v61 = v18;
        v58 = *v64;
        v19 = (unsigned __int16)v4;
        if ( (unsigned __int16)v4 <= v5 )
          v19 = v5;
        if ( v19 <= 1 )
          v20 = 1;
        else
          v20 = (unsigned __int16)v4 <= v5 ? v5 : (unsigned __int16)v4;
        if ( v62 == qword_1C0323DF8 )
        {
          if ( v18 >= (unsigned __int16)v67[8] || v18 < 0 )
            goto LABEL_112;
          v21 = 0;
        }
        else
        {
          if ( v18 >= *(_DWORD *)(v66 + 440) || v18 < 0 )
            goto LABEL_112;
          v21 = 4;
        }
        if ( (unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, qword_1C0323DF8) )
        {
          v22 = *(_WORD *)(v17 + 80);
          if ( v22 < 1 || v22 > v20 || v61 < v21 + *(__int16 *)(v71[8] + 2LL * v22 - 2) + 1 )
          {
            v23 = (unsigned __int16)v4;
            if ( (unsigned __int16)v4 <= v5 )
              v23 = v5;
            if ( v23 <= 1 )
            {
              v24 = 1;
            }
            else if ( (unsigned __int16)v4 <= v5 )
            {
              v24 = v5;
            }
            else
            {
              v24 = (unsigned __int16)v4;
            }
            if ( (_QWORD *)v62 == v71 )
            {
              v25 = v58;
              if ( v58 >= (unsigned __int16)v67[8] || v58 < 0 )
                goto LABEL_112;
              v26 = 0;
            }
            else
            {
              if ( v58 >= *(_DWORD *)(v66 + 440) )
                goto LABEL_112;
              v25 = v58;
              if ( v58 < 0 )
                goto LABEL_112;
              v26 = 4;
            }
            if ( (unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, (__int64)v71) )
            {
              v27 = v71;
              if ( v22 < 1 || v22 > v24 || v25 < v26 + *(__int16 *)(v71[8] + 2LL * v22 - 2) + 1 )
              {
                v28 = v25;
                v29 = *(_DWORD *)(*v71 + 4LL * v61) - *(_DWORD *)(*v71 + 4LL * v25);
                v30 = v71[1];
                v72 = *(_DWORD *)(*v71 + 4 * v28);
                LODWORD(v28) = *(_DWORD *)(v30 + 4 * v28);
                v31 = *(_DWORD *)(v30 + 4LL * v61) - v28;
                v73 = v28;
                if ( v70 == 2 && (*(_BYTE *)(v66 + 452) & 2) != 0 )
                {
                  v41 = Mul26Dot6((unsigned int)v31, (unsigned int)v15, v27);
                  if ( v41 < 0 )
                    v41 = -v41;
                  v43 = Mul26Dot6((unsigned int)v29, (unsigned int)v16, v42);
                  if ( v43 < 0 )
                    v43 = -v43;
                  if ( v41 > v43 )
                  {
                    v60 = v61;
                    v59 = v58;
                  }
                }
                v65 = v64 - 1;
                v32 = *v65;
                v33 = (unsigned __int16)v4;
                if ( (unsigned __int16)v4 <= v5 )
                  v33 = v5;
                if ( v33 <= 1 )
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
                v34 = qword_1C0323E00;
                if ( v62 == qword_1C0323E00 )
                {
                  if ( (int)v32 < (unsigned __int16)v67[8] && (int)v32 >= 0 )
                  {
                    v68 = 0;
                    goto LABEL_68;
                  }
                }
                else if ( (int)v32 < *(_DWORD *)(v66 + 440) && (int)v32 >= 0 )
                {
LABEL_68:
                  if ( (unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, qword_1C0323E00) )
                  {
                    v35 = *(unsigned __int16 *)(v34 + 80);
                    if ( (__int16)v35 < 1
                      || (__int16)v35 > v4
                      || (v35 = (unsigned int)*(__int16 *)(*(_QWORD *)(v34 + 64) + 2LL * (__int16)v35 - 2),
                          (int)v32 < (int)v35 + v68 + 1) )
                    {
                      qword_1C0323E18 = (__int64)v65;
                      if ( v34 != v62 && *(_BYTE *)(v66 + 333) == 2 && (*(_BYTE *)(v66 + 452) & 2) != 0 )
                      {
                        AddProportion(v35, v34, v59, v32, v60);
                        v34 = qword_1C0323E00;
                      }
                      v36 = v32;
                      *(_BYTE *)(*(_QWORD *)(v34 + 72) + v32) |= 3u;
                      v37 = *(_QWORD *)qword_1C0323E00;
                      v38 = *(_QWORD *)(qword_1C0323E00 + 8);
                      if ( v16 )
                      {
                        if ( !v15 )
                        {
                          if ( !v31 )
                          {
                            *(_DWORD *)(v37 + 4 * v36) = v57;
                            v39 = v73;
                            goto LABEL_79;
                          }
                          v51 = v72;
                          v52 = v57;
                          v50 = v73;
                          v46 = v72 - v57;
                          v49 = v56;
                          v48 = -v29;
LABEL_96:
                          if ( v48 )
                          {
                            *(_DWORD *)(v37 + 4 * v36) = v72 + CompDiv(v48, v46 * (__int64)v29);
                            *(_DWORD *)(v38 + 4 * v36) = v73 + CompDiv(v53, v54 * v31);
                          }
                          else
                          {
                            *(_DWORD *)(v37 + 4 * v36) = (v52 + (v29 >> 1) + v51 + (v15 >> 1)) >> 1;
                            *(_DWORD *)(v38 + 4 * v36) = (v49 + v50 + (v31 >> 1) + (v16 >> 1)) >> 1;
                          }
                          return a1;
                        }
                        v44 = v15;
                        if ( v15 < 0 )
                          v44 = -v15;
                        v45 = v16;
                        if ( v16 < 0 )
                          v45 = -v16;
                        if ( v44 >= v45 )
                        {
                          v46 = v73 - v56 - CompDiv((unsigned int)v15, v16 * (__int64)(v72 - v57));
                          v48 = CompDiv((unsigned int)v15, v55 * v29) - v31;
                        }
                        else
                        {
                          v46 = CompDiv((unsigned int)v16, v15 * (__int64)(v73 - v56)) + v57 - v72;
                          v48 = v29 - CompDiv((unsigned int)v16, v47 * v31);
                        }
                        v49 = v56;
                        v50 = v73;
                      }
                      else
                      {
                        if ( !v29 )
                        {
                          v39 = v56;
                          *(_DWORD *)(v37 + 4 * v36) = v72;
LABEL_79:
                          *(_DWORD *)(v38 + 4 * v36) = v39;
                          return a1;
                        }
                        v50 = v73;
                        v49 = v56;
                        v46 = v73 - v56;
                        v48 = -v31;
                      }
                      v51 = v72;
                      v52 = v57;
                      goto LABEL_96;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_112:
  dword_1C0323E80 = 4370;
  return qword_1C0323E88;
}
