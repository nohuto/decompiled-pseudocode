/*
 * XREFs of SepMaximumAccessCheckEx @ 0x14015A940
 * Callers:
 *     SepAccessCheckEx @ 0x1401620E4 (SepAccessCheckEx.c)
 * Callees:
 *     SepSidInToken @ 0x1400078CC (SepSidInToken.c)
 *     RtlEqualSid @ 0x140014CF0 (RtlEqualSid.c)
 *     SepSidInTokenSidHash @ 0x1400CD250 (SepSidInTokenSidHash.c)
 *     AuthzBasepAddAccessTypeList @ 0x140107940 (AuthzBasepAddAccessTypeList.c)
 *     AuthzBasepSetAccessReasons @ 0x140107AB0 (AuthzBasepSetAccessReasons.c)
 *     AuthzBasepEvaluateAceCondition @ 0x14011C690 (AuthzBasepEvaluateAceCondition.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x14012A2E4 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     AuthzBasepObjectInTypeList @ 0x14015ABAC (AuthzBasepObjectInTypeList.c)
 *     RtlCompareMemory @ 0x14018BAA0 (RtlCompareMemory.c)
 */

__int64 __fastcall SepMaximumAccessCheckEx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5,
        int a6,
        unsigned int a7,
        __int64 a8,
        int a9,
        int a10,
        unsigned int a11,
        char a12,
        char a13,
        __int64 a14)
{
  __int64 result; // rax
  bool v17; // r15
  char v18; // si
  unsigned int v19; // r13d
  unsigned int v20; // r14d
  unsigned int v21; // edi
  char *v22; // rbx
  unsigned __int8 v23; // al
  __int64 v24; // rcx
  char v25; // al
  __int64 v26; // rdi
  _DWORD *v27; // r11
  _DWORD *v28; // r11
  int v29; // r8d
  __int64 v30; // r12
  int v31; // r12d
  __int64 v32; // rcx
  BOOLEAN v33; // al
  __int64 v34; // r12
  int v35; // r12d
  bool v36; // al
  __int64 v37; // rcx
  int v38; // edx
  __int64 v39; // r8
  char v40; // r12
  __int64 v41; // r9
  int v42; // ecx
  __int64 v43; // r12
  unsigned int v44; // r12d
  _QWORD *v45; // rax
  __int64 v46; // r11
  __int64 v47; // r10
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // r12
  __int64 v51; // r12
  unsigned int v52; // r12d
  _QWORD *v53; // rax
  __int64 v54; // r11
  __int64 v55; // r10
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // r9
  int v59; // edx
  _DWORD *v60; // rcx
  __int64 v61; // r8
  int v62; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v63; // [rsp+A8h] [rbp+10h]
  __int64 v64; // [rsp+B8h] [rbp+20h]

  v64 = a4;
  v63 = a2;
  result = *(unsigned int *)(a1 + 200);
  v17 = (*(_DWORD *)(a1 + 200) & 0x2000) == 0;
  v18 = a11;
  v19 = a7;
  if ( (_BYTE)a11 && a7 )
  {
    v26 = a7;
    v27 = (_DWORD *)(a8 + 28);
    do
    {
      result = AuthzBasepSetAccessReasons(*v27, 0x800000, 0, *(_QWORD *)(v27 + 3), 1);
      *(v28 - 1) = *v28;
      *v28 = v29;
      v27 = v28 + 12;
      --v26;
    }
    while ( v26 );
    a4 = v64;
  }
  v20 = *(unsigned __int16 *)(a3 + 4);
  v21 = 0;
  v22 = (char *)(a3 + 8);
  if ( v20 )
  {
    while ( (v22[1] & 8) != 0 )
    {
LABEL_12:
      result = *((unsigned __int16 *)v22 + 1);
      ++v21;
      v22 += result;
      if ( v21 >= v20 )
        goto LABEL_13;
    }
    v23 = *v22;
    if ( !*v22 )
    {
      if ( !v17 )
      {
        if ( !v18 )
        {
LABEL_7:
          v24 = a1 + 232;
LABEL_8:
          v25 = SepSidInTokenSidHash(v24, 0LL, (unsigned __int8 *)v22 + 8, 0, v18, a12);
          goto LABEL_9;
        }
LABEL_39:
        v24 = a1 + 504;
        goto LABEL_8;
      }
      if ( v18 )
        goto LABEL_39;
      v30 = SePackagePrefixSid;
      if ( (unsigned __int8)v22[9] >= 2u
        && v22[8] == *(_BYTE *)SePackagePrefixSid
        && RtlCompareMemory(v22 + 10, (const void *)(SePackagePrefixSid + 2), 6uLL) == 6
        && *((_DWORD *)v22 + 4) == *(_DWORD *)(v30 + 8) )
      {
LABEL_24:
        v31 = *((_DWORD *)v22 + 1);
        if ( *((_DWORD *)v22 + 4) == 2 && v22[9] == 2 && *((_DWORD *)v22 + 5) == 1 )
        {
          v32 = a14;
        }
        else
        {
          v32 = a14;
          *(_BYTE *)(a14 + 16) = 1;
          if ( (*(_DWORD *)(a1 + 200) & 0x4000) == 0 )
            goto LABEL_31;
          v33 = RtlEqualSid(*(PSID *)(a1 + 784), v22 + 8);
          v32 = a14;
          if ( !v33 )
            goto LABEL_31;
        }
        *(_DWORD *)(v32 + 4) |= v31;
        *(_BYTE *)(v32 + 17) = 1;
LABEL_31:
        v19 = a7;
        *(_DWORD *)v32 &= ~*(_DWORD *)(v32 + 4);
LABEL_11:
        a4 = v64;
        goto LABEL_12;
      }
      v34 = SeCapabilityPrefixSid;
      if ( (unsigned __int8)v22[9] < 2u
        || v22[8] != *(_BYTE *)SeCapabilityPrefixSid
        || RtlCompareMemory(v22 + 10, (const void *)(SeCapabilityPrefixSid + 2), 6uLL) != 6
        || *((_DWORD *)v22 + 4) != *(_DWORD *)(v34 + 8) )
      {
        v19 = a7;
        goto LABEL_7;
      }
LABEL_36:
      v35 = *((_DWORD *)v22 + 1);
      v36 = SepSidInTokenSidHash(a1 + 808, 0LL, (unsigned __int8 *)v22 + 8, 0, 1, 0);
      v37 = a14;
      if ( v36 )
      {
        *(_DWORD *)(a14 + 8) |= v35;
        *(_BYTE *)(v37 + 18) = 1;
      }
      v19 = a7;
      *(_DWORD *)v37 &= ~*(_DWORD *)(v37 + 8);
      goto LABEL_11;
    }
    switch ( v23 )
    {
      case 5u:
        v38 = *((_DWORD *)v22 + 2);
        if ( (v38 & 1) != 0 && v22 != (char *)-12LL )
        {
          if ( !a9 )
            goto LABEL_12;
          if ( (unsigned __int8)SepSidInToken(a1, 0LL, (__int64)&v22[8 * (v38 & 2) + 28], 0LL, v18)
            && (unsigned __int8)AuthzBasepObjectInTypeList(v22 + 12, a8, v19, &a11) )
          {
            AuthzBasepAddAccessTypeList(a8, v19, a11, v21, *((_DWORD *)v22 + 1), 1);
          }
          goto LABEL_11;
        }
        v39 = (__int64)&v22[8 * (v38 & 2) + 12 + ((*((_DWORD *)v22 + 2) & 1) != 0 ? 0x10 : 0)];
LABEL_51:
        v25 = SepSidInToken(a1, 0LL, v39, 0LL, v18);
        goto LABEL_9;
      case 4u:
        v40 = a12;
        if ( !(unsigned __int8)SepSidInToken(a1, 0LL, (__int64)&v22[4 * (unsigned __int8)v22[13] + 20], 0LL, v18) )
          goto LABEL_11;
        v25 = SepSidInTokenSidHash(v63 + 232, 0LL, (unsigned __int8 *)v22 + 12, 0, 0, v40);
LABEL_9:
        if ( v25 )
          AuthzBasepAddAccessTypeList(a8, v19, 0, v21, *((_DWORD *)v22 + 1), 1);
        goto LABEL_11;
      case 1u:
        LOBYTE(a4) = 1;
        if ( !(unsigned __int8)SepSidInToken(a1, 0LL, (__int64)(v22 + 8), a4, v18) )
          goto LABEL_11;
        break;
      case 6u:
        LOBYTE(a4) = 1;
        if ( !(unsigned __int8)SepSidInToken(
                                 a1,
                                 0LL,
                                 (__int64)&v22[16 * (*((_DWORD *)v22 + 2) & 1) + 12 + 8 * (*((_DWORD *)v22 + 2) & 2)],
                                 a4,
                                 v18) )
          goto LABEL_11;
        if ( (*((_DWORD *)v22 + 2) & 1) != 0 && v22 != (char *)-12LL )
        {
          if ( a9 )
          {
            v43 = a8;
            if ( (unsigned __int8)AuthzBasepObjectInTypeList(v22 + 12, a8, v19, &a11) )
              AuthzBasepAddAccessTypeList(v43, v19, a11, v21, *((_DWORD *)v22 + 1), 2);
          }
          else
          {
            v41 = *(_QWORD *)(a8 + 40);
            v42 = *((_DWORD *)v22 + 1) & ~*(_DWORD *)(a8 + 28);
            *(_DWORD *)(a8 + 32) |= v42;
            AuthzBasepSetAccessReasons(v42, 0x20000, v21, v41, 0);
          }
          goto LABEL_11;
        }
        break;
      case 9u:
        v44 = 4 * (unsigned __int8)v22[9] + 8;
        if ( *((unsigned __int16 *)v22 + 1) - v44 == 8 )
          goto LABEL_12;
        if ( a4 && !*a5 )
          AuthzBasepInitializeResourceClaimsFromSacl(a4, (__int64)a5);
        v45 = *(_QWORD **)(a1 + 1096);
        if ( v45 )
          v46 = v45[75];
        else
          v46 = 0LL;
        if ( v45 )
          v47 = v45[73];
        else
          v47 = 0LL;
        if ( v45 )
          v48 = v45[74];
        else
          v48 = 0LL;
        if ( v45 )
          v49 = v45[72];
        else
          v49 = 0LL;
        AuthzBasepEvaluateAceCondition(
          a1,
          *(_QWORD *)(a1 + 776),
          *a5,
          v49,
          v48,
          v47,
          v46,
          &v22[v44 + 8],
          *((unsigned __int16 *)v22 + 1) - v44 - 8,
          0,
          v18,
          &v62);
        if ( v62 != 1 )
          goto LABEL_11;
        if ( v17 && !v18 )
        {
          v50 = SePackagePrefixSid;
          if ( (unsigned __int8)v22[9] >= 2u
            && v22[8] == *(_BYTE *)SePackagePrefixSid
            && RtlCompareMemory(v22 + 10, (const void *)(SePackagePrefixSid + 2), 6uLL) == 6
            && *((_DWORD *)v22 + 4) == *(_DWORD *)(v50 + 8) )
          {
            goto LABEL_24;
          }
          v51 = SeCapabilityPrefixSid;
          if ( (unsigned __int8)v22[9] >= 2u
            && v22[8] == *(_BYTE *)SeCapabilityPrefixSid
            && RtlCompareMemory(v22 + 10, (const void *)(SeCapabilityPrefixSid + 2), 6uLL) == 6
            && *((_DWORD *)v22 + 4) == *(_DWORD *)(v51 + 8) )
          {
            goto LABEL_36;
          }
          v19 = a7;
        }
        v39 = (__int64)(v22 + 8);
        goto LABEL_51;
      default:
        if ( !a13 )
          goto LABEL_12;
        if ( v23 != 10 )
          goto LABEL_12;
        if ( KeGetCurrentIrql() >= 2u )
          goto LABEL_12;
        v52 = 4 * (unsigned __int8)v22[9] + 8;
        if ( *((unsigned __int16 *)v22 + 1) - v52 == 8 )
          goto LABEL_12;
        if ( a4 && !*a5 )
          AuthzBasepInitializeResourceClaimsFromSacl(a4, (__int64)a5);
        v53 = *(_QWORD **)(a1 + 1096);
        if ( v53 )
          v54 = v53[75];
        else
          v54 = 0LL;
        if ( v53 )
          v55 = v53[73];
        else
          v55 = 0LL;
        if ( v53 )
          v56 = v53[74];
        else
          v56 = 0LL;
        if ( v53 )
          v57 = v53[72];
        else
          v57 = 0LL;
        AuthzBasepEvaluateAceCondition(
          a1,
          *(_QWORD *)(a1 + 776),
          *a5,
          v57,
          v56,
          v55,
          v54,
          &v22[v52 + 8],
          *((unsigned __int16 *)v22 + 1) - v52 - 8,
          1,
          v18,
          &v62);
        if ( ((v62 + 1) & 0xFFFFFFFD) != 0 )
          goto LABEL_11;
        LOBYTE(v58) = 1;
        if ( !(unsigned __int8)SepSidInToken(a1, 0LL, (__int64)(v22 + 8), v58, v18) )
          goto LABEL_11;
        break;
    }
    AuthzBasepAddAccessTypeList(a8, v19, 0, v21, *((_DWORD *)v22 + 1), 2);
    goto LABEL_11;
  }
LABEL_13:
  if ( v18 && v19 )
  {
    v59 = ~a10;
    v60 = (_DWORD *)(a8 + 28);
    v61 = v19;
    do
    {
      result = *(v60 - 1) & (*v60 | (unsigned int)v59);
      *v60 = result;
      v60 += 12;
      --v61;
    }
    while ( v61 );
  }
  return result;
}
