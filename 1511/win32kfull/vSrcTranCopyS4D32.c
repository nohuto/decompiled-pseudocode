/*
 * XREFs of vSrcTranCopyS4D32 @ 0x1C00F8800
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall vSrcTranCopyS4D32(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        unsigned int a9,
        int a10,
        __int64 a11)
{
  __int64 v12; // r15
  __int64 v13; // rax
  int v14; // ecx
  int v15; // esi
  int v16; // edi
  int v17; // edx
  int v18; // eax
  int v19; // ebx
  int v20; // ebp
  unsigned int v23; // r8d
  unsigned int *v24; // r12
  __int64 result; // rax
  _BYTE *v26; // r14
  int v27; // r8d
  __int64 v28; // rcx
  char *v29; // r15
  unsigned int *v30; // r11
  __int64 v31; // rax
  char v32; // r12
  unsigned __int8 v33; // r8
  unsigned __int8 v34; // r12
  unsigned int v35; // eax
  unsigned int v36; // r12d
  unsigned int v37; // r10d
  _DWORD *v38; // rax
  unsigned int v39; // edx
  __int64 v40; // r9
  unsigned int v41; // eax
  unsigned int v42; // r8d
  _DWORD *v43; // rax
  int v44; // edx
  _DWORD *v45; // rax
  unsigned int v46; // edx
  unsigned int v47; // r8d
  unsigned int v48; // r10d
  _DWORD *v49; // rax
  unsigned int v50; // edx
  __int64 v51; // r9
  int v52; // r12d
  _DWORD *v53; // rax
  unsigned int v54; // r8d
  unsigned int v55; // r12d
  int v56; // edx
  _DWORD *v57; // rax
  unsigned int v58; // edx
  unsigned int v59; // r8d
  int v60; // r12d
  int *v61; // rcx
  unsigned __int8 v62; // r8
  unsigned int v63; // r11d
  unsigned int v64; // r10d
  _DWORD *v65; // rax
  unsigned int v66; // edx
  __int64 v67; // r9
  int v68; // r11d
  _DWORD *v69; // rax
  unsigned int v70; // r11d
  unsigned int v71; // r8d
  int v72; // edx
  _DWORD *v73; // rax
  unsigned int v74; // edx
  unsigned int v75; // r8d
  int v76; // r11d
  unsigned __int8 v77; // r8
  unsigned int v78; // r15d
  unsigned int v79; // r10d
  _DWORD *v80; // rax
  unsigned int v81; // edx
  __int64 v82; // r9
  int v83; // r15d
  _DWORD *v84; // rax
  unsigned int v85; // r15d
  unsigned int v86; // r8d
  int v87; // edx
  _DWORD *v88; // rax
  unsigned int v89; // edx
  unsigned int v90; // r8d
  int v91; // r15d
  unsigned int v92; // [rsp+0h] [rbp-68h]
  unsigned int v93; // [rsp+4h] [rbp-64h]
  __int64 v94; // [rsp+8h] [rbp-60h]
  unsigned int *v95; // [rsp+10h] [rbp-58h]
  __int64 v96; // [rsp+20h] [rbp-48h]
  __int64 v97; // [rsp+28h] [rbp-40h]
  _BYTE *v98; // [rsp+70h] [rbp+8h]
  int v100; // [rsp+78h] [rbp+10h]
  int v101; // [rsp+78h] [rbp+10h]
  int v102; // [rsp+88h] [rbp+20h]
  int v103; // [rsp+90h] [rbp+28h]
  unsigned int v104; // [rsp+B0h] [rbp+48h]
  char v105; // [rsp+C0h] [rbp+58h]

  v12 = a3;
  v13 = *(_QWORD *)(a11 + 120);
  if ( !v13 )
    v13 = *(_QWORD *)(*(_QWORD *)(a11 + 48) + 1832LL);
  v14 = *(_DWORD *)(v13 + 24);
  if ( (v14 & 2) != 0 )
  {
    v61 = *(int **)(v13 + 128);
    v18 = *v61;
    v17 = v61[6];
    v16 = v61[1];
    v15 = v61[7];
    v19 = v61[2];
    v20 = v61[8];
    v102 = *v61;
  }
  else
  {
    LOBYTE(v15) = 8;
    v16 = 65280;
    if ( (v14 & 4) != 0 )
    {
      LOBYTE(v17) = 0;
      v18 = 255;
      v102 = 255;
      v19 = 16711680;
      LOBYTE(v20) = 16;
    }
    else
    {
      LOBYTE(v17) = 16;
      v18 = 16711680;
      v102 = 16711680;
      v19 = 255;
      LOBYTE(v20) = 0;
    }
  }
  v104 = (a9 & v18) >> v17;
  v105 = v17;
  v23 = (a5 + 1) & 0xFFFFFFFE;
  v24 = (unsigned int *)(a4 + 4LL * a5);
  v95 = v24;
  v92 = (a9 & v16) >> v15;
  v93 = (a9 & v19) >> v20;
  v103 = (int)((a6 & 0xFFFFFFFE) - v23) / 2;
  result = (unsigned int)(a2 / 2);
  v26 = (_BYTE *)((int)result + a1);
  v98 = v26;
  if ( a8 )
  {
    v27 = v23 - a5;
    v96 = v12;
    v28 = v27;
    v97 = v27;
    do
    {
      v29 = v26;
      v30 = v24;
      if ( v28 )
      {
        v62 = *v26 & 0xF;
        if ( v62 )
        {
          if ( v62 == 15 )
          {
            v63 = a9;
          }
          else
          {
            v64 = *v24;
            v65 = &unk_1C02E9F30;
            v66 = (*v24 & v102) >> v105;
            if ( (int)(v104 - v66) >= 0 )
              v65 = &unk_1C02DF970;
            v67 = v62;
            v68 = v65[v62];
            v69 = &unk_1C02E9F30;
            v70 = v102 & (((v66 << 16) + (v104 - v66) * v68) >> 16 << v105);
            v71 = (v64 & v16) >> v15;
            if ( (int)(v92 - v71) >= 0 )
              v69 = &unk_1C02DF970;
            v72 = v69[v67];
            v73 = &unk_1C02E9F30;
            v74 = v16 & (((v71 << 16) + (v92 - v71) * v72) >> 16 << v15);
            v75 = (v64 & v19) >> v20;
            v76 = v74 | v70;
            if ( (int)(v93 - v75) >= 0 )
              v73 = &unk_1C02DF970;
            v63 = v19 & (((v75 << 16) + (v93 - v75) * v73[v67]) >> 16 << v20) | v76;
          }
          *v24 = v63;
        }
        v30 = v24 + 1;
        v29 = v26 + 1;
      }
      v31 = (unsigned int)v103;
      if ( v103 > 0 )
      {
        v94 = (unsigned int)v103;
        do
        {
          v32 = *v29;
          v33 = (unsigned __int8)*v29 >> 4;
          if ( v33 )
          {
            if ( v33 == 15 )
            {
              v35 = a9;
            }
            else
            {
              v37 = *v30;
              v38 = &unk_1C02E9F30;
              v39 = (*v30 & v102) >> v105;
              if ( (int)(v104 - v39) >= 0 )
                v38 = &unk_1C02DF970;
              v40 = v33;
              v41 = (v39 << 16) + (v104 - v39) * v38[v33];
              v42 = (v37 & v16) >> v15;
              v100 = v102 & (HIWORD(v41) << v105);
              v43 = &unk_1C02E9F30;
              if ( (int)(v92 - v42) >= 0 )
                v43 = &unk_1C02DF970;
              v44 = v43[v40];
              v45 = &unk_1C02E9F30;
              v46 = (v42 << 16) + (v92 - v42) * v44;
              v47 = (v37 & v19) >> v20;
              v101 = v16 & (HIWORD(v46) << v15) | v100;
              if ( (int)(v93 - v47) >= 0 )
                v45 = &unk_1C02DF970;
              v35 = v19 & (((v47 << 16) + (v93 - v47) * v45[v40]) >> 16 << v20) | v101;
            }
            *v30 = v35;
            v31 = v94;
          }
          v34 = v32 & 0xF;
          if ( v34 )
          {
            if ( v34 == 15 )
            {
              v36 = a9;
            }
            else
            {
              v48 = v30[1];
              v49 = &unk_1C02E9F30;
              v50 = (v48 & v102) >> v105;
              if ( (int)(v104 - v50) >= 0 )
                v49 = &unk_1C02DF970;
              v51 = v34;
              v52 = v49[v34];
              v53 = &unk_1C02E9F30;
              v54 = (v48 & v16) >> v15;
              v55 = v102 & (((v50 << 16) + (v104 - v50) * v52) >> 16 << v105);
              if ( (int)(v92 - v54) >= 0 )
                v53 = &unk_1C02DF970;
              v56 = v53[v51];
              v57 = &unk_1C02E9F30;
              v58 = (v54 << 16) + (v92 - v54) * v56;
              v59 = (v48 & v19) >> v20;
              v60 = v16 & (HIWORD(v58) << v15) | v55;
              if ( (int)(v93 - v59) >= 0 )
                v57 = &unk_1C02DF970;
              v36 = v19 & (((v59 << 16) + (v93 - v59) * v57[v51]) >> 16 << v20) | v60;
            }
            v31 = v94;
            v30[1] = v36;
          }
          v30 += 2;
          ++v29;
          v94 = --v31;
        }
        while ( v31 );
        v26 = v98;
        v24 = v95;
      }
      if ( a6 != (a6 & 0xFFFFFFFE) )
      {
        v77 = (unsigned __int8)*v29 >> 4;
        if ( v77 )
        {
          if ( v77 == 15 )
          {
            v78 = a9;
          }
          else
          {
            v79 = *v30;
            v80 = &unk_1C02E9F30;
            v81 = (*v30 & v102) >> v105;
            if ( (int)(v104 - v81) >= 0 )
              v80 = &unk_1C02DF970;
            v82 = v77;
            v83 = v80[v77];
            v84 = &unk_1C02E9F30;
            v85 = v102 & (((v81 << 16) + (v104 - v81) * v83) >> 16 << v105);
            v86 = (v79 & v16) >> v15;
            if ( (int)(v92 - v86) >= 0 )
              v84 = &unk_1C02DF970;
            v87 = v84[v82];
            v88 = &unk_1C02E9F30;
            v89 = (v86 << 16) + (v92 - v86) * v87;
            v90 = (v79 & v19) >> v20;
            v91 = v16 & (HIWORD(v89) << v15) | v85;
            if ( (int)(v93 - v90) >= 0 )
              v88 = &unk_1C02DF970;
            v78 = v19 & (((v90 << 16) + (v93 - v90) * v88[v82]) >> 16 << v20) | v91;
          }
          *v30 = v78;
        }
      }
      result = (unsigned int)(a8 - 1);
      v26 += v96;
      v24 = (unsigned int *)((char *)v24 + a7);
      v28 = v97;
      a8 = result;
      v98 = v26;
      v95 = v24;
    }
    while ( (_DWORD)result );
  }
  return result;
}
