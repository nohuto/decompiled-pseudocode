/*
 * XREFs of ?vSrcTranCopyS4D32@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x1401979B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vSrcTranCopyS4D32(
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
  int v15; // r14d
  int v16; // ebp
  int v17; // ebx
  int v18; // r10d
  int v19; // esi
  int v20; // r15d
  unsigned int v21; // r8d
  const unsigned __int8 *v22; // r12
  unsigned __int8 *v23; // rcx
  const unsigned __int8 *v24; // r13
  _DWORD *v25; // rdi
  int v26; // r8d
  __int64 v27; // rcx
  unsigned __int8 v28; // r8
  unsigned __int8 v29; // al
  char v30; // r9
  unsigned __int8 v31; // r8
  _DWORD *v32; // rax
  __int64 v33; // r10
  unsigned int v34; // r11d
  unsigned int v35; // r8d
  unsigned int v36; // edx
  unsigned int v37; // r8d
  unsigned int v38; // edx
  int v39; // ecx
  _DWORD *v40; // rax
  unsigned int v41; // edx
  int v42; // r9d
  _DWORD *v43; // rax
  unsigned int v44; // edx
  unsigned int v45; // edx
  __int64 v46; // r10
  _DWORD *v47; // rax
  unsigned int v48; // r11d
  unsigned int v49; // r8d
  unsigned int v50; // edx
  int v51; // ecx
  _DWORD *v52; // rax
  unsigned int v53; // edx
  int v54; // r9d
  _DWORD *v55; // rax
  unsigned int v56; // r9d
  int v57; // edx
  unsigned int v58; // edx
  unsigned __int8 v59; // al
  unsigned __int8 v60; // al
  unsigned int v61; // r11d
  __int64 v62; // r10
  _DWORD *v63; // rax
  unsigned int v64; // r8d
  unsigned int v65; // edx
  int v66; // r13d
  _DWORD *v67; // rax
  unsigned int v68; // r13d
  int v69; // r9d
  _DWORD *v70; // rax
  unsigned int v71; // r13d
  unsigned int v72; // r13d
  unsigned int v73; // r11d
  __int64 v74; // r10
  _DWORD *v75; // rax
  unsigned int v76; // r8d
  unsigned int v77; // edx
  int v78; // edi
  _DWORD *v79; // rax
  unsigned int v80; // edi
  int v81; // r9d
  _DWORD *v82; // rax
  unsigned int v83; // r9d
  int v84; // edi
  unsigned int v85; // edi
  int *v86; // rcx
  unsigned int v87; // [rsp+0h] [rbp-78h]
  unsigned int v88; // [rsp+4h] [rbp-74h]
  unsigned __int8 *v89; // [rsp+8h] [rbp-70h]
  int v90; // [rsp+14h] [rbp-64h]
  __int64 v91; // [rsp+20h] [rbp-58h]
  __int64 v92; // [rsp+30h] [rbp-48h]
  const unsigned __int8 *v93; // [rsp+80h] [rbp+8h]
  char v94; // [rsp+88h] [rbp+10h]
  unsigned int v95; // [rsp+98h] [rbp+20h]
  int v96; // [rsp+A8h] [rbp+30h]
  int v97; // [rsp+D0h] [rbp+58h]

  v12 = a3;
  v13 = *((_QWORD *)a11 + 16);
  if ( !v13 )
    v13 = *(_QWORD *)(*((_QWORD *)a11 + 6) + 1792LL);
  v14 = *(_DWORD *)(v13 + 24);
  if ( (v14 & 2) != 0 )
  {
    v86 = *(int **)(v13 + 112);
    v18 = *v86;
    v17 = v86[6];
    v16 = v86[1];
    v15 = v86[7];
    v19 = v86[2];
    v20 = v86[8];
    v97 = *v86;
  }
  else
  {
    LOBYTE(v15) = 8;
    v16 = 65280;
    if ( (v14 & 4) != 0 )
    {
      LOBYTE(v17) = 0;
      v18 = 255;
      v97 = 255;
      v19 = 16711680;
      LOBYTE(v20) = 16;
    }
    else
    {
      LOBYTE(v17) = 16;
      v18 = 16711680;
      v97 = 16711680;
      v19 = 255;
      LOBYTE(v20) = 0;
    }
  }
  v21 = a6 & 0xFFFFFFFE;
  v96 = a6 - (a6 & 0xFFFFFFFE);
  v95 = (a9 & v18) >> v17;
  v87 = (a9 & v16) >> v15;
  v88 = (a9 & v19) >> v20;
  v94 = v17;
  v90 = (int)(v21 - ((a5 + 1) & 0xFFFFFFFE)) / 2;
  v22 = &a1[a2 / 2];
  v23 = &a4[4 * a5];
  v89 = v23;
  v93 = v22;
  if ( a8 )
  {
    v92 = v12;
    do
    {
      v24 = v22;
      v25 = v23;
      if ( ((a5 + 1) & 0xFFFFFFFE) == a5 )
      {
        v26 = v97;
      }
      else
      {
        v59 = *v22 & 0xF;
        if ( v59 )
        {
          if ( v59 == 15 )
          {
            v85 = a9;
            v26 = v97;
          }
          else
          {
            v73 = ((unsigned int)v18 & *(_DWORD *)v23) >> v17;
            v74 = v59;
            v75 = &unk_140362570;
            v76 = ((unsigned int)v16 & *(_DWORD *)v23) >> v15;
            v77 = ((unsigned int)v19 & *(_DWORD *)v23) >> v20;
            if ( (int)(v88 - v77) >= 0 )
              v75 = &unk_1403625B0;
            v78 = v75[v74] * (v88 - v77);
            v79 = &unk_140362570;
            v80 = v19 & (((v77 << 16) + v78) >> 16 << v20);
            if ( (int)(v87 - v76) >= 0 )
              v79 = &unk_1403625B0;
            v81 = v79[v74] * (v87 - v76);
            v82 = &unk_140362570;
            v83 = (v76 << 16) + v81;
            v26 = v97;
            v84 = v16 & (HIWORD(v83) << v15) | v80;
            if ( (int)(v95 - v73) >= 0 )
              v82 = &unk_1403625B0;
            v23 = v89;
            v85 = v97 & (((v73 << 16) + v82[v74] * (v95 - v73)) >> 16 << v94) | v84;
            LOBYTE(v17) = v94;
          }
          *(_DWORD *)v23 = v85;
        }
        else
        {
          v26 = v97;
        }
        v25 = v23 + 4;
        v24 = v22 + 1;
      }
      if ( v90 <= 0 )
      {
        v30 = v94;
      }
      else
      {
        v27 = (unsigned int)v90;
        v91 = (unsigned int)v90;
        while ( 1 )
        {
          v28 = *v24;
          v29 = *v24 >> 4;
          if ( v29 )
          {
            if ( v29 == 15 )
            {
              v58 = a9;
              v30 = v94;
            }
            else
            {
              v46 = v29;
              v47 = &unk_140362570;
              v48 = ((unsigned int)v97 & *v25) >> v17;
              v49 = ((unsigned int)v16 & *v25) >> v15;
              v50 = ((unsigned int)v19 & *v25) >> v20;
              if ( (int)(v88 - v50) >= 0 )
                v47 = &unk_1403625B0;
              v51 = v47[v46] * (v88 - v50);
              v52 = &unk_140362570;
              v53 = v19 & (((v50 << 16) + v51) >> 16 << v20);
              if ( (int)(v87 - v49) >= 0 )
                v52 = &unk_1403625B0;
              v54 = v52[v46] * (v87 - v49);
              v55 = &unk_140362570;
              v56 = (v49 << 16) + v54;
              v28 = *v24;
              v57 = v16 & (HIWORD(v56) << v15) | v53;
              v30 = v94;
              if ( (int)(v95 - v48) >= 0 )
                v55 = &unk_1403625B0;
              v27 = v91;
              v58 = v97 & (((v48 << 16) + v55[v46] * (v95 - v48)) >> 16 << v94) | v57;
            }
            *v25 = v58;
          }
          else
          {
            v30 = v94;
          }
          v31 = v28 & 0xF;
          if ( v31 )
          {
            if ( v31 == 15 )
            {
              v45 = a9;
            }
            else
            {
              v32 = &unk_140362570;
              v33 = v31;
              v34 = ((unsigned int)v97 & v25[1]) >> v30;
              v35 = v25[1];
              v36 = v19 & v35;
              v37 = (v16 & v35) >> v15;
              v38 = v36 >> v20;
              if ( (int)(v88 - v38) >= 0 )
                v32 = &unk_1403625B0;
              v39 = v32[v33] * (v88 - v38);
              v40 = &unk_140362570;
              v41 = v19 & (((v38 << 16) + v39) >> 16 << v20);
              if ( (int)(v87 - v37) >= 0 )
                v40 = &unk_1403625B0;
              v42 = v40[v33] * (v87 - v37);
              v43 = &unk_140362570;
              v44 = v16 & (((v37 << 16) + v42) >> 16 << v15) | v41;
              if ( (int)(v95 - v34) >= 0 )
                v43 = &unk_1403625B0;
              v30 = v94;
              v45 = v97 & (((v34 << 16) + v43[v33] * (v95 - v34)) >> 16 << v94) | v44;
            }
            v27 = v91;
            v25[1] = v45;
          }
          v25 += 2;
          ++v24;
          v91 = --v27;
          if ( !v27 )
            break;
          LOBYTE(v17) = v94;
        }
        v22 = v93;
        v23 = v89;
        v26 = v97;
      }
      if ( v96 )
      {
        v60 = *v24 >> 4;
        if ( v60 )
        {
          if ( v60 == 15 )
          {
            v72 = a9;
          }
          else
          {
            v61 = ((unsigned int)v26 & *v25) >> v30;
            v62 = v60;
            v63 = &unk_140362570;
            v64 = ((unsigned int)v16 & *v25) >> v15;
            v65 = ((unsigned int)v19 & *v25) >> v20;
            if ( (int)(v88 - v65) >= 0 )
              v63 = &unk_1403625B0;
            v66 = v63[v62] * (v88 - v65);
            v67 = &unk_140362570;
            v68 = v19 & (((v65 << 16) + v66) >> 16 << v20);
            if ( (int)(v87 - v64) >= 0 )
              v67 = &unk_1403625B0;
            v69 = v67[v62] * (v87 - v64);
            v70 = &unk_140362570;
            v71 = v16 & (((v64 << 16) + v69) >> 16 << v15) | v68;
            if ( (int)(v95 - v61) >= 0 )
              v70 = &unk_1403625B0;
            v72 = v97 & (((v61 << 16) + v70[v62] * (v95 - v61)) >> 16 << v94) | v71;
          }
          v23 = v89;
          *v25 = v72;
        }
      }
      v22 += v92;
      v18 = v97;
      v23 += a7;
      LOBYTE(v17) = v94;
      --a8;
      v93 = v22;
      v89 = v23;
    }
    while ( a8 );
  }
}
