/*
 * XREFs of SepNormalAccessCheck @ 0x14008C110
 * Callers:
 *     SepAccessCheck @ 0x14008B8F0 (SepAccessCheck.c)
 * Callees:
 *     SepSidInToken @ 0x140003818 (SepSidInToken.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x1400050D4 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     AuthzBasepEvaluateAceCondition @ 0x140006054 (AuthzBasepEvaluateAceCondition.c)
 *     RtlEqualSid @ 0x14009DE80 (RtlEqualSid.c)
 *     AuthzBasepAddAccessTypeList @ 0x1400D5BE4 (AuthzBasepAddAccessTypeList.c)
 *     SepIsPackageSid @ 0x1400E2D40 (SepIsPackageSid.c)
 *     SepIsCapabilitySid @ 0x1400E34E4 (SepIsCapabilitySid.c)
 *     SepMatchPackage @ 0x1400E65D8 (SepMatchPackage.c)
 *     SepMatchCapability @ 0x1400E8724 (SepMatchCapability.c)
 *     memcmp @ 0x140144AB0 (memcmp.c)
 *     RtlCompareMemory @ 0x14015BFC0 (RtlCompareMemory.c)
 *     AuthzBasepObjectInTypeList @ 0x14021A1C4 (AuthzBasepObjectInTypeList.c)
 */

__int64 __fastcall SepNormalAccessCheck(
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
        char a12,
        __int64 a13)
{
  int v13; // r8d
  __int64 v14; // r15
  bool v16; // bp
  __int64 result; // rax
  _DWORD *v18; // rax
  __int64 v19; // rcx
  char v20; // r14
  unsigned int v21; // esi
  __int64 v22; // rbx
  __int64 v23; // r12
  int v24; // ecx
  char v25; // al
  int v26; // ebp
  __int64 v27; // rdi
  unsigned __int8 *v28; // r14
  __int64 v29; // rax
  unsigned __int8 v30; // r8
  unsigned int v31; // r10d
  unsigned __int64 i; // rbp
  unsigned int v33; // ebp
  int v34; // r12d
  __int64 v35; // rcx
  int v36; // edx
  __int64 v37; // r15
  int v38; // eax
  _BYTE *v39; // rbp
  __int64 v40; // rdi
  __int64 v41; // rdi
  __int64 v42; // r14
  int *v43; // rdi
  int v44; // eax
  int v45; // edi
  int v46; // eax
  unsigned int v47; // edi
  _QWORD *v48; // rax
  __int64 v49; // r11
  __int64 v50; // r10
  __int64 v51; // r8
  __int64 v52; // r9
  unsigned int v53; // r12d
  __int64 v54; // rax
  int v55; // edx
  char v56; // al
  int v57; // eax
  int v59; // [rsp+60h] [rbp-78h]
  unsigned __int8 v60; // [rsp+64h] [rbp-74h]
  unsigned int v61; // [rsp+68h] [rbp-70h]
  unsigned __int16 v62; // [rsp+6Ch] [rbp-6Ch]
  unsigned int v63; // [rsp+70h] [rbp-68h] BYREF
  unsigned int v64; // [rsp+74h] [rbp-64h]
  unsigned int v65; // [rsp+78h] [rbp-60h]
  int v66; // [rsp+7Ch] [rbp-5Ch] BYREF
  int v67; // [rsp+80h] [rbp-58h]
  int v68; // [rsp+84h] [rbp-54h]
  int v69; // [rsp+88h] [rbp-50h]
  __int64 v70; // [rsp+90h] [rbp-48h]
  bool v73; // [rsp+F8h] [rbp+20h]

  v13 = 0;
  v14 = a2;
  v59 = 0;
  v61 = 0;
  v16 = (*(_DWORD *)(a2 + 200) & 0x2000) == 0;
  result = *(unsigned __int16 *)(a4 + 4);
  v73 = v16;
  v66 = -1;
  v65 = result;
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
    result = v65;
  }
  v20 = a11;
  if ( v16 && !a11 )
  {
    v13 = a1 | *(_DWORD *)a13;
    v59 = v13;
    v61 = v13;
  }
  v21 = 0;
  v22 = a4 + 8;
  if ( (_DWORD)result )
  {
    v23 = a7;
    do
    {
      v24 = *(_DWORD *)(a9 + 24);
      if ( !v24 && !v13 )
        return result;
      if ( (*(_BYTE *)(v22 + 1) & 8) != 0 )
        goto LABEL_23;
      if ( !v24 )
      {
        if ( !*(_BYTE *)v22 )
        {
LABEL_12:
          if ( v16 && !v20 && v13 )
          {
            v39 = (_BYTE *)(v22 + 8);
            v40 = SePackagePrefixSid;
            if ( *(_BYTE *)(v22 + 9) >= 2u
              && *v39 == *(_BYTE *)SePackagePrefixSid
              && RtlCompareMemory((const void *)(v22 + 10), (const void *)(SePackagePrefixSid + 2), 6uLL) == 6
              && *(_DWORD *)(v22 + 16) == *(_DWORD *)(v40 + 8) )
            {
              v45 = *(_DWORD *)(v22 + 4);
              if ( *(_DWORD *)(v22 + 16) == 2 && *(_BYTE *)(v22 + 9) == 2 && *(_DWORD *)(v22 + 20) == 1 )
              {
                v42 = a13;
                goto LABEL_68;
              }
              v42 = a13;
              *(_BYTE *)(a13 + 16) = 1;
              if ( (*(_DWORD *)(v14 + 200) & 0x4000) != 0 && RtlEqualSid(*(PSID *)(v14 + 784), (PSID)(v22 + 8)) )
              {
LABEL_68:
                *(_DWORD *)(v42 + 4) |= v61 & v45;
                *(_BYTE *)(v42 + 17) = 1;
              }
              v44 = *(_DWORD *)(v42 + 4);
              goto LABEL_70;
            }
            v41 = SeCapabilityPrefixSid;
            if ( *(_BYTE *)(v22 + 9) >= 2u
              && *v39 == *(_BYTE *)SeCapabilityPrefixSid
              && RtlCompareMemory((const void *)(v22 + 10), (const void *)(SeCapabilityPrefixSid + 2), 6uLL) == 6
              && *(_DWORD *)(v22 + 16) == *(_DWORD *)(v41 + 8) )
            {
LABEL_51:
              v42 = a13;
              v43 = (int *)(a13 + 8);
              SepMatchCapability(v14, v61, (_DWORD)v39, *(_DWORD *)(v22 + 4), a13 + 18, a13 + 8);
              goto LABEL_52;
            }
          }
          v26 = *(_DWORD *)(a9 + 24);
          v67 = v26;
          if ( !v26 )
            goto LABEL_22;
          if ( v20 )
            v27 = v14 + 504;
          else
            v27 = v14 + 232;
          v28 = (unsigned __int8 *)(v22 + 8);
          if ( v23 && RtlEqualSid(SePrincipalSelfSid, (PSID)(v22 + 8)) )
            v28 = (unsigned __int8 *)v23;
          if ( a12
            && *(_WORD *)SeOwnerRightsSid == *(_WORD *)v28
            && !memcmp(SeOwnerRightsSid, v28, 4 * (unsigned int)*((unsigned __int8 *)SeOwnerRightsSid + 1) + 8) )
          {
LABEL_35:
            v38 = *(_DWORD *)(v22 + 4);
            if ( a8 == 1 )
              *(_DWORD *)(a9 + 24) = v26 & ~v38;
            else
              AuthzBasepAddAccessTypeList(a9, a8, 0, v21, v38, 0);
            goto LABEL_22;
          }
          if ( v27 && v28 )
          {
            v29 = v28[1];
            v30 = 0;
            a4 = *(unsigned __int16 *)v28;
            v62 = *(_WORD *)v28;
            v60 = 0;
            v31 = 4 * v29 + 8;
            LODWORD(v29) = v28[4 * v29 + 4];
            v64 = v31;
            for ( i = *(_QWORD *)(v27 + 8 * (v29 & 0xF) + 16) & *(_QWORD *)(v27
                                                                          + 8
                                                                          * ((unsigned __int64)(unsigned int)v29 >> 4)
                                                                          + 144); i; v60 = v30 )
            {
              LOBYTE(v34) = i;
              if ( (_BYTE)i )
              {
                v35 = *(_QWORD *)(v27 + 8);
                v36 = v30;
                v70 = v35;
                v69 = v30;
                while ( 1 )
                {
                  v68 = SidHashByteToIndexLookupTable[(unsigned __int8)v34];
                  v37 = v35 + 16LL * (unsigned int)(v36 + v68);
                  if ( **(_WORD **)v37 == (_WORD)a4 )
                  {
                    if ( !memcmp(v28, *(const void **)v37, v31) )
                    {
LABEL_31:
                      if ( !a11 && v37 == *(_QWORD *)(v27 + 8) && (*(_DWORD *)(v37 + 8) & 0x10) == 0
                        || (*(_DWORD *)(v37 + 8) & 4) != 0 )
                      {
                        v26 = v67;
                        goto LABEL_35;
                      }
                      goto LABEL_22;
                    }
                    v35 = v70;
                    a4 = v62;
                    v31 = v64;
                  }
                  v36 = v69;
                  v34 = (unsigned __int8)v34 ^ (1 << v68);
                  if ( !(_BYTE)v34 )
                  {
                    v30 = v60;
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
              v53 = 64;
              v54 = *(_QWORD *)(v27 + 8);
              v70 = v54;
              do
              {
                v37 = v54 + 16LL * v53;
                if ( **(_WORD **)v37 == (_WORD)a4 )
                {
                  if ( !memcmp(v28, *(const void **)v37, v31) )
                    goto LABEL_31;
                  v54 = v70;
                  a4 = v62;
                  v31 = v64;
                }
                ++v53;
              }
              while ( v53 < v33 );
            }
          }
LABEL_22:
          v16 = v73;
          goto LABEL_23;
        }
        if ( *(_BYTE *)v22 != 9 )
          goto LABEL_23;
      }
      v25 = *(_BYTE *)v22;
      if ( !*(_BYTE *)v22 )
        goto LABEL_12;
      switch ( v25 )
      {
        case 5:
          v55 = *(_DWORD *)(v22 + 8);
          if ( (v55 & 1) != 0 && v22 != -12 )
          {
            if ( a10
              && (unsigned __int8)SepSidInToken(v14, v23, 8LL * (v55 & 2) + v22 + 28, 0LL, v20, a12)
              && (unsigned __int8)AuthzBasepObjectInTypeList(v22 + 12, a9, a8, &v63) )
            {
              AuthzBasepAddAccessTypeList(a9, a8, v63, v21, *(_DWORD *)(v22 + 4), 0);
            }
            break;
          }
          v56 = SepSidInToken(
                  v14,
                  v23,
                  ((*(_DWORD *)(v22 + 8) & 1) != 0 ? 0x10 : 0) + 8LL * (v55 & 2) + v22 + 12,
                  0LL,
                  v20,
                  a12);
          goto LABEL_119;
        case 4:
          if ( (unsigned __int8)SepSidInToken(
                                  v14,
                                  v23,
                                  v22 + 4 * (unsigned int)*(unsigned __int8 *)(v22 + 13) + 8 + 12LL,
                                  0LL,
                                  v20,
                                  a12) )
          {
            v56 = SepSidInToken(a3, 0LL, v22 + 12, 0LL, v20, a12);
LABEL_119:
            if ( v56 )
            {
              v57 = *(_DWORD *)(v22 + 4);
              if ( a8 == 1 )
                *(_DWORD *)(a9 + 24) &= ~v57;
              else
                AuthzBasepAddAccessTypeList(a9, a8, 0, v21, v57, 0);
            }
          }
          break;
        case 1:
          LOBYTE(a4) = 1;
          if ( !(unsigned __int8)SepSidInToken(v14, v23, v22 + 8, a4, v20, a12) )
            break;
LABEL_78:
          result = *(unsigned int *)(v22 + 4);
          if ( ((unsigned int)result & *(_DWORD *)(a9 + 24)) != 0 )
            return result;
          break;
        case 6:
          LOBYTE(a4) = 1;
          if ( !(unsigned __int8)SepSidInToken(
                                   v14,
                                   v23,
                                   16LL * (*(_DWORD *)(v22 + 8) & 1) + 8LL * (*(_DWORD *)(v22 + 8) & 2) + v22 + 12,
                                   a4,
                                   v20,
                                   a12) )
            break;
          if ( (*(_DWORD *)(v22 + 8) & 1) == 0 || v22 == -12 || !a10 )
            goto LABEL_78;
          if ( (unsigned __int8)AuthzBasepObjectInTypeList(v22 + 12, a9, a8, &v63) )
          {
            result = *(unsigned int *)(a9 + 48LL * v63 + 24);
            if ( ((unsigned int)result & *(_DWORD *)(v22 + 4)) != 0 )
              return result;
          }
          break;
        case 9:
          v47 = 4 * *(unsigned __int8 *)(v22 + 9) + 8;
          if ( *(unsigned __int16 *)(v22 + 2) - v47 != 8 )
          {
            if ( a5 && !*a6 )
              AuthzBasepInitializeResourceClaimsFromSacl(a5, a6);
            v48 = *(_QWORD **)(v14 + 1096);
            v49 = v48 ? v48[75] : 0LL;
            v50 = v48 ? v48[73] : 0LL;
            v51 = v48 ? v48[74] : 0LL;
            v52 = v48 ? v48[72] : 0LL;
            AuthzBasepEvaluateAceCondition(
              v14,
              *(_QWORD *)(v14 + 776),
              *a6,
              v52,
              v51,
              v50,
              v49,
              (_DWORD *)(v22 + v47 + 8LL),
              *(unsigned __int16 *)(v22 + 2) - v47 - 8,
              0,
              v20,
              &v66);
            if ( v66 == 1 )
            {
              if ( v16 && !v20 && v59 )
              {
                LODWORD(v39) = v22 + 8;
                if ( (unsigned __int8)SepIsPackageSid(v22 + 8) )
                {
                  v42 = a13;
                  v43 = (int *)(a13 + 4);
                  SepMatchPackage(v14, v61, v22 + 8, *(unsigned int *)(v22 + 4), a13 + 17, a13 + 4, a13 + 16);
LABEL_52:
                  v44 = *v43;
LABEL_70:
                  v46 = ~v44;
                  v59 &= v46;
                  *(_DWORD *)v42 &= v46;
                  goto LABEL_22;
                }
                if ( (unsigned __int8)SepIsCapabilitySid(v22 + 8) )
                  goto LABEL_51;
                v16 = v73;
              }
              if ( *(_DWORD *)(a9 + 24) && (unsigned __int8)SepSidInToken(v14, v23, v22 + 8, 0LL, v20, a12) )
                AuthzBasepAddAccessTypeList(a9, a8, 0, v21, *(_DWORD *)(v22 + 4), 0);
            }
          }
          break;
      }
LABEL_23:
      ++v21;
      v20 = a11;
      v22 += *(unsigned __int16 *)(v22 + 2);
      result = v65;
      v14 = a2;
      v23 = a7;
      v13 = v59;
    }
    while ( v21 < v65 );
  }
  return result;
}
