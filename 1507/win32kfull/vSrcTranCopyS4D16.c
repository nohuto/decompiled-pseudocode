/*
 * XREFs of vSrcTranCopyS4D16 @ 0x1C0266C70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall vSrcTranCopyS4D16(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        __int64 a11)
{
  __int64 v12; // r15
  __int64 v13; // rax
  int v14; // ecx
  int *v15; // rcx
  int v16; // eax
  int v17; // edx
  int v18; // edi
  int v19; // esi
  int v20; // ebx
  int v21; // ebp
  unsigned int v24; // r8d
  _WORD *v25; // r12
  __int64 result; // rax
  _BYTE *v27; // r14
  int v28; // r8d
  __int64 v29; // rcx
  char *v30; // r15
  _WORD *v31; // r11
  unsigned __int8 v32; // r8
  unsigned int v33; // r11d
  int v34; // r10d
  _DWORD *v35; // rax
  unsigned int v36; // edx
  __int64 v37; // r9
  int v38; // r11d
  _DWORD *v39; // rax
  unsigned int v40; // r11d
  unsigned int v41; // r8d
  int v42; // edx
  _DWORD *v43; // rax
  unsigned int v44; // edx
  unsigned int v45; // r8d
  int v46; // r11d
  __int64 v47; // rax
  char v48; // r12
  unsigned __int8 v49; // r8
  __int16 v50; // ax
  int v51; // r10d
  _DWORD *v52; // rax
  unsigned int v53; // edx
  __int64 v54; // r9
  unsigned int v55; // eax
  unsigned int v56; // r8d
  _DWORD *v57; // rax
  int v58; // edx
  _DWORD *v59; // rax
  unsigned int v60; // edx
  unsigned int v61; // r8d
  _WORD *v62; // r11
  unsigned __int8 v63; // r12
  __int16 v64; // r12
  int v65; // r10d
  _DWORD *v66; // rax
  unsigned int v67; // edx
  __int64 v68; // r9
  int v69; // r12d
  _DWORD *v70; // rax
  unsigned int v71; // r8d
  unsigned int v72; // r12d
  int v73; // edx
  _DWORD *v74; // rax
  unsigned int v75; // edx
  unsigned int v76; // r8d
  int v77; // r12d
  unsigned __int8 v78; // r8
  unsigned int v79; // r15d
  int v80; // r10d
  _DWORD *v81; // rax
  unsigned int v82; // edx
  __int64 v83; // r9
  int v84; // r15d
  _DWORD *v85; // rax
  unsigned int v86; // r15d
  unsigned int v87; // r8d
  int v88; // edx
  _DWORD *v89; // rax
  unsigned int v90; // edx
  unsigned int v91; // r8d
  int v92; // r15d
  unsigned int v93; // [rsp+0h] [rbp-68h]
  unsigned int v94; // [rsp+4h] [rbp-64h]
  __int64 v95; // [rsp+8h] [rbp-60h]
  _WORD *v96; // [rsp+10h] [rbp-58h]
  __int64 v97; // [rsp+20h] [rbp-48h]
  __int64 v98; // [rsp+28h] [rbp-40h]
  _BYTE *v99; // [rsp+70h] [rbp+8h]
  int v101; // [rsp+78h] [rbp+10h]
  int v102; // [rsp+78h] [rbp+10h]
  int v103; // [rsp+88h] [rbp+20h]
  int v104; // [rsp+90h] [rbp+28h]
  unsigned int v105; // [rsp+B0h] [rbp+48h]
  char v106; // [rsp+C0h] [rbp+58h]

  v12 = a3;
  v13 = *(_QWORD *)(a11 + 120);
  if ( !v13 )
    v13 = *(_QWORD *)(*(_QWORD *)(a11 + 48) + 1832LL);
  v14 = *(_DWORD *)(v13 + 24);
  if ( (v14 & 2) != 0 )
  {
    v15 = *(int **)(v13 + 128);
    v16 = *v15;
    v17 = v15[6];
    v18 = v15[1];
    v19 = v15[7];
    v20 = v15[2];
    v21 = v15[8];
    v103 = *v15;
  }
  else
  {
    v18 = 992;
    LOBYTE(v19) = 5;
    if ( (v14 & 4) != 0 )
    {
      LOBYTE(v17) = 0;
      v16 = 31;
      v103 = 31;
      v20 = 31744;
      LOBYTE(v21) = 10;
    }
    else
    {
      LOBYTE(v17) = 10;
      v16 = 31744;
      v103 = 31744;
      LOBYTE(v21) = 0;
      v20 = 31;
    }
  }
  v105 = (a9 & (unsigned int)v16) >> v17;
  v106 = v17;
  v24 = (a5 + 1) & 0xFFFFFFFE;
  v25 = (_WORD *)(a4 + 2LL * a5);
  v96 = v25;
  v93 = (a9 & (unsigned int)v18) >> v19;
  v94 = (a9 & (unsigned int)v20) >> v21;
  v104 = (int)((a6 & 0xFFFFFFFE) - v24) / 2;
  result = (unsigned int)(a2 / 2);
  v27 = (_BYTE *)((int)result + a1);
  v99 = v27;
  if ( a8 )
  {
    v28 = v24 - a5;
    v97 = v12;
    v29 = v28;
    v98 = v28;
    do
    {
      v30 = v27;
      v31 = v25;
      if ( v29 )
      {
        v32 = *v27 & 0xF;
        if ( v32 )
        {
          if ( v32 == 15 )
          {
            LOWORD(v33) = a9;
          }
          else
          {
            v34 = (unsigned __int16)*v25;
            v35 = &unk_1C02EB160;
            v36 = (v34 & (unsigned int)v103) >> v106;
            if ( (int)(v105 - v36) >= 0 )
              v35 = &unk_1C02E0B60;
            v37 = v32;
            v38 = v35[v32];
            v39 = &unk_1C02EB160;
            v40 = v103 & (((v36 << 16) + (v105 - v36) * v38) >> 16 << v106);
            v41 = (v34 & (unsigned int)v18) >> v19;
            if ( (int)(v93 - v41) >= 0 )
              v39 = &unk_1C02E0B60;
            v42 = v39[v37];
            v43 = &unk_1C02EB160;
            v44 = v18 & (((v41 << 16) + (v93 - v41) * v42) >> 16 << v19);
            v45 = (v34 & (unsigned int)v20) >> v21;
            v46 = v44 | v40;
            if ( (int)(v94 - v45) >= 0 )
              v43 = &unk_1C02E0B60;
            v33 = v20 & (((v45 << 16) + (v94 - v45) * v43[v37]) >> 16 << v21) | v46;
          }
          *v25 = v33;
        }
        v31 = v25 + 1;
        v30 = v27 + 1;
      }
      v47 = (unsigned int)v104;
      if ( v104 > 0 )
      {
        v95 = (unsigned int)v104;
        do
        {
          v48 = *v30;
          v49 = (unsigned __int8)*v30 >> 4;
          if ( v49 )
          {
            if ( v49 == 15 )
            {
              v50 = a9;
            }
            else
            {
              v51 = (unsigned __int16)*v31;
              v52 = &unk_1C02EB160;
              v53 = (v51 & (unsigned int)v103) >> v106;
              if ( (int)(v105 - v53) >= 0 )
                v52 = &unk_1C02E0B60;
              v54 = v49;
              v55 = (v53 << 16) + (v105 - v53) * v52[v49];
              v56 = (v51 & (unsigned int)v18) >> v19;
              v101 = v103 & (HIWORD(v55) << v106);
              v57 = &unk_1C02EB160;
              if ( (int)(v93 - v56) >= 0 )
                v57 = &unk_1C02E0B60;
              v58 = v57[v54];
              v59 = &unk_1C02EB160;
              v60 = (v56 << 16) + (v93 - v56) * v58;
              v61 = (v51 & (unsigned int)v20) >> v21;
              v102 = v18 & (HIWORD(v60) << v19) | v101;
              if ( (int)(v94 - v61) >= 0 )
                v59 = &unk_1C02E0B60;
              v50 = v20 & (((v61 << 16) + (v94 - v61) * v59[v54]) >> 16 << v21) | v102;
            }
            *v31 = v50;
            v47 = v95;
          }
          v62 = v31 + 1;
          v63 = v48 & 0xF;
          if ( v63 )
          {
            if ( v63 == 15 )
            {
              v64 = a9;
            }
            else
            {
              v65 = (unsigned __int16)*v62;
              v66 = &unk_1C02EB160;
              v67 = (v65 & (unsigned int)v103) >> v106;
              if ( (int)(v105 - v67) >= 0 )
                v66 = &unk_1C02E0B60;
              v68 = v63;
              v69 = v66[v63];
              v70 = &unk_1C02EB160;
              v71 = (v65 & (unsigned int)v18) >> v19;
              v72 = v103 & (((v67 << 16) + (v105 - v67) * v69) >> 16 << v106);
              if ( (int)(v93 - v71) >= 0 )
                v70 = &unk_1C02E0B60;
              v73 = v70[v68];
              v74 = &unk_1C02EB160;
              v75 = (v71 << 16) + (v93 - v71) * v73;
              v76 = (v65 & (unsigned int)v20) >> v21;
              v77 = v18 & (HIWORD(v75) << v19) | v72;
              if ( (int)(v94 - v76) >= 0 )
                v74 = &unk_1C02E0B60;
              v64 = v20 & (((v76 << 16) + (v94 - v76) * v74[v68]) >> 16 << v21) | v77;
            }
            v47 = v95;
            *v62 = v64;
          }
          v31 = v62 + 1;
          ++v30;
          v95 = --v47;
        }
        while ( v47 );
        v27 = v99;
        v25 = v96;
      }
      if ( a6 != (a6 & 0xFFFFFFFE) )
      {
        v78 = (unsigned __int8)*v30 >> 4;
        if ( v78 )
        {
          if ( v78 == 15 )
          {
            LOWORD(v79) = a9;
          }
          else
          {
            v80 = (unsigned __int16)*v31;
            v81 = &unk_1C02EB160;
            v82 = (v80 & (unsigned int)v103) >> v106;
            if ( (int)(v105 - v82) >= 0 )
              v81 = &unk_1C02E0B60;
            v83 = v78;
            v84 = v81[v78];
            v85 = &unk_1C02EB160;
            v86 = v103 & (((v82 << 16) + (v105 - v82) * v84) >> 16 << v106);
            v87 = (v80 & (unsigned int)v18) >> v19;
            if ( (int)(v93 - v87) >= 0 )
              v85 = &unk_1C02E0B60;
            v88 = v85[v83];
            v89 = &unk_1C02EB160;
            v90 = (v87 << 16) + (v93 - v87) * v88;
            v91 = (v80 & (unsigned int)v20) >> v21;
            v92 = v18 & (HIWORD(v90) << v19) | v86;
            if ( (int)(v94 - v91) >= 0 )
              v89 = &unk_1C02E0B60;
            v79 = v20 & (((v91 << 16) + (v94 - v91) * v89[v83]) >> 16 << v21) | v92;
          }
          *v31 = v79;
        }
      }
      result = (unsigned int)(a8 - 1);
      v27 += v97;
      v25 = (_WORD *)((char *)v25 + a7);
      v29 = v98;
      a8 = result;
      v99 = v27;
      v96 = v25;
    }
    while ( (_DWORD)result );
  }
  return result;
}
