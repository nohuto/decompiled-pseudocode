/*
 * XREFs of SepMaximumAccessCheck @ 0x14008A7E0
 * Callers:
 *     SepAccessCheck @ 0x14008B8F0 (SepAccessCheck.c)
 * Callees:
 *     SepSidInToken @ 0x140003818 (SepSidInToken.c)
 *     SepSidInTokenSidHash @ 0x14000383C (SepSidInTokenSidHash.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x1400050D4 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     AuthzBasepEvaluateAceCondition @ 0x140006054 (AuthzBasepEvaluateAceCondition.c)
 *     RtlEqualSid @ 0x14009DE80 (RtlEqualSid.c)
 *     AuthzBasepAddAccessTypeList @ 0x1400D5BE4 (AuthzBasepAddAccessTypeList.c)
 *     SepIsPackageSid @ 0x1400E2D40 (SepIsPackageSid.c)
 *     SepIsCapabilitySid @ 0x1400E34E4 (SepIsCapabilitySid.c)
 *     SepMatchPackage @ 0x1400E65D8 (SepMatchPackage.c)
 *     SepMatchCapability @ 0x1400E8724 (SepMatchCapability.c)
 *     memcmp @ 0x140144AB0 (memcmp.c)
 *     AuthzBasepObjectInTypeList @ 0x14021A1C4 (AuthzBasepObjectInTypeList.c)
 */

__int64 __fastcall SepMaximumAccessCheck(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5,
        __int64 a6,
        unsigned int a7,
        __int64 a8,
        int a9,
        int a10,
        unsigned __int8 a11,
        char a12,
        _DWORD *a13)
{
  unsigned int v13; // edi
  __int64 v14; // r10
  __int64 v15; // r9
  __int64 v16; // rbp
  bool v17; // si
  __int64 v18; // r13
  __int64 result; // rax
  char *v20; // rbx
  unsigned int v21; // r14d
  __int64 v22; // r15
  char v23; // al
  __int64 v24; // rsi
  unsigned __int8 *v25; // rdi
  __int64 v26; // rax
  unsigned __int8 v27; // r12
  __int16 v28; // r8
  unsigned int v29; // r9d
  unsigned __int64 v30; // rbp
  int v31; // r13d
  __int64 v32; // rcx
  int v33; // edx
  __int64 v34; // r15
  unsigned int v35; // ebp
  __int64 v36; // rdx
  unsigned int *v37; // rcx
  unsigned int *v38; // rcx
  __int64 v39; // r8
  unsigned int v40; // eax
  unsigned int v41; // edi
  _QWORD *v42; // rax
  __int64 v43; // r11
  __int64 v44; // r10
  __int64 v45; // r8
  __int64 v46; // r9
  unsigned int v47; // r12d
  __int64 v48; // r13
  int v49; // edx
  unsigned int v50; // r8d
  char v51; // al
  char v52; // [rsp+20h] [rbp-A8h]
  char v53; // [rsp+20h] [rbp-A8h]
  bool v54; // [rsp+60h] [rbp-68h]
  int v55; // [rsp+64h] [rbp-64h] BYREF
  unsigned int v56; // [rsp+68h] [rbp-60h]
  int v57; // [rsp+6Ch] [rbp-5Ch] BYREF
  int v58; // [rsp+70h] [rbp-58h]
  unsigned int v59; // [rsp+74h] [rbp-54h]
  __int64 v60; // [rsp+78h] [rbp-50h]
  __int16 v63; // [rsp+E0h] [rbp+18h]

  v13 = a7;
  v14 = a4;
  v15 = a11;
  v16 = a1;
  v17 = (*(_DWORD *)(a1 + 200) & 0x2000) == 0;
  v54 = v17;
  v18 = a2;
  v57 = -1;
  if ( a11 && a7 )
  {
    v36 = a7;
    v37 = (unsigned int *)(a8 + 28);
    do
    {
      *(_QWORD *)(v37 - 1) = *v37;
      v37 += 12;
      --v36;
    }
    while ( v36 );
  }
  result = *(unsigned __int16 *)(a3 + 4);
  v20 = (char *)(a3 + 8);
  v21 = 0;
  v59 = result;
  if ( !(_DWORD)result )
    goto LABEL_29;
  v22 = a6;
  do
  {
    if ( (v20[1] & 8) != 0 )
      goto LABEL_28;
    v23 = *v20;
    if ( *v20 )
    {
      if ( v23 == 5 )
      {
        v49 = *((_DWORD *)v20 + 2);
        if ( (v49 & 1) != 0 )
        {
          if ( v20 != (char *)-12LL )
          {
            if ( !a9 )
              goto LABEL_27;
            if ( !(unsigned __int8)SepSidInToken(v16, v22, (__int64)&v20[8 * (v49 & 2) + 28], 0LL, v15, a12) )
              goto LABEL_25;
            if ( (unsigned __int8)AuthzBasepObjectInTypeList(v20 + 12, a8, a7, &v55) )
            {
              v13 = a7;
              AuthzBasepAddAccessTypeList(a8, a7, v55, v21, *((_DWORD *)v20 + 1), 1);
              v15 = a11;
              v14 = a4;
              goto LABEL_28;
            }
            v13 = v50;
            goto LABEL_79;
          }
          v13 = a7;
        }
        v51 = SepSidInToken(
                v16,
                v22,
                (__int64)&v20[8 * (v49 & 2) + 12 + ((*((_DWORD *)v20 + 2) & 1) != 0 ? 0x10 : 0)],
                0LL,
                v15,
                a12);
      }
      else
      {
        if ( v23 != 4 )
        {
          switch ( v23 )
          {
            case 1:
              v52 = v15;
              LOBYTE(v15) = 1;
              if ( !(unsigned __int8)SepSidInToken(v16, v22, (__int64)(v20 + 8), v15, v52, a12) )
                goto LABEL_76;
              break;
            case 6:
              v53 = v15;
              LOBYTE(v15) = 1;
              if ( !(unsigned __int8)SepSidInToken(
                                       v16,
                                       v22,
                                       (__int64)&v20[16 * (*((_DWORD *)v20 + 2) & 1)
                                                   + 12
                                                   + 8 * (*((_DWORD *)v20 + 2) & 2)],
                                       v15,
                                       v53,
                                       a12) )
                goto LABEL_76;
              if ( (*((_DWORD *)v20 + 2) & 1) != 0 && v20 != (char *)-12LL )
              {
                if ( a9 )
                {
                  if ( (unsigned __int8)AuthzBasepObjectInTypeList(v20 + 12, a8, v13, &v55) )
                    AuthzBasepAddAccessTypeList(a8, a7, v55, v21, *((_DWORD *)v20 + 1), 2);
                  goto LABEL_25;
                }
                *(_DWORD *)(a8 + 32) |= *((_DWORD *)v20 + 1) & ~*(_DWORD *)(a8 + 28);
                goto LABEL_79;
              }
              break;
            case 9:
              v41 = 4 * (unsigned __int8)v20[9] + 8;
              if ( (int)(*((unsigned __int16 *)v20 + 1) - v41 - 8) <= 0 )
                goto LABEL_27;
              if ( v14 && !*a5 )
                AuthzBasepInitializeResourceClaimsFromSacl(v14, a5);
              v42 = *(_QWORD **)(v16 + 1096);
              if ( v42 )
                v43 = v42[75];
              else
                v43 = 0LL;
              if ( v42 )
                v44 = v42[73];
              else
                v44 = 0LL;
              if ( v42 )
                v45 = v42[74];
              else
                v45 = 0LL;
              if ( v42 )
                v46 = v42[72];
              else
                v46 = 0LL;
              AuthzBasepEvaluateAceCondition(
                v16,
                *(_QWORD *)(v16 + 776),
                *a5,
                v46,
                v45,
                v44,
                v43,
                &v20[v41 + 8],
                *((unsigned __int16 *)v20 + 1) - v41 - 8,
                0,
                a11,
                &v57);
              if ( v57 != 1 )
                goto LABEL_25;
              if ( v17 && !a11 )
              {
                if ( (unsigned __int8)SepIsPackageSid(v20 + 8) )
                {
LABEL_44:
                  SepMatchPackage(
                    v16,
                    0xFFFFFFFFLL,
                    v20 + 8,
                    *((unsigned int *)v20 + 1),
                    (char *)a13 + 17,
                    a13 + 1,
                    a13 + 4);
                  *a13 &= ~a13[1];
                  goto LABEL_24;
                }
                if ( (unsigned __int8)SepIsCapabilitySid(v20 + 8) )
                {
LABEL_38:
                  SepMatchCapability(
                    v16,
                    -1,
                    (_DWORD)v20 + 8,
                    *((_DWORD *)v20 + 1),
                    (__int64)a13 + 18,
                    (__int64)(a13 + 2));
                  *a13 &= ~a13[2];
                  goto LABEL_24;
                }
                v17 = v54;
              }
              v13 = a7;
              if ( (unsigned __int8)SepSidInToken(v16, v22, (__int64)(v20 + 8), 0LL, a11, a12) )
              {
                AuthzBasepAddAccessTypeList(a8, a7, 0, v21, *((_DWORD *)v20 + 1), 1);
                goto LABEL_79;
              }
LABEL_76:
              v15 = a11;
              v14 = a4;
              goto LABEL_28;
            default:
              goto LABEL_28;
          }
          if ( v13 != 1 )
          {
            AuthzBasepAddAccessTypeList(a8, v13, 0, v21, *((_DWORD *)v20 + 1), 2);
            goto LABEL_76;
          }
          *(_DWORD *)(a8 + 32) |= *((_DWORD *)v20 + 1) & ~*(_DWORD *)(a8 + 28);
LABEL_79:
          v15 = a11;
          v14 = a4;
          goto LABEL_28;
        }
        if ( !(unsigned __int8)SepSidInToken(v16, v22, (__int64)&v20[4 * (unsigned __int8)v20[13] + 20], 0LL, v15, a12) )
          goto LABEL_25;
        v51 = SepSidInTokenSidHash((PSID_AND_ATTRIBUTES_HASH)(v18 + 232), 0LL, v20 + 12, 0, 0, a12);
        v13 = a7;
      }
      if ( !v51 )
        goto LABEL_76;
      if ( v13 != 1 )
      {
        AuthzBasepAddAccessTypeList(a8, v13, 0, v21, *((_DWORD *)v20 + 1), 1);
        v15 = a11;
        v14 = a4;
        goto LABEL_28;
      }
      *(_DWORD *)(a8 + 28) |= *((_DWORD *)v20 + 1) & ~*(_DWORD *)(a8 + 32);
      goto LABEL_79;
    }
    if ( v17 )
    {
      if ( (_BYTE)v15 )
      {
LABEL_45:
        v24 = v16 + 504;
        goto LABEL_9;
      }
      if ( (unsigned __int8)SepIsPackageSid(v20 + 8) )
        goto LABEL_44;
      if ( (unsigned __int8)SepIsCapabilitySid(v20 + 8) )
        goto LABEL_38;
    }
    else if ( (_BYTE)v15 )
    {
      goto LABEL_45;
    }
    v24 = v16 + 232;
LABEL_9:
    v25 = (unsigned __int8 *)(v20 + 8);
    if ( v22 && RtlEqualSid(SePrincipalSelfSid, v20 + 8) )
      v25 = (unsigned __int8 *)v22;
    if ( a12 && RtlEqualSid(SeOwnerRightsSid, v25) )
    {
      v15 = a11;
      goto LABEL_21;
    }
    if ( !v24 || !v25 )
      goto LABEL_24;
    v26 = v25[1];
    v27 = 0;
    v28 = *(_WORD *)v25;
    v63 = *(_WORD *)v25;
    v29 = 4 * v26 + 8;
    LODWORD(v26) = v25[4 * v26 + 4];
    v56 = v29;
    v30 = *(_QWORD *)(v24 + 8 * (v26 & 0xF) + 16) & *(_QWORD *)(v24
                                                              + 8 * ((unsigned __int64)(unsigned int)v26 >> 4)
                                                              + 144);
    if ( !v30 )
    {
LABEL_23:
      v35 = *(_DWORD *)v24;
      if ( *(_DWORD *)v24 > 0x40u )
      {
        v47 = 64;
        v48 = *(_QWORD *)(v24 + 8);
        do
        {
          v34 = v48 + 16LL * v47;
          if ( **(_WORD **)v34 == v28 )
          {
            if ( !memcmp(v25, *(const void **)v34, v29) )
              goto LABEL_18;
            v28 = v63;
            v29 = v56;
          }
          ++v47;
        }
        while ( v47 < v35 );
      }
LABEL_24:
      v17 = v54;
LABEL_25:
      v15 = a11;
LABEL_26:
      v14 = a4;
LABEL_27:
      v13 = a7;
      goto LABEL_28;
    }
    while ( 1 )
    {
      LOBYTE(v31) = v30;
      if ( (_BYTE)v30 )
        break;
LABEL_33:
      v27 += 8;
      v30 >>= 8;
      if ( !v30 )
        goto LABEL_23;
    }
    v32 = *(_QWORD *)(v24 + 8);
    v60 = v32;
    v33 = v27;
    while ( 1 )
    {
      v58 = SidHashByteToIndexLookupTable[(unsigned __int8)v31];
      v34 = v32 + 16LL * (unsigned int)(v33 + v58);
      if ( **(_WORD **)v34 == v28 )
        break;
LABEL_32:
      v31 = (unsigned __int8)v31 ^ (1 << v58);
      v33 = v27;
      if ( !(_BYTE)v31 )
        goto LABEL_33;
    }
    if ( memcmp(v25, *(const void **)v34, v29) )
    {
      v28 = v63;
      v29 = v56;
      v32 = v60;
      goto LABEL_32;
    }
LABEL_18:
    v15 = a11;
    if ( (a11 || v34 != *(_QWORD *)(v24 + 8) || (*(_DWORD *)(v34 + 8) & 0x10) != 0) && (*(_DWORD *)(v34 + 8) & 4) == 0 )
    {
      v17 = v54;
      goto LABEL_26;
    }
LABEL_21:
    v13 = a7;
    if ( a7 == 1 )
    {
      v17 = v54;
      *(_DWORD *)(a8 + 28) |= *((_DWORD *)v20 + 1) & ~*(_DWORD *)(a8 + 32);
      v14 = a4;
    }
    else
    {
      AuthzBasepAddAccessTypeList(a8, a7, 0, v21, *((_DWORD *)v20 + 1), 1);
      v15 = a11;
      v14 = a4;
      v17 = v54;
    }
LABEL_28:
    result = *((unsigned __int16 *)v20 + 1);
    ++v21;
    v16 = a1;
    v20 += result;
    v22 = a6;
    v18 = a2;
  }
  while ( v21 < v59 );
LABEL_29:
  if ( (_BYTE)v15 && v13 )
  {
    v38 = (unsigned int *)(a8 + 28);
    v39 = v13;
    do
    {
      v40 = *v38;
      v38 += 12;
      result = *(v38 - 13) & (~a10 | v40);
      *(v38 - 12) = result;
      --v39;
    }
    while ( v39 );
  }
  return result;
}
