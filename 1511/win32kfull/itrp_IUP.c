/*
 * XREFs of itrp_IUP @ 0x1C00C3970
 * Callers:
 *     <none>
 * Callees:
 *     FixMul @ 0x1C00AFF84 (FixMul.c)
 *     ExecutePhaseControl @ 0x1C00C4244 (ExecutePhaseControl.c)
 *     CompDiv @ 0x1C00DA168 (CompDiv.c)
 */

__int64 __fastcall itrp_IUP(__int64 a1, char a2)
{
  __int64 v2; // r15
  char v3; // r9
  __int64 v4; // rdx
  char v5; // al
  __int64 v6; // r8
  __int16 v7; // cx
  int v8; // r9d
  __int64 v9; // rbp
  char v10; // si
  int v11; // r11d
  int v12; // ebx
  __int64 v13; // r9
  __int64 v14; // rcx
  _WORD *v15; // r14
  int v16; // r12d
  __int64 v17; // r13
  __int64 v18; // rdi
  unsigned __int16 v19; // r10
  unsigned __int16 v20; // r9
  int v21; // eax
  int v22; // r12d
  __int64 v23; // rdx
  int v24; // eax
  unsigned int v25; // r8d
  unsigned __int16 v26; // cx
  int v27; // eax
  int v28; // edx
  int v29; // eax
  int v30; // r12d
  int v31; // eax
  unsigned int v32; // r8d
  unsigned __int16 v33; // cx
  int v34; // eax
  int v35; // edx
  int v36; // r9d
  int v37; // r11d
  __int64 v38; // r12
  int v39; // ecx
  __int64 v40; // rdx
  __int64 v41; // rbx
  __int64 v42; // r8
  __int64 v43; // r10
  int v44; // ecx
  int v45; // r14d
  char *v46; // r13
  int v47; // edx
  int v48; // r14d
  int v49; // eax
  int v50; // r9d
  int v51; // r15d
  int v52; // edx
  int v53; // r12d
  int v54; // eax
  int v55; // edx
  char *v56; // r8
  unsigned __int64 v57; // r11
  int *v58; // r9
  _DWORD *v59; // r10
  __int64 v60; // rbx
  int v61; // eax
  int v62; // eax
  __int64 result; // rax
  int v64; // eax
  int v65; // eax
  __int64 v66; // rcx
  __int64 v67; // r10
  int v68; // r14d
  __int64 v69; // rcx
  int v70; // eax
  int v71; // eax
  int fixed; // eax
  int v73; // [rsp+20h] [rbp-E8h]
  int v74; // [rsp+20h] [rbp-E8h]
  int v75; // [rsp+20h] [rbp-E8h]
  __int64 v76; // [rsp+28h] [rbp-E0h]
  __int64 v77; // [rsp+30h] [rbp-D8h]
  int v78; // [rsp+30h] [rbp-D8h]
  __int64 v79; // [rsp+38h] [rbp-D0h]
  int v80; // [rsp+40h] [rbp-C8h]
  int v81; // [rsp+44h] [rbp-C4h]
  int v82; // [rsp+48h] [rbp-C0h]
  __int64 v83; // [rsp+50h] [rbp-B8h]
  __int64 v84; // [rsp+50h] [rbp-B8h]
  int v85; // [rsp+50h] [rbp-B8h]
  __int64 v86; // [rsp+60h] [rbp-A8h]
  __int64 v87; // [rsp+68h] [rbp-A0h]
  __int64 v88; // [rsp+70h] [rbp-98h]
  int v89; // [rsp+7Ch] [rbp-8Ch]
  __int64 v90; // [rsp+80h] [rbp-88h]
  __int64 v91; // [rsp+88h] [rbp-80h]
  __int64 v92; // [rsp+98h] [rbp-70h]
  unsigned __int64 v93; // [rsp+A8h] [rbp-60h]
  __int64 v94; // [rsp+B0h] [rbp-58h]
  int v97; // [rsp+118h] [rbp+10h]
  char v98; // [rsp+120h] [rbp+18h]
  int v99; // [rsp+128h] [rbp+20h]

  v2 = qword_1C0323E30;
  v3 = a2;
  v4 = qword_1C0323E00;
  v87 = qword_1C0323E00;
  v5 = *(_BYTE *)(qword_1C0323E30 + 333);
  if ( v5 == 2 )
  {
    v6 = qword_1C0323E28;
    v77 = qword_1C0323E28;
    if ( qword_1C0323E00 != qword_1C0323E28 )
    {
      v7 = *(_WORD *)(qword_1C0323E30 + 452);
      if ( (v7 & 3) == 3 && (v7 & 4) != (v3 & 1) && !*(_DWORD *)(qword_1C0323E00 + 96) )
      {
        ExecutePhaseControl(&LocalGS, qword_1C0323E00);
        v6 = qword_1C0323E28;
        v2 = qword_1C0323E30;
        v4 = v87;
        v3 = a2;
        v77 = qword_1C0323E28;
      }
    }
  }
  else if ( v5 || (v6 = qword_1C0323E28, v77 = qword_1C0323E28, qword_1C0323E28 != qword_1C0323E00) )
  {
    result = qword_1C0323E88;
    dword_1C0323E80 = 4380;
    return result;
  }
  v8 = v3 & 1;
  v9 = *(_QWORD *)(v4 + 72);
  v90 = v9;
  v97 = v8;
  if ( v8 )
  {
    v88 = *(_QWORD *)v4;
    v86 = *(_QWORD *)(v4 + 16);
    if ( *(_BYTE *)(v2 + 397) )
    {
      v79 = *(_QWORD *)(v4 + 16);
      v10 = 1;
    }
    else
    {
      v10 = 1;
      v79 = *(_QWORD *)(v4 + 32);
    }
  }
  else
  {
    v88 = *(_QWORD *)(v4 + 8);
    v86 = *(_QWORD *)(v4 + 24);
    if ( *(_BYTE *)(v2 + 397) )
      v79 = *(_QWORD *)(v4 + 24);
    else
      v79 = *(_QWORD *)(v4 + 40);
    v10 = 2;
  }
  v11 = *(__int16 *)(v4 + 80);
  v12 = v11;
  v98 = v10;
  v89 = 0;
  if ( v11 <= 0 )
  {
LABEL_94:
    *(_WORD *)(v2 + 454) |= 2 - (v8 != 0);
    return a1;
  }
  v13 = 0LL;
  v92 = 0LL;
  while ( 1 )
  {
    v14 = *(_QWORD *)(v4 + 64);
    v15 = *(_WORD **)(v2 + 344);
    v76 = v14;
    v16 = *(__int16 *)(*(_QWORD *)(v4 + 56) + 2 * v13);
    v17 = *(__int16 *)(v14 + 2 * v13);
    v18 = v17;
    v19 = v15[6];
    v20 = v15[4];
    v99 = v16;
    v91 = v17;
    v93 = v79 + 4 * v17;
    if ( v20 <= v19 )
      v21 = v19;
    else
      v21 = v20;
    if ( v21 <= 1 )
    {
      v73 = 1;
    }
    else if ( v20 <= v19 )
    {
      v73 = v19;
    }
    else
    {
      v73 = v20;
    }
    if ( v6 == v4 )
    {
      if ( v16 >= (unsigned __int16)v15[8] || v16 < 0 )
        break;
      v22 = 0;
    }
    else
    {
      if ( v16 >= *(_DWORD *)(v2 + 440) || v16 < 0 )
        break;
      v22 = 4;
    }
    v23 = v6 + 112;
    v83 = v6 + 112;
    if ( v87 != v6 + 112 )
      goto LABEL_33;
    v24 = v20 <= v19 ? v19 : v20;
    if ( v24 <= 1 )
      v25 = 1;
    else
      v25 = v20 <= v19 ? v19 : v20;
    v26 = v15[5];
    LOWORD(v27) = v15[3];
    v28 = (unsigned __int16)v27 <= v26 ? v26 : (unsigned __int16)v27;
    if ( v28 <= 1 )
      v27 = 1;
    else
      v27 = (unsigned __int16)v27 <= v26 ? v26 : (unsigned __int16)v27;
    if ( (__int16)v11 < 1
      || v12 > v25
      && (unsigned int)(*(_DWORD *)(v87 + 104) + 12 * (v27 + 8) - *(_DWORD *)(v87 + 64)) < (unsigned __int64)(2LL * (v12 - 1)) )
    {
      break;
    }
    v14 = v76;
    v6 = v77;
    v23 = v83;
LABEL_33:
    if ( (__int16)v11 >= 1 && v12 <= v73 && v99 >= *(__int16 *)(v14 + 2LL * (__int16)v11 - 2) + v22 + 1 )
      break;
    if ( v20 <= v19 )
      v29 = v19;
    else
      v29 = v20;
    if ( v29 <= 1 )
    {
      v74 = 1;
    }
    else if ( v20 <= v19 )
    {
      v74 = v19;
    }
    else
    {
      v74 = v20;
    }
    if ( v6 == v87 )
    {
      if ( (int)v17 >= (unsigned __int16)v15[8] || (int)v17 < 0 )
        break;
      v30 = 0;
    }
    else
    {
      if ( (int)v17 >= *(_DWORD *)(v2 + 440) || (int)v17 < 0 )
        break;
      v30 = 4;
    }
    if ( v87 == v23 )
    {
      if ( v20 <= v19 )
        v31 = v19;
      else
        v31 = v20;
      if ( v31 <= 1 )
      {
        v32 = 1;
      }
      else if ( v20 <= v19 )
      {
        v32 = v19;
      }
      else
      {
        v32 = v20;
      }
      v33 = v15[5];
      LOWORD(v34) = v15[3];
      if ( (unsigned __int16)v34 <= v33 )
        v35 = v33;
      else
        v35 = (unsigned __int16)v34;
      if ( v35 <= 1 )
      {
        v34 = 1;
      }
      else if ( (unsigned __int16)v34 <= v33 )
      {
        v34 = v33;
      }
      else
      {
        v34 = (unsigned __int16)v34;
      }
      if ( (__int16)v11 < 1
        || v12 > v32
        && (unsigned int)(*(_DWORD *)(v87 + 104) + 12 * (v34 + 8) - *(_DWORD *)(v87 + 64)) < (unsigned __int64)(2LL * (v12 - 1)) )
      {
        break;
      }
      v6 = v77;
    }
    if ( (__int16)v11 >= 1 && v12 <= v74 && (int)v17 >= *(__int16 *)(v76 + 2LL * (__int16)v11 - 2) + v30 + 1 )
      break;
    v36 = v99;
    v37 = v99;
    v38 = v99;
    if ( ((unsigned __int8)v10 & *(_BYTE *)(v99 + v9)) == 0 )
    {
      v66 = v99;
      do
      {
        if ( v66 > v17 )
          break;
        ++v66;
        ++v37;
      }
      while ( ((unsigned __int8)v10 & *(_BYTE *)(v66 + v9)) == 0 );
    }
    if ( v37 <= (int)v17 )
    {
      v39 = v37;
      v40 = v37;
      v78 = v37;
      v94 = v37;
      do
      {
        v41 = v37;
        do
        {
          v42 = v37;
          ++v41;
          ++v37;
          if ( v41 > v18 )
          {
            v37 = v36;
            v41 = v38;
          }
        }
        while ( ((unsigned __int8)v10 & *(_BYTE *)(v41 + v9)) != 0 && v41 != v40 );
        if ( v37 == v39 )
          break;
        v43 = v37;
        v44 = v37;
        v84 = v37;
        do
        {
          ++v44;
          if ( ++v43 > v18 )
          {
            v44 = v36;
            v43 = v38;
          }
        }
        while ( ((unsigned __int8)v10 & *(_BYTE *)(v43 + v9)) == 0 );
        v45 = *(_DWORD *)(v79 + 4LL * v44);
        v46 = (char *)(v79 + 4LL * v44);
        v47 = *(_DWORD *)(v79 + 4 * v42);
        if ( v47 < v45 )
        {
          v49 = v42;
          v75 = *(_DWORD *)(v79 + 4 * v42);
          LODWORD(v42) = v44;
          v48 = v45 - v47;
        }
        else
        {
          v75 = *(_DWORD *)(v79 + 4LL * v44);
          v48 = v47 - v45;
          v49 = v44;
        }
        v50 = *(_DWORD *)(v88 + 4LL * v49);
        v51 = *(_DWORD *)(v86 + 4LL * v49);
        v81 = v50;
        v82 = v50 - v51;
        if ( !v48 )
        {
          while ( v41 != v43 )
          {
            *(_DWORD *)(v88 + 4 * v41) += v50 - v51;
            if ( v41 >= v18 )
            {
              v37 = v99;
              v41 = v38;
            }
            else
            {
              ++v37;
              ++v41;
            }
          }
          goto LABEL_90;
        }
        v52 = *(_DWORD *)(v88 + 4LL * (int)v42);
        v53 = *(_DWORD *)(v86 + 4LL * (int)v42);
        v54 = v52 - v53;
        v55 = v52 - v50;
        v80 = v54;
        if ( v55 < 0x8000 && v48 < 0x8000 )
        {
          v56 = (char *)(v79 + 4LL * v37);
          v57 = (unsigned __int64)(v46 - v56 + 3) >> 2;
          v58 = (int *)(v86 + 4 * v84);
          v59 = (_DWORD *)(v88 + 4 * v84);
          v85 = v48 >> 1;
          v60 = 0LL;
          if ( v56 > v46 )
            v57 = 0LL;
          if ( !v57 )
            goto LABEL_87;
          while ( 1 )
          {
            v61 = *v58;
            if ( *v58 <= v51 )
            {
              if ( v61 >= v53 )
              {
LABEL_97:
                v62 = v80 + v61;
                goto LABEL_85;
              }
              v62 = v82 + v61;
            }
            else
            {
              if ( v61 >= v53 )
                goto LABEL_97;
              v62 = v81 + (v85 + v55 * (*(_DWORD *)v56 - v75)) / v48;
            }
LABEL_85:
            *v59 = v62;
            ++v58;
            ++v59;
            v56 += 4;
            if ( ++v60 >= v57 )
            {
              v18 = v91;
              v10 = v98;
              v9 = v90;
              v46 = (char *)(v79 + 4LL * v44);
LABEL_87:
              if ( v56 == v46 )
                goto LABEL_88;
              while ( 2 )
              {
                v64 = *v58;
                if ( *v58 <= v51 )
                {
                  if ( v64 >= v53 )
                    goto LABEL_110;
                  v65 = v82 + v64;
                }
                else
                {
                  if ( v64 < v53 )
                  {
                    v65 = v81 + (v85 + v55 * (*(_DWORD *)v56 - v75)) / v48;
                    goto LABEL_104;
                  }
LABEL_110:
                  v65 = v80 + v64;
                }
LABEL_104:
                *v59 = v65;
                v56 += 4;
                ++v59;
                ++v58;
                if ( (unsigned __int64)v56 > v93 )
                {
                  v56 = (char *)(v79 + 4LL * v99);
                  v58 = (int *)(v86 + 4LL * v99);
                  v59 = (_DWORD *)(v88 + 4LL * v99);
                }
                if ( v56 == v46 )
                {
                  v18 = v91;
                  v10 = v98;
                  v9 = v90;
LABEL_88:
                  v37 = v44;
LABEL_89:
                  v38 = v99;
                  goto LABEL_90;
                }
                continue;
              }
            }
          }
        }
        v68 = CompDiv((unsigned int)v48, (__int64)v55 << 16);
        if ( v41 == v67 )
          goto LABEL_89;
        v69 = v88;
        do
        {
          v70 = *(_DWORD *)(v86 + 4 * v41);
          if ( v70 <= v51 )
          {
            v71 = v82 + v70;
          }
          else if ( v70 < v53 )
          {
            fixed = FixMul(*(_DWORD *)(v79 + 4 * v41) - v75, v68);
            v69 = v88;
            v71 = v81 + fixed;
          }
          else
          {
            v71 = v80 + v70;
          }
          *(_DWORD *)(v69 + 4 * v41) = v71;
          if ( v41 >= v18 )
          {
            v37 = v99;
            v41 = v99;
          }
          else
          {
            ++v37;
            ++v41;
          }
        }
        while ( v41 != v67 );
        v10 = v98;
        v38 = v99;
        v9 = v90;
LABEL_90:
        v39 = v78;
        v40 = v94;
        v36 = v99;
      }
      while ( v37 != v78 );
      v6 = qword_1C0323E28;
      v2 = qword_1C0323E30;
      v77 = qword_1C0323E28;
    }
    v4 = v87;
    v13 = v92 + 1;
    ++v89;
    ++v92;
    v11 = *(__int16 *)(v87 + 80);
    v12 = v11;
    if ( v89 >= v11 )
    {
      v8 = v97;
      goto LABEL_94;
    }
  }
  result = qword_1C0323E88;
  dword_1C0323E80 = 4370;
  return result;
}
