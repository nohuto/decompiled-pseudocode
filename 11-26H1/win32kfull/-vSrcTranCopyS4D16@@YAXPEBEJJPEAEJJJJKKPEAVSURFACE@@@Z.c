/*
 * XREFs of ?vSrcTranCopyS4D16@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x14030FA70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vSrcTranCopyS4D16(
        const unsigned __int8 *a1,
        int a2,
        int a3,
        unsigned __int8 *a4,
        int a5,
        int a6,
        int a7,
        int a8,
        unsigned int a9,
        unsigned int a10,
        struct SURFACE *a11)
{
  __int64 v12; // r11
  __int64 v13; // rax
  int v14; // ecx
  int *v15; // rcx
  int v16; // r10d
  int v17; // ebx
  int v18; // ebp
  int v19; // r14d
  int v20; // esi
  int v21; // r15d
  unsigned int v22; // r8d
  const unsigned __int8 *v23; // r12
  unsigned __int8 *v24; // rcx
  const unsigned __int8 *v25; // r13
  unsigned __int8 *v26; // rdi
  unsigned __int8 v27; // al
  __int16 v28; // di
  __int16 v29; // r8
  unsigned int v30; // edx
  unsigned int v31; // r11d
  __int64 v32; // r10
  _DWORD *v33; // rax
  unsigned int v34; // r8d
  unsigned int v35; // edx
  int v36; // edi
  _DWORD *v37; // rax
  unsigned int v38; // edi
  int v39; // r9d
  _DWORD *v40; // rax
  unsigned int v41; // r9d
  int v42; // edi
  __int64 v43; // rcx
  unsigned __int8 v44; // r8
  unsigned __int8 v45; // al
  unsigned int v46; // edx
  char v47; // r9
  unsigned int v48; // r11d
  unsigned int v49; // edx
  __int64 v50; // r10
  unsigned int v51; // r8d
  _DWORD *v52; // rax
  unsigned int v53; // r11d
  unsigned int v54; // r8d
  unsigned int v55; // edx
  int v56; // ecx
  _DWORD *v57; // rax
  unsigned int v58; // edx
  int v59; // r9d
  _DWORD *v60; // rax
  unsigned int v61; // r9d
  int v62; // edx
  _WORD *v63; // rdi
  unsigned __int8 v64; // r8
  unsigned int v65; // edx
  _DWORD *v66; // rax
  __int64 v67; // r10
  int v68; // r11d
  unsigned int v69; // r8d
  unsigned int v70; // edx
  unsigned int v71; // r8d
  unsigned int v72; // edx
  int v73; // ecx
  _DWORD *v74; // rax
  unsigned int v75; // edx
  int v76; // r9d
  _DWORD *v77; // rax
  unsigned int v78; // edx
  unsigned __int8 v79; // al
  unsigned int v80; // r13d
  unsigned int v81; // r11d
  unsigned int v82; // r8d
  unsigned int v83; // r11d
  unsigned int v84; // edx
  __int64 v85; // r10
  _DWORD *v86; // rax
  unsigned int v87; // r8d
  unsigned int v88; // edx
  int v89; // r13d
  _DWORD *v90; // rax
  unsigned int v91; // r13d
  int v92; // r9d
  _DWORD *v93; // rax
  unsigned int v94; // r13d
  unsigned int v95; // [rsp+0h] [rbp-78h]
  unsigned int v96; // [rsp+4h] [rbp-74h]
  unsigned __int8 *v97; // [rsp+8h] [rbp-70h]
  int v98; // [rsp+14h] [rbp-64h]
  __int64 v99; // [rsp+20h] [rbp-58h]
  __int64 v100; // [rsp+30h] [rbp-48h]
  const unsigned __int8 *v101; // [rsp+80h] [rbp+8h]
  char v102; // [rsp+88h] [rbp+10h]
  unsigned int v103; // [rsp+98h] [rbp+20h]
  int v104; // [rsp+A8h] [rbp+30h]
  int v105; // [rsp+D0h] [rbp+58h]

  v12 = a3;
  v13 = *((_QWORD *)a11 + 16);
  if ( !v13 )
    v13 = *(_QWORD *)(*((_QWORD *)a11 + 6) + 1792LL);
  v14 = *(_DWORD *)(v13 + 24);
  if ( (v14 & 2) != 0 )
  {
    v15 = *(int **)(v13 + 112);
    v16 = *v15;
    v17 = v15[6];
    v18 = v15[1];
    v19 = v15[7];
    v20 = v15[2];
    v21 = v15[8];
    v105 = *v15;
  }
  else
  {
    v18 = 992;
    LOBYTE(v19) = 5;
    if ( (v14 & 4) != 0 )
    {
      LOBYTE(v17) = 0;
      v16 = 31;
      v105 = 31;
      v20 = 31744;
      LOBYTE(v21) = 10;
    }
    else
    {
      LOBYTE(v17) = 10;
      v16 = 31744;
      v105 = 31744;
      LOBYTE(v21) = 0;
      v20 = 31;
    }
  }
  v22 = a6 & 0xFFFFFFFE;
  v104 = a6 - (a6 & 0xFFFFFFFE);
  v103 = (a9 & v16) >> v17;
  v95 = (a9 & v18) >> v19;
  v96 = (a9 & v20) >> v21;
  v102 = v17;
  v98 = (int)(v22 - ((a5 + 1) & 0xFFFFFFFE)) / 2;
  v23 = &a1[a2 / 2];
  v24 = &a4[2 * a5];
  v97 = v24;
  v101 = v23;
  if ( a8 )
  {
    v100 = v12;
    do
    {
      v25 = v23;
      v26 = v24;
      if ( ((a5 + 1) & 0xFFFFFFFE) == a5 )
      {
        v29 = v105;
      }
      else
      {
        v27 = *v23 & 0xF;
        if ( v27 )
        {
          if ( v27 == 15 )
          {
            v28 = a9;
            v29 = v105;
          }
          else
          {
            v30 = *(unsigned __int16 *)v24;
            v31 = (v16 & v30) >> v17;
            v32 = v27;
            v33 = &unk_140362570;
            v34 = (v18 & v30) >> v19;
            v35 = (v20 & v30) >> v21;
            if ( (int)(v96 - v35) >= 0 )
              v33 = &unk_1403625B0;
            v36 = v33[v32] * (v96 - v35);
            v37 = &unk_140362570;
            v38 = v20 & (((v35 << 16) + v36) >> 16 << v21);
            if ( (int)(v95 - v34) >= 0 )
              v37 = &unk_1403625B0;
            v39 = v37[v32] * (v95 - v34);
            v40 = &unk_140362570;
            v41 = (v34 << 16) + v39;
            v29 = v105;
            v42 = v18 & (HIWORD(v41) << v19) | v38;
            if ( (int)(v103 - v31) >= 0 )
              v40 = &unk_1403625B0;
            v24 = v97;
            v28 = v105 & (((v31 << 16) + v40[v32] * (v103 - v31)) >> 16 << v102) | v42;
            LOBYTE(v17) = v102;
          }
          *(_WORD *)v24 = v28;
        }
        else
        {
          v29 = v105;
        }
        v26 = v24 + 2;
        v25 = v23 + 1;
      }
      if ( v98 <= 0 )
      {
        v47 = v102;
      }
      else
      {
        v43 = (unsigned int)v98;
        v99 = (unsigned int)v98;
        while ( 1 )
        {
          v44 = *v25;
          v45 = *v25 >> 4;
          if ( v45 )
          {
            if ( v45 == 15 )
            {
              LOWORD(v46) = a9;
              v47 = v102;
            }
            else
            {
              v48 = *(unsigned __int16 *)v26;
              v49 = v20 & v48;
              v50 = v45;
              v51 = v18 & v48;
              v52 = &unk_140362570;
              v53 = (v105 & v48) >> v17;
              v54 = v51 >> v19;
              v55 = v49 >> v21;
              if ( (int)(v96 - v55) >= 0 )
                v52 = &unk_1403625B0;
              v56 = v52[v50] * (v96 - v55);
              v57 = &unk_140362570;
              v58 = v20 & (((v55 << 16) + v56) >> 16 << v21);
              if ( (int)(v95 - v54) >= 0 )
                v57 = &unk_1403625B0;
              v59 = v57[v50] * (v95 - v54);
              v60 = &unk_140362570;
              v61 = (v54 << 16) + v59;
              v44 = *v25;
              v62 = v18 & (HIWORD(v61) << v19) | v58;
              v47 = v102;
              if ( (int)(v103 - v53) >= 0 )
                v60 = &unk_1403625B0;
              v43 = v99;
              v46 = v105 & (((v53 << 16) + v60[v50] * (v103 - v53)) >> 16 << v102) | v62;
            }
            *(_WORD *)v26 = v46;
          }
          else
          {
            v47 = v102;
          }
          v63 = v26 + 2;
          v64 = v44 & 0xF;
          if ( v64 )
          {
            if ( v64 == 15 )
            {
              LOWORD(v65) = a9;
            }
            else
            {
              v66 = &unk_140362570;
              v67 = v64;
              v68 = (unsigned __int16)(v105 & *v63) >> v47;
              v69 = (unsigned __int16)*v63;
              v70 = v20 & v69;
              v71 = (v18 & v69) >> v19;
              v72 = v70 >> v21;
              if ( (int)(v96 - v72) >= 0 )
                v66 = &unk_1403625B0;
              v73 = v66[v67] * (v96 - v72);
              v74 = &unk_140362570;
              v75 = v20 & (((v72 << 16) + v73) >> 16 << v21);
              if ( (int)(v95 - v71) >= 0 )
                v74 = &unk_1403625B0;
              v76 = v74[v67] * (v95 - v71);
              v77 = &unk_140362570;
              v78 = v18 & (((v71 << 16) + v76) >> 16 << v19) | v75;
              if ( (int)(v103 - v68) >= 0 )
                v77 = &unk_1403625B0;
              v47 = v102;
              v65 = v105 & (((v68 << 16) + v77[v67] * (v103 - v68)) >> 16 << v102) | v78;
            }
            v43 = v99;
            *v63 = v65;
          }
          v26 = (unsigned __int8 *)(v63 + 1);
          ++v25;
          v99 = --v43;
          if ( !v43 )
            break;
          LOBYTE(v17) = v102;
        }
        v23 = v101;
        v24 = v97;
        v29 = v105;
      }
      if ( v104 )
      {
        v79 = *v25 >> 4;
        if ( v79 )
        {
          if ( v79 == 15 )
          {
            LOWORD(v80) = a9;
          }
          else
          {
            v81 = (unsigned __int16)(v29 & *(_WORD *)v26);
            v82 = *(unsigned __int16 *)v26;
            v83 = v81 >> v47;
            v84 = v20 & v82;
            v85 = v79;
            v86 = &unk_140362570;
            v87 = (v18 & v82) >> v19;
            v88 = v84 >> v21;
            if ( (int)(v96 - v88) >= 0 )
              v86 = &unk_1403625B0;
            v89 = v86[v85] * (v96 - v88);
            v90 = &unk_140362570;
            v91 = v20 & (((v88 << 16) + v89) >> 16 << v21);
            if ( (int)(v95 - v87) >= 0 )
              v90 = &unk_1403625B0;
            v92 = v90[v85] * (v95 - v87);
            v93 = &unk_140362570;
            v94 = v18 & (((v87 << 16) + v92) >> 16 << v19) | v91;
            if ( (int)(v103 - v83) >= 0 )
              v93 = &unk_1403625B0;
            v80 = v105 & (((v83 << 16) + v93[v85] * (v103 - v83)) >> 16 << v102) | v94;
          }
          v24 = v97;
          *(_WORD *)v26 = v80;
        }
      }
      v23 += v100;
      v16 = v105;
      v24 += a7;
      LOBYTE(v17) = v102;
      --a8;
      v101 = v23;
      v97 = v24;
    }
    while ( a8 );
  }
}
