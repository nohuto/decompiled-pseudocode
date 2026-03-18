/*
 * XREFs of SepNormalAccessCheck @ 0x1400CBEF0
 * Callers:
 *     SepAccessCheck @ 0x1400CB700 (SepAccessCheck.c)
 * Callees:
 *     SepSidInToken @ 0x1400078CC (SepSidInToken.c)
 *     RtlEqualSid @ 0x140014CF0 (RtlEqualSid.c)
 *     SepSidInTokenSidHash @ 0x1400CD250 (SepSidInTokenSidHash.c)
 *     AuthzBasepAddAccessTypeList @ 0x140107940 (AuthzBasepAddAccessTypeList.c)
 *     AuthzBasepEvaluateAceCondition @ 0x14011C690 (AuthzBasepEvaluateAceCondition.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x14012A2E4 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     AuthzBasepObjectInTypeList @ 0x14015ABAC (AuthzBasepObjectInTypeList.c)
 *     memcmp @ 0x140172AE0 (memcmp.c)
 *     RtlCompareMemory @ 0x14018BAA0 (RtlCompareMemory.c)
 */

__int64 __fastcall SepNormalAccessCheck(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6,
        unsigned __int8 *a7,
        unsigned int a8,
        __int64 a9,
        int a10,
        char a11,
        char a12,
        __int64 a13)
{
  int v13; // r12d
  __int64 result; // rax
  __int64 v15; // r13
  bool v17; // si
  _DWORD *v18; // rax
  __int64 v19; // rcx
  char v20; // r15
  unsigned int v21; // edi
  __int64 v22; // rbx
  __int64 v23; // r10
  int v24; // ecx
  char v25; // al
  int v26; // esi
  __int64 v27; // r14
  unsigned __int8 *v28; // r12
  __int64 v29; // rax
  unsigned __int8 v30; // r8
  unsigned int v31; // r10d
  unsigned __int64 i; // r15
  unsigned int v33; // r15d
  __int64 v34; // r14
  __int64 v35; // r14
  int v36; // r14d
  int v37; // eax
  int v38; // eax
  __int64 v39; // rcx
  int v40; // edx
  __int64 v41; // r13
  int v42; // eax
  int v43; // r14d
  __int64 v44; // r15
  unsigned __int8 *v45; // rcx
  int v46; // eax
  BOOLEAN v47; // al
  unsigned int v48; // r14d
  _QWORD *v49; // rax
  __int64 v50; // r11
  __int64 v51; // r10
  __int64 v52; // r8
  __int64 v53; // r9
  unsigned int v54; // eax
  __int64 v55; // rcx
  int v56; // edx
  char v57; // al
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  int v61; // eax
  _BYTE *v62; // r14
  __int64 v63; // r15
  int v64; // r15d
  __int64 v65; // rcx
  BOOLEAN v66; // al
  int v67; // eax
  __int64 v68; // r15
  int v69; // r15d
  int v70; // eax
  bool v71; // [rsp+60h] [rbp-78h]
  int v72; // [rsp+64h] [rbp-74h]
  int v73; // [rsp+68h] [rbp-70h]
  unsigned __int16 v74; // [rsp+6Ch] [rbp-6Ch]
  unsigned int v75; // [rsp+70h] [rbp-68h] BYREF
  int v76; // [rsp+74h] [rbp-64h]
  unsigned int v77; // [rsp+78h] [rbp-60h]
  int v78; // [rsp+7Ch] [rbp-5Ch] BYREF
  unsigned int v79; // [rsp+80h] [rbp-58h]
  int v80; // [rsp+84h] [rbp-54h]
  int v81; // [rsp+88h] [rbp-50h]
  __int64 v82; // [rsp+90h] [rbp-48h]
  unsigned __int8 v85; // [rsp+F8h] [rbp+20h]
  int v86; // [rsp+F8h] [rbp+20h]

  v13 = 0;
  result = *(unsigned __int16 *)(a4 + 4);
  v15 = a2;
  v73 = 0;
  v17 = (*(_DWORD *)(a2 + 200) & 0x2000) == 0;
  v72 = 0;
  v71 = v17;
  v78 = -1;
  v77 = result;
  if ( a8 )
  {
    v18 = (_DWORD *)(a9 + 24);
    v19 = a8;
    do
    {
      *v18 = a1;
      v18 += 12;
      --v19;
    }
    while ( v19 );
    result = v77;
  }
  v20 = a11;
  if ( v17 && !a11 )
  {
    v13 = a1 | *(_DWORD *)a13;
    v73 = v13;
    v72 = v13;
  }
  v21 = 0;
  v22 = a4 + 8;
  if ( !(_DWORD)result )
    return result;
  v23 = (__int64)a7;
  while ( 1 )
  {
    v24 = *(_DWORD *)(a9 + 24);
    if ( !v24 && !v13 )
      return result;
    if ( (*(_BYTE *)(v22 + 1) & 8) != 0 )
      goto LABEL_24;
    if ( !v24 )
    {
      if ( *(_BYTE *)v22 )
      {
        if ( *(_BYTE *)v22 != 9 )
          goto LABEL_24;
        goto LABEL_11;
      }
LABEL_12:
      if ( v17 && !v20 && v13 )
      {
        v34 = SePackagePrefixSid;
        if ( *(_BYTE *)(v22 + 9) >= 2u
          && *(_BYTE *)(v22 + 8) == *(_BYTE *)SePackagePrefixSid
          && RtlCompareMemory((const void *)(v22 + 10), (const void *)(SePackagePrefixSid + 2), 6uLL) == 6
          && *(_DWORD *)(v22 + 16) == *(_DWORD *)(v34 + 8) )
        {
          v43 = *(_DWORD *)(v22 + 4);
          if ( *(_DWORD *)(v22 + 16) == 2 && *(_BYTE *)(v22 + 9) == 2 && *(_DWORD *)(v22 + 20) == 1 )
          {
            v44 = a13;
          }
          else
          {
            v44 = a13;
            *(_BYTE *)(a13 + 16) = 1;
            if ( (*(_DWORD *)(v15 + 200) & 0x4000) == 0 )
              goto LABEL_68;
            v45 = *(unsigned __int8 **)(v15 + 784);
            if ( *(_WORD *)v45 != *(_WORD *)(v22 + 8)
              || memcmp(v45, (const void *)(v22 + 8), 4 * (unsigned int)v45[1] + 8) )
            {
              goto LABEL_68;
            }
          }
          *(_DWORD *)(v44 + 4) |= v72 & v43;
          *(_BYTE *)(v44 + 17) = 1;
LABEL_68:
          v46 = ~*(_DWORD *)(v44 + 4);
          *(_DWORD *)v44 &= v46;
          v73 = v46 & v13;
          goto LABEL_22;
        }
        v35 = SeCapabilityPrefixSid;
        if ( *(_BYTE *)(v22 + 9) >= 2u
          && *(_BYTE *)(v22 + 8) == *(_BYTE *)SeCapabilityPrefixSid
          && RtlCompareMemory((const void *)(v22 + 10), (const void *)(SeCapabilityPrefixSid + 2), 6uLL) == 6
          && *(_DWORD *)(v22 + 16) == *(_DWORD *)(v35 + 8) )
        {
          v36 = *(_DWORD *)(v22 + 4);
          if ( (unsigned __int8)SepSidInTokenSidHash(v15 + 808) )
          {
            *(_DWORD *)(a13 + 8) |= v72 & v36;
            *(_BYTE *)(a13 + 18) = 1;
          }
          v37 = ~*(_DWORD *)(a13 + 8);
          *(_DWORD *)a13 &= v37;
          v73 = v37 & v13;
          goto LABEL_22;
        }
      }
      v26 = *(_DWORD *)(a9 + 24);
      if ( !v26 )
        goto LABEL_22;
      if ( v20 )
        v27 = v15 + 504;
      else
        v27 = v15 + 232;
      v23 = (__int64)a7;
      v28 = (unsigned __int8 *)(v22 + 8);
      if ( a7 )
      {
        v47 = RtlEqualSid(SePrincipalSelfSid, (PSID)(v22 + 8));
        v23 = (__int64)a7;
        if ( v47 )
          v28 = a7;
      }
      if ( a12 && *(_WORD *)SeOwnerRightsSid == *(_WORD *)v28 )
      {
        if ( !memcmp(SeOwnerRightsSid, v28, 4 * (unsigned int)*((unsigned __int8 *)SeOwnerRightsSid + 1) + 8) )
          goto LABEL_47;
        v23 = (__int64)a7;
      }
      if ( !v27 || !v28 )
      {
        v17 = v71;
        goto LABEL_24;
      }
      v29 = v28[1];
      v30 = 0;
      a4 = *(unsigned __int16 *)v28;
      v74 = *(_WORD *)v28;
      v85 = 0;
      v31 = 4 * v29 + 8;
      LODWORD(v29) = v28[4 * v29 + 4];
      v79 = v31;
      for ( i = *(_QWORD *)(v27 + 8 * (v29 & 0xF) + 16) & *(_QWORD *)(v27
                                                                    + 8 * ((unsigned __int64)(unsigned int)v29 >> 4)
                                                                    + 144); i; v85 = v30 )
      {
        LOBYTE(v38) = i;
        v76 = (unsigned __int8)i;
        if ( (_BYTE)i )
        {
          v39 = *(_QWORD *)(v27 + 8);
          v40 = v30;
          v82 = v39;
          v81 = v30;
          while ( 1 )
          {
            v80 = SidHashByteToIndexLookupTable[(unsigned __int8)v38];
            v41 = v39 + 16LL * (unsigned int)(v40 + v80);
            if ( **(_WORD **)v41 == (_WORD)a4 )
            {
              if ( !memcmp(v28, *(const void **)v41, v31) )
              {
LABEL_44:
                if ( !a11 && v41 == *(_QWORD *)(v27 + 8) && (*(_DWORD *)(v41 + 8) & 0x10) == 0
                  || (*(_DWORD *)(v41 + 8) & 4) != 0 )
                {
LABEL_47:
                  v42 = *(_DWORD *)(v22 + 4);
                  if ( a8 == 1 )
                    *(_DWORD *)(a9 + 24) = v26 & ~v42;
                  else
                    AuthzBasepAddAccessTypeList(a9, a8, 0, v21, v42, 0);
                }
LABEL_22:
                v17 = v71;
LABEL_23:
                v23 = (__int64)a7;
                goto LABEL_24;
              }
              a4 = v74;
              v31 = v79;
            }
            v40 = v81;
            v38 = (unsigned __int8)v76 ^ (1 << v80);
            v39 = v82;
            v76 = v38;
            if ( !(_BYTE)v38 )
            {
              v30 = v85;
              break;
            }
          }
        }
        v30 += 8;
        i >>= 8;
      }
      v33 = *(_DWORD *)v27;
      if ( *(_DWORD *)v27 > 0x40u )
      {
        v54 = 64;
        v86 = 64;
        v55 = *(_QWORD *)(v27 + 8);
        v82 = v55;
        do
        {
          v41 = v55 + 16LL * v54;
          if ( **(_WORD **)v41 == (_WORD)a4 )
          {
            if ( !memcmp(v28, *(const void **)v41, v31) )
              goto LABEL_44;
            v54 = v86;
            v55 = v82;
            a4 = v74;
            v31 = v79;
          }
          v86 = ++v54;
        }
        while ( v54 < v33 );
      }
      goto LABEL_22;
    }
LABEL_11:
    v25 = *(_BYTE *)v22;
    if ( !*(_BYTE *)v22 )
      goto LABEL_12;
    if ( v25 != 5 )
      break;
    v56 = *(_DWORD *)(v22 + 8);
    if ( (v56 & 1) == 0 || v22 == -12 )
    {
      v57 = v56;
      v58 = v23;
      v59 = v15;
      v60 = ((*(_DWORD *)(v22 + 8) & 1) != 0 ? 0x10 : 0) + 8LL * (v57 & 2) + v22 + 12;
LABEL_119:
      if ( (unsigned __int8)SepSidInToken(v59, v58, v60, 0LL, v20) )
      {
        v61 = *(_DWORD *)(v22 + 4);
        if ( a8 == 1 )
          *(_DWORD *)(a9 + 24) &= ~v61;
        else
          AuthzBasepAddAccessTypeList(a9, a8, 0, v21, v61, 0);
      }
      goto LABEL_23;
    }
    if ( a10 )
    {
      if ( (unsigned __int8)SepSidInToken(v15, v23, 8LL * (v56 & 2) + v22 + 28, 0LL, v20)
        && (unsigned __int8)AuthzBasepObjectInTypeList(v22 + 12, a9, a8, &v75) )
      {
        AuthzBasepAddAccessTypeList(a9, a8, v75, v21, *(_DWORD *)(v22 + 4), 0);
      }
      goto LABEL_23;
    }
LABEL_24:
    ++v21;
    v20 = a11;
    v22 += *(unsigned __int16 *)(v22 + 2);
    result = v77;
    v13 = v73;
    v15 = a2;
    if ( v21 >= v77 )
      return result;
  }
  if ( v25 == 4 )
  {
    if ( !(unsigned __int8)SepSidInToken(
                             v15,
                             v23,
                             v22 + 4 * (unsigned int)*(unsigned __int8 *)(v22 + 13) + 8 + 12LL,
                             0LL,
                             v20) )
      goto LABEL_23;
    v59 = a3;
    v60 = v22 + 12;
    v58 = 0LL;
    goto LABEL_119;
  }
  if ( v25 == 1 )
  {
    LOBYTE(a4) = 1;
    if ( !(unsigned __int8)SepSidInToken(v15, v23, v22 + 8, a4, v20) )
      goto LABEL_23;
    goto LABEL_78;
  }
  if ( v25 != 6 )
  {
    if ( v25 != 9 )
      goto LABEL_24;
    v48 = 4 * *(unsigned __int8 *)(v22 + 9) + 8;
    if ( *(unsigned __int16 *)(v22 + 2) - v48 == 8 )
      goto LABEL_24;
    if ( a5 && !*a6 )
      AuthzBasepInitializeResourceClaimsFromSacl(a5, a6);
    v49 = *(_QWORD **)(v15 + 1096);
    if ( v49 )
      v50 = v49[75];
    else
      v50 = 0LL;
    if ( v49 )
      v51 = v49[73];
    else
      v51 = 0LL;
    if ( v49 )
      v52 = v49[74];
    else
      v52 = 0LL;
    if ( v49 )
      v53 = v49[72];
    else
      LODWORD(v53) = 0;
    AuthzBasepEvaluateAceCondition(
      v15,
      *(_QWORD *)(v15 + 776),
      *a6,
      v53,
      v52,
      v51,
      v50,
      v22 + v48 + 8LL,
      *(unsigned __int16 *)(v22 + 2) - v48 - 8,
      0,
      v20,
      (__int64)&v78);
    if ( v78 != 1 )
      goto LABEL_23;
    if ( !v17 || v20 || !v13 )
    {
LABEL_102:
      if ( *(_DWORD *)(a9 + 24) && (unsigned __int8)SepSidInToken(v15, (__int64)a7, v22 + 8, 0LL, v20) )
        AuthzBasepAddAccessTypeList(a9, a8, 0, v21, *(_DWORD *)(v22 + 4), 0);
      goto LABEL_23;
    }
    v62 = (_BYTE *)(v22 + 8);
    v63 = SePackagePrefixSid;
    if ( *(_BYTE *)(v22 + 9) < 2u
      || *v62 != *(_BYTE *)SePackagePrefixSid
      || RtlCompareMemory((const void *)(v22 + 10), (const void *)(SePackagePrefixSid + 2), 6uLL) != 6
      || *(_DWORD *)(v22 + 16) != *(_DWORD *)(v63 + 8) )
    {
      v68 = SeCapabilityPrefixSid;
      if ( *(_BYTE *)(v22 + 9) >= 2u
        && *v62 == *(_BYTE *)SeCapabilityPrefixSid
        && RtlCompareMemory((const void *)(v22 + 10), (const void *)(SeCapabilityPrefixSid + 2), 6uLL) == 6
        && *(_DWORD *)(v22 + 16) == *(_DWORD *)(v68 + 8) )
      {
        v69 = *(_DWORD *)(v22 + 4);
        if ( (unsigned __int8)SepSidInTokenSidHash(v15 + 808) )
        {
          *(_DWORD *)(a13 + 8) |= v72 & v69;
          *(_BYTE *)(a13 + 18) = 1;
        }
        v70 = ~*(_DWORD *)(a13 + 8);
        *(_DWORD *)a13 &= v70;
        v73 = v70 & v13;
        goto LABEL_23;
      }
      v20 = a11;
      goto LABEL_102;
    }
    v64 = *(_DWORD *)(v22 + 4);
    if ( *(_DWORD *)(v22 + 16) == 2 && *(_BYTE *)(v22 + 9) == 2 && *(_DWORD *)(v22 + 20) == 1 )
    {
      v65 = a13;
      goto LABEL_146;
    }
    v65 = a13;
    *(_BYTE *)(a13 + 16) = 1;
    if ( (*(_DWORD *)(v15 + 200) & 0x4000) != 0 )
    {
      v66 = RtlEqualSid(*(PSID *)(v15 + 784), (PSID)(v22 + 8));
      v65 = a13;
      if ( v66 )
      {
LABEL_146:
        *(_DWORD *)(v65 + 4) |= v72 & v64;
        *(_BYTE *)(v65 + 17) = 1;
      }
    }
    v67 = ~*(_DWORD *)(v65 + 4);
    *(_DWORD *)v65 &= v67;
    v73 = v67 & v13;
    goto LABEL_23;
  }
  LOBYTE(a4) = 1;
  if ( !(unsigned __int8)SepSidInToken(
                           v15,
                           v23,
                           16LL * (*(_DWORD *)(v22 + 8) & 1) + 8LL * (*(_DWORD *)(v22 + 8) & 2) + v22 + 12,
                           a4,
                           v20) )
    goto LABEL_23;
  if ( (*(_DWORD *)(v22 + 8) & 1) != 0 && v22 != -12 && a10 )
  {
    if ( !(unsigned __int8)AuthzBasepObjectInTypeList(v22 + 12, a9, a8, &v75) )
      goto LABEL_23;
    result = *(unsigned int *)(a9 + 48LL * v75 + 24);
    if ( ((unsigned int)result & *(_DWORD *)(v22 + 4)) == 0 )
      goto LABEL_23;
  }
  else
  {
LABEL_78:
    result = *(unsigned int *)(v22 + 4);
    if ( ((unsigned int)result & *(_DWORD *)(a9 + 24)) == 0 )
      goto LABEL_23;
  }
  return result;
}
