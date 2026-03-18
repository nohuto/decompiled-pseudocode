/*
 * XREFs of itrp_IP @ 0x1C00CE690
 * Callers:
 *     <none>
 * Callees:
 *     InvokeProject @ 0x1C00CE60C (InvokeProject.c)
 *     CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND @ 0x1C00CF110 (CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND.c)
 *     AddProportion @ 0x1C00CFA40 (AddProportion.c)
 *     InvokeMovePoint @ 0x1C00D0084 (InvokeMovePoint.c)
 *     CompDiv @ 0x1C00F85F4 (CompDiv.c)
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
  __int16 v11; // ax
  int v12; // eax
  int v13; // ebp
  int v14; // r14d
  __int16 v15; // ax
  unsigned int *v16; // r14
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r8
  int v20; // r9d
  int v21; // edi
  unsigned int v22; // r15d
  __int64 v23; // rax
  unsigned int v24; // r15d
  __int64 v25; // rsi
  _WORD *v26; // r8
  __int64 v27; // rbx
  unsigned __int16 v28; // ax
  unsigned __int16 v29; // cx
  int v30; // edx
  int v31; // ecx
  __int16 v32; // ax
  __int64 result; // rax
  unsigned int v34; // r15d
  __int64 v35; // rsi
  _WORD *v36; // r8
  __int64 v37; // rdi
  unsigned __int16 v38; // ax
  unsigned __int16 v39; // cx
  int v40; // edx
  int v41; // ecx
  __int16 v42; // ax
  int v43; // ebx
  int v44; // esi
  _WORD *v45; // r8
  __int64 v46; // rdi
  unsigned __int16 v47; // cx
  unsigned __int16 v48; // dx
  int v49; // r9d
  int v50; // ecx
  __int16 v51; // ax
  __int64 v52; // rdi
  int v53; // eax
  int v54; // ebx
  int v55; // eax
  int v56; // esi
  unsigned int v57; // r15d
  _WORD *v58; // r8
  __int64 v59; // rbx
  unsigned __int16 v60; // ax
  unsigned __int16 v61; // cx
  int v62; // r9d
  int v63; // ecx
  __int16 v64; // ax
  __int64 v65; // rbx
  int v66; // edi
  int v67; // eax
  int v68; // [rsp+30h] [rbp-98h]
  unsigned int v69; // [rsp+30h] [rbp-98h]
  int v70; // [rsp+30h] [rbp-98h]
  int v71; // [rsp+30h] [rbp-98h]
  int v72; // [rsp+34h] [rbp-94h]
  int v73; // [rsp+34h] [rbp-94h]
  int v74; // [rsp+34h] [rbp-94h]
  int v75; // [rsp+34h] [rbp-94h]
  int v76; // [rsp+34h] [rbp-94h]
  int v77; // [rsp+38h] [rbp-90h]
  int v78; // [rsp+38h] [rbp-90h]
  int v79; // [rsp+3Ch] [rbp-8Ch]
  int v80; // [rsp+40h] [rbp-88h]
  _WORD *v81; // [rsp+48h] [rbp-80h]
  __int64 v82; // [rsp+48h] [rbp-80h]
  __int64 v83; // [rsp+48h] [rbp-80h]
  unsigned int v84; // [rsp+50h] [rbp-78h]
  unsigned int v85; // [rsp+50h] [rbp-78h]
  __int64 v86; // [rsp+58h] [rbp-70h]
  __int64 v87; // [rsp+58h] [rbp-70h]
  int v88; // [rsp+60h] [rbp-68h]
  __int64 v89; // [rsp+68h] [rbp-60h]
  __int64 v90; // [rsp+68h] [rbp-60h]
  __int64 v91; // [rsp+70h] [rbp-58h]
  __int64 v92; // [rsp+70h] [rbp-58h]
  int v94; // [rsp+D8h] [rbp+10h]
  int v95; // [rsp+D8h] [rbp+10h]
  int v96; // [rsp+E0h] [rbp+18h]
  int v97; // [rsp+E0h] [rbp+18h]
  int v98; // [rsp+E0h] [rbp+18h]
  int v99; // [rsp+E0h] [rbp+18h]
  int v100; // [rsp+E8h] [rbp+20h]
  int v101; // [rsp+E8h] [rbp+20h]
  int v102; // [rsp+E8h] [rbp+20h]

  v1 = qword_1C03294E0;
  v2 = LocalGS;
  v3 = qword_1C03294A8;
  v4 = qword_1C03294B0;
  v5 = qword_1C03294D8;
  v6 = SHIDWORD(qword_1C03294F0);
  v94 = dword_1C0329500 + 1;
  v68 = dword_1C03294F8;
  v7 = *(_WORD **)(qword_1C03294E0 + 344);
  v81 = v7;
  v8 = v7[4];
  v9 = v7[6];
  if ( v8 <= v9 )
    v10 = v9;
  else
    v10 = v8;
  if ( v10 <= 1 )
  {
    v96 = 1;
  }
  else if ( v8 <= v9 )
  {
    v96 = v9;
  }
  else
  {
    v96 = v8;
  }
  if ( qword_1C03294D8 == LocalGS )
  {
    if ( SHIDWORD(qword_1C03294F0) >= (unsigned __int16)v7[8] || qword_1C03294F0 < 0 )
      goto LABEL_163;
    v100 = 0;
  }
  else
  {
    if ( SHIDWORD(qword_1C03294F0) >= *(_DWORD *)(qword_1C03294E0 + 440) || qword_1C03294F0 < 0 )
      goto LABEL_163;
    v100 = 4;
  }
  if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND(&LocalGS, LocalGS) )
    goto LABEL_163;
  v11 = *(_WORD *)(v2 + 80);
  if ( v11 >= 1 && v11 <= v96 && (int)v6 >= *(__int16 *)(*(_QWORD *)(v2 + 64) + 2LL * (v11 - 1)) + v100 + 1 )
    goto LABEL_163;
  v12 = v8 <= v9 ? v9 : v8;
  if ( v12 <= 1 )
    v97 = 1;
  else
    v97 = v8 <= v9 ? v9 : v8;
  v13 = v68;
  if ( v5 == v3 )
  {
    if ( v68 >= (unsigned __int16)v81[8] || v68 < 0 )
      goto LABEL_163;
    v14 = 0;
  }
  else
  {
    if ( v68 >= *(_DWORD *)(v1 + 440) || v68 < 0 )
      goto LABEL_163;
    v14 = 4;
  }
  if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND(&LocalGS, v3)
    || (v15 = *(_WORD *)(v3 + 80), v15 >= 1)
    && v15 <= v97
    && v68 >= v14 + *(__int16 *)(*(_QWORD *)(v3 + 64) + 2LL * (v15 - 1)) + 1 )
  {
LABEL_163:
    dword_1C0329530 = 4370;
    return qword_1C0329538;
  }
  v16 = (unsigned int *)qword_1C03294C8;
  v72 = dword_1C032950C;
  v79 = dword_1C0329510;
  if ( (v1 ^ *(_QWORD *)v1 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(v1 + 424)) != *(_QWORD *)(v1 + 432)
    || v94 > (unsigned __int64)((qword_1C03294C8 - *(_QWORD *)v1) >> 2) )
  {
    dword_1C0329530 = 4368;
    return qword_1C0329538;
  }
  if ( v2 == v5 || v3 == v5 || v4 == v5 || *(_BYTE *)(v1 + 397) )
  {
    v17 = 4 * v6;
    v18 = *(_QWORD *)(v3 + 16);
    v19 = *(_QWORD *)(v3 + 24);
    v20 = *(_DWORD *)(4 * v6 + *(_QWORD *)(v2 + 16));
    v21 = *(_DWORD *)(4 * v6 + *(_QWORD *)(v2 + 24));
    v82 = *(_QWORD *)(v4 + 16);
    v86 = *(_QWORD *)(v4 + 24);
  }
  else
  {
    v17 = 4 * v6;
    v18 = *(_QWORD *)(v3 + 32);
    v19 = *(_QWORD *)(v3 + 40);
    v20 = *(_DWORD *)(4 * v6 + *(_QWORD *)(v2 + 32));
    v86 = *(_QWORD *)(v4 + 40);
    v21 = *(_DWORD *)(4 * v6 + *(_QWORD *)(v2 + 40));
    v82 = *(_QWORD *)(v4 + 32);
  }
  v77 = v21;
  v80 = v20;
  v101 = *(_DWORD *)(v17 + *(_QWORD *)v2);
  v98 = *(_DWORD *)(v17 + *(_QWORD *)(v2 + 8));
  v69 = InvokeProject(dword_1C0329514, *(_DWORD *)(4LL * v68 + v18) - v20, *(_DWORD *)(4LL * v68 + v19) - v21);
  if ( v69 )
  {
    v22 = v72;
    if ( v72 == 2 )
    {
      v74 = *(_DWORD *)(*(_QWORD *)v3 + 4LL * v13) - v101;
      if ( v94 )
      {
        v34 = v69;
        do
        {
          v35 = qword_1C03294E0;
          --v16;
          v36 = *(_WORD **)(qword_1C03294E0 + 344);
          v37 = (int)*v16;
          v38 = v36[4];
          v39 = v36[6];
          if ( v38 <= v39 )
            v40 = v39;
          else
            v40 = v38;
          if ( v40 <= 1 )
          {
            v99 = 1;
          }
          else if ( v38 <= v39 )
          {
            v99 = v39;
          }
          else
          {
            v99 = v38;
          }
          v87 = qword_1C03294D8;
          if ( qword_1C03294D8 == v4 )
          {
            if ( (int)v37 >= (unsigned __int16)v36[8] || (int)v37 < 0 )
              goto LABEL_163;
            v71 = 0;
          }
          else
          {
            if ( (int)v37 >= *(_DWORD *)(qword_1C03294E0 + 440) || (int)v37 < 0 )
              goto LABEL_163;
            v71 = 4;
          }
          if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND(&LocalGS, v4) )
            goto LABEL_163;
          v42 = *(_WORD *)(v4 + 80);
          if ( v42 >= 1 && v42 <= v99 )
          {
            v41 = *(__int16 *)(*(_QWORD *)(v4 + 64) + 2LL * (v42 - 1));
            if ( (int)v37 >= v41 + v71 + 1 )
              goto LABEL_163;
          }
          if ( word_1C0329554 && v4 != v87 && *(_BYTE *)(v35 + 333) == 2 && (*(_BYTE *)(v35 + 452) & 2) != 0 )
            AddProportion(v41, v4, v6, v37, v13);
          *(_DWORD *)(*(_QWORD *)v4 + 4 * v37) = CompDiv(v34, v74 * (__int64)(*(_DWORD *)(v82 + 4 * v37) - v80)) + v101;
          *(_BYTE *)(*(_QWORD *)(v4 + 72) + v37) |= 1u;
          --v94;
        }
        while ( v94 );
      }
    }
    else
    {
      v23 = *(_QWORD *)(v3 + 8);
      if ( v72 == 3 )
      {
        v73 = *(_DWORD *)(v23 + 4LL * v13) - v98;
        if ( v94 )
        {
          v24 = v69;
          do
          {
            v25 = qword_1C03294E0;
            --v16;
            v26 = *(_WORD **)(qword_1C03294E0 + 344);
            v27 = (int)*v16;
            v28 = v26[4];
            v29 = v26[6];
            if ( v28 <= v29 )
              v30 = v29;
            else
              v30 = v28;
            if ( v30 <= 1 )
            {
              v102 = 1;
            }
            else if ( v28 <= v29 )
            {
              v102 = v29;
            }
            else
            {
              v102 = v28;
            }
            v83 = qword_1C03294D8;
            if ( qword_1C03294D8 == v4 )
            {
              if ( (int)v27 >= (unsigned __int16)v26[8] || (int)v27 < 0 )
                goto LABEL_163;
              v70 = 0;
            }
            else
            {
              if ( (int)v27 >= *(_DWORD *)(qword_1C03294E0 + 440) || (int)v27 < 0 )
                goto LABEL_163;
              v70 = 4;
            }
            if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND(&LocalGS, v4) )
              goto LABEL_163;
            v32 = *(_WORD *)(v4 + 80);
            if ( v32 >= 1 && v32 <= v102 )
            {
              v31 = *(__int16 *)(*(_QWORD *)(v4 + 64) + 2LL * (v32 - 1));
              if ( (int)v27 >= v31 + v70 + 1 )
                goto LABEL_163;
            }
            if ( word_1C0329554 && v4 != v83 && *(_BYTE *)(v25 + 333) == 2 && (*(_BYTE *)(v25 + 452) & 2) != 0 )
              AddProportion(v31, v4, v6, v27, v13);
            *(_DWORD *)(*(_QWORD *)(v4 + 8) + 4 * v27) = CompDiv(v24, v73 * (__int64)(*(_DWORD *)(v86 + 4 * v27) - v21))
                                                       + v98;
            *(_BYTE *)(*(_QWORD *)(v4 + 72) + v27) |= 2u;
            --v94;
          }
          while ( v94 );
        }
      }
      else
      {
        v43 = v79;
        v88 = InvokeProject(v79, *(_DWORD *)(*(_QWORD *)v3 + 4LL * v13) - v101, *(_DWORD *)(v23 + 4LL * v13) - v98);
        if ( v94 )
        {
          v44 = v21;
          while ( 1 )
          {
            --v16;
            v91 = qword_1C03294E0;
            v45 = *(_WORD **)(qword_1C03294E0 + 344);
            v46 = (int)*v16;
            v84 = *v16;
            v47 = v45[4];
            v48 = v45[6];
            v49 = v47 <= v48 ? v48 : v47;
            if ( v49 <= 1 )
              v78 = 1;
            else
              v78 = v47 <= v48 ? v48 : v47;
            v89 = qword_1C03294D8;
            if ( qword_1C03294D8 == v4 )
            {
              if ( (int)v46 >= (unsigned __int16)v45[8] || (int)v46 < 0 )
                goto LABEL_163;
              v75 = 0;
            }
            else
            {
              if ( (int)v46 >= *(_DWORD *)(qword_1C03294E0 + 440) || (int)v46 < 0 )
                goto LABEL_163;
              v75 = 4;
            }
            if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND(&LocalGS, v4) )
              goto LABEL_163;
            v51 = *(_WORD *)(v4 + 80);
            if ( v51 >= 1 && v51 <= v78 )
            {
              v50 = *(__int16 *)(*(_QWORD *)(v4 + 64) + 2LL * (v51 - 1));
              if ( (int)v46 >= v50 + v75 + 1 )
                goto LABEL_163;
            }
            if ( v4 != v89 && word_1C0329554 && *(_BYTE *)(v91 + 333) == 2 && (*(_BYTE *)(v91 + 452) & 2) != 0 )
              AddProportion(v50, v4, v6, v46, v13);
            v52 = 4 * v46;
            v53 = InvokeProject(v43, *(_DWORD *)(v52 + v82) - v80, *(_DWORD *)(v52 + v86) - v44);
            v54 = CompDiv(v69, v88 * (__int64)v53);
            v55 = InvokeProject(
                    v79,
                    *(_DWORD *)(*(_QWORD *)v4 + v52) - v101,
                    *(_DWORD *)(*(_QWORD *)(v4 + 8) + v52) - v98);
            InvokeMovePoint(v22, v4, v84, (unsigned int)(v54 - v55));
            if ( !--v94 )
              break;
            v43 = v79;
          }
        }
      }
    }
  }
  else
  {
    v56 = v94;
    if ( v94 )
    {
      v57 = v72;
      while ( 1 )
      {
        --v16;
        v90 = qword_1C03294E0;
        v58 = *(_WORD **)(qword_1C03294E0 + 344);
        v59 = (int)*v16;
        v85 = *v16;
        v60 = v58[4];
        v61 = v58[6];
        v62 = v60 <= v61 ? v61 : v60;
        if ( v62 <= 1 )
          v95 = 1;
        else
          v95 = v60 <= v61 ? v61 : v60;
        v92 = qword_1C03294D8;
        if ( qword_1C03294D8 == v4 )
        {
          if ( (int)v59 >= (unsigned __int16)v58[8] || (int)v59 < 0 )
            goto LABEL_163;
          v76 = 0;
        }
        else
        {
          if ( (int)v59 >= *(_DWORD *)(qword_1C03294E0 + 440) || (int)v59 < 0 )
            goto LABEL_163;
          v76 = 4;
        }
        if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND(&LocalGS, v4) )
          goto LABEL_163;
        v64 = *(_WORD *)(v4 + 80);
        if ( v64 >= 1 && v64 <= v95 )
        {
          v63 = *(__int16 *)(*(_QWORD *)(v4 + 64) + 2LL * (v64 - 1));
          if ( (int)v59 >= v63 + v76 + 1 )
            goto LABEL_163;
        }
        if ( v4 != v92 && word_1C0329554 && *(_BYTE *)(v90 + 333) == 2 && (*(_BYTE *)(v90 + 452) & 2) != 0 )
          AddProportion(v63, v4, v6, v59, v13);
        v65 = 4 * v59;
        v66 = InvokeProject(v79, *(_DWORD *)(v65 + v82) - v80, *(_DWORD *)(v65 + v86) - v21);
        v67 = InvokeProject(v79, *(_DWORD *)(*(_QWORD *)v4 + v65) - v101, *(_DWORD *)(*(_QWORD *)(v4 + 8) + v65) - v98);
        InvokeMovePoint(v57, v4, v85, (unsigned int)(v66 - v67));
        if ( !--v56 )
          break;
        v21 = v77;
      }
    }
  }
  result = a1;
  qword_1C03294C8 = (__int64)v16;
  dword_1C0329500 = 0;
  return result;
}
