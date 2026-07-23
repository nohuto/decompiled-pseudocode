/*
 * XREFs of SepAccessCheck @ 0x140063630
 * Callers:
 *     SeAccessCheckByType @ 0x14005FA70 (SeAccessCheckByType.c)
 *     SeAccessCheckWithHint @ 0x140062700 (SeAccessCheckWithHint.c)
 *     SepAccessCheckAndAuditAlarm @ 0x1404A1110 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     SepPrivilegeCheck @ 0x14000F130 (SepPrivilegeCheck.c)
 *     SepMaximumAccessCheck @ 0x140061220 (SepMaximumAccessCheck.c)
 *     SepNormalAccessCheck @ 0x140061FC0 (SepNormalAccessCheck.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     SepAssemblePrivileges @ 0x1404C1BEC (SepAssemblePrivileges.c)
 */

__int64 __fastcall SepAccessCheck(
        __int64 a1,
        unsigned __int8 *a2,
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
        _QWORD *a17,
        char *a18,
        char *a19)
{
  __int64 v19; // r10
  __int64 v20; // r11
  char v22; // r13
  unsigned int v23; // r9d
  unsigned int v24; // esi
  __int16 v25; // cx
  __int64 v26; // rdx
  __int64 v27; // rbp
  __int64 v28; // rbx
  int v29; // edx
  unsigned int v30; // r8d
  __int64 v31; // rdi
  _QWORD *v32; // rax
  _QWORD *v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdx
  int v36; // eax
  int v37; // eax
  unsigned int v38; // ebp
  unsigned __int8 v39; // cl
  int v40; // ebx
  unsigned __int8 v41; // r10
  unsigned __int8 v42; // r15
  __int64 v44; // rcx
  __int64 v45; // r10
  int v46; // eax
  _QWORD *v47; // r13
  int v48; // eax
  _DWORD *v49; // r8
  int v50; // edx
  int v51; // edx
  int v52; // ecx
  int v53; // eax
  int v54; // ecx
  char v55; // al
  int v56; // r10d
  int v57; // eax
  int v58; // edx
  unsigned __int8 v59; // r8
  _DWORD *v60; // rax
  int v61; // ecx
  char v62; // bp
  char v63; // r13
  int v64; // ecx
  unsigned int v65; // r15d
  __int64 v66; // r9
  int *v67; // rdx
  bool v68; // zf
  int v69; // eax
  unsigned int v70; // r8d
  __int64 v71; // rsi
  char *v72; // r9
  char *v73; // rdi
  __int64 v74; // rax
  unsigned int v75; // ecx
  unsigned __int64 v76; // rcx
  size_t v77; // r8
  unsigned __int64 k; // rcx
  signed __int64 v79; // rdi
  char *v80; // rcx
  __int64 v81; // rax
  int *v82; // rdi
  __int64 v83; // rax
  unsigned int v84; // ecx
  unsigned __int64 v85; // rdx
  unsigned __int64 i; // rcx
  unsigned int *v87; // rdi
  unsigned __int64 j; // rcx
  signed __int64 v89; // rdi
  unsigned int *v90; // rcx
  __int64 v91; // rax
  unsigned __int8 v92; // [rsp+70h] [rbp-F8h]
  unsigned __int8 v93; // [rsp+71h] [rbp-F7h]
  unsigned __int8 v94; // [rsp+72h] [rbp-F6h]
  int v95; // [rsp+74h] [rbp-F4h]
  unsigned int v96; // [rsp+78h] [rbp-F0h]
  unsigned int v97; // [rsp+7Ch] [rbp-ECh]
  __int64 v98; // [rsp+80h] [rbp-E8h]
  _QWORD *v99; // [rsp+A0h] [rbp-C8h]
  __int64 v102; // [rsp+D0h] [rbp-98h] BYREF
  int v103; // [rsp+D8h] [rbp-90h]
  _QWORD v104[6]; // [rsp+E0h] [rbp-88h] BYREF

  v19 = a3;
  v20 = (__int64)a16;
  v22 = a14;
  v99 = a6;
  if ( a4 )
    v19 = a4;
  v23 = a5;
  v95 = 0;
  v92 = 0;
  v93 = 0;
  v94 = 0;
  v98 = v19;
  v96 = a5;
  v97 = 1;
  if ( (a5 & 0x1000000) != 0 )
  {
    v102 = (__int64)SeSecurityPrivilege;
    v103 = 0;
    if ( !SepPrivilegeCheck(v19, (__int64)&v102, 1u, 1, a10) )
    {
      v38 = 0;
      v40 = -1073741727;
      v24 = 0;
      v42 = v59;
LABEL_31:
      if ( v22 )
      {
        if ( a7 )
        {
          v82 = a13;
          if ( a7 >= 4 )
          {
            v83 = a7 - 1;
            if ( a11 > (unsigned int *)&a13[v83] || &a11[v83] < (unsigned int *)a13 )
            {
              v84 = a7 - (a7 & 3);
              do
                v38 += 4;
              while ( v38 < v84 );
              v85 = 16 * ((unsigned __int64)(v84 + 3) >> 2);
              for ( i = v85 >> 2; i; --i )
                *v82++ = v40;
              v87 = a11;
              for ( j = v85 >> 2; j; --j )
                *v87++ = v24;
              v82 = a13;
            }
          }
          if ( v38 < a7 )
          {
            v89 = (char *)v82 - (char *)a11;
            v90 = &a11[v38];
            v91 = a7 - v38;
            do
            {
              *(unsigned int *)((char *)v90 + v89) = v40;
              *v90++ = v24;
              --v91;
            }
            while ( v91 );
          }
        }
        goto LABEL_33;
      }
LABEL_32:
      *a13 = v40;
      *a11 = v24;
LABEL_33:
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
      return v42;
    }
    v23 = a5 & 0xFEFFFFFF;
    v95 = 1;
    v24 = a9 | 0x1000000;
    v96 = a5 & 0xFEFFFFFF;
    v92 = 1;
    v29 = 1;
    v41 = 1;
    if ( (a5 & 0xFEFFFFFF) == 0 )
    {
      v38 = 0;
      v40 = 0;
      goto LABEL_44;
    }
    v19 = v98;
    v20 = (__int64)a16;
  }
  else
  {
    v24 = a9;
  }
  v25 = *(_WORD *)(a1 + 2);
  if ( (v25 & 4) != 0 )
  {
    if ( v25 < 0 )
    {
      v26 = *(unsigned int *)(a1 + 16);
      if ( (_DWORD)v26 )
        v27 = a1 + v26;
      else
        v27 = 0LL;
    }
    else
    {
      v27 = *(_QWORD *)(a1 + 32);
    }
  }
  else
  {
    v27 = 0LL;
  }
  if ( (v25 & 0x10) != 0 )
  {
    if ( v25 < 0 )
    {
      v44 = *(unsigned int *)(a1 + 12);
      if ( (_DWORD)v44 )
        v28 = a1 + v44;
      else
        v28 = 0LL;
    }
    else
    {
      v28 = *(_QWORD *)(a1 + 24);
    }
  }
  else
  {
    v28 = 0LL;
  }
  if ( (*(_WORD *)(a1 + 2) & 4) == 0 || !v27 )
  {
    if ( (a5 & 0x2000000) != 0 )
      v24 = a8[3] | (v24 | a5) & 0xFDFFFFFF;
    else
      v24 |= a5;
    v38 = 0;
    if ( (*(_DWORD *)(v19 + 200) & 0x4000) != 0 )
    {
      v24 = 0;
      *(_BYTE *)(v20 + 17) = 0;
      *(_DWORD *)(v20 + 4) = 0;
      goto LABEL_60;
    }
    v29 = v95;
    v40 = 0;
    goto LABEL_43;
  }
  if ( (v23 & 0x80000) == 0 )
  {
    v29 = v95;
    v30 = 1;
LABEL_16:
    v31 = v98;
    goto LABEL_17;
  }
  v103 = 0;
  v102 = SeTakeOwnershipPrivilege;
  if ( SepPrivilegeCheck(v19, (__int64)&v102, 1u, 1, a10) )
  {
    v24 |= 0x80000u;
    v23 = v96 & 0xFFF7FFFF;
    v29 = v95 + 1;
    v96 = v23;
    ++v95;
    v39 = v30;
    v93 = v30;
    if ( !v23 )
    {
      v41 = v92;
      v38 = 0;
      v40 = 0;
      goto LABEL_27;
    }
    goto LABEL_16;
  }
  v31 = v98;
  v102 = (__int64)SeRelabelPrivilege;
  v103 = 0;
  v55 = SepPrivilegeCheck(v98, (__int64)&v102, v30, v30, a10);
  v23 = v96;
  v29 = v95;
  if ( v55 )
  {
    v23 = v96 & 0xFFF7FFFF;
    v94 = v30;
    v29 = v95 + 1;
    v96 = v23;
    v24 |= 0x80000u;
    ++v95;
    if ( !v23 )
    {
      v38 = 0;
      v40 = 0;
LABEL_43:
      v41 = v92;
LABEL_44:
      v39 = 0;
      goto LABEL_27;
    }
  }
LABEL_17:
  if ( !*(_WORD *)(v27 + 4) )
  {
    v60 = a16;
    a16[3] = v23;
    v61 = *(_DWORD *)(v31 + 200);
    if ( (v61 & 0x4000) != 0 )
    {
      v24 &= ~*a16;
      v60 = a16;
    }
    if ( v23 == 0x2000000 )
    {
      if ( v24 )
      {
        v39 = v93;
        v38 = 0;
        v41 = v92;
        v40 = 0;
        goto LABEL_27;
      }
    }
    else if ( !v23 && *v60 && v24 && (v61 & 0x6000) == 0 )
    {
      v39 = v93;
      v38 = 0;
      v41 = v92;
      v40 = 0;
      goto LABEL_27;
    }
    v38 = 0;
    v24 = 0;
    goto LABEL_60;
  }
  if ( a7 )
  {
    v32 = a6;
    v30 = a7;
    v97 = a7;
  }
  else
  {
    v32 = v104;
    v104[2] = 0xFFFFFFFF00000000uLL;
    v99 = v104;
    v104[0] = 0LL;
    v104[1] = 0LL;
    memset(&v104[3], 0, 24);
  }
  if ( (a5 & 0x2000000) == 0 && !a14 )
  {
    SepNormalAccessCheck(v96, v98, a3, v27, v28, a17, a2, v30, (__int64)v32, a7, 0, a15, (__int64)a16);
    v33 = v99;
    v34 = (__int64)a16;
    a16[3] = *((_DWORD *)v99 + 6);
    if ( *((_DWORD *)v99 + 6) )
      goto LABEL_65;
    v35 = v98;
    v36 = *(_DWORD *)(v98 + 200);
    if ( (v36 & 0x10) != 0 )
    {
      v56 = (v36 & 8) != 0 ? a8[1] & ~(*a8 | a8[2]) | 0x10D0000 : a8[3] | 0x1FFFFF;
      if ( (v56 & a5) != 0 )
      {
        SepNormalAccessCheck(v96 & v56, v98, a3, v27, v28, a17, a2, v97, (__int64)v99, a7, 1, a15, (__int64)a16);
        v35 = v98;
        v33 = v99;
        v34 = (__int64)a16;
      }
    }
    *(_DWORD *)(v34 + 12) = *((_DWORD *)v33 + 6);
    if ( *((_DWORD *)v33 + 6) )
      goto LABEL_65;
    v37 = *(_DWORD *)(v35 + 200);
    if ( (v37 & 0x2000) != 0 )
    {
LABEL_26:
      v29 = v95;
      v38 = 0;
      v39 = v93;
      v40 = 0;
      v41 = v92;
      v24 |= a5;
      goto LABEL_27;
    }
    v51 = a5 | v96;
    if ( (v37 & 0x4000) != 0 )
    {
      v52 = ~(*(_DWORD *)(v34 + 4) | *(_DWORD *)(v34 + 8));
      v53 = v51 | *(_DWORD *)v34;
    }
    else
    {
      if ( !*(_BYTE *)(v34 + 16) )
      {
        v54 = 0;
LABEL_64:
        *((_DWORD *)v33 + 6) = v54;
        if ( !v54 )
          goto LABEL_26;
LABEL_65:
        v40 = -1073741790;
        v24 = 0;
        v42 = 1;
        goto LABEL_32;
      }
      v52 = v51 | *(_DWORD *)v34;
      v53 = ~*(_DWORD *)(v34 + 4);
    }
    v54 = v53 & v52;
    goto LABEL_64;
  }
  SepMaximumAccessCheck(v98, a3, v27, v28, a17, (__int64)a2, v30, (__int64)v32, a7, 0, 0, a15, (__int64)a16);
  v45 = v98;
  v46 = *(_DWORD *)(v98 + 200);
  if ( (v46 & 0x10) != 0 )
  {
    if ( (v46 & 8) != 0 )
      v58 = a8[1] & ~(*a8 | a8[2]) | 0x10D0000;
    else
      v58 = a8[3] | 0x1FFFFF;
    v47 = v99;
    SepMaximumAccessCheck(v98, a3, v27, v28, a17, (__int64)a2, v97, (__int64)v99, a7, v58, 1, a15, (__int64)a16);
    v45 = v98;
  }
  else
  {
    v47 = v99;
  }
  v48 = *(_DWORD *)(v45 + 200);
  v49 = (_DWORD *)v47 + 7;
  v50 = *((_DWORD *)v47 + 7);
  if ( (v48 & 0x2000) == 0 )
  {
    if ( (v48 & 0x4000) != 0 )
    {
      v57 = *a16;
      v50 &= a16[1] | a16[2];
    }
    else
    {
      if ( !*((_BYTE *)a16 + 16) )
        goto LABEL_56;
      v50 &= a16[1];
      v57 = *a16;
    }
    v24 &= ~v57;
  }
LABEL_56:
  v22 = a14;
  if ( !a14 )
  {
    if ( (~(v50 | 0x2000000) & v96) != 0 )
      goto LABEL_65;
    v39 = v93;
    v24 |= v50;
    v29 = v95;
    v38 = 0;
    v41 = v92;
    v40 = 0;
LABEL_27:
    if ( v24 )
    {
      if ( KeGetCurrentIrql() < 2u )
      {
        if ( v29 )
        {
          SepAssemblePrivileges(v95, v41, v39, v94, (__int64)a12);
          if ( a12 )
          {
            if ( !*a12 )
            {
              v42 = 0;
              v40 = -1073741801;
              v24 = 0;
              goto LABEL_31;
            }
          }
        }
      }
LABEL_30:
      v42 = 1;
      goto LABEL_31;
    }
LABEL_60:
    v40 = -1073741790;
    goto LABEL_30;
  }
  v62 = 0;
  v63 = 0;
  if ( (a5 & 0x2000000) != 0 )
  {
    v64 = -33554433;
    v65 = (v24 | a5) & 0xFDFFFFFF;
  }
  else
  {
    v64 = v24 | a5;
    v65 = v24 | a5;
  }
  v66 = v97;
  v67 = a13;
  do
  {
    v68 = (v64 & (v24 | *v49)) == 0;
    v69 = v64 & (v24 | *v49);
    *(int *)((char *)v67 + (char *)a11 - (char *)a13) = v69;
    if ( v68 )
    {
      *v67 = -1073741790;
      v63 = 1;
    }
    else if ( (~v69 & v65) != 0 )
    {
      *v67 = -1073741790;
      v63 = 1;
    }
    else
    {
      *v67 = 0;
      v62 = 1;
    }
    v49 += 12;
    ++v67;
    --v66;
  }
  while ( v66 );
  if ( KeGetCurrentIrql() < 2u && v62 && v95 && (SepAssemblePrivileges(v95, v92, v93, v94, (__int64)a12), a12) && !*a12 )
  {
    v70 = v97;
    v42 = 0;
    v62 = 0;
    v71 = 0LL;
    v63 = 1;
    v72 = (char *)a11;
    v73 = (char *)a13;
    if ( v97 >= 4 )
    {
      v74 = v97 - 1;
      if ( a11 > (unsigned int *)&a13[v74] || &a11[v74] < (unsigned int *)a13 )
      {
        v75 = v97 - (v97 & 3);
        do
          v71 = (unsigned int)(v71 + 4);
        while ( (unsigned int)v71 < v75 );
        v76 = 16 * ((unsigned __int64)(v75 + 3) >> 2);
        v77 = v76 & 0xFFFFFFFFFFFFFFFCuLL;
        for ( k = v76 >> 2; k; --k )
        {
          *(_DWORD *)v73 = -1073741801;
          v73 += 4;
        }
        memset(a11, 0, v77);
        v72 = (char *)a11;
        v70 = v97;
        v73 = (char *)a13;
      }
    }
    if ( (unsigned int)v71 < v70 )
    {
      v79 = v73 - v72;
      v80 = &v72[4 * v71];
      v81 = v70 - (unsigned int)v71;
      do
      {
        *(_DWORD *)&v80[v79] = -1073741801;
        *(_DWORD *)v80 = 0;
        v80 += 4;
        --v81;
      }
      while ( v81 );
    }
  }
  else
  {
    v42 = 1;
  }
  if ( a18 )
    *a18 = v62;
  if ( a19 )
    *a19 = v63;
  return v42;
}
