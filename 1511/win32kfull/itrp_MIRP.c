/*
 * XREFs of itrp_MIRP @ 0x1C00B70D0
 * Callers:
 *     <none>
 * Callees:
 *     InvokeRoundValue @ 0x1C00B5C98 (InvokeRoundValue.c)
 *     InvokeProject @ 0x1C00B652C (InvokeProject.c)
 *     AddDistance @ 0x1C00B7C5C (AddDistance.c)
 *     DoubleCheckLinkColor @ 0x1C00B7ED8 (DoubleCheckLinkColor.c)
 *     InvokeMovePoint @ 0x1C00B80C8 (InvokeMovePoint.c)
 *     InvokeGetCVTEntry @ 0x1C00B814C (InvokeGetCVTEntry.c)
 *     itrp_RoundOff @ 0x1C00B8430 (itrp_RoundOff.c)
 *     itrp_RoundOffSP @ 0x1C00B93BC (itrp_RoundOffSP.c)
 *     itrp_CheckSingleWidth @ 0x1C014470C (itrp_CheckSingleWidth.c)
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
  __int16 v19; // cx
  __int64 v20; // rsi
  int v21; // eax
  int v22; // r13d
  int v23; // r12d
  int v24; // eax
  unsigned __int16 v25; // ax
  unsigned __int16 v26; // cx
  int v27; // edx
  __int16 v28; // ax
  __int16 v29; // cx
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
  __int64 v47; // rdx
  int v48; // r15d
  __int64 v49; // r13
  __int64 v50; // rax
  int v51; // r12d
  __int64 v52; // rdx
  int v53; // ecx
  int v54; // eax
  int v55; // esi
  int v56; // eax
  int v57; // eax
  __int64 v58; // rax
  int v59; // eax
  int v60; // eax
  __int16 v61; // r8
  int v62; // ecx
  int v63; // eax
  int v64; // ecx
  int v65; // eax
  __int16 v66; // dx
  int v67; // ecx
  int v68; // eax
  int v69; // ecx
  int v70; // eax
  __int64 v71; // r9
  int v72; // ecx
  int v73; // eax
  unsigned int v74; // [rsp+30h] [rbp-58h]
  int v77; // [rsp+A0h] [rbp+18h]
  __int64 v78; // [rsp+A0h] [rbp+18h]
  int v79; // [rsp+A8h] [rbp+20h]

  v2 = qword_1C0323E30;
  if ( (qword_1C0323E30 ^ *(_QWORD *)qword_1C0323E30 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C0323E30 + 424)) != *(_QWORD *)(qword_1C0323E30 + 432)
    || (unsigned __int64)((qword_1C0323E18 - *(_QWORD *)qword_1C0323E30) >> 2) < 2 )
  {
    result = qword_1C0323E88;
    dword_1C0323E80 = 4368;
    return result;
  }
  v4 = (_QWORD *)qword_1C0323DF8;
  qword_1C0323E18 -= 4LL;
  v3 = qword_1C0323E18;
  v5 = (_QWORD *)LocalGS;
  v74 = *(_DWORD *)qword_1C0323E18;
  if ( *(_DWORD *)qword_1C0323E18 >= (int)*(unsigned __int16 *)(qword_1C0323E30 + 360)
    || *(int *)qword_1C0323E18 < 0
    || (qword_1C0323E30 ^ *(_QWORD *)(qword_1C0323E30 + 16) ^ MEMORY[0xFFFFF78000000330] ^ (unsigned __int64)*(unsigned __int16 *)(qword_1C0323E30 + 360)) != *(_QWORD *)(qword_1C0323E30 + 368) )
  {
    result = qword_1C0323E88;
    dword_1C0323E80 = 4379;
    return result;
  }
  qword_1C0323E18 -= 4LL;
  v6 = *(_WORD **)(qword_1C0323E30 + 344);
  v7 = *(int *)(v3 - 4);
  v8 = v6[4];
  LOWORD(v9) = v6[6];
  if ( v8 <= (unsigned __int16)v9 )
    v10 = (unsigned __int16)v9;
  else
    v10 = v8;
  if ( v10 <= 1 )
  {
    v77 = 1;
  }
  else if ( v8 <= (unsigned __int16)v9 )
  {
    v77 = (unsigned __int16)v9;
  }
  else
  {
    v77 = v8;
  }
  v11 = 0;
  v79 = 0;
  if ( qword_1C0323E28 == qword_1C0323DF8 )
  {
    if ( (int)v7 < (unsigned __int16)v6[8] && (int)v7 >= 0 )
    {
      v12 = 0;
      goto LABEL_15;
    }
LABEL_206:
    result = qword_1C0323E88;
    dword_1C0323E80 = 4370;
    return result;
  }
  if ( (int)v7 >= *(_DWORD *)(qword_1C0323E30 + 440) || (int)v7 < 0 )
    goto LABEL_206;
  v12 = 4;
LABEL_15:
  if ( qword_1C0323DF8 == qword_1C0323E28 + 112 )
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
    v18 = *(_WORD *)(qword_1C0323DF8 + 80);
    if ( v18 < 1
      || v18 > v14
      && (unsigned int)(*(_DWORD *)(qword_1C0323DF8 + 104) + 12 * (v16 + 8) - *(_DWORD *)(qword_1C0323DF8 + 64)) < (unsigned __int64)(2LL * (v18 - 1)) )
    {
      goto LABEL_197;
    }
    v11 = 0;
  }
  v19 = *(_WORD *)(qword_1C0323DF8 + 80);
  if ( v19 >= 1 && v19 <= v77 && (int)v7 >= *(__int16 *)(*(_QWORD *)(qword_1C0323DF8 + 64) + 2LL * v19 - 2) + v12 + 1 )
    goto LABEL_197;
  v20 = (int)qword_1C0323E40;
  v21 = v8 <= (unsigned __int16)v9 ? (unsigned __int16)v9 : v8;
  v22 = 1;
  if ( v21 <= 1 )
    v23 = 1;
  else
    v23 = v8 <= (unsigned __int16)v9 ? (unsigned __int16)v9 : v8;
  if ( qword_1C0323E28 == LocalGS )
  {
    if ( (int)qword_1C0323E40 >= (unsigned __int16)v6[8] || (int)qword_1C0323E40 < 0 )
      goto LABEL_197;
  }
  else
  {
    if ( (int)qword_1C0323E40 >= *(_DWORD *)(qword_1C0323E30 + 440) || (int)qword_1C0323E40 < 0 )
      goto LABEL_197;
    v11 = 4;
    v79 = 4;
  }
  if ( LocalGS == qword_1C0323E28 + 112 )
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
      goto LABEL_197;
    }
    v11 = v79;
  }
  v29 = *(_WORD *)(LocalGS + 80);
  if ( v29 >= 1
    && v29 <= v23
    && (int)qword_1C0323E40 >= *(__int16 *)(*(_QWORD *)(LocalGS + 64) + 2LL * v29 - 2) + v11 + 1 )
  {
LABEL_197:
    result = qword_1C0323E88;
    dword_1C0323E80 = 4370;
    return result;
  }
  HIDWORD(qword_1C0323E40) = qword_1C0323E40;
  dword_1C0323E48 = v7;
  if ( qword_1C0323DF8 == qword_1C0323E28 || *(_BYTE *)(qword_1C0323E30 + 333) != 2 )
  {
    v31 = a2;
    goto LABEL_98;
  }
  v30 = word_1C0323EA4;
  v31 = a2;
  if ( word_1C0323EA4 && (*(_BYTE *)(qword_1C0323E30 + 452) & 2) != 0 )
  {
    v41 = DoubleCheckLinkColor(qword_1C0323DF8, (unsigned int)qword_1C0323E40, (unsigned int)v7, a2 & 3);
    AddDistance(v42, (_DWORD)v4, v20, v7, v41);
LABEL_98:
    v30 = word_1C0323EA4;
  }
  if ( !word_1C0323E7C )
  {
    v46 = InvokeGetCVTEntry((unsigned int)dword_1C0323E6C, v74);
    v48 = v46;
    if ( *(_DWORD *)(v2 + 108) )
      v48 = itrp_CheckSingleWidth(v46, v47);
    if ( v4 == (_QWORD *)qword_1C0323E28 )
    {
      v71 = 4 * v7;
      *(_DWORD *)(v71 + v4[2]) = *(_DWORD *)(v5[2] + 4 * v20)
                               + ((unsigned __int64)(v48 * (__int64)(__int16)dword_1C0323E08) >> 32 << 18)
                               + ((((unsigned int)(v48 * (__int16)dword_1C0323E08) >> 13) + 1) >> 1);
      *(_DWORD *)(v71 + *v4) = *(_DWORD *)(4 * v7 + v4[2]);
      *(_DWORD *)(v71 + v4[3]) = *(_DWORD *)(v5[3] + 4 * v20)
                               + ((unsigned __int64)(v48 * (__int64)SHIWORD(dword_1C0323E08)) >> 32 << 18)
                               + ((((unsigned int)(v48 * SHIWORD(dword_1C0323E08)) >> 13) + 1) >> 1);
      *(_DWORD *)(v71 + v4[1]) = *(_DWORD *)(4 * v7 + v4[3]);
    }
    v49 = 4 * v20;
    if ( dword_1C0323E64 == 3 )
    {
      v78 = 4 * v7;
      v51 = *(_DWORD *)(v4[2] + 4 * v7) - *(_DWORD *)(v5[2] + 4 * v20);
    }
    else
    {
      v50 = v5[3];
      v78 = 4 * v7;
      if ( dword_1C0323E64 == 4 )
        v51 = *(_DWORD *)(v4[3] + 4 * v7) - *(_DWORD *)(v50 + 4 * v20);
      else
        v51 = InvokeProject(
                dword_1C0323E64,
                *(_DWORD *)(v4[2] + 4 * v7) - *(_DWORD *)(v5[2] + 4 * v20),
                *(_DWORD *)(v4[3] + 4 * v7) - *(_DWORD *)(v50 + 4 * v20));
    }
    if ( (v48 ^ v51) < 0 && *(_BYTE *)(v2 + 156) )
      v48 = -v48;
    v52 = *(unsigned int *)(v2 + 4LL * (a2 & 3) + 32);
    if ( word_1C0323EA4 )
    {
      v61 = *(_WORD *)(v2 + 120) & 4;
      if ( !v61 )
      {
        v62 = *(_DWORD *)(v2 + 104);
        v63 = 16 * (v48 - v51);
        if ( v63 > v62 || v63 < -v62 )
          v48 = v51;
      }
      if ( (a2 & 4) == 0 )
      {
        v54 = itrp_RoundOffSP((unsigned int)v48, v52);
        goto LABEL_137;
      }
      if ( v61 )
      {
        v69 = *(_DWORD *)(v2 + 104);
        v70 = 16 * (v48 - v51);
        if ( v70 > v69 || v70 < -v69 )
          v48 = v51;
      }
    }
    else
    {
      if ( (a2 & 4) == 0 )
      {
        v54 = itrp_RoundOff((unsigned int)v48, v52);
        goto LABEL_137;
      }
      v53 = *(_DWORD *)(v2 + 104);
      if ( v48 - v51 > v53 || v48 - v51 < -v53 )
        v48 = v51;
    }
    v54 = InvokeRoundValue(*(_DWORD *)(v2 + 128), v48, v52);
LABEL_137:
    v31 = a2;
    v55 = v54;
    if ( (a2 & 8) != 0 )
    {
      v56 = *(_DWORD *)(v2 + 124);
      if ( word_1C0323EA4 )
        v56 /= 2;
      if ( v51 < 0 )
      {
        v57 = -v56;
        if ( v55 > v57 )
          v55 = v57;
      }
      else if ( v55 < v56 )
      {
        v55 = v56;
      }
    }
    if ( dword_1C0323E60 == 3 )
    {
      v59 = *(_DWORD *)(*v4 + v78) - *(_DWORD *)(*v5 + v49);
    }
    else
    {
      v58 = v5[1];
      if ( dword_1C0323E60 == 4 )
        v59 = *(_DWORD *)(v4[1] + v78) - *(_DWORD *)(v58 + v49);
      else
        v59 = InvokeProject(
                dword_1C0323E60,
                *(_DWORD *)(*v4 + v78) - *(_DWORD *)(*v5 + v49),
                *(_DWORD *)(v4[1] + v78) - *(_DWORD *)(v58 + v49));
    }
    InvokeMovePoint((unsigned int)dword_1C0323E5C, v4, (unsigned int)v7, (unsigned int)(v55 - v59));
    goto LABEL_77;
  }
  v32 = *(_DWORD *)(*(_QWORD *)(v2 + 16) + 4LL * (int)v74);
  if ( word_1C0323E7C == 1 )
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
          v64 = *(_DWORD *)(v2 + 104);
          v65 = 16 * (v32 - v33);
          if ( v65 > v64 || v65 < -v64 )
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
        v60 = -v35;
        if ( v32 > v60 )
          v32 = v60;
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
    v66 = *(_WORD *)(v2 + 120) & 4;
    if ( !v66 )
    {
      v67 = *(_DWORD *)(v2 + 104);
      v68 = 16 * (v32 - v37);
      if ( v68 > v67 || v68 < -v67 )
        v32 = *(_DWORD *)(v4[3] + 4 * v7) - *(_DWORD *)(v5[3] + 4 * v20);
    }
    if ( (v31 & 4) != 0 )
    {
      if ( v66 )
      {
        v72 = *(_DWORD *)(v2 + 104);
        v73 = 16 * (v32 - v37);
        if ( v73 > v72 || v73 < -v72 )
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
    LODWORD(qword_1C0323E40) = v7;
  return a1;
}
