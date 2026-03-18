/*
 * XREFs of GrayShrinkDIB_CY @ 0x1C0258720
 * Callers:
 *     <none>
 * Callees:
 *     GetFixupScan @ 0x1C000D0D8 (GetFixupScan.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0152980 (memmove.c)
 *     AlphaBlendBGRF @ 0x1C0253D48 (AlphaBlendBGRF.c)
 *     MappingBGRF @ 0x1C0258E08 (MappingBGRF.c)
 */

__int64 __fastcall GrayShrinkDIB_CY(_OWORD *a1)
{
  __int64 v1; // rax
  int *v2; // rdx
  __int128 v3; // xmm1
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int64 v10; // rax
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int64 v15; // rdx
  int *v16; // r13
  int v17; // r8d
  size_t v18; // r15
  char *v19; // r14
  char *v20; // rbx
  char *v21; // rsi
  char *v22; // r12
  int *v23; // rcx
  int v24; // eax
  char *v25; // rdi
  void *FixupScan; // rax
  char *v27; // rdx
  __int64 v28; // rax
  unsigned int v29; // r12d
  int v30; // eax
  unsigned __int8 *v31; // rdi
  void *v32; // rax
  char *v33; // r15
  _DWORD *v34; // r9
  __int16 v35; // ax
  int v36; // r10d
  int v37; // r8d
  int *v38; // rcx
  int v39; // edx
  int v40; // eax
  int v41; // eax
  __int64 v42; // rax
  _WORD *v43; // r8
  char *v44; // rbx
  __int64 v45; // r10
  _DWORD *v46; // r11
  __int64 v47; // rdx
  __int64 v48; // rax
  __int16 v49; // ax
  __int64 v50; // rax
  __int64 v51; // rcx
  __int64 i; // rcx
  __int64 v53; // rdx
  __int64 v54; // rax
  _WORD *v55; // rdx
  char *v56; // r8
  signed __int64 v57; // r14
  int v58; // ecx
  __int16 v59; // ax
  __int64 v60; // rax
  BOOL v62; // [rsp+58h] [rbp-B0h]
  int v63; // [rsp+5Ch] [rbp-ACh]
  int v64; // [rsp+60h] [rbp-A8h]
  size_t Size; // [rsp+68h] [rbp-A0h]
  char *v66; // [rsp+70h] [rbp-98h]
  __int64 v67; // [rsp+78h] [rbp-90h]
  unsigned __int8 *v68; // [rsp+80h] [rbp-88h]
  __int16 *v69; // [rsp+88h] [rbp-80h]
  char *v70; // [rsp+90h] [rbp-78h]
  char *v71; // [rsp+98h] [rbp-70h]
  char *v72; // [rsp+A0h] [rbp-68h]
  int v73[34]; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v74; // [rsp+130h] [rbp+28h]
  int v75; // [rsp+138h] [rbp+30h]
  int v76; // [rsp+144h] [rbp+3Ch]
  void (__fastcall *v77)(int *, __int64, _WORD *); // [rsp+168h] [rbp+60h]
  void (__fastcall *v78)(int *, __int64, __int64, __int64, __int64, __int64, __int64, int, __int64); // [rsp+1B8h] [rbp+B0h]
  __int64 v79; // [rsp+1C0h] [rbp+B8h]
  void (__fastcall *v80)(__int64, void *, char *, char *, int); // [rsp+1C8h] [rbp+C0h]
  __int64 v81; // [rsp+1D8h] [rbp+D0h]
  __int64 v82; // [rsp+1E0h] [rbp+D8h]
  __int64 v83; // [rsp+1E8h] [rbp+E0h]
  __int64 v84; // [rsp+228h] [rbp+120h]
  __int64 v85; // [rsp+230h] [rbp+128h]
  __int64 v86; // [rsp+240h] [rbp+138h]
  __int64 v87; // [rsp+248h] [rbp+140h]
  __int64 v88; // [rsp+250h] [rbp+148h]
  int v89; // [rsp+258h] [rbp+150h]
  int v90; // [rsp+25Ch] [rbp+154h]
  int v91; // [rsp+260h] [rbp+158h]
  __int64 v92; // [rsp+268h] [rbp+160h]
  __int64 v93; // [rsp+270h] [rbp+168h]
  __int64 v94; // [rsp+278h] [rbp+170h]
  int v95; // [rsp+280h] [rbp+178h]
  void *v96; // [rsp+2C0h] [rbp+1B8h]
  __int64 v97; // [rsp+2C8h] [rbp+1C0h]
  __int64 v98; // [rsp+2D0h] [rbp+1C8h]
  __int64 v99; // [rsp+2D8h] [rbp+1D0h]
  __int64 v100; // [rsp+2E0h] [rbp+1D8h]
  _WORD *v101; // [rsp+2E8h] [rbp+1E0h]
  int v102; // [rsp+2F8h] [rbp+1F0h]

  v1 = 4LL;
  v2 = v73;
  do
  {
    v3 = a1[1];
    *(_OWORD *)v2 = *a1;
    v4 = a1[2];
    *((_OWORD *)v2 + 1) = v3;
    v5 = a1[3];
    *((_OWORD *)v2 + 2) = v4;
    v6 = a1[4];
    *((_OWORD *)v2 + 3) = v5;
    v7 = a1[5];
    *((_OWORD *)v2 + 4) = v6;
    v8 = a1[6];
    *((_OWORD *)v2 + 5) = v7;
    v9 = a1[7];
    a1 += 8;
    *((_OWORD *)v2 + 6) = v8;
    v2 += 32;
    *((_OWORD *)v2 - 1) = v9;
    --v1;
  }
  while ( v1 );
  v10 = *((_QWORD *)a1 + 10);
  v11 = a1[1];
  *(_OWORD *)v2 = *a1;
  v12 = a1[2];
  *((_OWORD *)v2 + 1) = v11;
  v13 = a1[3];
  *((_OWORD *)v2 + 2) = v12;
  v14 = a1[4];
  *((_OWORD *)v2 + 3) = v13;
  *((_OWORD *)v2 + 4) = v14;
  *((_QWORD *)v2 + 10) = v10;
  v15 = v82;
  v16 = *(int **)(v82 + 32);
  v17 = *(unsigned __int16 *)(v82 + 14);
  v67 = *(_QWORD *)(v82 + 24);
  v18 = 4 * v75;
  Size = v18;
  v19 = (char *)(v16 + 512);
  v70 = (char *)(v16 + 512);
  v20 = (char *)v16 + v18 + 2048;
  v71 = v20;
  v21 = &v20[v18];
  v72 = &v20[v18];
  v22 = &v20[v18 + v18];
  v68 = (unsigned __int8 *)v22;
  v66 = &v22[v75];
  if ( v17 )
  {
    v23 = v16;
    v24 = -v17;
    do
    {
      v24 += v17;
      *v23++ = v24;
    }
    while ( v23 < v16 + 256 );
    v25 = &v20[v18 + v18];
    FixupScan = GetFixupScan((__int64)v73, v96);
    v80(v81, FixupScan, v25, v66, 1);
    v27 = &v20[v18];
    do
    {
      v28 = (unsigned __int8)*v25++;
      *(_DWORD *)v27 = v16[v28];
      v27 += 4;
    }
    while ( v27 < v22 );
    v15 = v82;
    if ( !*(_WORD *)(v82 + 10) )
      v73[0] |= 0x20u;
  }
  v69 = *(__int16 **)(v15 + 40);
  v29 = 0;
  v63 = *(unsigned __int16 *)(v15 + 12);
  v30 = *(_DWORD *)(v15 + 16);
  v62 = v63 == 1;
  if ( v30 )
  {
    do
    {
      v31 = v68;
      v64 = v30 - 1;
      v32 = GetFixupScan((__int64)v73, v96);
      v80(v81, v32, (char *)v68, v66, 1);
      v33 = &v21[v18];
      v34 = v21;
      v35 = *v69++;
      if ( (v35 & 0x4000) != 0 )
      {
        v36 = v35 & 0x3FFF;
        v37 = -v36;
        v38 = v16;
        v39 = *(_DWORD *)(v67 + 4) + ((v35 >> 15) & 1) - v36;
        v40 = v36 - (*(_DWORD *)(v67 + 4) + ((v35 >> 15) & 1));
        do
        {
          v37 += v36;
          v40 += v39;
          *v38 = v37;
          v38[256] = v40;
          ++v38;
        }
        while ( v38 < v16 + 256 );
        v41 = v63--;
        if ( v41 <= 0 )
        {
          v43 = v101;
          v44 = (char *)(v20 - v19);
          v45 = v19 - v21;
          do
          {
            v46 = (_DWORD *)((char *)v34 + v45);
            *v34 += v16[*v31];
            v47 = (unsigned int)((6 * *(_DWORD *)((char *)v34 + v45 + (_QWORD)v44)
                                - *v34
                                - *(_DWORD *)((char *)v34 + v45)) >> 7);
            if ( (v47 & 0xFF0000) != 0 )
              v47 = ~WORD1(v47);
            *v43 = v47;
            ++v34;
            v43 = (_WORD *)((char *)v43 + v102);
            v48 = *v31++;
            *v46 = v16[v48 + 256];
          }
          while ( v34 < (_DWORD *)v33 );
          v49 = v73[0];
          if ( SLOBYTE(v73[0]) < 0 )
          {
            v77(v73, v47, v43);
            v49 = v73[0];
          }
          if ( (v49 & 0x800) != 0 )
          {
            AlphaBlendBGRF(v73);
            LOBYTE(v49) = v73[0];
          }
          if ( (v49 & 0x10) != 0 )
          {
            MappingBGRF(v97, v98, v85, v92);
            v50 = v95 + v92;
            if ( v50 == v93 )
              v50 = v94;
            v92 = v50;
          }
          v78(v73, v99, v100, v74, v84, v86, v86 + v90, v91, v79);
          v51 = v89 + v86;
          if ( v51 == v87 )
            v51 = v88;
          v74 += v76;
          ++v29;
          v86 = v51;
        }
        else
        {
          do
          {
            *v34 += v16[*v31];
            v42 = *v31++;
            *(_DWORD *)((char *)v34++ + v19 - v21) = v16[v42 + 256];
          }
          while ( v34 < (_DWORD *)v33 );
          if ( v62 )
          {
            memmove(v20, v21, Size);
            v62 = 0;
          }
        }
        v21 = v19;
        for ( i = 0LL; i < 2; ++i )
          (&v70)[i] = (&v71)[i];
        v20 = v71;
        v72 = v19;
        v19 = v70;
      }
      else
      {
        v53 = v67 + (((unsigned __int64)(unsigned __int16)v35 >> 5) & 0x400);
        do
        {
          v54 = *v31++;
          *v34++ += *(_DWORD *)(v53 + 4 * v54);
        }
        while ( v34 < (_DWORD *)v33 );
      }
      v30 = v64;
      v18 = Size;
    }
    while ( v64 );
  }
  if ( v74 != v83 )
  {
    v55 = v101;
    v56 = &v20[v18];
    v57 = v19 - v20;
    do
    {
      v58 = (5 * *(_DWORD *)v20 - *(_DWORD *)&v20[v57]) >> 7;
      if ( (v58 & 0xFF0000) != 0 )
        LOWORD(v58) = ~HIWORD(v58);
      *v55 = v58;
      v20 += 4;
      v55 = (_WORD *)((char *)v55 + v102);
    }
    while ( v20 < v56 );
    v59 = v73[0];
    if ( SLOBYTE(v73[0]) < 0 )
    {
      ((void (__fastcall *)(int *, _WORD *))v77)(v73, v55);
      v59 = v73[0];
    }
    if ( (v59 & 0x800) != 0 )
    {
      AlphaBlendBGRF(v73);
      LOBYTE(v59) = v73[0];
    }
    if ( (v59 & 0x10) != 0 )
    {
      MappingBGRF(v97, v98, v85, v92);
      v60 = v95 + v92;
      if ( v60 == v93 )
        v60 = v94;
      v92 = v60;
    }
    v78(v73, v99, v100, v74, v84, v86, v86 + v90, v91, v79);
    ++v29;
  }
  return v29;
}
