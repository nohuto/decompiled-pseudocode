/*
 * XREFs of SepAccessCheck @ 0x1400CB700
 * Callers:
 *     SeAccessCheckWithHint @ 0x1400CABF0 (SeAccessCheckWithHint.c)
 *     SeAccessCheckByType @ 0x1400CD4D0 (SeAccessCheckByType.c)
 *     SepAccessCheckAndAuditAlarm @ 0x140525750 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     SepPrivilegeCheck @ 0x140014C60 (SepPrivilegeCheck.c)
 *     SepNormalAccessCheck @ 0x1400CBEF0 (SepNormalAccessCheck.c)
 *     SepMaximumAccessCheck @ 0x1400CCA50 (SepMaximumAccessCheck.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     SepAssemblePrivileges @ 0x14054FBD0 (SepAssemblePrivileges.c)
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
        void *a11,
        _QWORD *a12,
        int *a13,
        char a14,
        char a15,
        int *a16,
        __int64 a17,
        char *a18,
        char *a19)
{
  __int64 v20; // r10
  char v21; // r12
  unsigned int v22; // r9d
  unsigned int v24; // r13d
  __int64 v25; // r8
  unsigned int v26; // esi
  __int16 v27; // ax
  __int16 v28; // dx
  __int64 v29; // rcx
  __int64 v30; // rdi
  __int64 v31; // rax
  __int64 v32; // rax
  int v33; // edx
  int v34; // ebx
  __int64 v35; // rdx
  __int64 v36; // r11
  int v37; // eax
  unsigned int v38; // r8d
  int v39; // eax
  int v40; // ecx
  unsigned int v41; // r13d
  int v42; // ebx
  int v43; // edx
  unsigned __int8 v44; // r15
  _DWORD *v45; // rdx
  int v47; // r13d
  int v48; // ecx
  int v49; // ecx
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // r10
  int v54; // eax
  int v55; // eax
  int *v56; // r15
  int v57; // edx
  int v58; // eax
  int v59; // r10d
  int v60; // edx
  char v61; // r12
  char v62; // r13
  int v63; // edi
  unsigned int v64; // r9d
  int *v65; // rcx
  __int64 v66; // rdx
  char *v67; // r8
  bool v68; // zf
  int v69; // eax
  _QWORD *v70; // rdi
  int v71; // ecx
  _QWORD *v72; // rdi
  unsigned int v73; // r8d
  __int64 v74; // rsi
  char *v75; // r9
  char *v76; // rdi
  __int64 v77; // rax
  unsigned int v78; // ecx
  unsigned __int64 v79; // rcx
  size_t v80; // r8
  unsigned __int64 k; // rcx
  signed __int64 v82; // rdi
  char *v83; // rcx
  __int64 v84; // rax
  unsigned int *v85; // r9
  int *v86; // rdi
  __int64 v87; // rax
  unsigned int v88; // ecx
  unsigned __int64 v89; // rdx
  unsigned __int64 i; // rcx
  unsigned int *v91; // rdi
  unsigned __int64 j; // rcx
  signed __int64 v93; // rdi
  unsigned int *v94; // rcx
  __int64 v95; // rax
  signed __int32 v96[8]; // [rsp+0h] [rbp-100h] BYREF
  unsigned __int8 v97; // [rsp+70h] [rbp-90h]
  unsigned __int8 v98; // [rsp+71h] [rbp-8Fh]
  unsigned __int8 v99; // [rsp+72h] [rbp-8Eh]
  int v100; // [rsp+74h] [rbp-8Ch]
  unsigned int v101; // [rsp+78h] [rbp-88h]
  __int64 v102; // [rsp+80h] [rbp-80h]
  int *v103; // [rsp+88h] [rbp-78h]
  void *v104; // [rsp+90h] [rbp-70h]
  int *v105; // [rsp+98h] [rbp-68h]
  __int64 v106; // [rsp+A0h] [rbp-60h]
  __int64 v107; // [rsp+A8h] [rbp-58h]
  __int64 v108; // [rsp+B0h] [rbp-50h]
  __int64 v109; // [rsp+B8h] [rbp-48h]
  char *v110; // [rsp+C0h] [rbp-40h]
  __int64 v111; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v112; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD *v113; // [rsp+D8h] [rbp-28h]
  LUID v114; // [rsp+E0h] [rbp-20h] BYREF
  int v115; // [rsp+E8h] [rbp-18h]
  LUID v116; // [rsp+F0h] [rbp-10h]
  __int64 v117; // [rsp+100h] [rbp+0h]
  _QWORD v118[6]; // [rsp+110h] [rbp+10h] BYREF

  v20 = a3;
  v21 = a14;
  if ( a4 )
    v20 = a4;
  v22 = a5;
  v104 = a11;
  v24 = a5;
  v113 = a12;
  v103 = a13;
  v108 = a17;
  v109 = a3;
  v25 = (__int64)a16;
  v110 = a19;
  v107 = a2;
  v105 = a16;
  v100 = 0;
  v97 = 0;
  v99 = 0;
  v98 = 0;
  v106 = v20;
  v101 = 1;
  if ( (a5 & 0x1000000) != 0 )
  {
    v114 = SeSecurityPrivilege;
    v115 = 0;
    if ( !SepPrivilegeCheck(v20, (__int64)&v114, 1u, 1, a10) )
    {
      v41 = 0;
      v42 = -1073741727;
      v26 = 0;
      v44 = 1;
LABEL_32:
      if ( v21 )
      {
        if ( a7 )
        {
          v85 = (unsigned int *)v104;
          v86 = v103;
          if ( a7 >= 4 )
          {
            v87 = a7 - 1;
            if ( v104 > &v103[v87] || (char *)v104 + 4 * v87 < (char *)v103 )
            {
              v88 = a7 - (a7 & 3);
              do
                v41 += 4;
              while ( v41 < v88 );
              v89 = 16 * ((unsigned __int64)(v88 + 3) >> 2);
              for ( i = v89 >> 2; i; --i )
                *v86++ = v42;
              v91 = v85;
              for ( j = v89 >> 2; j; --j )
                *v91++ = v26;
              v86 = v103;
            }
          }
          if ( v41 < a7 )
          {
            v93 = (char *)v86 - (char *)v85;
            v94 = &v85[v41];
            v95 = a7 - v41;
            do
            {
              *(unsigned int *)((char *)v94 + v93) = v42;
              *v94++ = v26;
              --v95;
            }
            while ( v95 );
          }
        }
        goto LABEL_34;
      }
LABEL_33:
      v45 = v104;
      *v103 = v42;
      *v45 = v26;
LABEL_34:
      if ( v42 < 0 )
      {
        if ( a18 )
          *a18 = 0;
        if ( v110 )
          *v110 = 1;
      }
      else
      {
        if ( a18 )
          *a18 = 1;
        if ( v110 )
          *v110 = 0;
      }
      return v44;
    }
    v40 = 1;
    v26 = a9 | 0x1000000;
    v100 = 1;
    v22 = a5;
    v97 = 1;
    v43 = 1;
    v24 = a5 & 0xFEFFFFFF;
    if ( (a5 & 0xFEFFFFFF) == 0 )
    {
      v41 = 0;
      v42 = 0;
LABEL_28:
      if ( v26 )
      {
        if ( KeGetCurrentIrql() < 2u )
        {
          if ( v40 )
          {
            v70 = v113;
            SepAssemblePrivileges(v40, v43, v99, v98, (__int64)v113);
            if ( v70 )
            {
              if ( !*v70 )
              {
                v44 = 0;
                v42 = -1073741801;
                v26 = 0;
                goto LABEL_32;
              }
            }
          }
        }
LABEL_31:
        v44 = 1;
        goto LABEL_32;
      }
LABEL_110:
      v42 = -1073741790;
      goto LABEL_31;
    }
    v25 = (__int64)v105;
    v20 = v106;
  }
  else
  {
    v26 = a9;
  }
  v27 = *(_WORD *)(a1 + 2);
  v28 = v27 & 4;
  if ( (v27 & 4) != 0 )
  {
    if ( v27 < 0 )
    {
      v29 = *(unsigned int *)(a1 + 16);
      if ( (_DWORD)v29 )
        v30 = a1 + v29;
      else
        v30 = 0LL;
    }
    else
    {
      v30 = *(_QWORD *)(a1 + 32);
    }
  }
  else
  {
    v30 = 0LL;
  }
  if ( (v27 & 0x10) != 0 )
  {
    if ( v27 < 0 )
    {
      v31 = *(unsigned int *)(a1 + 12);
      if ( (_DWORD)v31 )
        v32 = a1 + v31;
      else
        v32 = 0LL;
    }
    else
    {
      v32 = *(_QWORD *)(a1 + 24);
    }
  }
  else
  {
    v32 = 0LL;
  }
  v102 = v32;
  if ( !v28 || !v30 )
  {
    v26 |= v22;
    if ( (v22 & 0x2000000) != 0 )
      v26 = a8[3] | v26 & 0xFDFFFFFF;
    if ( (*(_DWORD *)(v20 + 200) & 0x4000) == 0 )
      goto LABEL_64;
    v26 = 0;
    *(_BYTE *)(v25 + 17) = 0;
    *(_DWORD *)(v25 + 4) = 0;
    goto LABEL_109;
  }
  if ( (v24 & 0x80000) != 0 )
  {
    v117 = SeTakeOwnershipPrivilege;
    v111 = 0LL;
    if ( !a10
      || (_InterlockedExchange64(&v111, *(_QWORD *)(v20 + 72)),
          _InterlockedOr(v96, 0),
          v50 = v111,
          _bittest64(&v50, (unsigned int)v117)) )
    {
      v26 |= 0x80000u;
      v40 = v100 + 1;
      v99 = 1;
      ++v100;
      v24 &= ~0x80000u;
      if ( !v24 )
        goto LABEL_65;
    }
    else
    {
      v116 = SeRelabelPrivilege;
      v51 = *(_QWORD *)(v20 + 72);
      v112 = 0LL;
      _InterlockedExchange64(&v112, v51);
      _InterlockedOr(v96, 0);
      v52 = v112;
      if ( _bittest64(&v52, v116.LowPart) )
      {
        v26 |= 0x80000u;
        v40 = v100 + 1;
        v98 = 1;
        ++v100;
        v24 &= ~0x80000u;
        if ( !v24 )
          goto LABEL_65;
      }
    }
    v32 = v102;
  }
  if ( !*(_WORD *)(v30 + 4) )
  {
    *(_DWORD *)(v25 + 12) = v24;
    v71 = *(_DWORD *)(v20 + 200);
    if ( (v71 & 0x4000) != 0 )
      v26 &= ~*(_DWORD *)v25;
    if ( v24 == 0x2000000 )
    {
      if ( v26 )
      {
LABEL_64:
        v40 = v100;
LABEL_65:
        v42 = 0;
        v41 = 0;
        goto LABEL_27;
      }
    }
    else if ( !v24 && *(_DWORD *)v25 && v26 && (v71 & 0x6000) == 0 )
    {
      goto LABEL_64;
    }
    v26 = 0;
LABEL_109:
    v41 = 0;
    goto LABEL_110;
  }
  if ( a7 )
  {
    v33 = a7;
    v101 = a7;
  }
  else
  {
    a6 = v118;
    v118[2] = 0xFFFFFFFF00000000uLL;
    v118[0] = 0LL;
    v118[1] = 0LL;
    memset(&v118[3], 0, 24);
    v33 = 1;
  }
  v34 = v22 & 0x2000000;
  if ( (v22 & 0x2000000) == 0 && !a14 )
  {
    SepNormalAccessCheck(v24, v20, v109, v30, v32, v108, v107, v33, (__int64)a6, a7, 0, a15, v25);
    v35 = (__int64)v105;
    v105[3] = *((_DWORD *)a6 + 6);
    if ( *((_DWORD *)a6 + 6) )
      goto LABEL_54;
    v36 = v106;
    v37 = *(_DWORD *)(v106 + 200);
    if ( (v37 & 0x10) != 0 )
    {
      if ( (v37 & 8) != 0 )
        v59 = a8[1] & ~(*a8 | a8[2]) | 0x10D0000;
      else
        v59 = a8[3] | 0x1FFFFF;
      v38 = a5;
      if ( (v59 & a5) == 0 )
      {
LABEL_24:
        *(_DWORD *)(v35 + 12) = *((_DWORD *)a6 + 6);
        if ( !*((_DWORD *)a6 + 6) )
        {
          v39 = *(_DWORD *)(v36 + 200);
          if ( (v39 & 0x2000) != 0 )
          {
LABEL_26:
            v40 = v100;
            v41 = 0;
            v42 = 0;
            v26 |= v38;
LABEL_27:
            v43 = v97;
            goto LABEL_28;
          }
          v47 = v38 | v24;
          if ( (v39 & 0x4000) != 0 )
          {
            v48 = *(_DWORD *)(v35 + 4) | *(_DWORD *)(v35 + 8);
          }
          else
          {
            if ( !*(_BYTE *)(v35 + 16) )
            {
              v49 = 0;
LABEL_44:
              *((_DWORD *)a6 + 6) = v49;
              if ( v49 )
              {
                v26 = 0;
                v42 = -1073741790;
                v44 = 1;
                goto LABEL_33;
              }
              goto LABEL_26;
            }
            v48 = *(_DWORD *)(v35 + 4);
          }
          v49 = (*(_DWORD *)v35 | v47) & ~v48;
          goto LABEL_44;
        }
LABEL_54:
        v42 = -1073741790;
        v26 = 0;
        v44 = 1;
        goto LABEL_33;
      }
      SepNormalAccessCheck(v24 & v59, v106, v109, v30, v102, v108, v107, v101, (__int64)a6, a7, 1, a15, v35);
      v35 = (__int64)v105;
      v36 = v106;
    }
    v38 = a5;
    goto LABEL_24;
  }
  SepMaximumAccessCheck(v20, v109, v30, v32, v108, v107, v33, (__int64)a6, a7, 0, 0, a15, v25);
  v53 = v106;
  v54 = *(_DWORD *)(v106 + 200);
  if ( (v54 & 0x10) != 0 )
  {
    if ( (v54 & 8) != 0 )
      v60 = a8[1] & ~(*a8 | a8[2]) | 0x10D0000;
    else
      v60 = a8[3] | 0x1FFFFF;
    SepMaximumAccessCheck(v106, v109, v30, v102, v108, v107, v101, (__int64)a6, a7, v60, 1, a15, (__int64)v105);
    v53 = v106;
  }
  v55 = *(_DWORD *)(v53 + 200);
  v56 = (int *)a6 + 7;
  v57 = *v56;
  if ( (v55 & 0x2000) == 0 )
  {
    if ( (v55 & 0x4000) != 0 )
    {
      v58 = *v105;
      v57 &= v105[1] | v105[2];
    }
    else
    {
      if ( !*((_BYTE *)v105 + 16) )
        goto LABEL_57;
      v57 &= v105[1];
      v58 = *v105;
    }
    v26 &= ~v58;
  }
LABEL_57:
  v21 = a14;
  if ( !a14 )
  {
    if ( (~(v57 | 0x2000000) & v24) == 0 )
    {
      v40 = v100;
      v26 |= v57;
      v41 = 0;
      v42 = 0;
      goto LABEL_27;
    }
    goto LABEL_54;
  }
  v61 = 0;
  v62 = 0;
  if ( v34 )
  {
    v63 = -33554433;
    v64 = (v26 | a5) & 0xFDFFFFFF;
  }
  else
  {
    v63 = v26 | a5;
    v64 = v26 | a5;
  }
  if ( v101 )
  {
    v65 = v103;
    v66 = v101;
    v67 = (char *)((_BYTE *)v104 - (_BYTE *)v103);
    do
    {
      v68 = (v63 & (*v56 | v26)) == 0;
      v69 = v63 & (*v56 | v26);
      *(int *)((char *)v65 + (_QWORD)v67) = v69;
      if ( v68 )
      {
        *v65 = -1073741790;
        v62 = 1;
      }
      else if ( (~v69 & v64) != 0 )
      {
        *v65 = -1073741790;
        v62 = 1;
      }
      else
      {
        *v65 = 0;
        v61 = 1;
      }
      v56 += 12;
      ++v65;
      --v66;
    }
    while ( v66 );
  }
  if ( KeGetCurrentIrql() < 2u
    && v61
    && v100
    && (v72 = v113, SepAssemblePrivileges(v100, v97, v99, v98, (__int64)v113), v72)
    && !*v72 )
  {
    v73 = v101;
    v44 = 0;
    v61 = 0;
    v74 = 0LL;
    v62 = 1;
    if ( v101 )
    {
      v75 = (char *)v104;
      v76 = (char *)v103;
      if ( v101 >= 4 )
      {
        v77 = v101 - 1;
        if ( v104 > &v103[v77] || (char *)v104 + 4 * v77 < (char *)v103 )
        {
          v78 = v101 - (v101 & 3);
          do
            v74 = (unsigned int)(v74 + 4);
          while ( (unsigned int)v74 < v78 );
          v79 = 16 * ((unsigned __int64)(v78 + 3) >> 2);
          v80 = v79 & 0xFFFFFFFFFFFFFFFCuLL;
          for ( k = v79 >> 2; k; --k )
          {
            *(_DWORD *)v76 = -1073741801;
            v76 += 4;
          }
          memset(v75, 0, v80);
          v75 = (char *)v104;
          v73 = v101;
          v76 = (char *)v103;
        }
      }
      if ( (unsigned int)v74 < v73 )
      {
        v82 = v76 - v75;
        v83 = &v75[4 * v74];
        v84 = v73 - (unsigned int)v74;
        do
        {
          *(_DWORD *)&v83[v82] = -1073741801;
          *(_DWORD *)v83 = 0;
          v83 += 4;
          --v84;
        }
        while ( v84 );
      }
    }
  }
  else
  {
    v44 = 1;
  }
  if ( a18 )
    *a18 = v61;
  if ( v110 )
    *v110 = v62;
  return v44;
}
