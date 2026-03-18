/*
 * XREFs of sub_140251E08 @ 0x140251E08
 * Callers:
 *     FsRtlMdlReadCompleteDevEx @ 0x140242000 (FsRtlMdlReadCompleteDevEx.c)
 *     sub_14024FE34 @ 0x14024FE34 (sub_14024FE34.c)
 *     sub_140777D18 @ 0x140777D18 (sub_140777D18.c)
 *     $$5e @ 0x140778B84 ($$5e.c)
 *     sub_140778D9C @ 0x140778D9C (sub_140778D9C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140251E08(_DWORD *a1, unsigned int a2, int a3)
{
  _DWORD *v4; // rdi
  __int64 v5; // rbx
  char v6; // r12
  int v7; // r10d
  unsigned __int64 v8; // rax
  __int64 v9; // rcx
  int v10; // r15d
  unsigned __int64 v11; // rax
  unsigned __int128 v12; // rax
  unsigned __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  _QWORD *v16; // r12
  __int64 v17; // r12
  _QWORD *v18; // r8
  int v19; // r11d
  unsigned __int64 v20; // r9
  unsigned __int64 v21; // rax
  unsigned __int128 v22; // rax
  unsigned __int64 v23; // rax
  unsigned __int128 v24; // rax
  unsigned __int64 v25; // rdx
  unsigned int v26; // r11d
  unsigned int v27; // r15d
  _QWORD *v28; // r8
  unsigned __int64 v29; // r11
  unsigned __int64 v30; // rax
  unsigned __int128 v31; // rax
  unsigned __int64 v32; // rax
  unsigned __int128 v33; // rax
  unsigned __int64 v34; // rdx
  __int64 v35; // rcx
  unsigned int v36; // edx
  char *v37; // r8
  unsigned __int64 v38; // r15
  char *v39; // r8
  int v40; // eax
  unsigned __int64 v42; // rax
  __int64 v43; // rcx
  int v44; // r9d
  unsigned __int64 v45; // rax
  unsigned __int128 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // rcx
  int v50; // r12d
  unsigned __int128 v51; // rax
  __int64 v52; // rax
  _QWORD *v53; // r8
  int v54; // r10d
  unsigned __int64 v55; // r15
  unsigned __int64 v56; // rax
  unsigned __int128 v57; // rax
  unsigned __int64 v58; // rax
  unsigned __int128 v59; // rax
  unsigned __int64 v60; // rdx
  unsigned int v61; // r8d
  __int64 v62; // r11
  __int64 v63; // r12
  _QWORD *v64; // r10
  unsigned __int64 v65; // r11
  unsigned __int64 v66; // rax
  unsigned __int128 v67; // rax
  unsigned __int64 v68; // rax
  unsigned __int128 v69; // rax
  unsigned __int64 v70; // rdx
  int v71; // ecx
  _QWORD *v72; // rax
  __int64 v73; // rdx
  int v74; // ecx
  int v75; // eax
  __int64 v76; // rax
  __int64 v77; // rax
  unsigned int v78; // r11d
  _QWORD *v79; // r8
  int v80; // r9d
  unsigned __int64 v81; // r11
  unsigned __int64 v82; // rax
  unsigned __int128 v83; // rax
  unsigned __int64 v84; // rax
  unsigned __int128 v85; // rax
  unsigned __int64 v86; // rdx
  __int64 v87; // rax
  unsigned int v88; // r9d
  unsigned int v89; // r11d
  _QWORD *v90; // r8
  unsigned __int64 v91; // r11
  unsigned __int64 v92; // rax
  unsigned __int128 v93; // rax
  unsigned __int64 v94; // rax
  unsigned __int128 v95; // rax
  unsigned __int64 v96; // rdx
  __int64 v97; // rcx
  unsigned int v98; // edx
  char *v99; // r8
  unsigned __int64 v100; // r9
  char *v101; // r8
  int v102; // eax
  unsigned __int64 v103; // [rsp+30h] [rbp-A9h]
  __int64 v104; // [rsp+30h] [rbp-A9h]
  __int64 v105; // [rsp+30h] [rbp-A9h]
  __int64 v106; // [rsp+30h] [rbp-A9h]
  unsigned __int64 v107; // [rsp+38h] [rbp-A1h]
  __int64 v108; // [rsp+38h] [rbp-A1h]
  unsigned __int64 v109; // [rsp+40h] [rbp-99h]
  __int64 v110; // [rsp+40h] [rbp-99h]
  unsigned int v113; // [rsp+150h] [rbp+77h]
  unsigned int v114; // [rsp+158h] [rbp+7Fh]
  __int64 v115; // [rsp+158h] [rbp+7Fh]
  unsigned int v116; // [rsp+158h] [rbp+7Fh]

  v4 = a1;
  if ( a3 != 3 )
  {
    v5 = 0LL;
    v6 = 1;
    v7 = 0;
    if ( (a1[438] & 0x10000000) != 0 )
      v6 = 0;
    else
      v7 = a1[415];
    v114 = a1[370];
    v8 = __rdtsc();
    v9 = __ROR8__(v8, 3);
    v10 = ((unsigned __int16)(((v9 ^ v8) * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ (unsigned __int16)(8193 * (v9 ^ v8))) & 0x7FF;
    v11 = __rdtsc();
    v12 = (__ROR8__(v11, 3) ^ v11) * (unsigned __int128)0x7010008004002001uLL;
    v103 = (*((_QWORD *)&v12 + 1) ^ (unsigned __int64)v12) % (unsigned int)(v10 + 1);
    if ( v7 )
    {
      v13 = __rdtsc();
      v14 = __ROR8__(v13, 3);
      v10 += ((((unsigned int)(((v14 ^ v13) * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ (67117057
                                                                                                * ((unsigned int)v14 ^ (unsigned int)v13))) & 1) << 12)
           + 4096;
      v115 = v10 + a2;
      v15 = (*((__int64 (__fastcall **)(__int64, __int64))v4 + 65))(v115 + 8, 0xFFFFFFFFLL);
      v16 = (_QWORD *)v15;
      if ( !v15 )
        goto LABEL_12;
      if ( !(*((unsigned __int8 (__fastcall **)(__int64, _QWORD, __int64))v4 + 67))(
              v15,
              ((_DWORD)v115 + 4095) & 0xFFFFF000,
              64LL) )
      {
        (*((void (__fastcall **)(_QWORD *, __int64))v4 + 66))(v16, v115);
        goto LABEL_12;
      }
      *v16 = v115 + 8;
      v17 = (__int64)(v16 + 1);
    }
    else
    {
      v17 = (*((__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))v4 + 28))(v6 == 0 ? 0x200 : 0, v10 + a2, v114);
    }
    if ( v17 )
    {
      v18 = (_QWORD *)v17;
      v19 = v103;
      if ( (unsigned int)v103 >= 8 )
      {
        v20 = (unsigned __int64)(unsigned int)v103 >> 3;
        do
        {
          v21 = __rdtsc();
          v19 -= 8;
          v22 = (__ROR8__(v21, 3) ^ v21) * (unsigned __int128)0x7010008004002001uLL;
          *v18++ = v22 ^ *((_QWORD *)&v22 + 1);
          --v20;
        }
        while ( v20 );
      }
      if ( v19 )
      {
        v23 = __rdtsc();
        v24 = (__ROR8__(v23, 3) ^ v23) * (unsigned __int128)0x7010008004002001uLL;
        v25 = v24 ^ *((_QWORD *)&v24 + 1);
        do
        {
          *(_BYTE *)v18 = v25;
          v18 = (_QWORD *)((char *)v18 + 1);
          v25 >>= 8;
          --v19;
        }
        while ( v19 );
      }
      v26 = a2;
      v27 = v10 - v103;
      v28 = (_QWORD *)((unsigned int)v103 + v17 + a2);
      if ( v27 >= 8 )
      {
        v29 = (unsigned __int64)v27 >> 3;
        do
        {
          v30 = __rdtsc();
          v27 -= 8;
          v31 = (__ROR8__(v30, 3) ^ v30) * (unsigned __int128)0x7010008004002001uLL;
          *v28++ = v31 ^ *((_QWORD *)&v31 + 1);
          --v29;
        }
        while ( v29 );
        v26 = a2;
      }
      if ( v27 )
      {
        v32 = __rdtsc();
        v33 = (__ROR8__(v32, 3) ^ v32) * (unsigned __int128)0x7010008004002001uLL;
        v34 = v33 ^ *((_QWORD *)&v33 + 1);
        do
        {
          *(_BYTE *)v28 = v34;
          v28 = (_QWORD *)((char *)v28 + 1);
          v34 >>= 8;
          --v27;
        }
        while ( v27 );
      }
      v35 = v17 + (unsigned int)v103;
      if ( v35 )
      {
        v36 = v4[359];
        v37 = (char *)(v17 + (unsigned int)v103);
        if ( v36 >= 8 )
        {
          v38 = (unsigned __int64)v36 >> 3;
          do
          {
            v36 -= 8;
            *(_QWORD *)v37 = *(_QWORD *)v4;
            v4 += 2;
            v37 += 8;
            --v38;
          }
          while ( v38 );
        }
        if ( v36 )
        {
          v39 = (char *)(v37 - (char *)v4);
          do
          {
            v39[(_QWORD)v4] = *(_BYTE *)v4;
            v4 = (_DWORD *)((char *)v4 + 1);
            --v36;
          }
          while ( v36 );
        }
        *(_DWORD *)(v35 + 1660) = a3;
        v40 = *(_DWORD *)(v35 + 1752);
        *(_DWORD *)(v35 + 1436) = v26;
        *(_QWORD *)(v35 + 1408) = v17;
        if ( (v40 & 0x10000000) == 0 )
          *(_DWORD *)(v35 + 1752) = v40 | 0x20000000;
        return v17 + (unsigned int)v103;
      }
      return v5;
    }
LABEL_12:
    ++v4[470];
    return v5;
  }
  v42 = __rdtsc();
  v43 = __ROR8__(v42, 3);
  v44 = ((unsigned __int16)(((v43 ^ v42) * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ (unsigned __int16)(8193 * (v43 ^ v42))) & 0x7FF;
  v45 = __rdtsc();
  v46 = (__ROR8__(v45, 3) ^ v45) * (unsigned __int128)0x7010008004002001uLL;
  v107 = (*((_QWORD *)&v46 + 1) ^ (unsigned __int64)v46) % (unsigned int)(v44 + 1);
  *(_QWORD *)&v46 = __rdtsc();
  v47 = __ROR8__(v46, 3);
  v48 = (unsigned int)v4[370];
  v116 = v44
       + ((((unsigned int)(((v47 ^ (unsigned __int64)v46) * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ (67117057 * ((unsigned int)v47 ^ (unsigned int)v46))) & 1) << 12)
       + 4096;
  *(_QWORD *)&v46 = __rdtsc();
  v49 = __ROR8__(v46, 3);
  v50 = ((unsigned __int16)(((v49 ^ (unsigned __int64)v46) * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ (unsigned __int16)(8193 * (v49 ^ v46))) & 0x7FF;
  *(_QWORD *)&v46 = __rdtsc();
  v51 = (__ROR8__(v46, 3) ^ (unsigned __int64)v46) * (unsigned __int128)0x7010008004002001uLL;
  v109 = (*((_QWORD *)&v51 + 1) ^ (unsigned __int64)v51) % (unsigned int)(v50 + 1);
  v52 = (*((__int64 (__fastcall **)(__int64, _QWORD, __int64))v4 + 28))(512LL, (unsigned int)(v50 + 32), v48);
  v104 = v52;
  if ( !v52 )
  {
    ++v4[470];
LABEL_87:
    ++v4[470];
    return 0LL;
  }
  v53 = (_QWORD *)v52;
  v54 = v109;
  if ( (unsigned int)v109 >= 8 )
  {
    v55 = (unsigned __int64)(unsigned int)v109 >> 3;
    do
    {
      v56 = __rdtsc();
      v54 -= 8;
      v57 = (__ROR8__(v56, 3) ^ v56) * (unsigned __int128)0x7010008004002001uLL;
      *v53++ = v57 ^ *((_QWORD *)&v57 + 1);
      --v55;
    }
    while ( v55 );
  }
  if ( v54 )
  {
    v58 = __rdtsc();
    v59 = (__ROR8__(v58, 3) ^ v58) * (unsigned __int128)0x7010008004002001uLL;
    v60 = v59 ^ *((_QWORD *)&v59 + 1);
    do
    {
      *(_BYTE *)v53 = v60;
      v53 = (_QWORD *)((char *)v53 + 1);
      v60 >>= 8;
      --v54;
    }
    while ( v54 );
  }
  v61 = v50 - v109;
  v62 = v104;
  v63 = v104 + (unsigned int)v109;
  v64 = (_QWORD *)(v63 + 32);
  if ( v61 >= 8 )
  {
    v65 = (unsigned __int64)v61 >> 3;
    do
    {
      v66 = __rdtsc();
      v61 -= 8;
      v67 = (__ROR8__(v66, 3) ^ v66) * (unsigned __int128)0x7010008004002001uLL;
      *v64++ = v67 ^ *((_QWORD *)&v67 + 1);
      --v65;
    }
    while ( v65 );
    v62 = v104;
  }
  if ( v61 )
  {
    v68 = __rdtsc();
    v69 = (__ROR8__(v68, 3) ^ v68) * (unsigned __int128)0x7010008004002001uLL;
    v70 = v69 ^ *((_QWORD *)&v69 + 1);
    do
    {
      *(_BYTE *)v64 = v70;
      v64 = (_QWORD *)((char *)v64 + 1);
      v70 >>= 8;
      --v61;
    }
    while ( v61 );
  }
  if ( !v63 )
    goto LABEL_87;
  v71 = 32;
  v72 = (_QWORD *)(v104 + (unsigned int)v109);
  v73 = 4LL;
  do
  {
    *v72 = 0LL;
    v71 -= 8;
    ++v72;
    --v73;
  }
  while ( v73 );
  for ( ; v71; --v71 )
  {
    *(_BYTE *)v72 = 0;
    v72 = (_QWORD *)((char *)v72 + 1);
  }
  v113 = v4[370];
  v74 = 5;
  *(_DWORD *)(v63 + 16) = v113;
  *(_QWORD *)(v63 + 24) = v62;
  v75 = v4[438];
  if ( (v75 & 0x1000000) != 0 )
    v74 = 21;
  else
    v4[438] = v75 | 0x1000000;
  v110 = a2 + v116;
  v76 = (*((__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64, int, int))v4 + 101))(0LL, -1LL, 0LL, v110, 1, v74);
  v105 = v76;
  if ( !v76
    || (*(_QWORD *)v63 = v76, (v77 = (*((__int64 (__fastcall **)(__int64, _QWORD))v4 + 102))(v110, v113)) == 0)
    || (*(_QWORD *)(v63 + 8) = v77,
        v106 = (*((__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))v4 + 103))(v77, v113, v105, 1LL),
        !(*((unsigned __int8 (__fastcall **)(__int64, _QWORD, __int64))v4 + 67))(
           v106,
           ((_DWORD)v110 + 4095) & 0xFFFFF000,
           64LL)) )
  {
    (*((void (__fastcall **)(__int64))v4 + 105))(v63);
    goto LABEL_87;
  }
  v78 = v107;
  v79 = (_QWORD *)v106;
  v80 = v107;
  if ( (unsigned int)v107 >= 8 )
  {
    v81 = (unsigned __int64)(unsigned int)v107 >> 3;
    do
    {
      v82 = __rdtsc();
      v80 -= 8;
      v83 = (__ROR8__(v82, 3) ^ v82) * (unsigned __int128)0x7010008004002001uLL;
      *v79++ = v83 ^ *((_QWORD *)&v83 + 1);
      --v81;
    }
    while ( v81 );
    v78 = v107;
  }
  if ( v80 )
  {
    v84 = __rdtsc();
    v85 = (__ROR8__(v84, 3) ^ v84) * (unsigned __int128)0x7010008004002001uLL;
    v86 = v85 ^ *((_QWORD *)&v85 + 1);
    do
    {
      *(_BYTE *)v79 = v86;
      v79 = (_QWORD *)((char *)v79 + 1);
      v86 >>= 8;
      --v80;
    }
    while ( v80 );
  }
  v87 = v78;
  v88 = v116 - v78;
  v89 = a2;
  v108 = v87;
  v90 = (_QWORD *)(v106 + v87 + a2);
  if ( v88 >= 8 )
  {
    v91 = (unsigned __int64)v88 >> 3;
    do
    {
      v92 = __rdtsc();
      v88 -= 8;
      v93 = (__ROR8__(v92, 3) ^ v92) * (unsigned __int128)0x7010008004002001uLL;
      *v90++ = v93 ^ *((_QWORD *)&v93 + 1);
      --v91;
    }
    while ( v91 );
    v89 = a2;
  }
  if ( v88 )
  {
    v94 = __rdtsc();
    v95 = (__ROR8__(v94, 3) ^ v94) * (unsigned __int128)0x7010008004002001uLL;
    v96 = v95 ^ *((_QWORD *)&v95 + 1);
    do
    {
      *(_BYTE *)v90 = v96;
      v90 = (_QWORD *)((char *)v90 + 1);
      v96 >>= 8;
      --v88;
    }
    while ( v88 );
  }
  v97 = v106 + v108;
  if ( v106 + v108 )
  {
    v98 = v4[359];
    v99 = (char *)(v106 + v108);
    if ( v98 >= 8 )
    {
      v100 = (unsigned __int64)v98 >> 3;
      do
      {
        v98 -= 8;
        *(_QWORD *)v99 = *(_QWORD *)v4;
        v4 += 2;
        v99 += 8;
        --v100;
      }
      while ( v100 );
    }
    if ( v98 )
    {
      v101 = (char *)(v99 - (char *)v4);
      do
      {
        *((_BYTE *)v4 + (_QWORD)v101) = *(_BYTE *)v4;
        v4 = (_DWORD *)((char *)v4 + 1);
        --v98;
      }
      while ( v98 );
    }
    v102 = *(_DWORD *)(v97 + 1752);
    *(_DWORD *)(v97 + 1436) = v89;
    *(_QWORD *)(v97 + 1408) = v63;
    *(_DWORD *)(v97 + 1660) = 3;
    if ( (v102 & 0x10000000) == 0 )
      *(_DWORD *)(v97 + 1752) = v102 | 0x20000000;
    return v97;
  }
  return 0LL;
}
