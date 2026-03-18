/*
 * XREFs of itrp_IP @ 0x1C00B65B0
 * Callers:
 *     <none>
 * Callees:
 *     InvokeProject @ 0x1C00B652C (InvokeProject.c)
 *     CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND @ 0x1C00B7030 (CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND.c)
 *     AddProportion @ 0x1C00B7AAC (AddProportion.c)
 *     InvokeMovePoint @ 0x1C00B80C8 (InvokeMovePoint.c)
 *     CompDiv @ 0x1C00DA168 (CompDiv.c)
 */

__int64 __fastcall itrp_IP(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rbx
  __int64 v3; // rsi
  __int64 v4; // r12
  __int64 v5; // r15
  __int64 v6; // r13
  _WORD *v7; // rax
  unsigned __int16 v8; // bp
  unsigned __int16 v9; // r14
  int v10; // ecx
  __int16 v11; // cx
  int v12; // eax
  int v13; // ebp
  int v14; // r14d
  __int16 v15; // cx
  unsigned int *v16; // r14
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r8
  int v20; // edi
  int v21; // r9d
  unsigned int v22; // r15d
  __int64 v23; // rax
  unsigned int v24; // r15d
  __int64 v25; // rsi
  _WORD *v26; // r8
  __int64 v27; // rdi
  unsigned __int16 v28; // ax
  unsigned __int16 v29; // cx
  int v30; // edx
  int v31; // ecx
  __int64 result; // rax
  unsigned int v33; // r15d
  __int64 v34; // rsi
  _WORD *v35; // rdx
  __int64 v36; // rbx
  unsigned __int16 v37; // ax
  unsigned __int16 v38; // cx
  int v39; // r8d
  int v40; // ecx
  int v41; // ebx
  int v42; // esi
  _WORD *v43; // r8
  __int64 v44; // rdi
  unsigned __int16 v45; // cx
  unsigned __int16 v46; // dx
  int v47; // r9d
  int v48; // ecx
  __int64 v49; // rdi
  int v50; // eax
  int v51; // ebx
  int v52; // eax
  int v53; // esi
  unsigned int v54; // r15d
  _WORD *v55; // r8
  __int64 v56; // rbx
  unsigned __int16 v57; // ax
  unsigned __int16 v58; // cx
  int v59; // r9d
  int v60; // ecx
  __int64 v61; // rbx
  int v62; // edi
  int v63; // eax
  int v64; // [rsp+30h] [rbp-98h]
  unsigned int v65; // [rsp+30h] [rbp-98h]
  int v66; // [rsp+30h] [rbp-98h]
  int v67; // [rsp+30h] [rbp-98h]
  int v68; // [rsp+34h] [rbp-94h]
  int v69; // [rsp+34h] [rbp-94h]
  int v70; // [rsp+34h] [rbp-94h]
  int v71; // [rsp+34h] [rbp-94h]
  int v72; // [rsp+34h] [rbp-94h]
  int v73; // [rsp+38h] [rbp-90h]
  int v74; // [rsp+38h] [rbp-90h]
  int v75; // [rsp+3Ch] [rbp-8Ch]
  int v76; // [rsp+40h] [rbp-88h]
  _WORD *v77; // [rsp+48h] [rbp-80h]
  __int64 v78; // [rsp+48h] [rbp-80h]
  __int64 v79; // [rsp+48h] [rbp-80h]
  unsigned int v80; // [rsp+50h] [rbp-78h]
  unsigned int v81; // [rsp+50h] [rbp-78h]
  __int64 v82; // [rsp+58h] [rbp-70h]
  __int64 v83; // [rsp+58h] [rbp-70h]
  int v84; // [rsp+60h] [rbp-68h]
  __int64 v85; // [rsp+68h] [rbp-60h]
  __int64 v86; // [rsp+68h] [rbp-60h]
  __int64 v87; // [rsp+70h] [rbp-58h]
  __int64 v88; // [rsp+70h] [rbp-58h]
  int v90; // [rsp+D8h] [rbp+10h]
  int v91; // [rsp+D8h] [rbp+10h]
  int v92; // [rsp+E0h] [rbp+18h]
  int v93; // [rsp+E0h] [rbp+18h]
  int v94; // [rsp+E0h] [rbp+18h]
  int v95; // [rsp+E0h] [rbp+18h]
  int v96; // [rsp+E8h] [rbp+20h]
  int v97; // [rsp+E8h] [rbp+20h]
  int v98; // [rsp+E8h] [rbp+20h]

  v1 = qword_1C0323E30;
  v2 = LocalGS;
  v3 = qword_1C0323DF8;
  v4 = qword_1C0323E00;
  v5 = qword_1C0323E28;
  v6 = SHIDWORD(qword_1C0323E40);
  v90 = dword_1C0323E50 + 1;
  v64 = dword_1C0323E48;
  v7 = *(_WORD **)(qword_1C0323E30 + 344);
  v77 = v7;
  v8 = v7[4];
  v9 = v7[6];
  if ( v8 <= v9 )
    v10 = v9;
  else
    v10 = v8;
  if ( v10 <= 1 )
  {
    v92 = 1;
  }
  else if ( v8 <= v9 )
  {
    v92 = v9;
  }
  else
  {
    v92 = v8;
  }
  if ( qword_1C0323E28 == LocalGS )
  {
    if ( SHIDWORD(qword_1C0323E40) >= (unsigned __int16)v7[8] || qword_1C0323E40 < 0 )
      goto LABEL_163;
    v96 = 0;
  }
  else
  {
    if ( SHIDWORD(qword_1C0323E40) >= *(_DWORD *)(qword_1C0323E30 + 440) || qword_1C0323E40 < 0 )
      goto LABEL_163;
    v96 = 4;
  }
  if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND(&LocalGS, LocalGS) )
    goto LABEL_163;
  v11 = *(_WORD *)(v2 + 80);
  if ( v11 >= 1 && v11 <= v92 && (int)v6 >= *(__int16 *)(*(_QWORD *)(v2 + 64) + 2LL * v11 - 2) + v96 + 1 )
    goto LABEL_163;
  v12 = v8 <= v9 ? v9 : v8;
  if ( v12 <= 1 )
    v93 = 1;
  else
    v93 = v8 <= v9 ? v9 : v8;
  v13 = v64;
  if ( v5 == v3 )
  {
    if ( v64 >= (unsigned __int16)v77[8] || v64 < 0 )
      goto LABEL_163;
    v14 = 0;
  }
  else
  {
    if ( v64 >= *(_DWORD *)(v1 + 440) || v64 < 0 )
      goto LABEL_163;
    v14 = 4;
  }
  if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND(&LocalGS, v3)
    || (v15 = *(_WORD *)(v3 + 80), v15 >= 1)
    && v15 <= v93
    && v64 >= v14 + *(__int16 *)(*(_QWORD *)(v3 + 64) + 2LL * v15 - 2) + 1 )
  {
LABEL_163:
    dword_1C0323E80 = 4370;
    return qword_1C0323E88;
  }
  v16 = (unsigned int *)qword_1C0323E18;
  v68 = dword_1C0323E5C;
  v75 = dword_1C0323E60;
  if ( (v1 ^ *(_QWORD *)v1 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(v1 + 424)) != *(_QWORD *)(v1 + 432)
    || v90 > (unsigned __int64)((qword_1C0323E18 - *(_QWORD *)v1) >> 2) )
  {
    dword_1C0323E80 = 4368;
    return qword_1C0323E88;
  }
  if ( v2 == v5 || v3 == v5 || v4 == v5 || *(_BYTE *)(v1 + 397) )
  {
    v17 = 4 * v6;
    v18 = *(_QWORD *)(v3 + 16);
    v19 = *(_QWORD *)(v3 + 24);
    v20 = *(_DWORD *)(4 * v6 + *(_QWORD *)(v2 + 16));
    v21 = *(_DWORD *)(4 * v6 + *(_QWORD *)(v2 + 24));
    v78 = *(_QWORD *)(v4 + 16);
    v82 = *(_QWORD *)(v4 + 24);
  }
  else
  {
    v17 = 4 * v6;
    v18 = *(_QWORD *)(v3 + 32);
    v19 = *(_QWORD *)(v3 + 40);
    v20 = *(_DWORD *)(4 * v6 + *(_QWORD *)(v2 + 32));
    v78 = *(_QWORD *)(v4 + 32);
    v82 = *(_QWORD *)(v4 + 40);
    v21 = *(_DWORD *)(4 * v6 + *(_QWORD *)(v2 + 40));
  }
  v76 = v21;
  v73 = v20;
  v97 = *(_DWORD *)(v17 + *(_QWORD *)v2);
  v94 = *(_DWORD *)(v17 + *(_QWORD *)(v2 + 8));
  v65 = InvokeProject(dword_1C0323E64, *(_DWORD *)(4LL * v64 + v18) - v20, *(_DWORD *)(4LL * v64 + v19) - v21);
  if ( v65 )
  {
    v22 = v68;
    if ( v68 == 2 )
    {
      v70 = *(_DWORD *)(*(_QWORD *)v3 + 4LL * v13) - v97;
      if ( v90 )
      {
        v33 = v65;
        do
        {
          v34 = qword_1C0323E30;
          --v16;
          v35 = *(_WORD **)(qword_1C0323E30 + 344);
          v36 = (int)*v16;
          v37 = v35[4];
          v38 = v35[6];
          if ( v37 <= v38 )
            v39 = v38;
          else
            v39 = v37;
          if ( v39 <= 1 )
          {
            v95 = 1;
          }
          else if ( v37 <= v38 )
          {
            v95 = v38;
          }
          else
          {
            v95 = v37;
          }
          v83 = qword_1C0323E28;
          if ( qword_1C0323E28 == v4 )
          {
            if ( (int)v36 >= (unsigned __int16)v35[8] || (int)v36 < 0 )
              goto LABEL_163;
            v67 = 0;
          }
          else
          {
            if ( (int)v36 >= *(_DWORD *)(qword_1C0323E30 + 440) || (int)v36 < 0 )
              goto LABEL_163;
            v67 = 4;
          }
          if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND(&LocalGS, v4) )
            goto LABEL_163;
          v40 = *(unsigned __int16 *)(v4 + 80);
          if ( (__int16)v40 >= 1 && (__int16)v40 <= v95 )
          {
            v40 = *(__int16 *)(*(_QWORD *)(v4 + 64) + 2LL * (__int16)v40 - 2);
            if ( (int)v36 >= v40 + v67 + 1 )
              goto LABEL_163;
          }
          if ( word_1C0323EA4 && v4 != v83 && *(_BYTE *)(v34 + 333) == 2 && (*(_BYTE *)(v34 + 452) & 2) != 0 )
            AddProportion(v40, v4, v6, v36, v13);
          *(_DWORD *)(*(_QWORD *)v4 + 4 * v36) = CompDiv(v33, v70 * (__int64)(*(_DWORD *)(v78 + 4 * v36) - v20)) + v97;
          *(_BYTE *)(*(_QWORD *)(v4 + 72) + v36) |= 1u;
          --v90;
        }
        while ( v90 );
      }
    }
    else
    {
      v23 = *(_QWORD *)(v3 + 8);
      if ( v68 == 3 )
      {
        v69 = *(_DWORD *)(v23 + 4LL * v13) - v94;
        if ( v90 )
        {
          v24 = v65;
          do
          {
            v25 = qword_1C0323E30;
            --v16;
            v26 = *(_WORD **)(qword_1C0323E30 + 344);
            v27 = (int)*v16;
            v28 = v26[4];
            v29 = v26[6];
            if ( v28 <= v29 )
              v30 = v29;
            else
              v30 = v28;
            if ( v30 <= 1 )
            {
              v98 = 1;
            }
            else if ( v28 <= v29 )
            {
              v98 = v29;
            }
            else
            {
              v98 = v28;
            }
            v79 = qword_1C0323E28;
            if ( qword_1C0323E28 == v4 )
            {
              if ( (int)v27 >= (unsigned __int16)v26[8] || (int)v27 < 0 )
                goto LABEL_163;
              v66 = 0;
            }
            else
            {
              if ( (int)v27 >= *(_DWORD *)(qword_1C0323E30 + 440) || (int)v27 < 0 )
                goto LABEL_163;
              v66 = 4;
            }
            if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND(&LocalGS, v4) )
              goto LABEL_163;
            v31 = *(unsigned __int16 *)(v4 + 80);
            if ( (__int16)v31 >= 1 && (__int16)v31 <= v98 )
            {
              v31 = *(__int16 *)(*(_QWORD *)(v4 + 64) + 2LL * (__int16)v31 - 2);
              if ( (int)v27 >= v31 + v66 + 1 )
                goto LABEL_163;
            }
            if ( word_1C0323EA4 && v4 != v79 && *(_BYTE *)(v25 + 333) == 2 && (*(_BYTE *)(v25 + 452) & 2) != 0 )
              AddProportion(v31, v4, v6, v27, v13);
            *(_DWORD *)(*(_QWORD *)(v4 + 8) + 4 * v27) = CompDiv(v24, v69 * (__int64)(*(_DWORD *)(v82 + 4 * v27) - v76))
                                                       + v94;
            *(_BYTE *)(*(_QWORD *)(v4 + 72) + v27) |= 2u;
            --v90;
          }
          while ( v90 );
        }
      }
      else
      {
        v41 = v75;
        v84 = InvokeProject(v75, *(_DWORD *)(*(_QWORD *)v3 + 4LL * v13) - v97, *(_DWORD *)(v23 + 4LL * v13) - v94);
        if ( v90 )
        {
          v42 = v20;
          while ( 1 )
          {
            --v16;
            v87 = qword_1C0323E30;
            v43 = *(_WORD **)(qword_1C0323E30 + 344);
            v44 = (int)*v16;
            v80 = *v16;
            v45 = v43[4];
            v46 = v43[6];
            v47 = v45 <= v46 ? v46 : v45;
            if ( v47 <= 1 )
              v74 = 1;
            else
              v74 = v45 <= v46 ? v46 : v45;
            v85 = qword_1C0323E28;
            if ( qword_1C0323E28 == v4 )
            {
              if ( (int)v44 >= (unsigned __int16)v43[8] || (int)v44 < 0 )
                goto LABEL_163;
              v71 = 0;
            }
            else
            {
              if ( (int)v44 >= *(_DWORD *)(qword_1C0323E30 + 440) || (int)v44 < 0 )
                goto LABEL_163;
              v71 = 4;
            }
            if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND(&LocalGS, v4) )
              goto LABEL_163;
            v48 = *(unsigned __int16 *)(v4 + 80);
            if ( (__int16)v48 >= 1 && (__int16)v48 <= v74 )
            {
              v48 = *(__int16 *)(*(_QWORD *)(v4 + 64) + 2LL * (__int16)v48 - 2);
              if ( (int)v44 >= v48 + v71 + 1 )
                goto LABEL_163;
            }
            if ( v4 != v85 && word_1C0323EA4 && *(_BYTE *)(v87 + 333) == 2 && (*(_BYTE *)(v87 + 452) & 2) != 0 )
              AddProportion(v48, v4, v6, v44, v13);
            v49 = 4 * v44;
            v50 = InvokeProject(v41, *(_DWORD *)(v49 + v78) - v42, *(_DWORD *)(v49 + v82) - v76);
            v51 = CompDiv(v65, v84 * (__int64)v50);
            v52 = InvokeProject(
                    v75,
                    *(_DWORD *)(*(_QWORD *)v4 + v49) - v97,
                    *(_DWORD *)(*(_QWORD *)(v4 + 8) + v49) - v94);
            InvokeMovePoint(v22, v4, v80, (unsigned int)(v51 - v52));
            if ( !--v90 )
              break;
            v41 = v75;
          }
        }
      }
    }
  }
  else
  {
    v53 = v90;
    if ( v90 )
    {
      v54 = v68;
      while ( 1 )
      {
        --v16;
        v86 = qword_1C0323E30;
        v55 = *(_WORD **)(qword_1C0323E30 + 344);
        v56 = (int)*v16;
        v81 = *v16;
        v57 = v55[4];
        v58 = v55[6];
        v59 = v57 <= v58 ? v58 : v57;
        if ( v59 <= 1 )
          v91 = 1;
        else
          v91 = v57 <= v58 ? v58 : v57;
        v88 = qword_1C0323E28;
        if ( qword_1C0323E28 == v4 )
        {
          if ( (int)v56 >= (unsigned __int16)v55[8] || (int)v56 < 0 )
            goto LABEL_163;
          v72 = 0;
        }
        else
        {
          if ( (int)v56 >= *(_DWORD *)(qword_1C0323E30 + 440) || (int)v56 < 0 )
            goto LABEL_163;
          v72 = 4;
        }
        if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND(&LocalGS, v4) )
          goto LABEL_163;
        v60 = *(unsigned __int16 *)(v4 + 80);
        if ( (__int16)v60 >= 1 && (__int16)v60 <= v91 )
        {
          v60 = *(__int16 *)(*(_QWORD *)(v4 + 64) + 2LL * (__int16)v60 - 2);
          if ( (int)v56 >= v60 + v72 + 1 )
            goto LABEL_163;
        }
        if ( v4 != v88 && word_1C0323EA4 && *(_BYTE *)(v86 + 333) == 2 && (*(_BYTE *)(v86 + 452) & 2) != 0 )
          AddProportion(v60, v4, v6, v56, v13);
        v61 = 4 * v56;
        v62 = InvokeProject(v75, *(_DWORD *)(v61 + v78) - v20, *(_DWORD *)(v61 + v82) - v76);
        v63 = InvokeProject(v75, *(_DWORD *)(*(_QWORD *)v4 + v61) - v97, *(_DWORD *)(*(_QWORD *)(v4 + 8) + v61) - v94);
        InvokeMovePoint(v54, v4, v81, (unsigned int)(v62 - v63));
        if ( !--v53 )
          break;
        v20 = v73;
      }
    }
  }
  result = a1;
  qword_1C0323E18 = (__int64)v16;
  dword_1C0323E50 = 0;
  return result;
}
