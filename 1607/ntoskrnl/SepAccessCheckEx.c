/*
 * XREFs of SepAccessCheckEx @ 0x140136360
 * Callers:
 *     SepCommonAccessCheckEx @ 0x140135D00 (SepCommonAccessCheckEx.c)
 * Callees:
 *     SepPrivilegeCheck @ 0x14000F130 (SepPrivilegeCheck.c)
 *     SeTokenIsRestricted @ 0x14007F7C0 (SeTokenIsRestricted.c)
 *     SepMaximumAccessCheckEx @ 0x140133534 (SepMaximumAccessCheckEx.c)
 *     AuthzBasepSetTypeListAccessReasons @ 0x1401341D4 (AuthzBasepSetTypeListAccessReasons.c)
 *     SepNormalAccessCheckEx @ 0x1401366B8 (SepNormalAccessCheckEx.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     SepAssemblePrivileges @ 0x1404C1BEC (SepAssemblePrivileges.c)
 */

char __fastcall SepAccessCheckEx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4,
        unsigned int a5,
        _DWORD *a6,
        int a7,
        _DWORD *a8,
        int a9,
        char a10,
        int *a11,
        _QWORD *a12,
        int *a13,
        __int64 a14,
        __int64 a15,
        char a16,
        char a17,
        __int64 a18,
        __int64 *a19,
        _BYTE *a20)
{
  _QWORD *v20; // r15
  int v21; // eax
  _DWORD *v23; // r13
  unsigned int v25; // r14d
  unsigned int v26; // r12d
  _QWORD *v27; // rcx
  __int64 v28; // rdx
  int v29; // edi
  unsigned int v30; // edx
  unsigned __int16 v31; // cx
  int v32; // r9d
  __int64 v33; // r15
  int v34; // eax
  bool v35; // zf
  int v36; // ecx
  int v37; // ebx
  char v38; // cl
  int v40; // eax
  char v41; // al
  __int64 v42; // r9
  int v43; // ecx
  int v44; // r8d
  int v45; // edx
  __int64 v46; // rcx
  __int64 v47; // rcx
  unsigned int v48; // r8d
  int v49; // ecx
  int v50; // r10d
  int v51; // r14d
  int v52; // ecx
  int v53; // eax
  int v54; // ecx
  int v55; // edx
  unsigned int v56; // [rsp+20h] [rbp-E0h]
  int v57; // [rsp+28h] [rbp-D8h]
  int v58; // [rsp+28h] [rbp-D8h]
  char v59; // [rsp+28h] [rbp-D8h]
  unsigned int v60; // [rsp+50h] [rbp-B0h]
  unsigned int v61; // [rsp+50h] [rbp-B0h]
  char v62; // [rsp+71h] [rbp-8Fh]
  char v63; // [rsp+72h] [rbp-8Eh]
  char v64; // [rsp+73h] [rbp-8Dh]
  int v65; // [rsp+74h] [rbp-8Ch]
  __int64 v67; // [rsp+90h] [rbp-70h]
  LUID v68; // [rsp+B0h] [rbp-50h] BYREF
  int v69; // [rsp+B8h] [rbp-48h]
  __int64 v70; // [rsp+C0h] [rbp-40h] BYREF
  int v71; // [rsp+C8h] [rbp-38h]
  _DWORD v72[12]; // [rsp+D0h] [rbp-30h] BYREF

  v20 = a12;
  v21 = a5;
  v23 = (_DWORD *)a3;
  if ( a4 )
    v23 = a4;
  v25 = a5;
  v67 = a3;
  v65 = 0;
  v62 = 0;
  v64 = 0;
  v63 = 0;
  if ( a7 )
  {
    v26 = a7;
  }
  else
  {
    a6 = v72;
    v26 = 1;
    memset(v72, 0, sizeof(v72));
    v72[5] = -1;
    v21 = a5;
  }
  v27 = a6 + 10;
  v28 = v26;
  do
  {
    *v27 = a14;
    a14 += 128LL;
    v27 += 6;
    --v28;
  }
  while ( v28 );
  if ( (v21 & 0x1000000) == 0 )
  {
    v29 = a9;
    goto LABEL_9;
  }
  v68 = SeSecurityPrivilege;
  v69 = 0;
  v41 = SepPrivilegeCheck((__int64)v23, (__int64)&v68, 1u, 1, a10);
  v42 = (__int64)a6;
  v43 = 0x1000000;
  v56 = v26;
  v44 = 8;
  if ( !v41 )
  {
    v29 = 0;
    v37 = -1073741727;
    v45 = 0x100000;
    goto LABEL_49;
  }
  v29 = a9 | 0x1000000;
  AuthzBasepSetTypeListAccessReasons(0x1000000, 0x200000, 8, (__int64)a6, v26, 0);
  v36 = 1;
  v65 = 1;
  LOBYTE(v30) = 1;
  v62 = 1;
  v25 = a5 & 0xFEFFFFFF;
  if ( (a5 & 0xFEFFFFFF) != 0 )
  {
    v21 = a5;
LABEL_9:
    v30 = a1;
    v31 = *(_WORD *)(a1 + 2);
    v32 = v31;
    LOWORD(v32) = v31 & 4;
    if ( (v31 & 4) != 0 )
    {
      if ( (v31 & 0x8000) == 0 )
      {
        v33 = *(_QWORD *)(a1 + 32);
        goto LABEL_13;
      }
      a3 = *(unsigned int *)(a1 + 16);
      if ( (_DWORD)a3 )
      {
        v33 = a1 + a3;
        goto LABEL_13;
      }
    }
    v33 = 0LL;
LABEL_13:
    if ( (v31 & 0x10) == 0 )
    {
LABEL_14:
      v68 = 0LL;
LABEL_15:
      if ( !(_WORD)v32 || !v33 )
      {
        v29 |= v21;
        if ( (v21 & 0x2000000) != 0 )
        {
          v29 = a8[3] | v29 & 0xFDFFFFFF;
          AuthzBasepSetTypeListAccessReasons(v29, 5242880, 0, (__int64)a6, v26, 0);
          if ( (v23[50] & 0x4000) == 0 )
            goto LABEL_25;
          v59 = 1;
        }
        else
        {
          AuthzBasepSetTypeListAccessReasons(v21, 5242880, 0, (__int64)a6, v26, 0);
          if ( (v23[50] & 0x4000) == 0 )
            goto LABEL_25;
          v59 = 0;
        }
        v29 = 0;
        AuthzBasepSetTypeListAccessReasons(0, 5242880, a3, (__int64)a6, v26, v59);
        *(_BYTE *)(a18 + 17) = 0;
        *(_DWORD *)(a18 + 4) = 0;
        goto LABEL_100;
      }
      if ( (v25 & 0x80000) == 0 )
        goto LABEL_18;
      v70 = SeTakeOwnershipPrivilege;
      v71 = 0;
      if ( SepPrivilegeCheck((__int64)v23, (__int64)&v70, 1u, 1, a10) )
      {
        v29 |= 0x80000u;
        AuthzBasepSetTypeListAccessReasons(0x80000, 0x200000, 9, (__int64)a6, v26, 0);
        v64 = 1;
      }
      else
      {
        v70 = (__int64)SeRelabelPrivilege;
        v71 = 0;
        if ( !SepPrivilegeCheck((__int64)v23, (__int64)&v70, v48, v48, a10) )
        {
LABEL_18:
          if ( *(_WORD *)(v33 + 4) )
          {
            LOBYTE(v60) = 0;
            if ( (a5 & 0x2000000) != 0 )
            {
              SepMaximumAccessCheckEx(
                (__int64)v23,
                v67,
                v33,
                *(_QWORD *)&v68,
                a19,
                v57,
                v26,
                (__int64)a6,
                a7,
                0,
                v60,
                a16,
                a17,
                a18);
              AuthzBasepSetTypeListAccessReasons(-1, 0x800000, 0, (__int64)a6, v26, 0);
              if ( SeTokenIsRestricted(v23) )
              {
                if ( (v23[50] & 8) != 0 )
                  v55 = a8[1] & ~(*a8 | a8[2]) | 0x10D0000;
                else
                  v55 = a8[3] | 0x1FFFFF;
                LOBYTE(v61) = 1;
                SepMaximumAccessCheckEx(
                  (__int64)v23,
                  v67,
                  v33,
                  *(_QWORD *)&v68,
                  a19,
                  v58,
                  v26,
                  (__int64)a6,
                  a7,
                  v55,
                  v61,
                  a16,
                  a17,
                  a18);
              }
              v34 = v23[50];
              v30 = a6[7];
              if ( (v34 & 0x2000) != 0 )
                goto LABEL_22;
              if ( (v34 & 0x4000) != 0 )
              {
                v30 &= *(_DWORD *)(a18 + 4) | *(_DWORD *)(a18 + 8);
              }
              else
              {
                if ( !*(_BYTE *)(a18 + 16) )
                {
LABEL_22:
                  v35 = (~(v30 | 0x2000000) & v25) == 0;
                  goto LABEL_23;
                }
                v30 &= *(_DWORD *)(a18 + 4);
              }
              v29 &= ~*(_DWORD *)a18;
              goto LABEL_22;
            }
            SepNormalAccessCheckEx(v25, (_DWORD)v23, v67, v33, *(_QWORD *)&v68, (__int64)a19);
            *(_DWORD *)(a18 + 12) = a6[6];
            if ( a6[6] )
              goto LABEL_42;
            if ( SeTokenIsRestricted(v23) )
            {
              if ( (v23[50] & 8) != 0 )
                v50 = a8[1] & ~(*a8 | a8[2]) | 0x10D0000;
              else
                v50 = a8[3] | 0x1FFFFF;
              v30 = a5;
              if ( (v50 & a5) == 0 )
              {
LABEL_38:
                *(_DWORD *)(a18 + 12) = a6[6];
                if ( !a6[6] )
                {
                  v40 = v23[50];
                  if ( (v40 & 0x2000) != 0 )
                    goto LABEL_24;
                  v51 = v30 | v25;
                  if ( (v40 & 0x4000) != 0 )
                  {
                    v52 = ~(*(_DWORD *)(a18 + 4) | *(_DWORD *)(a18 + 8));
                    v53 = v51 | *(_DWORD *)a18;
                  }
                  else
                  {
                    if ( !*(_BYTE *)(a18 + 16) )
                    {
                      v54 = 0;
LABEL_85:
                      a6[6] = v54;
                      v35 = v54 == 0;
LABEL_23:
                      if ( v35 )
                      {
LABEL_24:
                        v29 |= v30;
LABEL_25:
                        v36 = v65;
LABEL_26:
                        v20 = a12;
                        LOBYTE(v30) = v62;
                        goto LABEL_27;
                      }
                      goto LABEL_42;
                    }
                    v52 = v51 | *(_DWORD *)a18;
                    v53 = ~*(_DWORD *)(a18 + 4);
                  }
                  v54 = v53 & v52;
                  goto LABEL_85;
                }
LABEL_42:
                v37 = -1073741790;
                v29 = 0;
LABEL_30:
                v38 = 1;
                goto LABEL_31;
              }
              SepNormalAccessCheckEx(v25 & v50, (_DWORD)v23, v67, v33, *(_QWORD *)&v68, (__int64)a19);
            }
            v30 = a5;
            goto LABEL_38;
          }
          *(_DWORD *)(a18 + 12) = v25;
          v49 = v23[50];
          if ( (v49 & 0x4000) != 0 )
            v29 &= ~*(_DWORD *)a18;
          if ( v25 == 0x2000000 )
          {
            if ( v29 )
              goto LABEL_25;
          }
          else if ( !v25 && *(_DWORD *)a18 && v29 && (v49 & 0x6000) == 0 )
          {
            goto LABEL_25;
          }
          v29 = 0;
          v56 = v26;
          v37 = -1073741790;
          v42 = (__int64)a6;
          v44 = 0;
          v45 = 6291456;
          v43 = -33554433;
LABEL_49:
          AuthzBasepSetTypeListAccessReasons(v43, v45, v44, v42, v56, 0);
          goto LABEL_30;
        }
        v29 |= 0x80000u;
        AuthzBasepSetTypeListAccessReasons(0x80000, 0x200000, 32, (__int64)a6, v26, 0);
        v63 = 1;
      }
      v36 = ++v65;
      v25 &= ~0x80000u;
      if ( !v25 )
        goto LABEL_26;
      goto LABEL_18;
    }
    if ( (v31 & 0x8000) != 0 )
    {
      v46 = *(unsigned int *)(a1 + 12);
      if ( !(_DWORD)v46 )
        goto LABEL_14;
      v47 = a1 + v46;
    }
    else
    {
      v47 = *(_QWORD *)(a1 + 24);
    }
    v68 = (LUID)v47;
    goto LABEL_15;
  }
LABEL_27:
  v37 = 0;
  if ( !v29 )
  {
LABEL_100:
    v37 = -1073741790;
    goto LABEL_30;
  }
  if ( KeGetCurrentIrql() >= 2u )
    goto LABEL_30;
  if ( !v36 )
    goto LABEL_30;
  LOBYTE(v32) = v63;
  LOBYTE(a3) = v64;
  SepAssemblePrivileges(v36, v30, a3, v32, (__int64)v20);
  if ( !v20 || *v20 )
    goto LABEL_30;
  v38 = 0;
  v37 = -1073741801;
  v29 = 0;
LABEL_31:
  *a13 = v37;
  *a11 = v29;
  if ( v37 < 0 )
  {
    if ( a20 )
      *a20 = 0;
  }
  else if ( a20 )
  {
    *a20 = 1;
  }
  return v38;
}
