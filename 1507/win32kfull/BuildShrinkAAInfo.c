/*
 * XREFs of BuildShrinkAAInfo @ 0x1C02528B0
 * Callers:
 *     <none>
 * Callees:
 *     BuildRepData @ 0x1C0003DB8 (BuildRepData.c)
 *     _ALIGN_MEM @ 0x1C00A4600 (_ALIGN_MEM.c)
 */

_DWORD *BuildShrinkAAInfo(__int64 a1, __int64 a2, int *a3, int *a4, int a5, int a6, int a7, int *a8, int *a9, ...)
{
  int v9; // ecx
  int v10; // edx
  int v11; // esi
  int v12; // ebp
  unsigned int v13; // r9d
  int v14; // eax
  unsigned int v15; // r8d
  int v16; // ecx
  int v17; // eax
  unsigned int v18; // r15d
  unsigned int v19; // eax
  unsigned __int64 v20; // rcx
  unsigned int v21; // eax
  unsigned int v22; // eax
  __int64 v23; // r13
  __int64 v24; // rax
  unsigned __int64 v25; // rax
  unsigned int v26; // r9d
  __int16 v27; // r10
  __int64 v28; // r11
  unsigned int v29; // ecx
  __int64 v30; // rcx
  unsigned __int64 v31; // rcx
  __int16 v32; // r10
  unsigned int v33; // r14d
  int v34; // r8d
  unsigned int v35; // eax
  __int64 v36; // r12
  unsigned int v37; // ecx
  char *v38; // rax
  _DWORD *v39; // rbx
  int *v40; // rdi
  _OWORD *v41; // r12
  unsigned int v42; // eax
  int v43; // r15d
  int v44; // edx
  __int64 v45; // rax
  int v46; // r14d
  __int128 v48; // xmm1
  __int128 v49; // xmm0
  __int128 v50; // xmm1
  __int128 v51; // xmm1
  __int128 v52; // xmm0
  __int128 v53; // xmm1
  int v54; // r9d
  _DWORD *v55; // r8
  int *v56; // rdx
  int v57; // eax
  int v58; // r12d
  unsigned int v59; // ecx
  _WORD *v60; // r8
  int v61; // r11d
  __int64 v62; // rdx
  unsigned int v63; // r13d
  unsigned int v64; // r9d
  int v65; // r10d
  int v66; // eax
  int v67; // edi
  int v68; // r9d
  __int64 v69; // r10
  __int16 v70; // r9
  int v71; // eax
  __int64 v72; // rdx
  int v73; // edx
  _WORD *v74; // r8
  _WORD *v75; // rcx
  int v76; // r11d
  int v77; // r9d
  int v78; // [rsp+20h] [rbp-98h]
  unsigned int v79; // [rsp+24h] [rbp-94h] BYREF
  int v80; // [rsp+28h] [rbp-90h] BYREF
  int v81; // [rsp+2Ch] [rbp-8Ch]
  int v82; // [rsp+30h] [rbp-88h]
  int v83; // [rsp+34h] [rbp-84h]
  unsigned int v84; // [rsp+38h] [rbp-80h]
  int v85; // [rsp+3Ch] [rbp-7Ch]
  int v86; // [rsp+40h] [rbp-78h]
  int v87; // [rsp+44h] [rbp-74h]
  int v88; // [rsp+48h] [rbp-70h]
  __int64 v89; // [rsp+50h] [rbp-68h]
  __int64 v90; // [rsp+58h] [rbp-60h]
  unsigned __int64 v91; // [rsp+60h] [rbp-58h]
  __int64 v92; // [rsp+68h] [rbp-50h]
  __int64 v93; // [rsp+70h] [rbp-48h]
  int v96; // [rsp+E8h] [rbp+30h]
  int v97; // [rsp+F0h] [rbp+38h]
  __int64 v98; // [rsp+108h] [rbp+50h] BYREF
  va_list va; // [rsp+108h] [rbp+50h]
  va_list va1; // [rsp+110h] [rbp+58h] BYREF

  va_start(va1, a9);
  va_start(va, a9);
  v98 = va_arg(va1, _QWORD);
  v9 = *a3;
  v85 = 0;
  v10 = *a4;
  v11 = 0;
  v83 = v9;
  v12 = 0;
  if ( v10 < v9 || a7 <= a6 )
    return 0LL;
  v13 = a7 - a6;
  v78 = 0;
  v14 = v9;
  v97 = a7 - a6;
  v15 = v10 - v9;
  v84 = v10 - v9;
  if ( v9 < 0 )
    v14 = 0;
  v88 = v14;
  if ( v10 > a5 )
    v10 = a5;
  v16 = *a9;
  v82 = -1;
  v87 = v10;
  v81 = v16;
  v17 = *a8 - 1;
  v86 = v17;
  if ( v17 >= v16 )
    return 0LL;
  if ( v15 <= v13 )
    return 0LL;
  v18 = v16 - v17;
  v19 = v16 - v17 + 1;
  if ( v19 < v18 )
    return 0LL;
  v20 = v15 * (unsigned __int64)v19;
  v93 = v15;
  if ( v20 > 0xFFFFFFFF )
    return 0LL;
  v21 = v20 + v13 - 1;
  if ( v21 < (unsigned int)v20 )
    return 0LL;
  v22 = v21 / v13;
  v23 = v22 + 4;
  if ( (unsigned int)v23 < v22 )
    return 0LL;
  if ( (unsigned int)v23 > v15 )
    v23 = v15;
  if ( (int)ALIGN_MEM((unsigned int *)&v80, 0x800u) < 0 )
    return 0LL;
  v24 = (unsigned int)(v23 + 1);
  if ( (unsigned int)v24 < (unsigned int)v23 )
    return 0LL;
  v25 = 2 * v24;
  if ( v25 > 0xFFFFFFFF )
    return 0LL;
  if ( (int)ALIGN_MEM(&v79, v25) < 0 )
    return 0LL;
  v29 = v79;
  v79 += v80;
  if ( v79 < v29 )
    return 0LL;
  v90 = (__int64)((unsigned __int64)v26 << 13) / v28;
  if ( (v27 & 0x4A80) != 0 )
  {
    v30 = v18 + 4;
    if ( (unsigned int)v30 < v18 )
      return 0LL;
    v31 = 2 * v30;
    if ( v31 > 0xFFFFFFFF || (int)ALIGN_MEM((unsigned int *)&v80, v31) < 0 )
      return 0LL;
    v33 = v80;
    if ( (v32 & 0x200) != 0 )
      v79 = 0;
  }
  else
  {
    v33 = 0;
  }
  if ( (int)ALIGN_MEM((unsigned int *)va, v98) < 0 )
    return 0LL;
  v35 = v33 + v34;
  if ( v33 + v34 < v33 )
    return 0LL;
  v36 = (unsigned int)v98;
  v37 = v35 + v98;
  if ( v35 + (unsigned int)v98 < v35 || v37 + 240 < v37 )
    return 0LL;
  v38 = (char *)EngAllocMem(1u, v37 + 240, 0x35355448u);
  v39 = v38;
  if ( v38 )
  {
    v40 = (int *)(v38 + 240);
    if ( (_DWORD)v36 )
    {
      *((_QWORD *)v38 + 4) = v40;
      v40 = (int *)((char *)v40 + v36);
    }
    if ( v33 )
    {
      v41 = v38 + 48;
      *((_QWORD *)v38 + 11) = v40;
      *((_DWORD *)v38 + 12) = v84;
      *((_DWORD *)v38 + 13) = v97;
      *((_DWORD *)v38 + 16) = v88;
      *((_DWORD *)v38 + 17) = v87;
      *((_DWORD *)v38 + 18) = v86 + 1;
      *((_DWORD *)v38 + 19) = v81;
      v42 = v18 + 1;
      v43 = v83;
      v44 = v83;
      *((_QWORD *)v39 + 12) = (char *)v40 + 2 * (int)v42;
      v45 = (int)v33;
      v46 = a6;
      v40 = (int *)((char *)v40 + v45);
      if ( !(unsigned int)BuildRepData((__int64)v41, v44, a6) )
      {
LABEL_36:
        EngFreeMem(v39);
        return 0LL;
      }
      v48 = v41[1];
      *((_OWORD *)v39 + 7) = *v41;
      v49 = v41[2];
      *((_OWORD *)v39 + 8) = v48;
      v50 = v41[3];
      *((_OWORD *)v39 + 9) = v49;
      *((_OWORD *)v39 + 10) = v50;
      v51 = *((_OWORD *)v39 + 8);
      *((_OWORD *)v39 + 11) = *((_OWORD *)v39 + 7);
      v52 = *((_OWORD *)v39 + 9);
      *((_OWORD *)v39 + 12) = v51;
      v53 = *((_OWORD *)v39 + 10);
      *((_OWORD *)v39 + 13) = v52;
      *((_OWORD *)v39 + 14) = v53;
    }
    else
    {
      v46 = a6;
      v43 = v83;
    }
    if ( v79 )
    {
      v54 = v90;
      v55 = v40 + 512;
      *((_QWORD *)v39 + 3) = v40;
      *((_WORD *)v39 + 6) = 1;
      v56 = v40 + 256;
      *((_QWORD *)v39 + 5) = v40 + 512;
      v91 = (unsigned __int64)v40 + 2 * v23 + 2048;
      v57 = -v54;
      v58 = -(v54 + 1);
      do
      {
        v57 += v54;
        v58 += v54 + 1;
        *v40 = v57;
        v40[256] = v58;
        ++v40;
      }
      while ( v40 < v56 );
      v59 = v84;
      v60 = (_WORD *)v55 - 1;
      v61 = v86;
      LOWORD(v62) = 0;
      v92 = 0LL;
      v63 = v84;
      v89 = 0LL;
      v64 = v84;
      if ( v84 )
      {
        v80 = -v84;
        v65 = -v84;
        v66 = v97;
        v83 = -v97;
        v67 = v82;
        while ( 1 )
        {
          v68 = v64 - v66;
          --v63;
          v79 = v68;
          v96 = v65 - v83;
          if ( v68 > 0 )
          {
            LODWORD(v69) = v66;
            v70 = 0;
          }
          else
          {
            LODWORD(v69) = v68 + v66;
            v58 = v96;
            v79 = v59 + v68;
            ++v46;
            v96 += v80;
            v70 = 0x4000;
          }
          v71 = v81;
          if ( v46 >= v61 - 1 && v46 <= v81 )
          {
            v72 = (((__int64)(int)v69 << 13) + v89) % v93;
            v69 = (((__int64)(int)v69 << 13) + v89) / v93;
            v89 = v72;
            if ( (int)v69 > (int)v90 )
              v70 |= 0x8000u;
            LOWORD(v62) = v69 + v92;
            v92 = (unsigned int)(v69 + v92);
            if ( (v70 & 0x4000) != 0 )
            {
              v89 = ((__int64)v58 << 13) % v93;
              v62 = ((__int64)v58 << 13) / v93;
              v92 = v62;
              if ( (int)v62 + (int)v69 <= (int)v90 )
                v70 &= ~0x8000u;
              else
                v70 |= 0x8000u;
              v58 = 0;
            }
            v71 = v81;
          }
          if ( v46 < v61 || v46 > v71 )
            break;
          if ( v43 >= v88 && v43 < v87 )
          {
            ++v60;
            v78 += (v70 & 0x4000) != 0;
            if ( (unsigned __int64)v60 >= v91 )
              --v60;
            v11 = v43;
            v12 = v46;
            *v60 = v70 | v69;
            if ( v67 == -1 )
            {
              v82 = v43;
              v85 = v46;
              if ( (v70 & 0x4000) != 0 )
              {
                if ( v46 == v61 )
                {
                  *((_WORD *)v39 + 7) = v62;
                  --v78;
                  --v60;
                  *((_WORD *)v39 + 5) = 1;
                }
                else
                {
                  *((_WORD *)v39 + 7) = 0x2000 - v69;
                  v85 = v46 - 1;
                  v12 = v46 - 1;
                }
              }
              else
              {
                *((_WORD *)v39 + 7) = v62 - v69;
              }
              v67 = v43;
            }
            goto LABEL_69;
          }
          if ( v67 != -1 )
          {
            if ( (unsigned __int64)++v60 >= v91 )
              --v60;
            if ( (v70 & 0x4000) == 0 )
              LOWORD(v69) = 0x2000 - v62 + v69;
            *v60 = v70 | v69 | 0x4000;
LABEL_90:
            v63 = 0;
            ++v78;
          }
LABEL_69:
          v59 = v84;
          ++v43;
          v66 = v97;
          v64 = v79;
          v65 = v96;
          if ( !v63 )
            goto LABEL_70;
        }
        if ( v67 == -1 )
          goto LABEL_69;
        if ( (unsigned __int64)++v60 >= v91 )
          --v60;
        v11 = v43;
        *v60 = (0x2000 - v62) | 0x4000;
        goto LABEL_90;
      }
LABEL_70:
      v73 = v82;
      v74 = v60 + 1;
      if ( v82 == -1 )
        goto LABEL_36;
      v75 = (_WORD *)*((_QWORD *)v39 + 5);
      if ( v74 == v75 )
        goto LABEL_36;
      v76 = v61 + 1;
      if ( v11 >= v87 )
        v11 = v87 - 1;
      v77 = v85;
      if ( v85 < v76 )
      {
        ++*((_WORD *)v39 + 6);
        v77 = v76;
      }
      if ( v12 >= v81 )
        v12 = v81 - 1;
      if ( *((_WORD *)v39 + 5) )
      {
        if ( !*((_WORD *)v39 + 7) )
        {
          *((_WORD *)v39 + 5) = 0;
          ++v73;
        }
      }
      v39[4] = v74 - v75;
      v39[5] = v78;
      *v74 = 0;
    }
    else
    {
      v11 = v39[17] - 1;
      v73 = v39[16];
      v12 = v39[19] - 1;
      v77 = v39[18];
    }
    *a3 = v73;
    *a4 = v11;
    *a8 = v77;
    *a9 = v12;
    *v39 = v11 - v73 + 1;
    v39[1] = v12 - v77 + 1;
  }
  return v39;
}
