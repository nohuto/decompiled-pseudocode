/*
 * XREFs of SepAccessCheck @ 0x14008B8F0
 * Callers:
 *     SeAccessCheckWithHint @ 0x14008AE20 (SeAccessCheckWithHint.c)
 *     SeAccessCheckByType @ 0x14008CBF0 (SeAccessCheckByType.c)
 *     SepAccessCheckAndAuditAlarm @ 0x14046E620 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     SepMaximumAccessCheck @ 0x14008A7E0 (SepMaximumAccessCheck.c)
 *     SepNormalAccessCheck @ 0x14008C110 (SepNormalAccessCheck.c)
 *     SepPrivilegeCheck @ 0x14009DDF0 (SepPrivilegeCheck.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     SepAssemblePrivileges @ 0x1404B7630 (SepAssemblePrivileges.c)
 */

__int64 __fastcall SepAccessCheck(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        _QWORD *a6,
        unsigned int a7,
        _DWORD *a8,
        unsigned int a9,
        char a10,
        unsigned int *a11,
        _QWORD *a12,
        int *a13,
        char a14,
        char a15,
        int *a16,
        __int64 *a17,
        char *a18,
        char *a19)
{
  __int64 v19; // r12
  __int64 v20; // r11
  __int64 v22; // r10
  unsigned int v24; // r8d
  unsigned int v25; // r15d
  unsigned int v26; // esi
  __int16 v27; // ax
  __int64 v28; // rcx
  __int64 v29; // rdi
  __int64 v30; // rax
  unsigned int v31; // r8d
  __int64 v32; // rbx
  __int64 v33; // r8
  __int64 v34; // r11
  int v35; // eax
  unsigned int v36; // edx
  int v37; // eax
  int v38; // ecx
  int v39; // edx
  int v40; // ebx
  unsigned __int8 v41; // bp
  unsigned int v42; // r10d
  int v44; // r15d
  int v45; // ecx
  int v46; // eax
  int v47; // ecx
  __int64 v48; // r10
  int v49; // eax
  int v50; // eax
  int *v51; // rbp
  int v52; // edx
  int v53; // r10d
  int v54; // eax
  int v55; // edx
  _DWORD *v56; // rax
  int v57; // ecx
  char v58; // r15
  char v59; // r12
  int v60; // ecx
  unsigned int v61; // r9d
  int *v62; // rdx
  __int64 v63; // r8
  bool v64; // zf
  int v65; // eax
  unsigned int v66; // edi
  __int64 v67; // rsi
  char *v68; // r9
  __int64 v69; // rax
  unsigned int v70; // ecx
  int *v71; // rdi
  unsigned __int64 v72; // rcx
  size_t v73; // r8
  unsigned __int64 k; // rcx
  char *v75; // rcx
  __int64 v76; // rax
  __int64 v77; // rax
  unsigned int v78; // ecx
  int *v79; // rdi
  unsigned __int64 v80; // rdx
  unsigned __int64 i; // rcx
  unsigned int *v82; // rdi
  unsigned __int64 j; // rcx
  unsigned int *v84; // rcx
  __int64 v85; // rax
  unsigned __int8 v86; // [rsp+70h] [rbp-F8h]
  unsigned __int8 v87; // [rsp+71h] [rbp-F7h]
  unsigned __int8 v88; // [rsp+72h] [rbp-F6h]
  int v89; // [rsp+74h] [rbp-F4h]
  unsigned int v90; // [rsp+78h] [rbp-F0h]
  __int64 v91; // [rsp+88h] [rbp-E0h]
  unsigned int v92; // [rsp+90h] [rbp-D8h]
  __int64 v95; // [rsp+D0h] [rbp-98h] BYREF
  int v96; // [rsp+D8h] [rbp-90h]
  _QWORD v97[6]; // [rsp+E0h] [rbp-88h] BYREF

  v19 = 0LL;
  v20 = (__int64)a16;
  v22 = a3;
  if ( a4 )
    v22 = a4;
  v24 = a5;
  v25 = a5;
  v89 = 0;
  v86 = 0;
  v88 = 0;
  v87 = 0;
  v91 = v22;
  v92 = a5;
  v90 = 1;
  if ( (a5 & 0x1000000) != 0 )
  {
    v95 = (__int64)SeSecurityPrivilege;
    v96 = 0;
    if ( !(unsigned __int8)SepPrivilegeCheck(v22, (unsigned int)&v95, 1, 1, a10) )
    {
      v26 = 0;
      v40 = -1073741727;
      v41 = 1;
      goto LABEL_33;
    }
    v38 = 1;
    v24 = a5;
    v89 = 1;
    v25 = a5 & 0xFEFFFFFF;
    v86 = 1;
    v26 = a9 | 0x1000000;
    v92 = a5 & 0xFEFFFFFF;
    v39 = 1;
    if ( (a5 & 0xFEFFFFFF) == 0 )
    {
LABEL_29:
      v40 = 0;
      if ( v26 )
      {
        if ( KeGetCurrentIrql() < 2u )
        {
          if ( v38 )
          {
            SepAssemblePrivileges(v38, v39, v88, v87, (__int64)a12);
            if ( a12 )
            {
              if ( !*a12 )
              {
                v41 = 0;
                v40 = -1073741801;
                v26 = 0;
                goto LABEL_33;
              }
            }
          }
        }
      }
      else
      {
        v40 = -1073741790;
      }
      v41 = 1;
LABEL_33:
      v42 = 0;
      goto LABEL_34;
    }
    v22 = v91;
    v20 = (__int64)a16;
  }
  else
  {
    v26 = a9;
  }
  v27 = *(_WORD *)(a1 + 2);
  if ( (v27 & 4) != 0 )
  {
    if ( v27 < 0 )
    {
      v28 = *(unsigned int *)(a1 + 16);
      if ( (_DWORD)v28 )
        v29 = a1 + v28;
      else
        v29 = 0LL;
    }
    else
    {
      v29 = *(_QWORD *)(a1 + 32);
    }
  }
  else
  {
    v29 = 0LL;
  }
  if ( (v27 & 0x10) != 0 )
  {
    if ( v27 < 0 )
    {
      v30 = *(unsigned int *)(a1 + 12);
      if ( (_DWORD)v30 )
        v19 = a1 + v30;
    }
    else
    {
      v19 = *(_QWORD *)(a1 + 24);
    }
  }
  if ( (*(_WORD *)(a1 + 2) & 4) == 0 || !v29 )
  {
    v26 |= v24;
    if ( (v24 & 0x2000000) != 0 )
      v26 = a8[3] | v26 & 0xFDFFFFFF;
    if ( (*(_DWORD *)(v22 + 200) & 0x4000) == 0 )
      goto LABEL_56;
    v42 = 0;
    v40 = -1073741790;
    v26 = 0;
    *(_DWORD *)(v20 + 4) = 0;
    *(_BYTE *)(v20 + 17) = 0;
    v41 = 1;
    goto LABEL_34;
  }
  v31 = 1;
  if ( (v25 & 0x80000) == 0 )
    goto LABEL_16;
  v95 = SeTakeOwnershipPrivilege;
  v96 = 0;
  if ( (unsigned __int8)SepPrivilegeCheck(v22, (unsigned int)&v95, 1, 1, a10) )
  {
    v25 &= ~0x80000u;
    v38 = v89 + 1;
    v92 = v25;
    v26 |= 0x80000u;
    ++v89;
    v88 = v31;
    if ( !v25 )
      goto LABEL_28;
LABEL_16:
    v32 = v91;
    goto LABEL_17;
  }
  v32 = v91;
  v95 = (__int64)SeRelabelPrivilege;
  v96 = 0;
  if ( (unsigned __int8)SepPrivilegeCheck(v91, (unsigned int)&v95, v31, v31, a10) )
  {
    v25 &= ~0x80000u;
    v38 = v89 + 1;
    v92 = v25;
    v26 |= 0x80000u;
    ++v89;
    v87 = v31;
    if ( !v25 )
      goto LABEL_28;
  }
LABEL_17:
  if ( !*(_WORD *)(v29 + 4) )
  {
    v56 = a16;
    a16[3] = v25;
    v57 = *(_DWORD *)(v32 + 200);
    if ( (v57 & 0x4000) != 0 )
    {
      v26 &= ~*a16;
      v56 = a16;
    }
    if ( v25 == 0x2000000 )
    {
      if ( v26 )
        goto LABEL_56;
    }
    else if ( !v25 && *v56 && v26 && (v57 & 0x6000) == 0 )
    {
      goto LABEL_56;
    }
    v42 = 0;
    v40 = -1073741790;
    v26 = 0;
    v41 = 1;
LABEL_34:
    if ( a14 )
    {
      if ( a7 )
      {
        if ( a7 >= 4 )
        {
          v77 = a7 - 1;
          if ( a11 > (unsigned int *)&a13[v77] || &a11[v77] < (unsigned int *)a13 )
          {
            v78 = a7 - (a7 & 3);
            do
              v42 += 4;
            while ( v42 < v78 );
            v79 = a13;
            v80 = 16 * ((unsigned __int64)(v78 + 3) >> 2);
            for ( i = v80 >> 2; i; --i )
              *v79++ = v40;
            v82 = a11;
            for ( j = v80 >> 2; j; --j )
              *v82++ = v26;
          }
        }
        if ( v42 < a7 )
        {
          v84 = &a11[v42];
          v85 = a7 - v42;
          do
          {
            *(unsigned int *)((char *)v84 + (char *)a13 - (char *)a11) = v40;
            *v84++ = v26;
            --v85;
          }
          while ( v85 );
        }
      }
      goto LABEL_36;
    }
LABEL_35:
    *a13 = v40;
    *a11 = v26;
LABEL_36:
    if ( v40 < 0 )
    {
      if ( a18 )
        *a18 = 0;
      if ( a19 )
        *a19 = 1;
    }
    else
    {
      if ( a18 )
        *a18 = 1;
      if ( a19 )
        *a19 = 0;
    }
    return v41;
  }
  if ( a7 )
  {
    v31 = a7;
    v90 = a7;
  }
  else
  {
    a6 = v97;
    v97[2] = 0xFFFFFFFF00000000uLL;
    v97[0] = 0LL;
    v97[1] = 0LL;
    memset(&v97[3], 0, 24);
  }
  if ( (a5 & 0x2000000) == 0 && !a14 )
  {
    SepNormalAccessCheck(v25, v91, a3, v29, v19, (__int64)a17, a2, v31, (__int64)a6, a7, 0, a15, (__int64)a16);
    v33 = (__int64)a16;
    a16[3] = *((_DWORD *)a6 + 6);
    if ( *((_DWORD *)a6 + 6) )
      goto LABEL_50;
    v34 = v91;
    v35 = *(_DWORD *)(v91 + 200);
    if ( (v35 & 0x10) != 0 )
    {
      if ( (v35 & 8) != 0 )
        v53 = a8[1] & ~(*a8 | a8[2]) | 0x10D0000;
      else
        v53 = a8[3] | 0x1FFFFF;
      v36 = a5;
      if ( (v53 & a5) == 0 )
      {
LABEL_25:
        *(_DWORD *)(v33 + 12) = *((_DWORD *)a6 + 6);
        if ( *((_DWORD *)a6 + 6) )
          goto LABEL_50;
        v37 = *(_DWORD *)(v34 + 200);
        if ( (v37 & 0x2000) != 0 )
        {
LABEL_27:
          v38 = v89;
          v26 |= v36;
LABEL_28:
          v39 = v86;
          goto LABEL_29;
        }
        v44 = v36 | v25;
        if ( (v37 & 0x4000) != 0 )
        {
          v45 = ~(*(_DWORD *)(v33 + 4) | *(_DWORD *)(v33 + 8));
          v46 = v44 | *(_DWORD *)v33;
        }
        else
        {
          if ( !*(_BYTE *)(v33 + 16) )
          {
            v47 = 0;
LABEL_49:
            *((_DWORD *)a6 + 6) = v47;
            if ( !v47 )
              goto LABEL_27;
LABEL_50:
            v40 = -1073741790;
            v26 = 0;
            v41 = 1;
            goto LABEL_35;
          }
          v45 = v44 | *(_DWORD *)v33;
          v46 = ~*(_DWORD *)(v33 + 4);
        }
        v47 = v46 & v45;
        goto LABEL_49;
      }
      SepNormalAccessCheck(v25 & v53, v91, a3, v29, v19, (__int64)a17, a2, v90, (__int64)a6, a7, 1, a15, (__int64)a16);
      v34 = v91;
      v33 = (__int64)a16;
    }
    v36 = a5;
    goto LABEL_25;
  }
  SepMaximumAccessCheck(v91, a3, v29, v19, a17, a2, v31, (__int64)a6, a7, 0, 0, a15, a16);
  v48 = v91;
  v49 = *(_DWORD *)(v91 + 200);
  if ( (v49 & 0x10) != 0 )
  {
    if ( (v49 & 8) != 0 )
      v55 = a8[1] & ~(*a8 | a8[2]) | 0x10D0000;
    else
      v55 = a8[3] | 0x1FFFFF;
    SepMaximumAccessCheck(v91, a3, v29, v19, a17, a2, v90, (__int64)a6, a7, v55, 1u, a15, a16);
    v48 = v91;
  }
  v50 = *(_DWORD *)(v48 + 200);
  v51 = (int *)a6 + 7;
  v52 = *v51;
  if ( (v50 & 0x2000) == 0 )
  {
    if ( (v50 & 0x4000) != 0 )
    {
      v54 = *a16;
      v52 &= a16[1] | a16[2];
    }
    else
    {
      if ( !*((_BYTE *)a16 + 16) )
        goto LABEL_53;
      v52 &= a16[1];
      v54 = *a16;
    }
    v26 &= ~v54;
  }
LABEL_53:
  if ( !a14 )
  {
    if ( (~(v52 | 0x2000000) & v92) != 0 )
      goto LABEL_50;
    v26 |= v52;
LABEL_56:
    v38 = v89;
    goto LABEL_28;
  }
  v58 = 0;
  v59 = 0;
  if ( (a5 & 0x2000000) != 0 )
  {
    v60 = -33554433;
    v61 = (v26 | a5) & 0xFDFFFFFF;
  }
  else
  {
    v60 = v26 | a5;
    v61 = v26 | a5;
  }
  v62 = a13;
  v63 = v90;
  do
  {
    v64 = (v60 & (v26 | *v51)) == 0;
    v65 = v60 & (v26 | *v51);
    *(int *)((char *)v62 + (char *)a11 - (char *)a13) = v65;
    if ( v64 )
    {
      *v62 = -1073741790;
      v59 = 1;
    }
    else if ( (~v65 & v61) != 0 )
    {
      *v62 = -1073741790;
      v59 = 1;
    }
    else
    {
      *v62 = 0;
      v58 = 1;
    }
    v51 += 12;
    ++v62;
    --v63;
  }
  while ( v63 );
  v66 = v90;
  if ( KeGetCurrentIrql() < 2u && v58 && v89 && (SepAssemblePrivileges(v89, v86, v88, v87, (__int64)a12), a12) && !*a12 )
  {
    v41 = 0;
    v58 = 0;
    v67 = 0LL;
    v59 = 1;
    v68 = (char *)a11;
    if ( v90 >= 4 )
    {
      v69 = v90 - 1;
      if ( a11 > (unsigned int *)&a13[v69] || &a11[v69] < (unsigned int *)a13 )
      {
        v70 = v90 - (v90 & 3);
        do
          v67 = (unsigned int)(v67 + 4);
        while ( (unsigned int)v67 < v70 );
        v71 = a13;
        v72 = 16 * ((unsigned __int64)(v70 + 3) >> 2);
        v73 = v72 & 0xFFFFFFFFFFFFFFFCuLL;
        for ( k = v72 >> 2; k; --k )
          *v71++ = -1073741801;
        memset(a11, 0, v73);
        v68 = (char *)a11;
        v66 = v90;
      }
    }
    if ( (unsigned int)v67 < v66 )
    {
      v75 = &v68[4 * v67];
      v76 = v66 - (unsigned int)v67;
      do
      {
        *(_DWORD *)&v75[(char *)a13 - v68] = -1073741801;
        *(_DWORD *)v75 = 0;
        v75 += 4;
        --v76;
      }
      while ( v76 );
    }
  }
  else
  {
    v41 = 1;
  }
  if ( a18 )
    *a18 = v58;
  if ( a19 )
    *a19 = v59;
  return v41;
}
