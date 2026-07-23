/*
 * XREFs of SepMaximumAccessCheck @ 0x140061220
 * Callers:
 *     SepAccessCheck @ 0x140063630 (SepAccessCheck.c)
 * Callees:
 *     SepMatchPackage @ 0x14000DCB8 (SepMatchPackage.c)
 *     RtlEqualSid @ 0x14000F0F0 (RtlEqualSid.c)
 *     SepSidInTokenSidHash @ 0x140060D70 (SepSidInTokenSidHash.c)
 *     AuthzBasepAddAccessTypeList @ 0x140092320 (AuthzBasepAddAccessTypeList.c)
 *     AuthzBasepEvaluateAceCondition @ 0x14009E524 (AuthzBasepEvaluateAceCondition.c)
 *     SepIsPackageSid @ 0x14009F008 (SepIsPackageSid.c)
 *     SepIsCapabilitySid @ 0x14009F6D4 (SepIsCapabilitySid.c)
 *     SepMatchCapability @ 0x1400A5D08 (SepMatchCapability.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x1400AAE9C (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     SepSidInToken @ 0x1400C2444 (SepSidInToken.c)
 *     memcmp @ 0x14014E450 (memcmp.c)
 *     AuthzBasepObjectInTypeList @ 0x1402342B4 (AuthzBasepObjectInTypeList.c)
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
  __int64 v13; // rbp
  bool v14; // si
  char v15; // r14
  unsigned int v16; // r10d
  __int64 v17; // r13
  __int64 result; // rax
  char *v19; // rbx
  unsigned int v20; // r15d
  __int64 v21; // r12
  char v22; // al
  __int64 v23; // rsi
  unsigned __int8 *v24; // r14
  int v25; // eax
  unsigned __int8 v26; // r13
  __int16 v27; // r8
  unsigned int v28; // r9d
  unsigned int v29; // edx
  unsigned __int64 v30; // rdi
  int v31; // ebp
  __int64 v32; // rcx
  int v33; // edx
  __int64 v34; // r12
  __int64 v35; // rdi
  unsigned int v36; // edi
  __int64 v37; // rsi
  unsigned int *v38; // rcx
  __int64 v39; // rdx
  unsigned int *v40; // rcx
  __int64 v41; // r8
  unsigned int v42; // eax
  unsigned int v43; // edi
  _QWORD *v44; // rax
  __int64 v45; // r11
  __int64 v46; // r10
  __int64 v47; // r8
  __int64 v48; // r9
  char v49; // al
  unsigned int v50; // ebp
  __int64 v51; // r13
  int v52; // edx
  unsigned int v53; // r8d
  char v54; // al
  unsigned int v55; // edx
  int v56; // r8d
  bool v57; // al
  char v58[8]; // [rsp+20h] [rbp-A8h]
  char v59[8]; // [rsp+28h] [rbp-A0h]
  int v60; // [rsp+28h] [rbp-A0h]
  __int16 v61; // [rsp+60h] [rbp-68h]
  int v62; // [rsp+64h] [rbp-64h] BYREF
  unsigned int v63; // [rsp+68h] [rbp-60h]
  int v64; // [rsp+6Ch] [rbp-5Ch] BYREF
  int v65; // [rsp+70h] [rbp-58h]
  unsigned int v66; // [rsp+74h] [rbp-54h]
  __int64 v67; // [rsp+78h] [rbp-50h]
  bool v70; // [rsp+E0h] [rbp+18h]
  __int64 v71; // [rsp+E8h] [rbp+20h]

  v71 = a4;
  v13 = a1;
  v14 = (*(_DWORD *)(a1 + 200) & 0x2000) == 0;
  v15 = a11;
  v16 = a7;
  v17 = a8;
  v70 = v14;
  v64 = -1;
  if ( a11 && a7 )
  {
    v38 = (unsigned int *)(a8 + 28);
    v39 = a7;
    do
    {
      *(_QWORD *)(v38 - 1) = *v38;
      v38 += 12;
      --v39;
    }
    while ( v39 );
  }
  result = *(unsigned __int16 *)(a3 + 4);
  v19 = (char *)(a3 + 8);
  v20 = 0;
  v66 = result;
  if ( !(_DWORD)result )
  {
    v35 = a8;
    goto LABEL_30;
  }
  v21 = a6;
  while ( 1 )
  {
    if ( (v19[1] & 8) != 0 )
      goto LABEL_38;
    v22 = *v19;
    if ( *v19 )
    {
      switch ( v22 )
      {
        case 5:
          v52 = *((_DWORD *)v19 + 2);
          if ( (v52 & 1) != 0 && v19 != (char *)-12LL )
          {
            if ( !a9 )
            {
LABEL_38:
              v35 = a8;
              goto LABEL_29;
            }
            v59[0] = a12;
            v58[0] = v15;
            if ( !(unsigned __int8)SepSidInToken(
                                     v13,
                                     v21,
                                     8 * (v52 & 2u) + (_DWORD)v19 + 28,
                                     0,
                                     *(_QWORD *)v58,
                                     *(_QWORD *)v59) )
              goto LABEL_26;
            if ( (unsigned __int8)AuthzBasepObjectInTypeList(v19 + 12, v17, a7, &v62) )
            {
              AuthzBasepAddAccessTypeList(v17, a7, v62, v20, *((_DWORD *)v19 + 1), 1);
              goto LABEL_26;
            }
            goto LABEL_112;
          }
          v59[0] = a12;
          v58[0] = v15;
          v54 = SepSidInToken(
                  v13,
                  v21,
                  ((*((_DWORD *)v19 + 2) & 1) != 0 ? 0x10 : 0) + 8 * (v52 & 2u) + (_DWORD)v19 + 12,
                  0,
                  *(_QWORD *)v58,
                  *(_QWORD *)v59);
          v16 = a7;
          if ( !v54 )
            goto LABEL_77;
          break;
        case 4:
          v59[0] = a12;
          v58[0] = v15;
          if ( !(unsigned __int8)SepSidInToken(
                                   v13,
                                   v21,
                                   (unsigned int)v19 + 4 * (unsigned __int8)v19[13] + 20,
                                   0,
                                   *(_QWORD *)v58,
                                   *(_QWORD *)v59) )
            goto LABEL_26;
          v57 = SepSidInTokenSidHash((PSID_AND_ATTRIBUTES_HASH)(a2 + 232), 0LL, v19 + 12, 0, 0, a12);
          v16 = a7;
          if ( !v57 )
            goto LABEL_77;
          break;
        case 1:
          v59[0] = a12;
          LOBYTE(a4) = 1;
          v58[0] = v15;
          v49 = SepSidInToken(v13, v21, (int)v19 + 8, a4, *(_QWORD *)v58, *(_QWORD *)v59);
          v16 = a7;
          if ( v49 )
          {
LABEL_78:
            if ( v16 == 1 )
            {
              v35 = a8;
              *(_DWORD *)(v17 + 32) |= *((_DWORD *)v19 + 1) & ~*(_DWORD *)(v17 + 28);
              goto LABEL_28;
            }
            v60 = 2;
            goto LABEL_98;
          }
LABEL_77:
          v35 = a8;
          goto LABEL_28;
        case 6:
          LOBYTE(a4) = 1;
          v59[0] = a12;
          v58[0] = v15;
          if ( !(unsigned __int8)SepSidInToken(
                                   v13,
                                   v21,
                                   16 * (*((_DWORD *)v19 + 2) & 1) + 8 * (*((_DWORD *)v19 + 2) & 2u) + (_DWORD)v19 + 12,
                                   a4,
                                   *(_QWORD *)v58,
                                   *(_QWORD *)v59) )
            goto LABEL_26;
          if ( (*((_DWORD *)v19 + 2) & 1) != 0 && v19 != (char *)-12LL )
          {
            if ( !a9 )
            {
              *(_DWORD *)(v17 + 32) |= *((_DWORD *)v19 + 1) & ~*(_DWORD *)(v17 + 28);
              goto LABEL_26;
            }
            if ( (unsigned __int8)AuthzBasepObjectInTypeList(v19 + 12, v17, a7, &v62) )
            {
              v56 = v62;
              v55 = a7;
              v60 = 2;
              goto LABEL_102;
            }
LABEL_112:
            v35 = a8;
            v16 = v53;
            goto LABEL_28;
          }
          v16 = a7;
          goto LABEL_78;
        case 9:
          v43 = 4 * (unsigned __int8)v19[9] + 8;
          if ( (int)(*((unsigned __int16 *)v19 + 1) - v43 - 8) <= 0 )
            goto LABEL_38;
          if ( a4 && !*a5 )
            AuthzBasepInitializeResourceClaimsFromSacl(a4, a5);
          v44 = *(_QWORD **)(v13 + 1096);
          if ( v44 )
            v45 = v44[75];
          else
            v45 = 0LL;
          if ( v44 )
            v46 = v44[73];
          else
            v46 = 0LL;
          if ( v44 )
            v47 = v44[74];
          else
            v47 = 0LL;
          if ( v44 )
            v48 = v44[72];
          else
            LODWORD(v48) = 0;
          AuthzBasepEvaluateAceCondition(
            v13,
            *(_QWORD *)(v13 + 776),
            *a5,
            v48,
            v47,
            v46,
            v45,
            (__int64)&v19[v43 + 8],
            *((unsigned __int16 *)v19 + 1) - v43 - 8,
            0,
            v15,
            (__int64)&v64);
          if ( v64 != 1 )
            goto LABEL_26;
          if ( v14 && !v15 )
          {
            v37 = (__int64)(v19 + 8);
            if ( (unsigned __int8)SepIsPackageSid(v19 + 8) )
            {
LABEL_45:
              SepMatchPackage(
                v13,
                -1,
                v37,
                *((_DWORD *)v19 + 1),
                (_BYTE *)(a13 + 17),
                (_DWORD *)(a13 + 4),
                (_BYTE *)(a13 + 16));
              *(_DWORD *)a13 &= ~*(_DWORD *)(a13 + 4);
              goto LABEL_26;
            }
            if ( (unsigned __int8)SepIsCapabilitySid(v19 + 8) )
            {
LABEL_42:
              SepMatchCapability(v13, -1, v37, *((_DWORD *)v19 + 1), a13 + 18, a13 + 8);
              *(_DWORD *)a13 &= ~*(_DWORD *)(a13 + 8);
              goto LABEL_26;
            }
          }
          v59[0] = a12;
          v58[0] = v15;
          if ( !(unsigned __int8)SepSidInToken(v13, v21, (int)v19 + 8, 0, *(_QWORD *)v58, *(_QWORD *)v59) )
          {
            v16 = a7;
            a4 = v71;
            goto LABEL_38;
          }
          v55 = a7;
          v60 = 1;
          goto LABEL_100;
        default:
          goto LABEL_38;
      }
      if ( v16 != 1 )
      {
        v60 = 1;
LABEL_98:
        v55 = v16;
LABEL_100:
        v56 = 0;
LABEL_102:
        AuthzBasepAddAccessTypeList(v17, v55, v56, v20, *((_DWORD *)v19 + 1), v60);
        goto LABEL_26;
      }
      *(_DWORD *)(v17 + 28) |= *((_DWORD *)v19 + 1) & ~*(_DWORD *)(v17 + 32);
      goto LABEL_77;
    }
    if ( v14 )
    {
      if ( !v15 )
      {
        v37 = (__int64)(v19 + 8);
        if ( (unsigned __int8)SepIsPackageSid(v19 + 8) )
          goto LABEL_45;
        if ( (unsigned __int8)SepIsCapabilitySid(v19 + 8) )
          goto LABEL_42;
LABEL_9:
        v23 = v13 + 232;
        goto LABEL_10;
      }
    }
    else if ( !v15 )
    {
      goto LABEL_9;
    }
    v23 = v13 + 504;
LABEL_10:
    v24 = (unsigned __int8 *)(v19 + 8);
    if ( v21 && RtlEqualSid(SePrincipalSelfSid, v19 + 8) )
      v24 = (unsigned __int8 *)v21;
    if ( a12 && RtlEqualSid(SeOwnerRightsSid, v24) )
    {
      v15 = a11;
      goto LABEL_22;
    }
    if ( !v23 || !v24 )
      goto LABEL_25;
    v25 = v24[1];
    v26 = 0;
    v27 = *(_WORD *)v24;
    v61 = *(_WORD *)v24;
    v28 = 4 * v25 + 8;
    v63 = v28;
    v29 = v24[4 * v25 + 4];
    v30 = *(_QWORD *)(v23 + 8LL * (v29 & 0xF) + 16) & *(_QWORD *)(v23 + 8LL * (int)((v29 >> 4) + 16) + 16);
    if ( !v30 )
    {
LABEL_24:
      v36 = *(_DWORD *)v23;
      if ( *(_DWORD *)v23 > 0x40u )
      {
        v50 = 64;
        v51 = *(_QWORD *)(v23 + 8);
        do
        {
          v34 = v51 + 16LL * v50;
          if ( **(_WORD **)v34 == v27 )
          {
            if ( !memcmp(v24, *(const void **)v34, v28) )
              goto LABEL_19;
            v27 = v61;
            v28 = v63;
          }
          ++v50;
        }
        while ( v50 < v36 );
      }
LABEL_25:
      v15 = a11;
LABEL_26:
      v35 = a8;
      goto LABEL_27;
    }
    while ( 1 )
    {
      LOBYTE(v31) = v30;
      if ( (_BYTE)v30 )
        break;
LABEL_34:
      v26 += 8;
      v30 >>= 8;
      if ( !v30 )
        goto LABEL_24;
    }
    v32 = *(_QWORD *)(v23 + 8);
    v67 = v32;
    v33 = v26;
    while ( 1 )
    {
      v65 = SidHashByteToIndexLookupTable[(unsigned __int8)v31];
      v34 = v32 + 16LL * (unsigned int)(v33 + v65);
      if ( **(_WORD **)v34 == v27 )
        break;
LABEL_33:
      v31 = (unsigned __int8)v31 ^ (1 << v65);
      v33 = v26;
      if ( !(_BYTE)v31 )
        goto LABEL_34;
    }
    if ( memcmp(v24, *(const void **)v34, v28) )
    {
      v32 = v67;
      v27 = v61;
      v28 = v63;
      goto LABEL_33;
    }
LABEL_19:
    v15 = a11;
    if ( (a11 || v34 != *(_QWORD *)(v23 + 8) || (*(_DWORD *)(v34 + 8) & 0x10) != 0) && (*(_DWORD *)(v34 + 8) & 4) == 0 )
      goto LABEL_26;
LABEL_22:
    v16 = a7;
    if ( a7 == 1 )
    {
      v35 = a8;
      *(_DWORD *)(a8 + 28) |= *((_DWORD *)v19 + 1) & ~*(_DWORD *)(a8 + 32);
      goto LABEL_28;
    }
    v35 = a8;
    AuthzBasepAddAccessTypeList(a8, a7, 0, v20, *((_DWORD *)v19 + 1), 1);
LABEL_27:
    v16 = a7;
LABEL_28:
    a4 = v71;
LABEL_29:
    result = *((unsigned __int16 *)v19 + 1);
    ++v20;
    v13 = a1;
    v19 += result;
    v14 = v70;
    v21 = a6;
    if ( v20 >= v66 )
      break;
    v17 = a8;
  }
LABEL_30:
  if ( v15 && v16 )
  {
    v40 = (unsigned int *)(v35 + 28);
    v41 = v16;
    do
    {
      v42 = *v40;
      v40 += 12;
      result = *(v40 - 13) & (~a10 | v42);
      *(v40 - 12) = result;
      --v41;
    }
    while ( v41 );
  }
  return result;
}
