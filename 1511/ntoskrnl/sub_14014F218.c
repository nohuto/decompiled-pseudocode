/*
 * XREFs of sub_14014F218 @ 0x14014F218
 * Callers:
 *     FsRtlMdlReadCompleteDevEx @ 0x140228000 (FsRtlMdlReadCompleteDevEx.c)
 * Callees:
 *     sub_14014F138 @ 0x14014F138 (sub_14014F138.c)
 *     sub_14014F19C @ 0x14014F19C (sub_14014F19C.c)
 */

void __fastcall sub_14014F218(__int64 a1, int *a2)
{
  __int64 v3; // r15
  int *v4; // r8
  __int64 v5; // rcx
  unsigned __int64 v6; // r14
  __int64 v7; // r13
  __int64 v8; // rdi
  __int64 v9; // rdx
  unsigned int i; // ebp
  unsigned __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdi
  int *v15; // rsi
  int v16; // r11d
  _QWORD *v17; // r9
  unsigned __int64 v18; // rdx
  const char *v19; // rax
  int v20; // r8d
  __int64 v21; // r10
  __int64 v22; // rax
  unsigned __int64 j; // rax
  __int64 v24; // r8
  unsigned int v25; // edx
  int *v26; // r13
  char *v27; // r8
  __int64 v28; // rcx
  __int64 v29; // rax
  char v30; // cl
  char v31; // al
  __int64 v32; // rcx
  unsigned __int64 v33; // rdi
  unsigned __int8 CurrentIrql; // r15
  unsigned int *v35; // rax
  BOOL v36; // r14d
  unsigned __int64 v37; // rsi
  __int64 v38; // rdx
  char *v39; // r8
  char *v40; // r9
  __int64 v41; // rcx
  __int64 v42; // rax
  bool v43; // zf
  char v44; // cl
  char v45; // al
  __int64 v46; // rsi
  __int64 v47; // rax
  unsigned int v48; // ecx
  __int64 v49; // rdi
  __int64 v50; // rbp
  unsigned int v51; // r11d
  _DWORD *v52; // r15
  _QWORD *v53; // r14
  _QWORD *v54; // r9
  const char *v55; // rax
  int v56; // r10d
  unsigned __int64 v57; // rdx
  __int64 v58; // rax
  int v59; // r8d
  __int64 v60; // rax
  unsigned __int64 k; // rax
  unsigned int v62; // r10d
  char *v63; // r14
  char *v64; // r12
  _DWORD *v65; // r11
  _DWORD *v66; // r15
  unsigned int v67; // edx
  char *v68; // r8
  char *v69; // r9
  __int64 v70; // rcx
  __int64 v71; // rax
  char v72; // cl
  char v73; // al
  __int64 v74; // rax
  __int64 v75; // [rsp+20h] [rbp-A8h]
  __int64 v76; // [rsp+28h] [rbp-A0h]
  int *v77; // [rsp+30h] [rbp-98h]
  __int64 v78; // [rsp+38h] [rbp-90h]
  __int64 v79; // [rsp+40h] [rbp-88h]
  __int64 v80; // [rsp+48h] [rbp-80h]
  __int64 v81; // [rsp+50h] [rbp-78h]
  _BYTE v82[16]; // [rsp+58h] [rbp-70h] BYREF
  _BYTE v83[96]; // [rsp+68h] [rbp-60h] BYREF
  int v85; // [rsp+E0h] [rbp+18h]
  int v86; // [rsp+E8h] [rbp+20h]

  if ( *a2 == 12 && !*(_QWORD *)(a1 + 1672) )
  {
    *(_DWORD *)(a1 + 1428) = 0;
    return;
  }
  v3 = *((_QWORD *)a2 + 4);
  v4 = a2 + 12;
  v77 = v4;
  v5 = *(unsigned int *)(a1 + 1428);
  v6 = ((v3 & 0xFFF) + (unsigned __int64)(unsigned int)a2[10] + 4095) >> 12;
  v7 = (__int64)&a2[5 * (unsigned int)v6 + 12];
  v81 = v7;
  v8 = (__int64)&a2[5 * v5 + 12];
  v9 = v3 + (unsigned int)((_DWORD)v5 << 12);
  v79 = (__int64)&v4[5 * v5];
  v78 = v9;
  if ( (*(_DWORD *)(a1 + 1680) & 0x40000000) != 0 )
  {
    for ( i = 0; i < 0x10; ++i )
    {
      if ( (unsigned int)v6 <= 0x10 )
      {
        v9 = i;
        if ( i >= (unsigned int)v6 )
          break;
      }
      else
      {
        v11 = __rdtsc();
        v12 = __ROR8__(v11, 3);
        v9 = ((((v12 ^ v11) * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ (0x7010008004002001LL * (v12 ^ v11)))
           % (unsigned int)v6;
      }
      v13 = (unsigned int)v9;
      v9 = (unsigned int)((_DWORD)v9 << 12);
      v14 = v3 + (unsigned int)v9;
      v15 = &v4[5 * v13];
      if ( *((char *)v15 + 15) >= 0 )
      {
        *(_DWORD *)(a1 + 1432) += 4096;
        v16 = *(_DWORD *)(a1 + 1412);
        v17 = (_QWORD *)(v3 + (unsigned int)v9);
        v18 = *(_QWORD *)(a1 + 1416);
        v19 = (const char *)v14;
        if ( v14 < (unsigned __int64)(v14 + 4096) )
        {
          do
          {
            _mm_prefetch(v19, 0);
            v19 += 64;
          }
          while ( (unsigned __int64)v19 < v14 + 4096 );
        }
        v20 = 4096;
        v21 = 512LL;
        do
        {
          v18 = __ROL8__(*v17++ ^ v18, v16);
          v20 -= 8;
          --v21;
        }
        while ( v21 );
        for ( ; v20; --v20 )
        {
          v22 = *(unsigned __int8 *)v17;
          v17 = (_QWORD *)((char *)v17 + 1);
          v18 = __ROL8__(v22 ^ v18, v16);
        }
        for ( j = v18; ; LODWORD(v18) = j ^ v18 )
        {
          j >>= 31;
          if ( !j )
            break;
        }
        v24 = (unsigned int)v15[4];
        v25 = v18 & 0x7FFFFFFF;
        if ( v25 == (v15[4] & 0x7FFFFFFF)
          || (LODWORD(v24) = v24 & 0x7FFFFFFF, *(_DWORD *)(a1 + 1544))
          || (*(_QWORD *)(*(_QWORD *)(a1 + 1176) + 24LL) = v24 ^ v25, *(_DWORD *)(a1 + 1544)) )
        {
          v26 = a2;
        }
        else
        {
          v26 = a2;
          *(_QWORD *)(a1 + 1552) = a1 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(a1 + 1560) = (char *)a2 - 0x4C48B4211BBACBEBLL;
          *(_QWORD *)(a1 + 1568) = *a2;
          *(_QWORD *)(a1 + 1576) = v14;
          *(_DWORD *)(a1 + 1544) = 1;
        }
        sub_14014F138(a1, v14, 0x1000u, (__int64)v82);
        v9 = 16LL;
        v27 = v82;
        while ( 1 )
        {
          v28 = *(_QWORD *)v27;
          v27 += 8;
          v29 = *(_QWORD *)v15;
          v15 += 2;
          if ( v28 != v29 )
            break;
          v9 = (unsigned int)(v9 - 8);
          if ( (unsigned int)v9 < 8 )
          {
            if ( !(_DWORD)v9 )
              goto LABEL_33;
            while ( 1 )
            {
              v30 = *v27++;
              v31 = *(_BYTE *)v15;
              v15 = (int *)((char *)v15 + 1);
              if ( v30 != v31 )
                goto LABEL_31;
              v43 = (_DWORD)v9 == 1;
              v9 = (unsigned int)(v9 - 1);
              if ( v43 )
                goto LABEL_33;
            }
          }
        }
LABEL_31:
        if ( !*(_DWORD *)(a1 + 1544) )
        {
          *(_QWORD *)(a1 + 1552) = a1 - 0x5C5FC0A76E374B18LL;
          *(_QWORD *)(a1 + 1560) = (char *)v26 - 0x4C48B4211BBACBEBLL;
          *(_QWORD *)(a1 + 1568) = *v26;
          *(_QWORD *)(a1 + 1576) = v14;
          *(_DWORD *)(a1 + 1544) = 1;
        }
LABEL_33:
        *(_DWORD *)(a1 + 1432) += 0x10000;
        v4 = v77;
      }
    }
  }
  else if ( v8 != v7 )
  {
    do
    {
      if ( *(_DWORD *)(a1 + 1432) >= *(_DWORD *)(a1 + 1436) )
        break;
      v46 = 0LL;
      if ( v8 != v7 )
      {
        v47 = v8;
        do
        {
          if ( *(char *)(v47 + 15) < 0 )
            break;
          v46 = (unsigned int)(v46 + 1);
          v47 = v8 + 20 * v46;
        }
        while ( v47 != v7 );
        if ( (_DWORD)v46 )
        {
          v48 = v46;
          v76 = v8;
          v49 = *(_QWORD *)(a1 + 1856);
          v80 = v49;
          v86 = 0;
          v85 = v46;
          v75 = v9;
          do
          {
            v50 = 8LL;
            if ( v48 < 8 )
              v50 = v48;
            v51 = 0;
            v52 = v83;
            v53 = (_QWORD *)v49;
            do
            {
              v53[1] = 4096LL;
              v54 = (_QWORD *)(v75 + (v51 << 12));
              *v53 = v54;
              v55 = (const char *)v54;
              *(_DWORD *)(a1 + 1432) += 4096;
              v56 = *(_DWORD *)(a1 + 1412);
              v57 = *(_QWORD *)(a1 + 1416);
              if ( v54 < v54 + 512 )
              {
                do
                {
                  _mm_prefetch(v55, 0);
                  v55 += 64;
                }
                while ( v55 < (const char *)v54 + 4096 );
              }
              v58 = 512LL;
              v59 = 4096;
              do
              {
                v57 = __ROL8__(*v54++ ^ v57, v56);
                v59 -= 8;
                --v58;
              }
              while ( v58 );
              for ( ; v59; --v59 )
              {
                v60 = *(unsigned __int8 *)v54;
                v54 = (_QWORD *)((char *)v54 + 1);
                v57 = __ROL8__(v60 ^ v57, v56);
              }
              for ( k = v57; ; LODWORD(v57) = k ^ v57 )
              {
                k >>= 31;
                if ( !k )
                  break;
              }
              ++v51;
              *v52 = v57 & 0x7FFFFFFF;
              v53 += 6;
              ++v52;
            }
            while ( v51 < (unsigned int)v50 );
            sub_14014F19C(a1, v49, v50);
            v62 = 0;
            v63 = (char *)v76;
            v64 = (char *)(v49 + 16);
            v65 = v83;
            v66 = (_DWORD *)(v76 + 16);
            do
            {
              if ( *v65 != (*v66 & 0x7FFFFFFF) && !*(_DWORD *)(a1 + 1544) )
              {
                *(_QWORD *)(*(_QWORD *)(a1 + 1176) + 24LL) = (unsigned int)*v65 ^ (unsigned __int64)(*v66 & 0x7FFFFFFF);
                if ( !*(_DWORD *)(a1 + 1544) )
                {
                  *(_QWORD *)(a1 + 1552) = a1 - 0x5C5FC0A76E374B18LL;
                  *(_QWORD *)(a1 + 1560) = (char *)a2 - 0x4C48B4211BBACBEBLL;
                  *(_QWORD *)(a1 + 1568) = *a2;
                  *(_QWORD *)(a1 + 1576) = v75 + (v62 << 12);
                  *(_DWORD *)(a1 + 1544) = 1;
                }
              }
              v67 = 16;
              v68 = v63;
              v69 = v64;
              while ( 1 )
              {
                v70 = *(_QWORD *)v69;
                v69 += 8;
                v71 = *(_QWORD *)v68;
                v68 += 8;
                if ( v70 != v71 )
                  break;
                v67 -= 8;
                if ( v67 < 8 )
                {
                  if ( !v67 )
                    goto LABEL_78;
                  while ( 1 )
                  {
                    v72 = *v69++;
                    v73 = *v68++;
                    if ( v72 != v73 )
                      goto LABEL_76;
                    if ( !--v67 )
                      goto LABEL_78;
                  }
                }
              }
LABEL_76:
              if ( !*(_DWORD *)(a1 + 1544) )
              {
                *(_QWORD *)(a1 + 1552) = a1 - 0x5C5FC0A76E374B18LL;
                *(_QWORD *)(a1 + 1560) = (char *)a2 - 0x4C48B4211BBACBEBLL;
                *(_QWORD *)(a1 + 1568) = *a2;
                *(_QWORD *)(a1 + 1576) = v75 + (v62 << 12);
                *(_DWORD *)(a1 + 1544) = 1;
              }
LABEL_78:
              ++v62;
              v63 += 20;
              v64 += 48;
              ++v65;
              v66 += 5;
            }
            while ( v62 < (unsigned int)v50 );
            v49 = v80;
            v75 += (unsigned int)((_DWORD)v50 << 12);
            v46 = (unsigned int)(v50 + v86);
            v86 += v50;
            *(_DWORD *)(a1 + 1432) += (_DWORD)v50 << 15;
            v48 = v85 - v50;
            v76 += 20 * v50;
            v85 -= v50;
          }
          while ( *(_DWORD *)(a1 + 1432) < *(_DWORD *)(a1 + 1436) && v48 );
          v8 = v79;
          v7 = v81;
          v9 = v78;
        }
      }
      while ( 1 )
      {
        v74 = v8 + 20 * v46;
        if ( v74 == v7 || *(char *)(v74 + 15) >= 0 )
          break;
        v46 = (unsigned int)(v46 + 1);
      }
      v8 += 20 * v46;
      v9 += (unsigned int)((_DWORD)v46 << 12);
      v79 = v8;
      v78 = v9;
    }
    while ( v8 != v7 );
    if ( v8 != v7 )
    {
      *(_DWORD *)(a1 + 1428) = (v8 - (__int64)v77) / 20;
      return;
    }
  }
  v32 = *(_QWORD *)(a1 + 1104);
  v33 = *(_QWORD *)(a1 + 1080) + 16LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  (*(void (__fastcall **)(__int64, __int64))(a1 + 328))(v32, v9);
  v35 = *(unsigned int **)(a1 + 1080);
  v36 = *((_BYTE *)v35 + 12) != 0;
  v37 = v33 + 24LL * *v35;
  while ( 2 )
  {
    v38 = 24LL;
    v39 = (char *)(a2 + 6);
    v40 = (char *)v33;
    while ( 1 )
    {
      v41 = *(_QWORD *)v40;
      v40 += 8;
      v42 = *(_QWORD *)v39;
      v39 += 8;
      if ( v41 != v42 )
        break;
      v38 = (unsigned int)(v38 - 8);
      if ( (unsigned int)v38 < 8 )
      {
        v43 = (_DWORD)v38 == 0;
        while ( !v43 )
        {
          v44 = *v40++;
          v45 = *v39++;
          if ( v44 != v45 )
            goto LABEL_88;
          v43 = (_DWORD)v38 == 1;
          v38 = (unsigned int)(v38 - 1);
        }
        goto LABEL_89;
      }
    }
LABEL_88:
    v33 += 24LL;
    if ( v33 < v37 )
      continue;
    break;
  }
LABEL_89:
  (*(void (__fastcall **)(_QWORD, __int64, char *, char *))(a1 + 392))(*(_QWORD *)(a1 + 1104), v38, v39, v40);
  __writecr8(CurrentIrql);
  if ( (!v36 || *((_QWORD *)a2 + 3) != 1LL) && v33 == v37 && !*(_DWORD *)(a1 + 1544) )
  {
    *(_QWORD *)(a1 + 1552) = a1 - 0x5C5FC0A76E374B18LL;
    *(_QWORD *)(a1 + 1560) = (char *)a2 - 0x4C48B4211BBACBEBLL;
    *(_QWORD *)(a1 + 1568) = *a2;
    *(_QWORD *)(a1 + 1576) = v33;
    *(_DWORD *)(a1 + 1544) = 1;
  }
  *(_DWORD *)(a1 + 1428) = 0;
}
