/*
 * XREFs of sub_140158998 @ 0x140158998
 * Callers:
 *     FsRtlMdlReadCompleteDevEx @ 0x140242000 (FsRtlMdlReadCompleteDevEx.c)
 * Callees:
 *     sub_1401588B8 @ 0x1401588B8 (sub_1401588B8.c)
 *     sub_14015891C @ 0x14015891C (sub_14015891C.c)
 */

void __fastcall sub_140158998(__int64 a1, int *a2)
{
  int *v2; // r14
  __int64 v4; // rdx
  unsigned int v5; // eax
  __int64 v6; // rbp
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int16 v9; // cx
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rsi
  int v12; // eax
  __int64 v13; // rcx
  unsigned __int64 v14; // rdi
  unsigned __int8 CurrentIrql; // r12
  unsigned int *v16; // rax
  BOOL v17; // r15d
  unsigned __int64 v18; // rsi
  __int64 v19; // rdx
  char *v20; // r8
  char *v21; // r9
  __int64 v22; // rcx
  __int64 v23; // rax
  bool v24; // zf
  char v25; // cl
  char v26; // al
  __int64 v27; // r12
  int *v28; // r9
  __int64 v29; // rcx
  unsigned __int64 v30; // r15
  __int64 v31; // rdx
  __int64 v32; // rdi
  __int64 v33; // r8
  unsigned int i; // ebp
  unsigned __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rdi
  int *v39; // rsi
  int v40; // r11d
  _QWORD *v41; // r9
  unsigned __int64 v42; // rdx
  const char *v43; // rax
  int v44; // r8d
  __int64 v45; // r10
  __int64 v46; // rax
  unsigned __int64 j; // rax
  unsigned int v48; // edx
  char *v49; // r8
  __int64 v50; // rcx
  __int64 v51; // rax
  char v52; // cl
  char v53; // al
  __int64 v54; // rcx
  unsigned __int64 v55; // rdi
  unsigned __int8 v56; // r12
  unsigned int *v57; // rax
  BOOL v58; // r15d
  unsigned __int64 v59; // rsi
  __int64 v60; // rdx
  char *v61; // r8
  char *v62; // r9
  __int64 v63; // rcx
  __int64 v64; // rax
  bool v65; // zf
  char v66; // cl
  char v67; // al
  __int64 v68; // rsi
  __int64 v69; // rax
  unsigned int v70; // ecx
  __int64 v71; // rdi
  __int64 v72; // rbp
  unsigned int v73; // r15d
  _DWORD *v74; // r13
  _QWORD *v75; // r12
  _QWORD *v76; // r9
  const char *v77; // rax
  int v78; // r11d
  unsigned __int64 v79; // rdx
  int v80; // r8d
  __int64 v81; // r10
  __int64 v82; // rax
  unsigned __int64 k; // rax
  unsigned int v84; // r10d
  char *v85; // r15
  char *v86; // r13
  _DWORD *v87; // r11
  _DWORD *v88; // r12
  unsigned int v89; // edx
  char *v90; // r8
  char *v91; // r9
  __int64 v92; // rcx
  __int64 v93; // rax
  char v94; // cl
  char v95; // al
  __int64 v96; // rax
  __int64 v97; // [rsp+20h] [rbp-A8h]
  __int64 v98; // [rsp+28h] [rbp-A0h]
  __int64 v99; // [rsp+30h] [rbp-98h]
  __int64 v100; // [rsp+38h] [rbp-90h]
  __int64 v101; // [rsp+40h] [rbp-88h]
  __int64 v102; // [rsp+48h] [rbp-80h]
  int *v103; // [rsp+50h] [rbp-78h]
  _BYTE v104[16]; // [rsp+58h] [rbp-70h] BYREF
  _BYTE v105[96]; // [rsp+68h] [rbp-60h] BYREF
  int v107; // [rsp+E0h] [rbp+18h]
  int v108; // [rsp+E8h] [rbp+20h]

  v2 = a2;
  if ( *a2 != 12 )
    goto LABEL_37;
  if ( !*(_QWORD *)(a1 + 1744) )
  {
    *(_DWORD *)(a1 + 1500) = 0;
    return;
  }
  v4 = *(unsigned int *)(a1 + 1500);
  v5 = *(_DWORD *)(a1 + 1756);
  if ( (_DWORD)v4 )
  {
    if ( ((v5 ^ (v5 >> 2)) & 4) != 0 )
    {
      *(_DWORD *)(a1 + 1500) = 0;
      return;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 1756) = v5 ^ ((unsigned __int8)v5 ^ (unsigned __int8)(4 * v5)) & 0x10;
  }
  if ( (*(_DWORD *)(a1 + 1756) & 4) != 0 )
  {
    v6 = *((_QWORD *)v2 + 4);
    if ( v6 )
    {
      v7 = v4 + v6;
      v8 = (unsigned int)(v2[10] - v4);
      v9 = v4 + v6;
    }
    else
    {
      v7 = *((_QWORD *)v2 + 1);
      v8 = (unsigned int)v2[4];
      v9 = v7;
    }
    v10 = v7 & 0xFFFFFFFFFFFFF000uLL;
    v11 = ((unsigned __int64)(v9 & 0xFFF) + v8 + 4095) >> 12;
    while ( v11 )
    {
      --v11;
      if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))(a1 + 656))(v10) && !*(_DWORD *)(a1 + 1616) )
      {
        *(_QWORD *)(a1 + 1624) = a1 - 0x5C5FC0A76E374B18LL;
        *(_QWORD *)(a1 + 1632) = (char *)v2 - 0x4C48B4211BBACBEBLL;
        *(_QWORD *)(a1 + 1640) = *v2;
        *(_QWORD *)(a1 + 1648) = v10;
        *(_DWORD *)(a1 + 1616) = 1;
      }
      *(_DWORD *)(a1 + 1504) += 256;
      v10 += 4096LL;
      v12 = *(_DWORD *)(a1 + 1504);
      if ( v6 )
      {
        *(_DWORD *)(a1 + 1500) += 4096;
        if ( v12 >= *(_DWORD *)(a1 + 1508) )
          break;
      }
    }
    if ( v6 && !v11 )
      *(_DWORD *)(a1 + 1500) = 0;
    if ( !*(_DWORD *)(a1 + 1500) )
    {
      v13 = *(_QWORD *)(a1 + 1160);
      v14 = *(_QWORD *)(a1 + 1136) + 16LL;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      (*(void (__fastcall **)(__int64))(a1 + 312))(v13);
      v16 = *(unsigned int **)(a1 + 1136);
      v17 = *((_BYTE *)v16 + 12) != 0;
      v18 = v14 + 24LL * *v16;
      while ( 2 )
      {
        v19 = 24LL;
        v20 = (char *)(v2 + 6);
        v21 = (char *)v14;
        while ( 1 )
        {
          v22 = *(_QWORD *)v21;
          v21 += 8;
          v23 = *(_QWORD *)v20;
          v20 += 8;
          if ( v22 != v23 )
            break;
          v19 = (unsigned int)(v19 - 8);
          if ( (unsigned int)v19 < 8 )
          {
            v24 = (_DWORD)v19 == 0;
            while ( !v24 )
            {
              v25 = *v21++;
              v26 = *v20++;
              if ( v25 != v26 )
                goto LABEL_31;
              v24 = (_DWORD)v19 == 1;
              v19 = (unsigned int)(v19 - 1);
            }
            goto LABEL_32;
          }
        }
LABEL_31:
        v14 += 24LL;
        if ( v14 < v18 )
          continue;
        break;
      }
LABEL_32:
      (*(void (__fastcall **)(_QWORD, __int64, char *, char *))(a1 + 376))(*(_QWORD *)(a1 + 1160), v19, v20, v21);
      __writecr8(CurrentIrql);
      if ( (!v17 || *((_QWORD *)v2 + 3) != 1LL) && v14 == v18 && !*(_DWORD *)(a1 + 1616) )
      {
        *(_QWORD *)(a1 + 1624) = a1 - 0x5C5FC0A76E374B18LL;
        *(_QWORD *)(a1 + 1632) = (char *)v2 - 0x4C48B4211BBACBEBLL;
        *(_QWORD *)(a1 + 1640) = *v2;
        *(_QWORD *)(a1 + 1648) = v14;
        *(_DWORD *)(a1 + 1616) = 1;
      }
    }
  }
  else
  {
LABEL_37:
    v27 = *((_QWORD *)v2 + 4);
    v28 = v2 + 12;
    v103 = v2 + 12;
    v29 = *(unsigned int *)(a1 + 1500);
    v30 = ((v27 & 0xFFF) + (unsigned __int64)(unsigned int)v2[10] + 4095) >> 12;
    v31 = (__int64)&v2[5 * (unsigned int)v30 + 12];
    v102 = v31;
    v32 = (__int64)&v2[5 * v29 + 12];
    v33 = v27 + (unsigned int)((_DWORD)v29 << 12);
    v99 = v32;
    v100 = v33;
    if ( (*(_DWORD *)(a1 + 1752) & 0x40000000) != 0 )
    {
      for ( i = 0; i < 0x10; ++i )
      {
        if ( (unsigned int)v30 <= 0x10 )
        {
          v31 = i;
          if ( i >= (unsigned int)v30 )
            break;
        }
        else
        {
          v35 = __rdtsc();
          v36 = __ROR8__(v35, 3);
          v31 = ((((v36 ^ v35) * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ (0x7010008004002001LL * (v36 ^ v35)))
              % (unsigned int)v30;
        }
        v37 = (unsigned int)v31;
        v31 = (unsigned int)((_DWORD)v31 << 12);
        v38 = v27 + (unsigned int)v31;
        v39 = &v28[5 * v37];
        if ( *((char *)v39 + 15) >= 0 )
        {
          *(_DWORD *)(a1 + 1504) += 4096;
          v40 = *(_DWORD *)(a1 + 1484);
          v41 = (_QWORD *)(v27 + (unsigned int)v31);
          v42 = *(_QWORD *)(a1 + 1488);
          v43 = (const char *)v38;
          if ( v38 < (unsigned __int64)(v38 + 4096) )
          {
            do
            {
              _mm_prefetch(v43, 0);
              v43 += 64;
            }
            while ( (unsigned __int64)v43 < v38 + 4096 );
          }
          v44 = 4096;
          v45 = 512LL;
          do
          {
            v42 = __ROL8__(*v41++ ^ v42, v40);
            v44 -= 8;
            --v45;
          }
          while ( v45 );
          for ( ; v44; --v44 )
          {
            v46 = *(unsigned __int8 *)v41;
            v41 = (_QWORD *)((char *)v41 + 1);
            v42 = __ROL8__(v46 ^ v42, v40);
          }
          for ( j = v42; ; LODWORD(v42) = j ^ v42 )
          {
            j >>= 31;
            if ( !j )
              break;
          }
          v48 = v42 & 0x7FFFFFFF;
          if ( v48 != (v39[4] & 0x7FFFFFFF) && !*(_DWORD *)(a1 + 1616) )
          {
            *(_QWORD *)(*(_QWORD *)(a1 + 1240) + 24LL) = v39[4] & 0x7FFFFFFF ^ (unsigned __int64)v48;
            if ( !*(_DWORD *)(a1 + 1616) )
            {
              *(_QWORD *)(a1 + 1624) = a1 - 0x5C5FC0A76E374B18LL;
              *(_QWORD *)(a1 + 1632) = (char *)v2 - 0x4C48B4211BBACBEBLL;
              *(_QWORD *)(a1 + 1640) = *v2;
              *(_QWORD *)(a1 + 1648) = v38;
              *(_DWORD *)(a1 + 1616) = 1;
            }
          }
          sub_1401588B8(a1, v38, 0x1000u, (__int64)v104);
          v31 = 16LL;
          v49 = v104;
          while ( 1 )
          {
            v50 = *(_QWORD *)v49;
            v49 += 8;
            v51 = *(_QWORD *)v39;
            v39 += 2;
            if ( v50 != v51 )
              break;
            v31 = (unsigned int)(v31 - 8);
            if ( (unsigned int)v31 < 8 )
            {
              if ( !(_DWORD)v31 )
                goto LABEL_65;
              while ( 1 )
              {
                v52 = *v49++;
                v53 = *(_BYTE *)v39;
                v39 = (int *)((char *)v39 + 1);
                if ( v52 != v53 )
                  goto LABEL_63;
                v24 = (_DWORD)v31 == 1;
                v31 = (unsigned int)(v31 - 1);
                if ( v24 )
                  goto LABEL_65;
              }
            }
          }
LABEL_63:
          if ( !*(_DWORD *)(a1 + 1616) )
          {
            *(_QWORD *)(a1 + 1624) = a1 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(a1 + 1632) = (char *)v2 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(a1 + 1640) = *v2;
            *(_QWORD *)(a1 + 1648) = v38;
            *(_DWORD *)(a1 + 1616) = 1;
          }
LABEL_65:
          *(_DWORD *)(a1 + 1504) += 0x10000;
          v28 = v2 + 12;
        }
      }
    }
    else if ( v32 != v31 )
    {
      do
      {
        if ( *(_DWORD *)(a1 + 1504) >= *(_DWORD *)(a1 + 1508) )
          break;
        v68 = 0LL;
        if ( v32 != v31 )
        {
          v69 = v32;
          do
          {
            if ( *(char *)(v69 + 15) < 0 )
              break;
            v68 = (unsigned int)(v68 + 1);
            v69 = v32 + 20 * v68;
          }
          while ( v69 != v31 );
          if ( (_DWORD)v68 )
          {
            v70 = v68;
            v98 = v32;
            v107 = v68;
            v71 = *(_QWORD *)(a1 + 1928);
            v101 = v71;
            v108 = 0;
            v97 = v33;
            do
            {
              v72 = 8LL;
              if ( v70 < 8 )
                v72 = v70;
              v73 = 0;
              v74 = v105;
              v75 = (_QWORD *)v71;
              do
              {
                v75[1] = 4096LL;
                v76 = (_QWORD *)(v97 + (v73 << 12));
                *v75 = v76;
                v77 = (const char *)v76;
                *(_DWORD *)(a1 + 1504) += 4096;
                v78 = *(_DWORD *)(a1 + 1484);
                v79 = *(_QWORD *)(a1 + 1488);
                if ( v76 < v76 + 512 )
                {
                  do
                  {
                    _mm_prefetch(v77, 0);
                    v77 += 64;
                  }
                  while ( v77 < (const char *)v76 + 4096 );
                }
                v80 = 4096;
                v81 = 512LL;
                do
                {
                  v79 = __ROL8__(*v76++ ^ v79, v78);
                  v80 -= 8;
                  --v81;
                }
                while ( v81 );
                for ( ; v80; --v80 )
                {
                  v82 = *(unsigned __int8 *)v76;
                  v76 = (_QWORD *)((char *)v76 + 1);
                  v79 = __ROL8__(v82 ^ v79, v78);
                }
                for ( k = v79; ; LODWORD(v79) = k ^ v79 )
                {
                  k >>= 31;
                  if ( !k )
                    break;
                }
                ++v73;
                *v74 = v79 & 0x7FFFFFFF;
                v75 += 6;
                ++v74;
              }
              while ( v73 < (unsigned int)v72 );
              v2 = a2;
              sub_14015891C(a1, v71, v72);
              v84 = 0;
              v85 = (char *)v98;
              v86 = (char *)(v71 + 16);
              v87 = v105;
              v88 = (_DWORD *)(v98 + 16);
              do
              {
                if ( *v87 != (*v88 & 0x7FFFFFFF) && !*(_DWORD *)(a1 + 1616) )
                {
                  *(_QWORD *)(*(_QWORD *)(a1 + 1240) + 24LL) = (unsigned int)*v87 ^ (unsigned __int64)(*v88 & 0x7FFFFFFF);
                  if ( !*(_DWORD *)(a1 + 1616) )
                  {
                    *(_QWORD *)(a1 + 1624) = a1 - 0x5C5FC0A76E374B18LL;
                    *(_QWORD *)(a1 + 1632) = (char *)a2 - 0x4C48B4211BBACBEBLL;
                    *(_QWORD *)(a1 + 1640) = *a2;
                    *(_QWORD *)(a1 + 1648) = v97 + (v84 << 12);
                    *(_DWORD *)(a1 + 1616) = 1;
                  }
                }
                v89 = 16;
                v90 = v85;
                v91 = v86;
                while ( 1 )
                {
                  v92 = *(_QWORD *)v91;
                  v91 += 8;
                  v93 = *(_QWORD *)v90;
                  v90 += 8;
                  if ( v92 != v93 )
                    break;
                  v89 -= 8;
                  if ( v89 < 8 )
                  {
                    if ( !v89 )
                      goto LABEL_110;
                    while ( 1 )
                    {
                      v94 = *v91++;
                      v95 = *v90++;
                      if ( v94 != v95 )
                        goto LABEL_108;
                      if ( !--v89 )
                        goto LABEL_110;
                    }
                  }
                }
LABEL_108:
                if ( !*(_DWORD *)(a1 + 1616) )
                {
                  *(_QWORD *)(a1 + 1624) = a1 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(a1 + 1632) = (char *)a2 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(a1 + 1640) = *a2;
                  *(_QWORD *)(a1 + 1648) = v97 + (v84 << 12);
                  *(_DWORD *)(a1 + 1616) = 1;
                }
LABEL_110:
                ++v84;
                v85 += 20;
                v86 += 48;
                ++v87;
                v88 += 5;
              }
              while ( v84 < (unsigned int)v72 );
              v71 = v101;
              v97 += (unsigned int)((_DWORD)v72 << 12);
              v68 = (unsigned int)(v72 + v108);
              v108 += v72;
              *(_DWORD *)(a1 + 1504) += (_DWORD)v72 << 15;
              v70 = v107 - v72;
              v98 += 20 * v72;
              v107 -= v72;
            }
            while ( *(_DWORD *)(a1 + 1504) < *(_DWORD *)(a1 + 1508) && v70 );
            v32 = v99;
            v31 = v102;
            v33 = v100;
          }
        }
        while ( 1 )
        {
          v96 = v32 + 20 * v68;
          if ( v96 == v31 || *(char *)(v96 + 15) >= 0 )
            break;
          v68 = (unsigned int)(v68 + 1);
        }
        v32 += 20 * v68;
        v33 += (unsigned int)((_DWORD)v68 << 12);
        v99 = v32;
        v100 = v33;
      }
      while ( v32 != v31 );
      if ( v32 != v31 )
      {
        *(_DWORD *)(a1 + 1500) = (v32 - (__int64)v103) / 20;
        return;
      }
    }
    v54 = *(_QWORD *)(a1 + 1160);
    v55 = *(_QWORD *)(a1 + 1136) + 16LL;
    v56 = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    (*(void (__fastcall **)(__int64, __int64))(a1 + 312))(v54, v31);
    v57 = *(unsigned int **)(a1 + 1136);
    v58 = *((_BYTE *)v57 + 12) != 0;
    v59 = v55 + 24LL * *v57;
    while ( 2 )
    {
      v60 = 24LL;
      v61 = (char *)(v2 + 6);
      v62 = (char *)v55;
      while ( 1 )
      {
        v63 = *(_QWORD *)v62;
        v62 += 8;
        v64 = *(_QWORD *)v61;
        v61 += 8;
        if ( v63 != v64 )
          break;
        v60 = (unsigned int)(v60 - 8);
        if ( (unsigned int)v60 < 8 )
        {
          v65 = (_DWORD)v60 == 0;
          while ( !v65 )
          {
            v66 = *v62++;
            v67 = *v61++;
            if ( v66 != v67 )
              goto LABEL_120;
            v65 = (_DWORD)v60 == 1;
            v60 = (unsigned int)(v60 - 1);
          }
          goto LABEL_121;
        }
      }
LABEL_120:
      v55 += 24LL;
      if ( v55 < v59 )
        continue;
      break;
    }
LABEL_121:
    (*(void (__fastcall **)(_QWORD, __int64, char *, char *))(a1 + 376))(*(_QWORD *)(a1 + 1160), v60, v61, v62);
    __writecr8(v56);
    if ( (!v58 || *((_QWORD *)v2 + 3) != 1LL) && v55 == v59 && !*(_DWORD *)(a1 + 1616) )
    {
      *(_QWORD *)(a1 + 1624) = a1 - 0x5C5FC0A76E374B18LL;
      *(_QWORD *)(a1 + 1632) = (char *)v2 - 0x4C48B4211BBACBEBLL;
      *(_QWORD *)(a1 + 1640) = *v2;
      *(_QWORD *)(a1 + 1648) = v55;
      *(_DWORD *)(a1 + 1616) = 1;
    }
    *(_DWORD *)(a1 + 1500) = 0;
  }
}
