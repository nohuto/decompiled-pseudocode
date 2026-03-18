/*
 * XREFs of itrp_MIRP @ 0x1C00CC800
 * Callers:
 *     <none>
 * Callees:
 *     InvokeRoundValue @ 0x1C00CD55C (InvokeRoundValue.c)
 *     InvokeProject @ 0x1C00CE60C (InvokeProject.c)
 *     AddDistance @ 0x1C00CFBF4 (AddDistance.c)
 *     DoubleCheckLinkColor @ 0x1C00CFE6C (DoubleCheckLinkColor.c)
 *     InvokeMovePoint @ 0x1C00D0084 (InvokeMovePoint.c)
 *     itrp_RoundOff @ 0x1C00D1B90 (itrp_RoundOff.c)
 *     InvokeGetCVTEntry @ 0x1C0111BF0 (InvokeGetCVTEntry.c)
 *     itrp_RoundOffSP @ 0x1C011D92C (itrp_RoundOffSP.c)
 *     itrp_CheckSingleWidth @ 0x1C02E048C (itrp_CheckSingleWidth.c)
 */

__int64 __fastcall itrp_MIRP(__int64 a1, char a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  _QWORD *v4; // rdi
  _QWORD *v5; // r14
  _WORD *v6; // r10
  __int64 v7; // rbp
  unsigned __int16 v8; // r8
  unsigned int v9; // r9d
  int v10; // eax
  int v11; // edx
  int v12; // r13d
  int v13; // eax
  unsigned int v14; // r12d
  unsigned __int16 v15; // ax
  int v16; // ecx
  int v17; // edx
  __int16 v18; // ax
  __int16 v19; // ax
  __int64 v20; // rsi
  int v21; // eax
  int v22; // r13d
  int v23; // r12d
  int v24; // eax
  unsigned __int16 v25; // ax
  unsigned __int16 v26; // cx
  int v27; // edx
  __int16 v28; // ax
  __int16 v29; // ax
  __int16 v30; // r9
  char v31; // r15
  signed int v32; // r8d
  int v33; // r10d
  int v34; // ecx
  signed int v35; // eax
  __int64 result; // rax
  int v37; // r10d
  int v38; // ecx
  unsigned int v39; // r8d
  int v40; // eax
  int v41; // eax
  int v42; // ecx
  __int16 v43; // ax
  int v44; // edx
  int v45; // ecx
  unsigned int v46; // eax
  unsigned int v47; // r15d
  __int64 v48; // r13
  __int64 v49; // rax
  int v50; // r12d
  int v51; // eax
  __int64 v52; // rdx
  signed int v53; // ecx
  int v54; // eax
  int v55; // esi
  int v56; // eax
  int v57; // eax
  __int64 v58; // rax
  int v59; // eax
  __int16 v60; // r8
  int v61; // ecx
  int v62; // eax
  int v63; // ecx
  int v64; // eax
  __int16 v65; // dx
  int v66; // ecx
  int v67; // eax
  int v68; // ecx
  int v69; // eax
  __int64 v70; // r9
  int v71; // ecx
  int v72; // eax
  unsigned int v73; // [rsp+30h] [rbp-58h]
  int v76; // [rsp+A0h] [rbp+18h]
  __int64 v77; // [rsp+A0h] [rbp+18h]
  int v78; // [rsp+A8h] [rbp+20h]

  v2 = qword_1C03294E0;
  if ( (qword_1C03294E0 ^ *(_QWORD *)qword_1C03294E0 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C03294E0 + 424)) != *(_QWORD *)(qword_1C03294E0 + 432)
    || (unsigned __int64)((qword_1C03294C8 - *(_QWORD *)qword_1C03294E0) >> 2) < 2 )
  {
    result = qword_1C0329538;
    dword_1C0329530 = 4368;
    return result;
  }
  v4 = (_QWORD *)qword_1C03294A8;
  qword_1C03294C8 -= 4LL;
  v3 = qword_1C03294C8;
  v5 = (_QWORD *)LocalGS;
  v73 = *(_DWORD *)qword_1C03294C8;
  if ( *(_DWORD *)qword_1C03294C8 >= (int)*(unsigned __int16 *)(qword_1C03294E0 + 360)
    || *(int *)qword_1C03294C8 < 0
    || (qword_1C03294E0 ^ *(_QWORD *)(qword_1C03294E0 + 16) ^ MEMORY[0xFFFFF78000000330] ^ (unsigned __int64)*(unsigned __int16 *)(qword_1C03294E0 + 360)) != *(_QWORD *)(qword_1C03294E0 + 368) )
  {
    result = qword_1C0329538;
    dword_1C0329530 = 4379;
    return result;
  }
  qword_1C03294C8 -= 4LL;
  v6 = *(_WORD **)(qword_1C03294E0 + 344);
  v7 = *(int *)(v3 - 4);
  v8 = v6[4];
  LOWORD(v9) = v6[6];
  if ( v8 <= (unsigned __int16)v9 )
    v10 = (unsigned __int16)v9;
  else
    v10 = v8;
  if ( v10 <= 1 )
  {
    v76 = 1;
  }
  else if ( v8 <= (unsigned __int16)v9 )
  {
    v76 = (unsigned __int16)v9;
  }
  else
  {
    v76 = v8;
  }
  v11 = 0;
  v78 = 0;
  if ( qword_1C03294D8 == qword_1C03294A8 )
  {
    if ( (int)v7 < (unsigned __int16)v6[8] && (int)v7 >= 0 )
    {
      v12 = 0;
      goto LABEL_15;
    }
LABEL_206:
    result = qword_1C0329538;
    dword_1C0329530 = 4370;
    return result;
  }
  if ( (int)v7 >= *(_DWORD *)(qword_1C03294E0 + 440) || (int)v7 < 0 )
    goto LABEL_206;
  v12 = 4;
LABEL_15:
  if ( qword_1C03294A8 == qword_1C03294D8 + 112 )
  {
    if ( v8 <= (unsigned __int16)v9 )
      v13 = (unsigned __int16)v9;
    else
      v13 = v8;
    if ( v13 <= 1 )
    {
      v14 = 1;
    }
    else if ( v8 <= (unsigned __int16)v9 )
    {
      v14 = (unsigned __int16)v9;
    }
    else
    {
      v14 = v8;
    }
    v15 = v6[3];
    LOWORD(v16) = v6[5];
    if ( v15 <= (unsigned __int16)v16 )
      v17 = (unsigned __int16)v16;
    else
      v17 = v15;
    if ( v17 <= 1 )
    {
      v16 = 1;
    }
    else if ( v15 <= (unsigned __int16)v16 )
    {
      v16 = (unsigned __int16)v16;
    }
    else
    {
      v16 = v15;
    }
    v18 = *(_WORD *)(qword_1C03294A8 + 80);
    if ( v18 < 1
      || v18 > v14
      && (unsigned int)(*(_DWORD *)(qword_1C03294A8 + 104) + 12 * (v16 + 8) - *(_DWORD *)(qword_1C03294A8 + 64)) < (unsigned __int64)(2LL * (v18 - 1)) )
    {
      goto LABEL_198;
    }
    v11 = 0;
  }
  v19 = *(_WORD *)(qword_1C03294A8 + 80);
  if ( v19 >= 1 && v19 <= v76 && (int)v7 >= *(__int16 *)(*(_QWORD *)(qword_1C03294A8 + 64) + 2LL * (v19 - 1)) + v12 + 1 )
    goto LABEL_198;
  v20 = (int)qword_1C03294F0;
  v21 = v8 <= (unsigned __int16)v9 ? (unsigned __int16)v9 : v8;
  v22 = 1;
  if ( v21 <= 1 )
    v23 = 1;
  else
    v23 = v8 <= (unsigned __int16)v9 ? (unsigned __int16)v9 : v8;
  if ( qword_1C03294D8 == LocalGS )
  {
    if ( (int)qword_1C03294F0 >= (unsigned __int16)v6[8] || (int)qword_1C03294F0 < 0 )
      goto LABEL_198;
  }
  else
  {
    if ( (int)qword_1C03294F0 >= *(_DWORD *)(qword_1C03294E0 + 440) || (int)qword_1C03294F0 < 0 )
      goto LABEL_198;
    v11 = 4;
    v78 = 4;
  }
  if ( LocalGS == qword_1C03294D8 + 112 )
  {
    if ( v8 <= (unsigned __int16)v9 )
      v24 = (unsigned __int16)v9;
    else
      v24 = v8;
    if ( v24 <= 1 )
    {
      v9 = 1;
    }
    else if ( v8 <= (unsigned __int16)v9 )
    {
      v9 = (unsigned __int16)v9;
    }
    else
    {
      v9 = v8;
    }
    v25 = v6[3];
    v26 = v6[5];
    if ( v25 <= v26 )
      v27 = v26;
    else
      v27 = v25;
    if ( v27 > 1 )
    {
      if ( v25 <= v26 )
        v22 = v26;
      else
        v22 = v25;
    }
    v28 = *(_WORD *)(LocalGS + 80);
    if ( v28 < 1
      || v28 > v9
      && (unsigned int)(*(_DWORD *)(LocalGS + 104) + 12 * (v22 + 8) - *(_DWORD *)(LocalGS + 64)) < (unsigned __int64)(2LL * (v28 - 1)) )
    {
      goto LABEL_198;
    }
    v11 = v78;
  }
  v29 = *(_WORD *)(LocalGS + 80);
  if ( v29 >= 1
    && v29 <= v23
    && (int)qword_1C03294F0 >= *(__int16 *)(*(_QWORD *)(LocalGS + 64) + 2LL * (v29 - 1)) + v11 + 1 )
  {
LABEL_198:
    result = qword_1C0329538;
    dword_1C0329530 = 4370;
    return result;
  }
  HIDWORD(qword_1C03294F0) = qword_1C03294F0;
  dword_1C03294F8 = v7;
  if ( qword_1C03294A8 == qword_1C03294D8 || *(_BYTE *)(qword_1C03294E0 + 333) != 2 )
  {
    v31 = a2;
    goto LABEL_110;
  }
  v30 = word_1C0329554;
  v31 = a2;
  if ( word_1C0329554 && (*(_BYTE *)(qword_1C03294E0 + 452) & 2) != 0 )
  {
    v41 = DoubleCheckLinkColor(qword_1C03294A8, (unsigned int)qword_1C03294F0, (unsigned int)v7, a2 & 3);
    AddDistance(v42, (_DWORD)v4, v20, v7, v41);
LABEL_110:
    v30 = word_1C0329554;
  }
  if ( !word_1C032952C )
  {
    v46 = InvokeGetCVTEntry((unsigned int)dword_1C032951C, v73);
    v47 = v46;
    if ( *(_DWORD *)(v2 + 108) )
      v47 = itrp_CheckSingleWidth(v46);
    if ( v4 == (_QWORD *)qword_1C03294D8 )
    {
      v70 = 4 * v7;
      *(_DWORD *)(v70 + v4[2]) = *(_DWORD *)(v5[2] + 4 * v20)
                               + ((unsigned __int64)((int)v47 * (__int64)(__int16)dword_1C03294B8) >> 32 << 18)
                               + ((((v47 * (__int16)dword_1C03294B8) >> 13) + 1) >> 1);
      *(_DWORD *)(v70 + *v4) = *(_DWORD *)(4 * v7 + v4[2]);
      *(_DWORD *)(v70 + v4[3]) = *(_DWORD *)(v5[3] + 4 * v20)
                               + ((unsigned __int64)((int)v47 * (__int64)SHIWORD(dword_1C03294B8)) >> 32 << 18)
                               + ((((v47 * SHIWORD(dword_1C03294B8)) >> 13) + 1) >> 1);
      *(_DWORD *)(v70 + v4[1]) = *(_DWORD *)(4 * v7 + v4[3]);
    }
    v48 = 4 * v20;
    if ( dword_1C0329514 == 3 )
    {
      v77 = 4 * v7;
      v50 = *(_DWORD *)(v4[2] + 4 * v7) - *(_DWORD *)(v5[2] + 4 * v20);
    }
    else
    {
      v49 = v5[3];
      v77 = 4 * v7;
      if ( dword_1C0329514 == 4 )
        v50 = *(_DWORD *)(v4[3] + 4 * v7) - *(_DWORD *)(v49 + 4 * v20);
      else
        v50 = InvokeProject(
                (unsigned int)dword_1C0329514,
                (unsigned int)(*(_DWORD *)(v4[2] + 4 * v7) - *(_DWORD *)(v5[2] + 4 * v20)),
                (unsigned int)(*(_DWORD *)(v4[3] + 4 * v7) - *(_DWORD *)(v49 + 4 * v20)));
    }
    if ( ((v47 ^ v50) & 0x80000000) != 0 && *(_BYTE *)(v2 + 156) )
      v47 = -v47;
    v52 = *(unsigned int *)(v2 + 4LL * (a2 & 3) + 32);
    if ( word_1C0329554 )
    {
      v60 = *(_WORD *)(v2 + 120) & 4;
      if ( !v60 )
      {
        v61 = *(_DWORD *)(v2 + 104);
        v62 = 16 * (v47 - v50);
        if ( v62 > v61 || v62 < -v61 )
          v47 = v50;
      }
      if ( (a2 & 4) == 0 )
      {
        v54 = itrp_RoundOffSP(v47, v52);
        goto LABEL_140;
      }
      if ( v60 )
      {
        v68 = *(_DWORD *)(v2 + 104);
        v69 = 16 * (v47 - v50);
        if ( v69 > v68 || v69 < -v68 )
          v47 = v50;
      }
    }
    else
    {
      if ( (a2 & 4) == 0 )
      {
        v54 = itrp_RoundOff(v47, v52);
        goto LABEL_140;
      }
      v53 = *(_DWORD *)(v2 + 104);
      if ( (int)(v47 - v50) > v53 || (int)(v47 - v50) < -v53 )
        v47 = v50;
    }
    v54 = InvokeRoundValue(*(unsigned int *)(v2 + 128), v47, (unsigned int)v52);
LABEL_140:
    v31 = a2;
    v55 = v54;
    if ( (a2 & 8) != 0 )
    {
      v56 = *(_DWORD *)(v2 + 124);
      if ( word_1C0329554 )
        v56 /= 2;
      if ( v50 >= 0 )
      {
        if ( v55 < v56 )
          v55 = v56;
      }
      else
      {
        v57 = -v56;
        if ( v55 > v57 )
          v55 = v57;
      }
    }
    if ( dword_1C0329510 == 3 )
    {
      v59 = *(_DWORD *)(*v4 + v77) - *(_DWORD *)(*v5 + v48);
    }
    else
    {
      v58 = v5[1];
      if ( dword_1C0329510 == 4 )
        v59 = *(_DWORD *)(v4[1] + v77) - *(_DWORD *)(v58 + v48);
      else
        v59 = InvokeProject(
                (unsigned int)dword_1C0329510,
                (unsigned int)(*(_DWORD *)(*v4 + v77) - *(_DWORD *)(*v5 + v48)),
                (unsigned int)(*(_DWORD *)(v4[1] + v77) - *(_DWORD *)(v58 + v48)));
    }
    InvokeMovePoint((unsigned int)dword_1C032950C, v4, (unsigned int)v7, (unsigned int)(v55 - v59));
    goto LABEL_77;
  }
  v32 = *(_DWORD *)(*(_QWORD *)(v2 + 16) + 4LL * (int)v73);
  if ( word_1C032952C == 1 )
  {
    v33 = *(_DWORD *)(v4[2] + 4 * v7) - *(_DWORD *)(v5[2] + 4 * v20);
    if ( (v32 ^ v33) < 0 && *(_BYTE *)(v2 + 156) )
      v32 = -v32;
    if ( v30 )
    {
      v43 = *(_WORD *)(v2 + 120) & 4;
      if ( !v43 )
      {
        v44 = *(_DWORD *)(v2 + 104);
        v45 = 16 * (v32 - v33);
        if ( v45 > v44 || v45 < -v44 )
          v32 = *(_DWORD *)(v4[2] + 4 * v7) - *(_DWORD *)(v5[2] + 4 * v20);
      }
      if ( (v31 & 4) != 0 )
      {
        if ( v43 )
        {
          v63 = *(_DWORD *)(v2 + 104);
          v64 = 16 * (v32 - v33);
          if ( v64 > v63 || v64 < -v63 )
            v32 = *(_DWORD *)(v4[2] + 4 * v7) - *(_DWORD *)(v5[2] + 4 * v20);
        }
        if ( v32 < 0 )
          v32 = -((2 - v32) & 0xFFFFFFFC);
        else
          v32 = (v32 + 2) & 0xFFFFFFFC;
      }
    }
    else if ( (v31 & 4) != 0 )
    {
      v34 = *(_DWORD *)(v2 + 104);
      if ( v32 - v33 > v34 || v32 - v33 < -v34 )
        v32 = *(_DWORD *)(v4[2] + 4 * v7) - *(_DWORD *)(v5[2] + 4 * v20);
      if ( v32 < 0 )
        v32 = -((32 - v32) & 0xFFFFFFC0);
      else
        v32 = (v32 + 32) & 0xFFFFFFC0;
    }
    if ( (v31 & 8) != 0 )
    {
      v35 = *(_DWORD *)(v2 + 124);
      if ( v30 )
        v35 /= 2;
      if ( v33 < 0 )
      {
        v51 = -v35;
        if ( v32 > v51 )
          v32 = v51;
      }
      else if ( v32 < v35 )
      {
        v32 = v35;
      }
    }
    *(_DWORD *)(*v4 + 4 * v7) = v32 + *(_DWORD *)(*v5 + 4 * v20);
    *(_BYTE *)(v4[9] + v7) |= 1u;
    goto LABEL_77;
  }
  v37 = *(_DWORD *)(v4[3] + 4 * v7) - *(_DWORD *)(v5[3] + 4 * v20);
  if ( (v32 ^ v37) < 0 && *(_BYTE *)(v2 + 156) )
    v32 = -v32;
  if ( v30 )
  {
    v65 = *(_WORD *)(v2 + 120) & 4;
    if ( !v65 )
    {
      v66 = *(_DWORD *)(v2 + 104);
      v67 = 16 * (v32 - v37);
      if ( v67 > v66 || v67 < -v66 )
        v32 = *(_DWORD *)(v4[3] + 4 * v7) - *(_DWORD *)(v5[3] + 4 * v20);
    }
    if ( (v31 & 4) != 0 )
    {
      if ( v65 )
      {
        v71 = *(_DWORD *)(v2 + 104);
        v72 = 16 * (v32 - v37);
        if ( v72 > v71 || v72 < -v71 )
          v32 = *(_DWORD *)(v4[3] + 4 * v7) - *(_DWORD *)(v5[3] + 4 * v20);
      }
      if ( v32 < 0 )
      {
        v39 = (2 - v32) & 0xFFFFFFFC;
        goto LABEL_89;
      }
      v32 = (v32 + 2) & 0xFFFFFFFC;
    }
  }
  else
  {
    if ( (v31 & 4) == 0 )
      goto LABEL_90;
    v38 = *(_DWORD *)(v2 + 104);
    if ( v32 - v37 > v38 || v32 - v37 < -v38 )
      v32 = *(_DWORD *)(v4[3] + 4 * v7) - *(_DWORD *)(v5[3] + 4 * v20);
    if ( v32 < 0 )
    {
      v39 = (32 - v32) & 0xFFFFFFC0;
LABEL_89:
      v32 = -v39;
      goto LABEL_90;
    }
    v32 = (v32 + 32) & 0xFFFFFFC0;
  }
LABEL_90:
  if ( (v31 & 8) != 0 )
  {
    v40 = *(_DWORD *)(v2 + 124);
    if ( v30 )
      v40 /= 2;
    if ( v37 >= 0 )
    {
      if ( v32 >= v40 )
        goto LABEL_95;
    }
    else
    {
      v40 = -v40;
      if ( v32 <= v40 )
        goto LABEL_95;
    }
    v32 = v40;
  }
LABEL_95:
  *(_DWORD *)(v4[1] + 4 * v7) = v32 + *(_DWORD *)(v5[1] + 4 * v20);
  *(_BYTE *)(v4[9] + v7) |= 2u;
LABEL_77:
  if ( (v31 & 0x10) != 0 )
    LODWORD(qword_1C03294F0) = v7;
  return a1;
}
