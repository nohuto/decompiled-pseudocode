/*
 * XREFs of SepMaximumAccessCheck @ 0x1400CCA50
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

__int64 __fastcall SepMaximumAccessCheck(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5,
        __int64 a6,
        unsigned int a7,
        __int64 a8,
        int a9,
        int a10,
        char a11,
        char a12,
        __int64 a13)
{
  unsigned int v13; // r14d
  int v14; // ebp
  char v15; // r12
  __int64 v16; // r15
  __int64 result; // rax
  char *v18; // rbx
  unsigned int v19; // edi
  __int64 v20; // r13
  char v21; // al
  __int64 v22; // r14
  unsigned __int8 *v23; // r12
  __int64 v24; // rax
  unsigned __int8 v25; // r13
  __int16 v26; // r8
  unsigned int v27; // r9d
  unsigned __int64 v28; // rsi
  int v29; // ebp
  __int64 v30; // rcx
  int v31; // edx
  __int64 v32; // r15
  int v33; // ecx
  unsigned int v34; // esi
  _BYTE *v35; // rsi
  __int64 v36; // r14
  __int64 v37; // r14
  int v38; // ebp
  int v39; // ecx
  __int64 v40; // rcx
  int v41; // ebp
  __int64 v42; // r14
  __int64 v43; // rdx
  unsigned int *v44; // rcx
  unsigned int *v45; // rcx
  __int64 v46; // r8
  unsigned int v47; // eax
  __int64 v48; // rdx
  __int64 v49; // rax
  char v50; // al
  unsigned int v51; // esi
  _QWORD *v52; // rax
  __int64 v53; // r11
  __int64 v54; // r10
  __int64 v55; // r8
  __int64 v56; // r9
  unsigned int v57; // ebp
  __int64 v58; // r13
  __int64 v59; // r14
  __int64 v60; // r14
  int v61; // [rsp+28h] [rbp-A0h]
  int v62; // [rsp+60h] [rbp-68h] BYREF
  unsigned int v63; // [rsp+64h] [rbp-64h]
  int v64; // [rsp+68h] [rbp-60h] BYREF
  int v65; // [rsp+6Ch] [rbp-5Ch]
  unsigned int v66; // [rsp+70h] [rbp-58h]
  int v67; // [rsp+74h] [rbp-54h]
  __int64 v68; // [rsp+78h] [rbp-50h]
  __int16 v71; // [rsp+E0h] [rbp+18h]
  __int64 v72; // [rsp+E8h] [rbp+20h]

  v72 = a4;
  v13 = a7;
  v14 = *(_DWORD *)(a1 + 200) >> 13;
  LOBYTE(v14) = (*(_DWORD *)(a1 + 200) & 0x2000) == 0;
  v15 = a11;
  v16 = a1;
  v67 = v14;
  v64 = -1;
  if ( a11 && a7 )
  {
    v43 = a7;
    v44 = (unsigned int *)(a8 + 28);
    do
    {
      *(_QWORD *)(v44 - 1) = *v44;
      v44 += 12;
      --v43;
    }
    while ( v43 );
  }
  result = *(unsigned __int16 *)(a3 + 4);
  v18 = (char *)(a3 + 8);
  v19 = 0;
  v66 = result;
  if ( !(_DWORD)result )
    goto LABEL_29;
  v20 = a6;
  do
  {
    if ( (v18[1] & 8) != 0 )
      goto LABEL_28;
    v21 = *v18;
    if ( *v18 )
    {
      switch ( v21 )
      {
        case 5:
          v39 = *((_DWORD *)v18 + 2);
          if ( (v39 & 1) != 0 && v18 != (char *)-12LL )
          {
            if ( a9 )
            {
              if ( v15 )
                v40 = v16 + 504;
              else
                v40 = v16 + 232;
              if ( (unsigned __int8)SepSidInTokenSidHash(v40)
                && (unsigned __int8)AuthzBasepObjectInTypeList(v18 + 12, a8, v13, &v62) )
              {
                AuthzBasepAddAccessTypeList(a8, v13, v62, v19, *((_DWORD *)v18 + 1), 1);
              }
              goto LABEL_27;
            }
            goto LABEL_28;
          }
          if ( (*((_DWORD *)v18 + 2) & 1) != 0 )
            v48 = 16LL;
          else
            v48 = 0LL;
          if ( (v39 & 2) != 0 )
            v49 = 16LL;
          else
            v49 = 0LL;
          v50 = SepSidInToken(v16, v20, (__int64)&v18[v48 + 12 + v49], 0LL, v15);
          goto LABEL_89;
        case 4:
          if ( !(unsigned __int8)SepSidInToken(v16, v20, (__int64)&v18[4 * (unsigned __int8)v18[13] + 20], 0LL, v15) )
            goto LABEL_27;
          v50 = SepSidInTokenSidHash(a2 + 232);
LABEL_89:
          if ( !v50 )
            goto LABEL_27;
LABEL_22:
          v33 = a8;
          if ( v13 == 1 )
          {
            *(_DWORD *)(a8 + 28) |= *((_DWORD *)v18 + 1) & ~*(_DWORD *)(a8 + 32);
            goto LABEL_27;
          }
          goto LABEL_69;
        case 1:
          LOBYTE(a4) = 1;
          if ( !(unsigned __int8)SepSidInToken(v16, v20, (__int64)(v18 + 8), a4, v15) )
            goto LABEL_27;
LABEL_82:
          v33 = a8;
          if ( v13 == 1 )
          {
            *(_DWORD *)(a8 + 32) |= *((_DWORD *)v18 + 1) & ~*(_DWORD *)(a8 + 28);
            goto LABEL_27;
          }
          v61 = 2;
LABEL_70:
          AuthzBasepAddAccessTypeList(v33, v13, 0, v19, *((_DWORD *)v18 + 1), v61);
          goto LABEL_27;
        case 6:
          LOBYTE(a4) = 1;
          if ( !(unsigned __int8)SepSidInToken(
                                   v16,
                                   v20,
                                   (__int64)&v18[16 * (*((_DWORD *)v18 + 2) & 1) + 12 + 8 * (*((_DWORD *)v18 + 2) & 2)],
                                   a4,
                                   v15) )
            goto LABEL_27;
          if ( (*((_DWORD *)v18 + 2) & 1) != 0 && v18 != (char *)-12LL )
          {
            if ( a9 )
            {
              if ( (unsigned __int8)AuthzBasepObjectInTypeList(v18 + 12, a8, v13, &v62) )
                AuthzBasepAddAccessTypeList(a8, v13, v62, v19, *((_DWORD *)v18 + 1), 2);
            }
            else
            {
              *(_DWORD *)(a8 + 32) |= *((_DWORD *)v18 + 1) & ~*(_DWORD *)(a8 + 28);
            }
            goto LABEL_27;
          }
          goto LABEL_82;
      }
      if ( v21 != 9 )
        goto LABEL_28;
      v51 = 4 * (unsigned __int8)v18[9] + 8;
      if ( (int)(*((unsigned __int16 *)v18 + 1) - v51 - 8) <= 0 )
        goto LABEL_28;
      if ( a4 && !*a5 )
        AuthzBasepInitializeResourceClaimsFromSacl(a4, a5);
      v52 = *(_QWORD **)(v16 + 1096);
      if ( v52 )
        v53 = v52[75];
      else
        v53 = 0LL;
      if ( v52 )
        v54 = v52[73];
      else
        v54 = 0LL;
      if ( v52 )
        v55 = v52[74];
      else
        v55 = 0LL;
      if ( v52 )
        v56 = v52[72];
      else
        LODWORD(v56) = 0;
      AuthzBasepEvaluateAceCondition(
        v16,
        *(_QWORD *)(v16 + 776),
        *a5,
        v56,
        v55,
        v54,
        v53,
        (__int64)&v18[v51 + 8],
        *((unsigned __int16 *)v18 + 1) - v51 - 8,
        0,
        v15,
        (__int64)&v64);
      if ( v64 != 1 )
        goto LABEL_27;
      if ( !(_BYTE)v14 || v15 )
      {
LABEL_144:
        if ( !(unsigned __int8)SepSidInToken(v16, v20, (__int64)(v18 + 8), 0LL, v15) )
          goto LABEL_27;
        v33 = a8;
LABEL_69:
        v61 = 1;
        goto LABEL_70;
      }
      v35 = v18 + 8;
      v59 = SePackagePrefixSid;
      if ( (unsigned __int8)v18[9] < 2u
        || *v35 != *(_BYTE *)SePackagePrefixSid
        || RtlCompareMemory(v18 + 10, (const void *)(SePackagePrefixSid + 2), 6uLL) != 6
        || *((_DWORD *)v18 + 4) != *(_DWORD *)(v59 + 8) )
      {
        v60 = SeCapabilityPrefixSid;
        if ( (unsigned __int8)v18[9] >= 2u
          && *v35 == *(_BYTE *)SeCapabilityPrefixSid
          && RtlCompareMemory(v18 + 10, (const void *)(SeCapabilityPrefixSid + 2), 6uLL) == 6
          && *((_DWORD *)v18 + 4) == *(_DWORD *)(v60 + 8) )
        {
LABEL_43:
          v38 = *((_DWORD *)v18 + 1);
          if ( (unsigned __int8)SepSidInTokenSidHash(v16 + 808) )
          {
            *(_DWORD *)(a13 + 8) |= v38;
            *(_BYTE *)(a13 + 18) = 1;
          }
          *(_DWORD *)a13 &= ~*(_DWORD *)(a13 + 8);
          goto LABEL_26;
        }
        v13 = a7;
        goto LABEL_144;
      }
LABEL_60:
      v41 = *((_DWORD *)v18 + 1);
      if ( *((_DWORD *)v35 + 2) == 2 && v35[1] == 2 && *((_DWORD *)v35 + 3) == 1 )
      {
        v42 = a13;
      }
      else
      {
        v42 = a13;
        *(_BYTE *)(a13 + 16) = 1;
        if ( (*(_DWORD *)(v16 + 200) & 0x4000) == 0 || !RtlEqualSid(*(PSID *)(v16 + 784), v35) )
          goto LABEL_65;
      }
      *(_DWORD *)(v42 + 4) |= v41;
      *(_BYTE *)(v42 + 17) = 1;
LABEL_65:
      *(_DWORD *)v42 &= ~*(_DWORD *)(v42 + 4);
      goto LABEL_26;
    }
    if ( (_BYTE)v14 )
    {
      if ( !v15 )
      {
        v35 = v18 + 8;
        v36 = SePackagePrefixSid;
        if ( (unsigned __int8)v18[9] >= 2u
          && *v35 == *(_BYTE *)SePackagePrefixSid
          && RtlCompareMemory(v18 + 10, (const void *)(SePackagePrefixSid + 2), 6uLL) == 6
          && *((_DWORD *)v18 + 4) == *(_DWORD *)(v36 + 8) )
        {
          goto LABEL_60;
        }
        v37 = SeCapabilityPrefixSid;
        if ( (unsigned __int8)v18[9] >= 2u
          && *v35 == *(_BYTE *)SeCapabilityPrefixSid
          && RtlCompareMemory(v18 + 10, (const void *)(SeCapabilityPrefixSid + 2), 6uLL) == 6
          && *((_DWORD *)v18 + 4) == *(_DWORD *)(v37 + 8) )
        {
          goto LABEL_43;
        }
LABEL_8:
        v22 = v16 + 232;
        goto LABEL_9;
      }
    }
    else if ( !v15 )
    {
      goto LABEL_8;
    }
    v22 = v16 + 504;
LABEL_9:
    v23 = (unsigned __int8 *)(v18 + 8);
    if ( v20 && RtlEqualSid(SePrincipalSelfSid, v18 + 8) )
      v23 = (unsigned __int8 *)v20;
    if ( a12 && RtlEqualSid(SeOwnerRightsSid, v23) )
    {
      v15 = a11;
      goto LABEL_21;
    }
    if ( !v22 || !v23 )
      goto LABEL_25;
    v24 = v23[1];
    v25 = 0;
    v26 = *(_WORD *)v23;
    v71 = *(_WORD *)v23;
    v27 = 4 * v24 + 8;
    LODWORD(v24) = v23[4 * v24 + 4];
    v63 = v27;
    v28 = *(_QWORD *)(v22 + 8 * (v24 & 0xF) + 16) & *(_QWORD *)(v22
                                                              + 8 * ((unsigned __int64)(unsigned int)v24 >> 4)
                                                              + 144);
    if ( !v28 )
    {
LABEL_24:
      v34 = *(_DWORD *)v22;
      if ( *(_DWORD *)v22 > 0x40u )
      {
        v57 = 64;
        v58 = *(_QWORD *)(v22 + 8);
        do
        {
          v32 = v58 + 16LL * v57;
          if ( **(_WORD **)v32 == v26 )
          {
            if ( !memcmp(v23, *(const void **)v32, v27) )
              goto LABEL_18;
            v26 = v71;
            v27 = v63;
          }
          ++v57;
        }
        while ( v57 < v34 );
      }
LABEL_25:
      v15 = a11;
      goto LABEL_26;
    }
    while ( 1 )
    {
      LOBYTE(v29) = v28;
      if ( (_BYTE)v28 )
        break;
LABEL_33:
      v25 += 8;
      v28 >>= 8;
      if ( !v28 )
        goto LABEL_24;
    }
    v30 = *(_QWORD *)(v22 + 8);
    v68 = v30;
    v31 = v25;
    while ( 1 )
    {
      v65 = SidHashByteToIndexLookupTable[(unsigned __int8)v29];
      v32 = v30 + 16LL * (unsigned int)(v31 + v65);
      if ( **(_WORD **)v32 == v26 )
        break;
LABEL_32:
      v29 = (unsigned __int8)v29 ^ (1 << v65);
      v31 = v25;
      if ( !(_BYTE)v29 )
        goto LABEL_33;
    }
    if ( memcmp(v23, *(const void **)v32, v27) )
    {
      v30 = v68;
      v26 = v71;
      v27 = v63;
      goto LABEL_32;
    }
LABEL_18:
    v15 = a11;
    if ( !a11 && v32 == *(_QWORD *)(v22 + 8) && (*(_DWORD *)(v32 + 8) & 0x10) == 0 || (*(_DWORD *)(v32 + 8) & 4) != 0 )
    {
LABEL_21:
      v13 = a7;
      goto LABEL_22;
    }
LABEL_26:
    v13 = a7;
LABEL_27:
    a4 = v72;
LABEL_28:
    result = *((unsigned __int16 *)v18 + 1);
    ++v19;
    LOBYTE(v14) = v67;
    v18 += result;
    v16 = a1;
    v20 = a6;
  }
  while ( v19 < v66 );
LABEL_29:
  if ( v15 && v13 )
  {
    v45 = (unsigned int *)(a8 + 28);
    v46 = v13;
    do
    {
      v47 = *v45;
      v45 += 12;
      result = *(v45 - 13) & (~a10 | v47);
      *(v45 - 12) = result;
      --v46;
    }
    while ( v46 );
  }
  return result;
}
