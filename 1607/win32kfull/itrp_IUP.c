/*
 * XREFs of itrp_IUP @ 0x1C00CA6B0
 * Callers:
 *     <none>
 * Callees:
 *     FixMul @ 0x1C00C947C (FixMul.c)
 *     ExecutePhaseControl @ 0x1C00D1EB8 (ExecutePhaseControl.c)
 *     CompDiv @ 0x1C00F85F4 (CompDiv.c)
 */

__int64 __fastcall itrp_IUP(__int64 a1, unsigned int a2)
{
  __int64 v2; // r15
  char v3; // r9
  __int64 v4; // rcx
  char v5; // al
  __int64 v6; // r8
  __int16 v7; // cx
  int v8; // r9d
  __int64 v9; // rbp
  char v10; // si
  int v11; // ebx
  int v12; // r11d
  __int64 v13; // rdx
  _WORD *v14; // r14
  int v15; // r12d
  unsigned __int16 v16; // r9
  unsigned __int16 v17; // r10
  __int64 v18; // rdx
  __int64 v19; // rdi
  int v20; // eax
  int v21; // r12d
  __int64 v22; // r13
  int v23; // eax
  unsigned int v24; // r8d
  unsigned __int16 v25; // cx
  int v26; // eax
  int v27; // edx
  int v28; // eax
  int v29; // r12d
  int v30; // eax
  unsigned int v31; // r8d
  unsigned __int16 v32; // cx
  int v33; // eax
  int v34; // edx
  int v35; // r9d
  int v36; // r11d
  __int64 v37; // r12
  int v38; // ecx
  __int64 v39; // rdx
  __int64 v40; // rbx
  __int64 v41; // r8
  __int64 v42; // r10
  int v43; // ecx
  int v44; // r14d
  char *v45; // r13
  int v46; // edx
  int v47; // r14d
  int v48; // eax
  int v49; // r9d
  int v50; // r15d
  int v51; // edx
  int v52; // r12d
  int v53; // eax
  int v54; // edx
  char *v55; // r8
  unsigned __int64 v56; // r11
  int *v57; // r9
  _DWORD *v58; // r10
  __int64 v59; // rbx
  int v60; // eax
  int v61; // eax
  __int64 result; // rax
  int v63; // eax
  int v64; // eax
  __int64 v65; // rcx
  bool v66; // zf
  __int64 v67; // r10
  int v68; // r14d
  __int64 v69; // rcx
  int v70; // eax
  int fixed; // eax
  int v72; // eax
  int v73; // [rsp+20h] [rbp-D8h]
  int v74; // [rsp+20h] [rbp-D8h]
  int v75; // [rsp+24h] [rbp-D4h]
  __int64 v76; // [rsp+28h] [rbp-D0h]
  int v77; // [rsp+28h] [rbp-D0h]
  __int64 v78; // [rsp+30h] [rbp-C8h]
  __int64 v79; // [rsp+38h] [rbp-C0h]
  __int64 v80; // [rsp+40h] [rbp-B8h]
  int v81; // [rsp+48h] [rbp-B0h]
  int v82; // [rsp+4Ch] [rbp-ACh]
  int v83; // [rsp+50h] [rbp-A8h]
  __int64 v84; // [rsp+58h] [rbp-A0h]
  __int64 v85; // [rsp+60h] [rbp-98h]
  int v86; // [rsp+6Ch] [rbp-8Ch]
  __int64 v87; // [rsp+70h] [rbp-88h]
  int v88; // [rsp+70h] [rbp-88h]
  __int64 v89; // [rsp+78h] [rbp-80h]
  __int64 v90; // [rsp+80h] [rbp-78h]
  __int64 v91; // [rsp+90h] [rbp-68h]
  unsigned __int64 v92; // [rsp+A0h] [rbp-58h]
  __int64 v93; // [rsp+A8h] [rbp-50h]
  char v95; // [rsp+108h] [rbp+10h]
  int v96; // [rsp+108h] [rbp+10h]
  char v97; // [rsp+110h] [rbp+18h]
  int v98; // [rsp+118h] [rbp+20h]

  v95 = a2;
  v2 = qword_1C03294E0;
  v3 = a2;
  v4 = qword_1C03294B0;
  v79 = qword_1C03294B0;
  v5 = *(_BYTE *)(qword_1C03294E0 + 333);
  if ( v5 != 2 )
  {
    if ( v5 || (v6 = qword_1C03294D8, v76 = qword_1C03294D8, qword_1C03294D8 != qword_1C03294B0) )
    {
      result = qword_1C0329538;
      dword_1C0329530 = 4380;
      return result;
    }
    goto LABEL_5;
  }
  v6 = qword_1C03294D8;
  v76 = qword_1C03294D8;
  if ( qword_1C03294B0 != qword_1C03294D8 )
  {
    v7 = *(_WORD *)(qword_1C03294E0 + 452);
    if ( (v7 & 3) == 3 )
    {
      v66 = (v7 & 4) == (a2 & 1);
      v4 = qword_1C03294B0;
      if ( v66 || *(_DWORD *)(qword_1C03294B0 + 96) )
        goto LABEL_5;
      ExecutePhaseControl(&LocalGS, qword_1C03294B0, qword_1C03294D8, a2);
      v6 = qword_1C03294D8;
      v2 = qword_1C03294E0;
      v3 = v95;
      v76 = qword_1C03294D8;
    }
    v4 = v79;
  }
LABEL_5:
  v8 = v3 & 1;
  v9 = *(_QWORD *)(v4 + 72);
  v89 = v9;
  v96 = v8;
  if ( v8 )
  {
    v85 = *(_QWORD *)v4;
    v84 = *(_QWORD *)(v4 + 16);
    if ( *(_BYTE *)(v2 + 397) )
    {
      v78 = *(_QWORD *)(v4 + 16);
      v10 = 1;
    }
    else
    {
      v10 = 1;
      v78 = *(_QWORD *)(v4 + 32);
    }
  }
  else
  {
    v85 = *(_QWORD *)(v4 + 8);
    v84 = *(_QWORD *)(v4 + 24);
    if ( *(_BYTE *)(v2 + 397) )
      v78 = *(_QWORD *)(v4 + 24);
    else
      v78 = *(_QWORD *)(v4 + 40);
    v10 = 2;
  }
  v11 = *(__int16 *)(v4 + 80);
  v12 = v11;
  v97 = v10;
  v86 = 0;
  if ( v11 <= 0 )
  {
LABEL_95:
    *(_WORD *)(v2 + 454) |= 2 - (v8 != 0);
    return a1;
  }
  v13 = 0LL;
  v91 = 0LL;
  while ( 1 )
  {
    v14 = *(_WORD **)(v2 + 344);
    v15 = *(__int16 *)(*(_QWORD *)(v4 + 56) + 2 * v13);
    v16 = v14[6];
    v17 = v14[4];
    v80 = *(_QWORD *)(v4 + 64);
    v18 = *(__int16 *)(v80 + 2 * v13);
    v19 = v18;
    v98 = v15;
    v90 = v18;
    v92 = v78 + 4 * v18;
    if ( v17 <= v16 )
      v20 = v16;
    else
      v20 = v17;
    if ( v20 <= 1 )
    {
      v73 = 1;
    }
    else if ( v17 <= v16 )
    {
      v73 = v16;
    }
    else
    {
      v73 = v17;
    }
    if ( v6 == v4 )
    {
      if ( v15 >= (unsigned __int16)v14[8] || v15 < 0 )
        break;
      v21 = 0;
    }
    else
    {
      if ( v15 >= *(_DWORD *)(v2 + 440) || v15 < 0 )
        break;
      v21 = 4;
    }
    v22 = v6 + 112;
    if ( v4 != v6 + 112 )
      goto LABEL_34;
    v23 = v17 <= v16 ? v16 : v17;
    if ( v23 <= 1 )
      v24 = 1;
    else
      v24 = v17 <= v16 ? v16 : v17;
    v25 = v14[5];
    LOWORD(v26) = v14[3];
    v27 = (unsigned __int16)v26 <= v25 ? v25 : (unsigned __int16)v26;
    if ( v27 <= 1 )
      v26 = 1;
    else
      v26 = (unsigned __int16)v26 <= v25 ? v25 : (unsigned __int16)v26;
    if ( (__int16)v11 < 1
      || v12 > v24
      && (unsigned int)(*(_DWORD *)(v79 + 104) + 12 * (v26 + 8) - *(_DWORD *)(v79 + 64)) < (unsigned __int64)(2LL * (v12 - 1)) )
    {
      break;
    }
    v6 = v76;
    LODWORD(v18) = v19;
LABEL_34:
    if ( (__int16)v11 >= 1 && v12 <= v73 && v98 >= *(__int16 *)(v80 + 2LL * (v12 - 1)) + v21 + 1 )
      break;
    if ( v17 <= v16 )
      v28 = v16;
    else
      v28 = v17;
    if ( v28 <= 1 )
    {
      v74 = 1;
    }
    else if ( v17 <= v16 )
    {
      v74 = v16;
    }
    else
    {
      v74 = v17;
    }
    if ( v6 == v79 )
    {
      if ( (int)v18 >= (unsigned __int16)v14[8] || (int)v18 < 0 )
        break;
      v29 = 0;
    }
    else
    {
      if ( (int)v18 >= *(_DWORD *)(v2 + 440) || (int)v18 < 0 )
        break;
      v29 = 4;
    }
    if ( v79 == v22 )
    {
      if ( v17 <= v16 )
        v30 = v16;
      else
        v30 = v17;
      if ( v30 <= 1 )
      {
        v31 = 1;
      }
      else if ( v17 <= v16 )
      {
        v31 = v16;
      }
      else
      {
        v31 = v17;
      }
      v32 = v14[5];
      LOWORD(v33) = v14[3];
      if ( (unsigned __int16)v33 <= v32 )
        v34 = v32;
      else
        v34 = (unsigned __int16)v33;
      if ( v34 <= 1 )
      {
        v33 = 1;
      }
      else if ( (unsigned __int16)v33 <= v32 )
      {
        v33 = v32;
      }
      else
      {
        v33 = (unsigned __int16)v33;
      }
      if ( (__int16)v11 < 1
        || v12 > v31
        && (unsigned int)(*(_DWORD *)(v79 + 104) + 12 * (v33 + 8) - *(_DWORD *)(v79 + 64)) < (unsigned __int64)(2LL * (v12 - 1)) )
      {
        break;
      }
      v6 = v76;
      LODWORD(v18) = v19;
    }
    if ( (__int16)v11 >= 1 && v12 <= v74 && (int)v18 >= *(__int16 *)(v80 + 2LL * (v12 - 1)) + v29 + 1 )
      break;
    v35 = v98;
    v36 = v98;
    v37 = v98;
    if ( ((unsigned __int8)v10 & *(_BYTE *)(v98 + v9)) == 0 )
    {
      v65 = v98;
      do
      {
        if ( v65 > v19 )
          break;
        ++v65;
        ++v36;
      }
      while ( ((unsigned __int8)v10 & *(_BYTE *)(v65 + v9)) == 0 );
    }
    if ( v36 <= (int)v18 )
    {
      v38 = v36;
      v39 = v36;
      v77 = v36;
      v93 = v36;
      do
      {
        v40 = v36;
        do
        {
          v41 = v36;
          ++v40;
          ++v36;
          if ( v40 > v19 )
          {
            v36 = v35;
            v40 = v37;
          }
        }
        while ( ((unsigned __int8)v10 & *(_BYTE *)(v40 + v9)) != 0 && v40 != v39 );
        if ( v36 == v38 )
          break;
        v42 = v36;
        v43 = v36;
        v87 = v36;
        do
        {
          ++v43;
          if ( ++v42 > v19 )
          {
            v43 = v35;
            v42 = v37;
          }
        }
        while ( ((unsigned __int8)v10 & *(_BYTE *)(v42 + v9)) == 0 );
        v44 = *(_DWORD *)(v78 + 4LL * v43);
        v45 = (char *)(v78 + 4LL * v43);
        v46 = *(_DWORD *)(v78 + 4 * v41);
        if ( v46 < v44 )
        {
          v48 = v41;
          v75 = *(_DWORD *)(v78 + 4 * v41);
          LODWORD(v41) = v43;
          v47 = v44 - v46;
        }
        else
        {
          v75 = *(_DWORD *)(v78 + 4LL * v43);
          v47 = v46 - v44;
          v48 = v43;
        }
        v49 = *(_DWORD *)(v85 + 4LL * v48);
        v50 = *(_DWORD *)(v84 + 4LL * v48);
        v81 = v49;
        v82 = v49 - v50;
        if ( !v47 )
        {
          while ( v40 != v42 )
          {
            *(_DWORD *)(v85 + 4 * v40) += v49 - v50;
            if ( v40 >= v19 )
            {
              v36 = v98;
              v40 = v37;
            }
            else
            {
              ++v36;
              ++v40;
            }
          }
          goto LABEL_91;
        }
        v51 = *(_DWORD *)(v85 + 4LL * (int)v41);
        v52 = *(_DWORD *)(v84 + 4LL * (int)v41);
        v53 = v51 - v52;
        v54 = v51 - v49;
        v83 = v53;
        if ( v54 < 0x8000 && v47 < 0x8000 )
        {
          v55 = (char *)(v78 + 4LL * v36);
          v56 = (unsigned __int64)(v45 - v55 + 3) >> 2;
          v57 = (int *)(v84 + 4 * v87);
          v58 = (_DWORD *)(v85 + 4 * v87);
          v88 = v47 >> 1;
          v59 = 0LL;
          if ( v55 > v45 )
            v56 = 0LL;
          if ( !v56 )
            goto LABEL_88;
          while ( 1 )
          {
            v60 = *v57;
            if ( *v57 <= v50 )
            {
              if ( v60 >= v52 )
              {
LABEL_98:
                v61 = v83 + v60;
                goto LABEL_86;
              }
              v61 = v82 + v60;
            }
            else
            {
              if ( v60 >= v52 )
                goto LABEL_98;
              v61 = v81 + (v88 + v54 * (*(_DWORD *)v55 - v75)) / v47;
            }
LABEL_86:
            *v58 = v61;
            ++v57;
            ++v58;
            v55 += 4;
            if ( ++v59 >= v56 )
            {
              v19 = v90;
              v10 = v97;
              v9 = v89;
              v45 = (char *)(v78 + 4LL * v43);
LABEL_88:
              if ( v55 == v45 )
                goto LABEL_89;
              while ( 2 )
              {
                v63 = *v57;
                if ( *v57 <= v50 )
                {
                  if ( v63 >= v52 )
                    goto LABEL_111;
                  v64 = v82 + v63;
                }
                else
                {
                  if ( v63 < v52 )
                  {
                    v64 = v81 + (v88 + v54 * (*(_DWORD *)v55 - v75)) / v47;
                    goto LABEL_105;
                  }
LABEL_111:
                  v64 = v83 + v63;
                }
LABEL_105:
                *v58 = v64;
                v55 += 4;
                ++v58;
                ++v57;
                if ( (unsigned __int64)v55 > v92 )
                {
                  v55 = (char *)(v78 + 4LL * v98);
                  v57 = (int *)(v84 + 4LL * v98);
                  v58 = (_DWORD *)(v85 + 4LL * v98);
                }
                if ( v55 == v45 )
                {
                  v19 = v90;
                  v10 = v97;
                  v9 = v89;
LABEL_89:
                  v36 = v43;
LABEL_90:
                  v37 = v98;
                  goto LABEL_91;
                }
                continue;
              }
            }
          }
        }
        v68 = CompDiv((unsigned int)v47, (__int64)v54 << 16);
        if ( v40 == v67 )
          goto LABEL_90;
        v69 = v85;
        do
        {
          v70 = *(_DWORD *)(v84 + 4 * v40);
          if ( v70 <= v50 )
          {
            v72 = v82 + v70;
          }
          else if ( v70 >= v52 )
          {
            v72 = v83 + v70;
          }
          else
          {
            fixed = FixMul(*(_DWORD *)(v78 + 4 * v40) - v75, v68);
            v69 = v85;
            v72 = v81 + fixed;
          }
          *(_DWORD *)(v69 + 4 * v40) = v72;
          if ( v40 >= v19 )
          {
            v36 = v98;
            v40 = v98;
          }
          else
          {
            ++v36;
            ++v40;
          }
        }
        while ( v40 != v67 );
        v10 = v97;
        v37 = v98;
        v9 = v89;
LABEL_91:
        v38 = v77;
        v39 = v93;
        v35 = v98;
      }
      while ( v36 != v77 );
      v6 = qword_1C03294D8;
      v2 = qword_1C03294E0;
      v76 = qword_1C03294D8;
    }
    v4 = v79;
    v13 = v91 + 1;
    ++v86;
    ++v91;
    v11 = *(__int16 *)(v79 + 80);
    v12 = v11;
    if ( v86 >= v11 )
    {
      v8 = v96;
      goto LABEL_95;
    }
  }
  result = qword_1C0329538;
  dword_1C0329530 = 4370;
  return result;
}
