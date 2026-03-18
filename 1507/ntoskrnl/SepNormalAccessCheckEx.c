/*
 * XREFs of SepNormalAccessCheckEx @ 0x140162460
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

void __fastcall SepNormalAccessCheckEx(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6,
        __int64 a7,
        unsigned int a8,
        __int64 a9,
        int a10,
        char a11,
        __int64 a12,
        char a13,
        __int64 a14)
{
  unsigned int v14; // ebp
  int v16; // r12d
  int v18; // edx
  bool v19; // dl
  _DWORD *v20; // rax
  __int64 v21; // rcx
  char v22; // di
  unsigned int v23; // r14d
  __int64 v24; // rbx
  bool v25; // zf
  int v26; // ecx
  char v27; // al
  __int64 v28; // r8
  __int64 v29; // rcx
  __int64 v30; // r11
  __int64 v31; // rbx
  __int64 v32; // r11
  __int64 v33; // r14
  _BYTE *v34; // rdi
  bool v35; // cf
  int v36; // ebp
  int v37; // eax
  int v38; // eax
  int v39; // ebp
  int v40; // edx
  int v41; // eax
  _DWORD *v42; // rdi
  _DWORD *v43; // rcx
  bool v44; // zf
  unsigned int v45; // edi
  _QWORD *v46; // rax
  __int64 v47; // r11
  __int64 v48; // r10
  __int64 v49; // r8
  __int64 v50; // r9
  unsigned int v51; // edx
  __int64 v52; // rcx
  __int64 v53; // r14
  unsigned int v54; // edi
  _QWORD *v55; // rax
  __int64 v56; // r11
  __int64 v57; // r10
  __int64 v58; // r8
  __int64 v59; // r9
  unsigned int v60; // edx
  __int64 v61; // rcx
  int v62; // eax
  unsigned int v63; // [rsp+60h] [rbp-48h] BYREF
  int v64; // [rsp+64h] [rbp-44h] BYREF
  unsigned int v65; // [rsp+68h] [rbp-40h]
  bool v66; // [rsp+B8h] [rbp+10h]
  unsigned int v68; // [rsp+C8h] [rbp+20h]
  int v69; // [rsp+E0h] [rbp+38h]

  v14 = a8;
  v16 = 0;
  v69 = 0;
  v18 = *(_DWORD *)(a2 + 200) >> 13;
  v65 = *(unsigned __int16 *)(a4 + 4);
  v19 = (v18 & 1) == 0;
  v66 = v19;
  if ( a8 )
  {
    v20 = (_DWORD *)(a9 + 24);
    v21 = a8;
    do
    {
      *v20 = a1;
      v20 += 12;
      --v21;
    }
    while ( v21 );
  }
  v22 = a11;
  if ( v19 && !a11 )
  {
    v16 = a1 | *(_DWORD *)a14;
    v69 = v16;
  }
  v23 = 0;
  v24 = a4 + 8;
  v68 = 0;
  v25 = v65 == 0;
  if ( v65 )
  {
    while ( 1 )
    {
      v26 = *(_DWORD *)(a9 + 24);
      if ( !v26 && !v16 )
      {
LABEL_21:
        v25 = v23 == v65;
        goto LABEL_22;
      }
      if ( (*(_BYTE *)(v24 + 1) & 8) == 0 )
        break;
LABEL_18:
      ++v23;
      v24 += *(unsigned __int16 *)(v24 + 2);
      v68 = v23;
      if ( v23 >= v65 )
        goto LABEL_21;
    }
    if ( !v26 )
    {
      if ( !*(_BYTE *)v24 )
        goto LABEL_10;
      if ( *(_BYTE *)v24 != 9 )
        goto LABEL_18;
    }
    v27 = *(_BYTE *)v24;
    if ( *(_BYTE *)v24 )
    {
      if ( v27 == 5 )
      {
        v40 = *(_DWORD *)(v24 + 8);
        v41 = v40 & 1;
        if ( (v40 & 1) != 0 )
          v42 = (_DWORD *)(v24 + 12);
        else
          v42 = 0LL;
        if ( v42 )
        {
          if ( a10
            && (unsigned __int8)SepSidInToken(a2, 0LL, (v41 != 0 ? 0x10 : 0) + 8LL * (v40 & 2) + v24 + 12, 0LL, a11)
            && AuthzBasepObjectInTypeList(v42, a9, v14, &v63) )
          {
            AuthzBasepAddAccessTypeList(a9, v14, v63, v23, *(_DWORD *)(v24 + 4), 0);
          }
          goto LABEL_49;
        }
        v22 = a11;
        v28 = (v41 != 0 ? 0x10 : 0) + 8LL * (v40 & 2) + v24 + 12;
        goto LABEL_14;
      }
      if ( v27 == 4 )
      {
        if ( !(unsigned __int8)SepSidInToken(
                                 a2,
                                 0LL,
                                 v24 + 4 * (unsigned int)*(unsigned __int8 *)(v24 + 13) + 8 + 12LL,
                                 0LL,
                                 v22) )
          goto LABEL_17;
        v29 = a3;
        v28 = v24 + 12;
LABEL_15:
        if ( (unsigned __int8)SepSidInToken(v29, 0LL, v28, 0LL, v22) )
          AuthzBasepAddAccessTypeList(a9, v14, 0, v23, *(_DWORD *)(v24 + 4), 0);
        goto LABEL_17;
      }
      if ( v27 != 1 )
      {
        if ( v27 == 6 )
        {
          LOBYTE(a4) = 1;
          if ( (unsigned __int8)SepSidInToken(
                                  a2,
                                  0LL,
                                  16LL * (*(_DWORD *)(v24 + 8) & 1) + 8LL * (*(_DWORD *)(v24 + 8) & 2) + v24 + 12,
                                  a4,
                                  v22) )
          {
            if ( (*(_DWORD *)(v24 + 8) & 1) != 0 )
              v43 = (_DWORD *)(v24 + 12);
            else
              v43 = 0LL;
            if ( v43 && a10 )
            {
              if ( !AuthzBasepObjectInTypeList(v43, a9, v14, &v63) )
                goto LABEL_17;
              v44 = (*(_DWORD *)(a9 + 48LL * v63 + 24) & *(_DWORD *)(v24 + 4)) == 0;
            }
            else
            {
              v44 = (*(_DWORD *)(v24 + 4) & *(_DWORD *)(a9 + 24)) == 0;
            }
            if ( !v44 )
              goto LABEL_21;
            goto LABEL_17;
          }
          goto LABEL_17;
        }
        if ( v27 == 9 )
        {
          v45 = 4 * *(unsigned __int8 *)(v24 + 9) + 8;
          if ( *(unsigned __int16 *)(v24 + 2) - v45 == 8 )
            goto LABEL_129;
          if ( a5 && !*a6 )
            AuthzBasepInitializeResourceClaimsFromSacl(a5, (__int64)a6);
          v46 = *(_QWORD **)(a2 + 1096);
          if ( v46 )
            v47 = v46[75];
          else
            v47 = 0LL;
          if ( v46 )
            v48 = v46[73];
          else
            v48 = 0LL;
          if ( v46 )
            v49 = v46[74];
          else
            v49 = 0LL;
          if ( v46 )
            v50 = v46[72];
          else
            v50 = 0LL;
          v51 = *(unsigned __int16 *)(v24 + 2) - v45 - 8;
          v52 = v45;
          v22 = a11;
          AuthzBasepEvaluateAceCondition(
            a2,
            *(_QWORD *)(a2 + 776),
            *a6,
            v50,
            v49,
            v48,
            v47,
            (_DWORD *)(v24 + v52 + 8),
            v51,
            0,
            a11,
            &v64);
          if ( v64 != 1 )
            goto LABEL_17;
          if ( !v66 || a11 || !v16 )
          {
LABEL_12:
            if ( *(_DWORD *)(a9 + 24) )
            {
              v28 = v24 + 8;
LABEL_14:
              v29 = a2;
              goto LABEL_15;
            }
LABEL_17:
            v19 = v66;
            goto LABEL_18;
          }
          goto LABEL_36;
        }
        if ( !a13 || v27 != 10 || KeGetCurrentIrql() >= 2u )
          goto LABEL_18;
        v54 = 4 * *(unsigned __int8 *)(v24 + 9) + 8;
        if ( *(unsigned __int16 *)(v24 + 2) - v54 == 8 )
        {
LABEL_129:
          v22 = a11;
          goto LABEL_18;
        }
        if ( a5 && !*a6 )
          AuthzBasepInitializeResourceClaimsFromSacl(a5, (__int64)a6);
        v55 = *(_QWORD **)(a2 + 1096);
        if ( v55 )
          v56 = v55[75];
        else
          v56 = 0LL;
        if ( v55 )
          v57 = v55[73];
        else
          v57 = 0LL;
        if ( v55 )
          v58 = v55[74];
        else
          v58 = 0LL;
        if ( v55 )
          v59 = v55[72];
        else
          v59 = 0LL;
        v60 = *(unsigned __int16 *)(v24 + 2) - v54 - 8;
        v61 = v54;
        v22 = a11;
        AuthzBasepEvaluateAceCondition(
          a2,
          *(_QWORD *)(a2 + 776),
          *a6,
          v59,
          v58,
          v57,
          v56,
          (_DWORD *)(v24 + v61 + 8),
          v60,
          1,
          a11,
          &v64);
        if ( ((v64 + 1) & 0xFFFFFFFD) != 0 )
          goto LABEL_17;
      }
      LOBYTE(a4) = 1;
      if ( (unsigned __int8)SepSidInToken(a2, 0LL, v24 + 8, a4, v22) )
      {
        v62 = *(_DWORD *)(v24 + 4);
        if ( (v62 & *(_DWORD *)(a9 + 24)) != 0 )
        {
          AuthzBasepSetAccessReasons(*(_DWORD *)(a9 + 24) & v62, 0x20000, v23, *(_QWORD *)(a9 + 40), 0);
          goto LABEL_21;
        }
      }
      goto LABEL_17;
    }
LABEL_10:
    if ( !v19 || v22 || !v16 )
    {
LABEL_11:
      v22 = a11;
      goto LABEL_12;
    }
LABEL_36:
    v33 = SePackagePrefixSid;
    v34 = (_BYTE *)(v24 + 8);
    v35 = *(_BYTE *)(v24 + 9) < 2u;
    if ( *(_BYTE *)(v24 + 9) >= 2u )
    {
      if ( *v34 == *(_BYTE *)SePackagePrefixSid
        && RtlCompareMemory((const void *)(v24 + 10), (const void *)(SePackagePrefixSid + 2), 6uLL) == 6
        && *(_DWORD *)(v24 + 16) == *(_DWORD *)(v33 + 8) )
      {
        v36 = *(_DWORD *)(v24 + 4);
        if ( *(_DWORD *)(v24 + 16) == 2 && *(_BYTE *)(v24 + 9) == 2 && *(_DWORD *)(v24 + 20) == 1
          || (*(_BYTE *)(a14 + 16) = 1, (*(_DWORD *)(a2 + 200) & 0x4000) != 0)
          && RtlEqualSid(*(PSID *)(a2 + 784), (PSID)(v24 + 8)) )
        {
          *(_DWORD *)(a14 + 4) |= v69 & v36;
          *(_BYTE *)(a14 + 17) = 1;
        }
        v37 = *(_DWORD *)(a14 + 4);
LABEL_48:
        v23 = v68;
        v38 = ~v37;
        v14 = a8;
        v16 &= v38;
        *(_DWORD *)a14 &= v38;
LABEL_49:
        v22 = a11;
        goto LABEL_17;
      }
      v35 = *(_BYTE *)(v24 + 9) < 2u;
    }
    v53 = SeCapabilityPrefixSid;
    if ( !v35
      && *v34 == *(_BYTE *)SeCapabilityPrefixSid
      && RtlCompareMemory((const void *)(v24 + 10), (const void *)(SeCapabilityPrefixSid + 2), 6uLL) == 6
      && *(_DWORD *)(v24 + 16) == *(_DWORD *)(v53 + 8) )
    {
      v39 = *(_DWORD *)(v24 + 4);
      if ( SepSidInTokenSidHash(a2 + 808, 0LL, (unsigned __int8 *)(v24 + 8), 0, 1, 0) )
      {
        *(_DWORD *)(a14 + 8) |= v69 & v39;
        *(_BYTE *)(a14 + 18) = 1;
      }
      v37 = *(_DWORD *)(a14 + 8);
      goto LABEL_48;
    }
    v23 = v68;
    goto LABEL_11;
  }
LABEL_22:
  if ( v25 )
  {
    v30 = a9 + 24;
    if ( *(_DWORD *)(a9 + 24) )
    {
      if ( v14 )
      {
        v31 = v14;
        do
        {
          AuthzBasepSetAccessReasons(*(_DWORD *)v30, 0x800000, 0, *(_QWORD *)(v30 + 16), 0);
          v30 = v32 + 48;
          --v31;
        }
        while ( v31 );
      }
    }
  }
}
