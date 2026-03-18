/*
 * XREFs of sub_14017D3DC @ 0x14017D3DC
 * Callers:
 *     FsRtlMdlReadCompleteDevEx @ 0x140277000 (FsRtlMdlReadCompleteDevEx.c)
 * Callees:
 *     sub_14017D2FC @ 0x14017D2FC (sub_14017D2FC.c)
 *     sub_14017D360 @ 0x14017D360 (sub_14017D360.c)
 */

void __fastcall sub_14017D3DC(__int64 a1, int *a2)
{
  int *v2; // r11
  __int64 v4; // r15
  int *v5; // r8
  __int64 v6; // rcx
  unsigned __int64 v7; // r14
  __int64 v8; // r13
  __int64 v9; // rdi
  __int64 v10; // rdx
  unsigned int i; // ebp
  unsigned __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned __int64 v15; // rdi
  int *v16; // rsi
  _QWORD *v17; // r9
  const char *v18; // rax
  unsigned __int64 v19; // rdx
  int v20; // r8d
  int v21; // ecx
  __int64 v22; // r10
  __int64 v23; // rax
  unsigned __int64 j; // rax
  unsigned int v25; // edx
  char *v26; // r8
  __int64 v27; // rcx
  __int64 v28; // rax
  char v29; // cl
  char v30; // al
  __int64 v31; // rcx
  unsigned __int64 v32; // rdi
  unsigned __int8 CurrentIrql; // r15
  unsigned int *v34; // rax
  BOOL v35; // r14d
  unsigned __int64 v36; // rsi
  __int64 v37; // rdx
  char *v38; // r8
  char *v39; // r9
  __int64 v40; // rcx
  __int64 v41; // rax
  bool v42; // zf
  char v43; // cl
  char v44; // al
  __int64 v45; // rsi
  __int64 v46; // rax
  unsigned int v47; // ecx
  __int64 v48; // rdi
  __int64 v49; // rbp
  unsigned int v50; // r11d
  _DWORD *v51; // r15
  _QWORD *v52; // r14
  _QWORD *v53; // r8
  const char *v54; // rax
  unsigned __int64 v55; // rdx
  int v56; // r9d
  int v57; // ecx
  __int64 v58; // r10
  __int64 v59; // rax
  unsigned __int64 k; // rax
  unsigned int v61; // r10d
  char *v62; // r14
  char *v63; // r12
  _DWORD *v64; // r11
  _DWORD *v65; // r15
  unsigned int v66; // edx
  char *v67; // r8
  char *v68; // r9
  __int64 v69; // rcx
  __int64 v70; // rax
  char v71; // cl
  char v72; // al
  __int64 v73; // rax
  __int64 v74; // [rsp+20h] [rbp-A8h]
  __int64 v75; // [rsp+28h] [rbp-A0h]
  __int64 v76; // [rsp+30h] [rbp-98h]
  __int64 v77; // [rsp+38h] [rbp-90h]
  __int64 v78; // [rsp+40h] [rbp-88h]
  int *v79; // [rsp+48h] [rbp-80h]
  __int64 v80; // [rsp+50h] [rbp-78h]
  _BYTE v81[16]; // [rsp+58h] [rbp-70h] BYREF
  _BYTE v82[96]; // [rsp+68h] [rbp-60h] BYREF
  int v84; // [rsp+E0h] [rbp+18h]
  int v85; // [rsp+E8h] [rbp+20h]

  v2 = a2;
  if ( *a2 == 12 && !*(_QWORD *)(a1 + 1664) )
  {
    *(_DWORD *)(a1 + 1420) = 0;
    return;
  }
  v4 = *((_QWORD *)a2 + 4);
  v5 = a2 + 12;
  v79 = a2 + 12;
  v6 = *(unsigned int *)(a1 + 1420);
  v7 = ((v4 & 0xFFF) + (unsigned __int64)(unsigned int)a2[10] + 4095) >> 12;
  v8 = (__int64)&a2[5 * (unsigned int)v7 + 12];
  v80 = v8;
  v9 = (__int64)&a2[5 * v6 + 12];
  v10 = v4 + (unsigned int)((_DWORD)v6 << 12);
  v76 = v9;
  v77 = v10;
  if ( (*(_DWORD *)(a1 + 1672) & 0x40000000) != 0 )
  {
    for ( i = 0; i < 0x10; ++i )
    {
      if ( (unsigned int)v7 <= 0x10 )
      {
        v10 = i;
        if ( i >= (unsigned int)v7 )
          break;
      }
      else
      {
        v12 = __rdtsc();
        v13 = __ROR8__(v12, 3);
        v10 = ((((v13 ^ v12) * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ (0x7010008004002001LL * (v13 ^ v12)))
            % (unsigned int)v7;
      }
      v14 = (unsigned int)v10;
      v10 = (unsigned int)((_DWORD)v10 << 12);
      v15 = v4 + (unsigned int)v10;
      v16 = &v5[5 * v14];
      if ( *((char *)v16 + 15) >= 0 )
      {
        v17 = (_QWORD *)(v4 + (unsigned int)v10);
        v18 = (const char *)v17;
        if ( v15 < v15 + 4096 )
        {
          do
          {
            _mm_prefetch(v18, 0);
            v18 += 64;
          }
          while ( (unsigned __int64)v18 < v15 + 4096 );
        }
        v19 = *(_QWORD *)(a1 + 1408);
        v20 = 4096;
        v21 = *(_DWORD *)(a1 + 1404);
        v22 = 512LL;
        do
        {
          v20 -= 8;
          v19 = __ROL8__(*v17++ ^ v19, v21);
          --v22;
        }
        while ( v22 );
        for ( ; v20; --v20 )
        {
          v23 = *(unsigned __int8 *)v17;
          v17 = (_QWORD *)((char *)v17 + 1);
          v19 = __ROL8__(v23 ^ v19, v21);
        }
        *(_DWORD *)(a1 + 1424) += 4096;
        for ( j = v19; ; LODWORD(v19) = j ^ v19 )
        {
          j >>= 31;
          if ( !j )
            break;
        }
        v25 = v19 & 0x7FFFFFFF;
        if ( v25 != (v16[4] & 0x7FFFFFFF) && !*(_DWORD *)(a1 + 1536) )
        {
          *(_QWORD *)(*(_QWORD *)(a1 + 1160) + 24LL) = v16[4] & 0x7FFFFFFF ^ (unsigned __int64)v25;
          if ( !*(_DWORD *)(a1 + 1536) )
          {
            *(_QWORD *)(a1 + 1544) = a1 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(a1 + 1552) = (char *)v2 - 0x4C48B4211BBACBEBLL;
            *(_QWORD *)(a1 + 1560) = *v2;
            *(_QWORD *)(a1 + 1568) = v15;
            *(_DWORD *)(a1 + 1536) = 1;
          }
        }
        sub_14017D2FC(a1, v15, 0x1000u, (__int64)v81);
        v10 = 16LL;
        v26 = v81;
        while ( 1 )
        {
          v27 = *(_QWORD *)v26;
          v26 += 8;
          v28 = *(_QWORD *)v16;
          v16 += 2;
          if ( v27 != v28 )
            break;
          v10 = (unsigned int)(v10 - 8);
          if ( (unsigned int)v10 < 8 )
          {
            if ( !(_DWORD)v10 )
            {
LABEL_29:
              v2 = a2;
              goto LABEL_30;
            }
            while ( 1 )
            {
              v29 = *v26++;
              v30 = *(_BYTE *)v16;
              v16 = (int *)((char *)v16 + 1);
              if ( v29 != v30 )
                goto LABEL_40;
              v42 = (_DWORD)v10 == 1;
              v10 = (unsigned int)(v10 - 1);
              if ( v42 )
                goto LABEL_29;
            }
          }
        }
LABEL_40:
        v2 = a2;
        if ( !*(_DWORD *)(a1 + 1536) )
        {
          *(_QWORD *)(a1 + 1544) = a1 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(a1 + 1552) = (char *)a2 - 0x4C48B4211BBACBEBLL;
          *(_QWORD *)(a1 + 1560) = *a2;
          *(_QWORD *)(a1 + 1568) = v15;
          *(_DWORD *)(a1 + 1536) = 1;
        }
LABEL_30:
        *(_DWORD *)(a1 + 1424) += 0x10000;
        v5 = v2 + 12;
      }
    }
  }
  else if ( v9 != v8 )
  {
    do
    {
      if ( *(_DWORD *)(a1 + 1424) >= *(_DWORD *)(a1 + 1428) )
        break;
      v45 = 0LL;
      if ( v9 != v8 )
      {
        v46 = v9;
        do
        {
          if ( *(char *)(v46 + 15) < 0 )
            break;
          v45 = (unsigned int)(v45 + 1);
          v46 = v9 + 20 * v45;
        }
        while ( v46 != v8 );
        if ( (_DWORD)v45 )
        {
          v47 = v45;
          v75 = v9;
          v48 = *(_QWORD *)(a1 + 1856);
          v78 = v48;
          v85 = 0;
          v84 = v45;
          v74 = v10;
          do
          {
            v49 = 8LL;
            if ( v47 < 8 )
              v49 = v47;
            v50 = 0;
            v51 = v82;
            v52 = (_QWORD *)v48;
            do
            {
              v52[1] = 4096LL;
              v53 = (_QWORD *)(v74 + (v50 << 12));
              *v52 = v53;
              v54 = (const char *)v53;
              if ( v53 < v53 + 512 )
              {
                do
                {
                  _mm_prefetch(v54, 0);
                  v54 += 64;
                }
                while ( v54 < (const char *)v53 + 4096 );
              }
              v55 = *(_QWORD *)(a1 + 1408);
              v56 = 4096;
              v57 = *(_DWORD *)(a1 + 1404);
              v58 = 512LL;
              do
              {
                v56 -= 8;
                v55 = __ROL8__(*v53++ ^ v55, v57);
                --v58;
              }
              while ( v58 );
              for ( ; v56; --v56 )
              {
                v59 = *(unsigned __int8 *)v53;
                v53 = (_QWORD *)((char *)v53 + 1);
                v55 = __ROL8__(v59 ^ v55, v57);
              }
              *(_DWORD *)(a1 + 1424) += 4096;
              for ( k = v55; ; LODWORD(v55) = k ^ v55 )
              {
                k >>= 31;
                if ( !k )
                  break;
              }
              ++v50;
              *v51 = v55 & 0x7FFFFFFF;
              v52 += 6;
              ++v51;
            }
            while ( v50 < (unsigned int)v49 );
            sub_14017D360(a1, v48, v49);
            v61 = 0;
            v62 = (char *)v75;
            v63 = (char *)(v48 + 16);
            v64 = v82;
            v65 = (_DWORD *)(v75 + 16);
            do
            {
              if ( *v64 != (*v65 & 0x7FFFFFFF) && !*(_DWORD *)(a1 + 1536) )
              {
                *(_QWORD *)(*(_QWORD *)(a1 + 1160) + 24LL) = (unsigned int)*v64 ^ (unsigned __int64)(*v65 & 0x7FFFFFFF);
                if ( !*(_DWORD *)(a1 + 1536) )
                {
                  *(_QWORD *)(a1 + 1544) = a1 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(a1 + 1552) = (char *)a2 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(a1 + 1560) = *a2;
                  *(_QWORD *)(a1 + 1568) = v74 + (v61 << 12);
                  *(_DWORD *)(a1 + 1536) = 1;
                }
              }
              v66 = 16;
              v67 = v62;
              v68 = v63;
              while ( 1 )
              {
                v69 = *(_QWORD *)v68;
                v68 += 8;
                v70 = *(_QWORD *)v67;
                v67 += 8;
                if ( v69 != v70 )
                  break;
                v66 -= 8;
                if ( v66 < 8 )
                {
                  if ( !v66 )
                    goto LABEL_77;
                  while ( 1 )
                  {
                    v71 = *v68++;
                    v72 = *v67++;
                    if ( v71 != v72 )
                      goto LABEL_75;
                    if ( !--v66 )
                      goto LABEL_77;
                  }
                }
              }
LABEL_75:
              if ( !*(_DWORD *)(a1 + 1536) )
              {
                *(_QWORD *)(a1 + 1544) = a1 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(a1 + 1552) = (char *)a2 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(a1 + 1560) = *a2;
                *(_QWORD *)(a1 + 1568) = v74 + (v61 << 12);
                *(_DWORD *)(a1 + 1536) = 1;
              }
LABEL_77:
              ++v61;
              v62 += 20;
              v63 += 48;
              ++v64;
              v65 += 5;
            }
            while ( v61 < (unsigned int)v49 );
            v48 = v78;
            v74 += (unsigned int)((_DWORD)v49 << 12);
            v45 = (unsigned int)(v49 + v85);
            v85 += v49;
            *(_DWORD *)(a1 + 1424) += (_DWORD)v49 << 15;
            v47 = v84 - v49;
            v75 += 20 * v49;
            v84 -= v49;
          }
          while ( *(_DWORD *)(a1 + 1424) < *(_DWORD *)(a1 + 1428) && v47 );
          v9 = v76;
          v8 = v80;
          v10 = v77;
        }
      }
      while ( 1 )
      {
        v73 = v9 + 20 * v45;
        if ( v73 == v8 || *(char *)(v73 + 15) >= 0 )
          break;
        v45 = (unsigned int)(v45 + 1);
      }
      v9 += 20 * v45;
      v10 += (unsigned int)((_DWORD)v45 << 12);
      v76 = v9;
      v77 = v10;
    }
    while ( v9 != v8 );
    if ( v9 != v8 )
    {
      *(_DWORD *)(a1 + 1420) = (v9 - (__int64)v79) / 20;
      return;
    }
  }
  v31 = *(_QWORD *)(a1 + 1088);
  v32 = *(_QWORD *)(a1 + 1064) + 16LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  (*(void (__fastcall **)(__int64, __int64))(a1 + 320))(v31, v10);
  v34 = *(unsigned int **)(a1 + 1064);
  v35 = *((_BYTE *)v34 + 12) != 0;
  v36 = v32 + 24LL * *v34;
  while ( 2 )
  {
    v37 = 24LL;
    v38 = (char *)(a2 + 6);
    v39 = (char *)v32;
    while ( 1 )
    {
      v40 = *(_QWORD *)v39;
      v39 += 8;
      v41 = *(_QWORD *)v38;
      v38 += 8;
      if ( v40 != v41 )
        break;
      v37 = (unsigned int)(v37 - 8);
      if ( (unsigned int)v37 < 8 )
      {
        v42 = (_DWORD)v37 == 0;
        while ( !v42 )
        {
          v43 = *v39++;
          v44 = *v38++;
          if ( v43 != v44 )
            goto LABEL_87;
          v42 = (_DWORD)v37 == 1;
          v37 = (unsigned int)(v37 - 1);
        }
        goto LABEL_88;
      }
    }
LABEL_87:
    v32 += 24LL;
    if ( v32 < v36 )
      continue;
    break;
  }
LABEL_88:
  (*(void (__fastcall **)(_QWORD, __int64, char *, char *))(a1 + 384))(*(_QWORD *)(a1 + 1088), v37, v38, v39);
  __writecr8(CurrentIrql);
  if ( (!v35 || *((_QWORD *)a2 + 3) != 1LL) && v32 == v36 && !*(_DWORD *)(a1 + 1536) )
  {
    *(_QWORD *)(a1 + 1544) = a1 - 0x5C5FC0A76E374B18LL;
    *(_QWORD *)(a1 + 1552) = (char *)a2 - 0x4C48B4211BBACBEBLL;
    *(_QWORD *)(a1 + 1560) = *a2;
    *(_QWORD *)(a1 + 1568) = v32;
    *(_DWORD *)(a1 + 1536) = 1;
  }
  *(_DWORD *)(a1 + 1420) = 0;
}
