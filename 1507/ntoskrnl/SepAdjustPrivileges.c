/*
 * XREFs of SepAdjustPrivileges @ 0x14046DB50
 * Callers:
 *     NtAdjustPrivilegesToken @ 0x14046D600 (NtAdjustPrivilegesToken.c)
 * Callees:
 *     AppContainerPrivilegesEnabledExt_0 @ 0x140001290 (AppContainerPrivilegesEnabledExt_0.c)
 *     RtlSidDominates @ 0x14002D850 (RtlSidDominates.c)
 *     SepCopyTokenIntegrity @ 0x14002D93C (SepCopyTokenIntegrity.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     SepAdtUserRightAdjusted @ 0x14046E0F4 (SepAdtUserRightAdjusted.c)
 */

int __fastcall SepAdjustPrivileges(
        __int64 a1,
        char a2,
        char a3,
        unsigned int a4,
        unsigned int *a5,
        __int64 a6,
        _DWORD *a7,
        _DWORD *a8,
        _BYTE *a9)
{
  int v9; // r15d
  unsigned int v12; // r13d
  int result; // eax
  PSID v14; // rbx
  char v15; // si
  __int64 v17; // r11
  __int64 v18; // r10
  __int64 v19; // rax
  __int64 v20; // rbx
  char v21; // r14
  int v22; // r8d
  int v23; // ecx
  unsigned int v24; // r10d
  char v25; // al
  __int64 v26; // rbx
  int v27; // r14d
  __int64 v28; // rdx
  __int64 v29; // xmm1_8
  __int64 v30; // rcx
  unsigned int v31; // edx
  __int64 v32; // rcx
  int v33; // eax
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // xmm1_8
  __int64 v38; // rcx
  __int64 v39; // rcx
  unsigned int v40; // edx
  __int64 v41; // rcx
  unsigned __int64 v42; // rax
  __int64 v43; // rcx
  signed int v44; // edx
  BOOL v45; // r8d
  int v46; // r8d
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rcx
  __int64 v50; // rcx
  BOOLEAN Dominates; // [rsp+31h] [rbp-CFh] BYREF
  BOOLEAN v53; // [rsp+32h] [rbp-CEh] BYREF
  char v54; // [rsp+33h] [rbp-CDh]
  int v55; // [rsp+34h] [rbp-CCh]
  unsigned int v56; // [rsp+38h] [rbp-C8h]
  int v57; // [rsp+3Ch] [rbp-C4h]
  __int64 v58; // [rsp+40h] [rbp-C0h]
  int v59; // [rsp+48h] [rbp-B8h]
  unsigned int v60; // [rsp+4Ch] [rbp-B4h]
  unsigned int v61; // [rsp+50h] [rbp-B0h]
  char v62[16]; // [rsp+58h] [rbp-A8h]
  __int64 v63; // [rsp+68h] [rbp-98h]
  _DWORD *v64; // [rsp+70h] [rbp-90h]
  __int64 v65; // [rsp+78h] [rbp-88h]
  _BYTE *v66; // [rsp+80h] [rbp-80h]
  PSID Sid1; // [rsp+88h] [rbp-78h]
  _QWORD v68[54]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v69[54]; // [rsp+250h] [rbp+150h] BYREF

  v9 = 0;
  v58 = a6;
  v64 = a7;
  v12 = 0;
  *(_QWORD *)&v62[4] = 0LL;
  Dominates = 0;
  v53 = 0;
  LOBYTE(v59) = 0;
  v61 = a4;
  v66 = a9;
  v55 = 0;
  *(_DWORD *)v62 = 0;
  v63 = 0LL;
  v65 = 0LL;
  v56 = 0;
  v60 = 0;
  memset(v68, 0, 420);
  memset(v69, 0, 420);
  *a8 = 0;
  *a9 = 0;
  SepCopyTokenIntegrity(a1);
  result = AppContainerPrivilegesEnabledExt_0();
  if ( result == -1073741637 )
  {
    v54 = 0;
  }
  else
  {
    if ( result < 0 )
      return result;
    v54 = 1;
  }
  v14 = Sid1;
  result = RtlSidDominates(Sid1, SeHighMandatorySid, &Dominates);
  v57 = result;
  if ( result < 0 )
    return result;
  v15 = 1;
  if ( !Dominates )
  {
    result = RtlSidDominates(v14, SeMediumMandatorySid, &v53);
    v57 = result;
    if ( result < 0 )
      return result;
    v33 = (unsigned __int8)v59;
    if ( !v53 )
      v33 = 1;
    v59 = v33;
  }
  if ( a3 )
  {
    v26 = v58;
    v44 = 0;
    v25 = a2;
    v24 = 0;
    do
    {
      if ( ((1LL << v44) & *(_QWORD *)(a1 + 72)) != 0 )
      {
        if ( v25 )
        {
          v45 = ((1LL << v44) & *(_QWORD *)(a1 + 80)) != 0;
          v58 = v44;
          v46 = v45 | 2;
          *(_QWORD *)v62 = v44;
          v47 = v24++;
          v48 = 3 * v47;
          *(_QWORD *)((char *)v68 + 4 * v48) = v44;
          *((_DWORD *)&v68[1] + v48) = v46;
          if ( v26 )
          {
            v49 = 3LL * (unsigned int)*a8;
            *(_QWORD *)(v26 + 4 * v49 + 4) = v44;
            *(_DWORD *)(v26 + 4 * v49 + 12) = v46;
          }
          v50 = *(_QWORD *)(a1 + 72);
          _bittestandreset64(&v50, (unsigned int)v44);
          v25 = a2;
          *(_QWORD *)(a1 + 72) = v50;
        }
        ++*a8;
      }
      ++v44;
    }
    while ( (unsigned int)v44 <= 0x23 );
LABEL_18:
    v27 = v57;
    goto LABEL_19;
  }
  if ( !v61 )
  {
    v24 = 0;
LABEL_17:
    v25 = a2;
    v26 = v58;
    goto LABEL_18;
  }
  v17 = v61;
  do
  {
    v18 = *(_QWORD *)(a1 + 64);
    v19 = 1LL << *a5;
    if ( (v19 & v18) == 0 )
      goto LABEL_13;
    ++v12;
    v20 = *(_QWORD *)(a1 + 72);
    *(_QWORD *)v62 = *(_QWORD *)a5;
    v21 = v62[0];
    v22 = ((v20 & (1LL << v21)) != 0 ? 2 : 0) | (((1LL << v21) & *(_QWORD *)(a1 + 80)) != 0);
    if ( (a5[2] & 4) != 0 )
    {
      if ( a2 )
      {
        *(_QWORD *)(a1 + 72) = v20 & ~(1LL << v62[0]);
        *(_DWORD *)(a1 + 200) |= 0x800u;
        *(_QWORD *)(a1 + 64) = v18 & ~(1LL << v21);
      }
    }
    else
    {
      v23 = a5[2] & 2;
      if ( v23 && (v19 & v20) == 0 )
      {
        if ( !a2 )
          goto LABEL_36;
        v28 = v58;
        v29 = *(_QWORD *)v62;
        if ( v58 )
        {
          v34 = 3LL * (unsigned int)*a8;
          *(_QWORD *)(v58 + 4 * v34 + 4) = *(_QWORD *)v62;
          *(_DWORD *)(v28 + 4 * v34 + 12) = v22;
        }
        v30 = 3LL * v60;
        v31 = v60 + 1;
        *(_QWORD *)((char *)v69 + 4 * v30) = v29;
        *((_DWORD *)&v69[1] + v30) = v22;
        v60 = v31;
        if ( Dominates )
        {
          v32 = *(_QWORD *)(a1 + 72) | (1LL << v21);
          goto LABEL_35;
        }
        if ( v53 )
        {
          v35 = 0x120160684LL;
          if ( !_bittest64(&v35, *a5) )
            goto LABEL_44;
        }
        else
        {
          if ( !(_BYTE)v59 )
            goto LABEL_36;
          if ( v54 )
            v41 = v63;
          else
            v41 = 0x200800000LL;
          v42 = *a5;
          if ( (*(_DWORD *)(a1 + 200) & 0x4000) != 0 )
          {
            if ( _bittest64(&v41, v42) )
            {
LABEL_44:
              *(_QWORD *)(a1 + 72) |= 1LL << v21;
              ++*a8;
              goto LABEL_13;
            }
          }
          else
          {
            v43 = 0x202800000LL;
            if ( _bittest64(&v43, v42) )
              goto LABEL_44;
          }
        }
        ++v55;
        ++*a8;
      }
      else if ( !v23 && (v19 & v20) != 0 )
      {
        if ( a2 )
        {
          v36 = v58;
          v37 = *(_QWORD *)v62;
          if ( v58 )
          {
            v38 = 3LL * (unsigned int)*a8;
            *(_QWORD *)(v58 + 4 * v38 + 4) = *(_QWORD *)v62;
            *(_DWORD *)(v36 + 4 * v38 + 12) = v22;
          }
          v39 = 3LL * v56;
          v40 = v56 + 1;
          *(_QWORD *)((char *)v68 + 4 * v39) = v37;
          *((_DWORD *)&v68[1] + v39) = v22;
          v32 = *(_QWORD *)(a1 + 72) & ~(1LL << v21);
          v56 = v40;
LABEL_35:
          *(_QWORD *)(a1 + 72) = v32;
        }
LABEL_36:
        ++*a8;
      }
    }
LABEL_13:
    a5 += 3;
    --v17;
  }
  while ( v17 );
  if ( v12 >= v61 && !v55 )
  {
    v24 = v56;
    goto LABEL_17;
  }
  v26 = v58;
  v27 = 262;
  v25 = a2;
  v24 = v56;
LABEL_19:
  if ( *a8 && v25 )
  {
    *v66 = 1;
    if ( v27 < 0 )
      v15 = 0;
    SepAdtUserRightAdjusted(a1, (unsigned int)v68, v24, (unsigned int)v69, v60, v15);
  }
  if ( v26 )
  {
    if ( *a8 > 1u )
      v9 = 12 * (*a8 - 1);
    *v64 = v9 + 16;
  }
  return v27;
}
