/*
 * XREFs of SepNormalAccessCheck @ 0x140061FC0
 * Callers:
 *     SepAccessCheck @ 0x140063630 (SepAccessCheck.c)
 * Callees:
 *     SepMatchPackage @ 0x14000DCB8 (SepMatchPackage.c)
 *     RtlEqualSid @ 0x14000F0F0 (RtlEqualSid.c)
 *     AuthzBasepAddAccessTypeList @ 0x140092320 (AuthzBasepAddAccessTypeList.c)
 *     AuthzBasepEvaluateAceCondition @ 0x14009E524 (AuthzBasepEvaluateAceCondition.c)
 *     SepIsPackageSid @ 0x14009F008 (SepIsPackageSid.c)
 *     SepIsCapabilitySid @ 0x14009F6D4 (SepIsCapabilitySid.c)
 *     SepMatchCapability @ 0x1400A5D08 (SepMatchCapability.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x1400AAE9C (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     SepSidInToken @ 0x1400C2444 (SepSidInToken.c)
 *     memcmp @ 0x14014E450 (memcmp.c)
 *     RtlCompareMemory @ 0x1401679D0 (RtlCompareMemory.c)
 *     AuthzBasepObjectInTypeList @ 0x1402342B4 (AuthzBasepObjectInTypeList.c)
 */

__int64 __fastcall SepNormalAccessCheck(
        int a1,
        __int64 a2,
        int a3,
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
  __int64 v14; // r13
  bool v16; // bp
  unsigned int v17; // r15d
  __int64 result; // rax
  _DWORD *v19; // rax
  __int64 v20; // rcx
  char v21; // r14
  char *v22; // rsi
  int v23; // r10d
  char v24; // al
  int v25; // ebp
  __int64 v26; // rbx
  unsigned __int8 *v27; // r15
  int v28; // eax
  unsigned __int8 v29; // r8
  unsigned int v30; // r10d
  unsigned int v31; // edx
  unsigned __int64 v32; // rbp
  unsigned int v33; // ebp
  int v34; // r12d
  __int64 v35; // r13
  int v36; // ecx
  __int64 v37; // r14
  int v38; // eax
  _BYTE *v39; // rbp
  __int64 v40; // rbx
  __int64 v41; // rbx
  _DWORD *v42; // rbx
  int v43; // eax
  unsigned int v44; // ebx
  _QWORD *v45; // rax
  __int64 v46; // r11
  __int64 v47; // r10
  __int64 v48; // r8
  __int64 v49; // r9
  int v50; // eax
  BOOLEAN v51; // al
  unsigned int v52; // r12d
  __int64 v53; // r13
  int v54; // edx
  _DWORD *v56; // r14
  _DWORD *v57; // rbx
  int v58; // eax
  __int64 v59; // [rsp+20h] [rbp-A8h]
  __int64 v60; // [rsp+28h] [rbp-A0h]
  unsigned __int8 v61; // [rsp+60h] [rbp-68h]
  unsigned int v62; // [rsp+64h] [rbp-64h]
  int v63; // [rsp+68h] [rbp-60h]
  unsigned __int16 v64; // [rsp+6Ch] [rbp-5Ch]
  int v65; // [rsp+70h] [rbp-58h]
  unsigned int v66; // [rsp+74h] [rbp-54h] BYREF
  unsigned int v67; // [rsp+78h] [rbp-50h]
  int v68; // [rsp+7Ch] [rbp-4Ch]
  int v69; // [rsp+80h] [rbp-48h] BYREF
  unsigned int v70; // [rsp+84h] [rbp-44h]
  int v71; // [rsp+88h] [rbp-40h]
  int v72; // [rsp+8Ch] [rbp-3Ch]
  bool v75; // [rsp+E8h] [rbp+20h]

  v13 = 0;
  v14 = a2;
  v63 = 0;
  v65 = 0;
  v16 = (*(_DWORD *)(a2 + 200) & 0x2000) == 0;
  v17 = a8;
  result = *(unsigned __int16 *)(a4 + 4);
  v75 = v16;
  v69 = -1;
  v70 = result;
  if ( a8 )
  {
    v19 = (_DWORD *)(a9 + 24);
    v20 = a8;
    do
    {
      *v19 = a1;
      v19 += 12;
      --v20;
    }
    while ( v20 );
    result = v70;
  }
  v21 = a11;
  if ( v16 && !a11 )
  {
    v13 = a1 | *(_DWORD *)a13;
    v63 = v13;
    v65 = v13;
  }
  v62 = 0;
  v22 = (char *)(a4 + 8);
  if ( !(_DWORD)result )
    return result;
  v23 = (int)a7;
  do
  {
    result = *(unsigned int *)(a9 + 24);
    if ( !(_DWORD)result && !v13 )
      return result;
    if ( (v22[1] & 8) != 0 )
      goto LABEL_26;
    if ( (_DWORD)result )
      goto LABEL_11;
    if ( *v22 )
    {
      if ( *v22 != 9 )
        goto LABEL_26;
LABEL_11:
      v24 = *v22;
      if ( !*v22 )
        goto LABEL_12;
      switch ( v24 )
      {
        case 5:
          v54 = *((_DWORD *)v22 + 2);
          if ( (v54 & 1) != 0 && v22 != (char *)-12LL )
          {
            if ( a10 )
            {
              LOBYTE(v60) = a12;
              LOBYTE(v59) = a11;
              if ( (unsigned __int8)SepSidInToken(v14, v23, 8 * (v54 & 2u) + (_DWORD)v22 + 28, 0, v59, v60)
                && (unsigned __int8)AuthzBasepObjectInTypeList(v22 + 12, a9, v17, &v66) )
              {
                AuthzBasepAddAccessTypeList(a9, v17, v66, v62, *((_DWORD *)v22 + 1), 0);
              }
              goto LABEL_24;
            }
            goto LABEL_26;
          }
          LOBYTE(v60) = a12;
          LOBYTE(v59) = a11;
          if ( !(unsigned __int8)SepSidInToken(
                                   v14,
                                   v23,
                                   ((*((_DWORD *)v22 + 2) & 1) != 0 ? 0x10 : 0) + 8 * (v54 & 2u) + (_DWORD)v22 + 12,
                                   0,
                                   v59,
                                   v60) )
            goto LABEL_24;
          v50 = *((_DWORD *)v22 + 1);
          if ( v17 == 1 )
          {
            *(_DWORD *)(a9 + 24) &= ~v50;
            goto LABEL_24;
          }
          break;
        case 4:
          LOBYTE(v60) = a12;
          LOBYTE(v59) = a11;
          if ( !(unsigned __int8)SepSidInToken(
                                   v14,
                                   v23,
                                   (unsigned int)v22 + 4 * (unsigned __int8)v22[13] + 20,
                                   0,
                                   v59,
                                   v60) )
            goto LABEL_24;
          LOBYTE(v60) = a12;
          LOBYTE(v59) = a11;
          if ( !(unsigned __int8)SepSidInToken(a3, 0, (int)v22 + 12, 0, v59, v60) )
            goto LABEL_24;
          v50 = *((_DWORD *)v22 + 1);
          if ( v17 == 1 )
          {
            *(_DWORD *)(a9 + 24) &= ~v50;
            goto LABEL_24;
          }
          break;
        case 1:
          LOBYTE(v60) = a12;
          LOBYTE(a4) = 1;
          LOBYTE(v59) = a11;
          if ( !(unsigned __int8)SepSidInToken(v14, v23, (int)v22 + 8, a4, v59, v60) )
            goto LABEL_24;
          goto LABEL_74;
        case 6:
          LOBYTE(a4) = 1;
          LOBYTE(v60) = a12;
          LOBYTE(v59) = a11;
          if ( !(unsigned __int8)SepSidInToken(
                                   v14,
                                   v23,
                                   16 * (*((_DWORD *)v22 + 2) & 1) + 8 * (*((_DWORD *)v22 + 2) & 2u) + (_DWORD)v22 + 12,
                                   a4,
                                   v59,
                                   v60) )
            goto LABEL_24;
          if ( (*((_DWORD *)v22 + 2) & 1) != 0 && v22 != (char *)-12LL && a10 )
          {
            if ( !(unsigned __int8)AuthzBasepObjectInTypeList(v22 + 12, a9, v17, &v66) )
              goto LABEL_24;
            result = *(unsigned int *)(a9 + 48LL * v66 + 24);
            if ( ((unsigned int)result & *((_DWORD *)v22 + 1)) == 0 )
              goto LABEL_24;
            return result;
          }
LABEL_74:
          result = *((unsigned int *)v22 + 1);
          if ( ((unsigned int)result & *(_DWORD *)(a9 + 24)) == 0 )
            goto LABEL_24;
          return result;
        case 9:
          v44 = 4 * (unsigned __int8)v22[9] + 8;
          if ( *((unsigned __int16 *)v22 + 1) - v44 == 8 )
            goto LABEL_26;
          if ( a5 && !*a6 )
            AuthzBasepInitializeResourceClaimsFromSacl(a5, a6);
          v45 = *(_QWORD **)(v14 + 1096);
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
            LODWORD(v49) = 0;
          AuthzBasepEvaluateAceCondition(
            v14,
            *(_QWORD *)(v14 + 776),
            *a6,
            v49,
            v48,
            v47,
            v46,
            (__int64)&v22[v44 + 8],
            *((unsigned __int16 *)v22 + 1) - v44 - 8,
            0,
            a11,
            (__int64)&v69);
          if ( v69 != 1 )
            goto LABEL_24;
          if ( v16 && !a11 && v13 )
          {
            if ( (unsigned __int8)SepIsPackageSid(v22 + 8) )
            {
              v56 = (_DWORD *)a13;
              v57 = (_DWORD *)(a13 + 4);
              SepMatchPackage(
                v14,
                v65,
                (__int64)(v22 + 8),
                *((_DWORD *)v22 + 1),
                (_BYTE *)(a13 + 17),
                (_DWORD *)(a13 + 4),
                (_BYTE *)(a13 + 16));
LABEL_136:
              v58 = ~*v57;
              *v56 &= v58;
              v63 = v58 & v13;
              goto LABEL_23;
            }
            if ( (unsigned __int8)SepIsCapabilitySid(v22 + 8) )
            {
              v56 = (_DWORD *)a13;
              v57 = (_DWORD *)(a13 + 8);
              SepMatchCapability(v14, v65, (_DWORD)v22 + 8, *((_DWORD *)v22 + 1), a13 + 18, a13 + 8);
              goto LABEL_136;
            }
            v16 = v75;
          }
          if ( !*(_DWORD *)(a9 + 24) )
            goto LABEL_24;
          LOBYTE(v60) = a12;
          LOBYTE(v59) = a11;
          if ( !(unsigned __int8)SepSidInToken(v14, (_DWORD)a7, (int)v22 + 8, 0, v59, v60) )
            goto LABEL_24;
          v50 = *((_DWORD *)v22 + 1);
          break;
        default:
          goto LABEL_26;
      }
      AuthzBasepAddAccessTypeList(a9, v17, 0, v62, v50, 0);
      goto LABEL_24;
    }
LABEL_12:
    if ( v16 && !v21 && v13 )
    {
      v39 = v22 + 8;
      v40 = SePackagePrefixSid;
      if ( (unsigned __int8)v22[9] >= 2u
        && *v39 == *(_BYTE *)SePackagePrefixSid
        && RtlCompareMemory(v22 + 10, (const void *)(SePackagePrefixSid + 2), 6uLL) == 6
        && *((_DWORD *)v22 + 4) == *(_DWORD *)(v40 + 8) )
      {
        v42 = (_DWORD *)(a13 + 4);
        SepMatchPackage(
          v14,
          v65,
          (__int64)(v22 + 8),
          *((_DWORD *)v22 + 1),
          (_BYTE *)(a13 + 17),
          (_DWORD *)(a13 + 4),
          (_BYTE *)(a13 + 16));
        goto LABEL_62;
      }
      v41 = SeCapabilityPrefixSid;
      if ( (unsigned __int8)v22[9] >= 2u
        && *v39 == *(_BYTE *)SeCapabilityPrefixSid
        && RtlCompareMemory(v22 + 10, (const void *)(SeCapabilityPrefixSid + 2), 6uLL) == 6
        && *((_DWORD *)v22 + 4) == *(_DWORD *)(v41 + 8) )
      {
        v42 = (_DWORD *)(a13 + 8);
        SepMatchCapability(v14, v65, (_DWORD)v22 + 8, *((_DWORD *)v22 + 1), a13 + 18, a13 + 8);
LABEL_62:
        v43 = ~*v42;
        v63 = v43 & v13;
        *(_DWORD *)a13 &= v43;
LABEL_63:
        v16 = v75;
        goto LABEL_25;
      }
    }
    v25 = *(_DWORD *)(a9 + 24);
    v68 = v25;
    if ( !v25 )
      goto LABEL_63;
    if ( a11 )
      v26 = v14 + 504;
    else
      v26 = v14 + 232;
    v23 = (int)a7;
    v27 = (unsigned __int8 *)(v22 + 8);
    if ( a7 )
    {
      v51 = RtlEqualSid(SePrincipalSelfSid, v22 + 8);
      v23 = (int)a7;
      if ( v51 )
        v27 = a7;
    }
    if ( a12 && *(_WORD *)SeOwnerRightsSid == *(_WORD *)v27 )
    {
      if ( !memcmp(SeOwnerRightsSid, v27, 4 * (unsigned int)*((unsigned __int8 *)SeOwnerRightsSid + 1) + 8) )
      {
LABEL_38:
        v17 = a8;
        v38 = *((_DWORD *)v22 + 1);
        if ( a8 == 1 )
          *(_DWORD *)(a9 + 24) = v25 & ~v38;
        else
          AuthzBasepAddAccessTypeList(a9, a8, 0, v62, v38, 0);
        goto LABEL_23;
      }
      v23 = (int)a7;
    }
    if ( !v26 || !v27 )
    {
      v17 = a8;
      v16 = v75;
      v21 = a11;
      goto LABEL_26;
    }
    v28 = v27[1];
    v29 = 0;
    LODWORD(a4) = *(unsigned __int16 *)v27;
    v64 = *(_WORD *)v27;
    v61 = 0;
    v30 = 4 * v28 + 8;
    v67 = v30;
    v31 = v27[4 * v28 + 4];
    v32 = *(_QWORD *)(v26 + 8LL * (v31 & 0xF) + 16) & *(_QWORD *)(v26 + 8LL * (int)((v31 >> 4) + 16) + 16);
    if ( !v32 )
    {
LABEL_21:
      v33 = *(_DWORD *)v26;
      if ( *(_DWORD *)v26 > 0x40u )
      {
        v52 = 64;
        v53 = *(_QWORD *)(v26 + 8);
        do
        {
          v37 = v53 + 16LL * v52;
          if ( **(_WORD **)v37 == (_WORD)a4 )
          {
            if ( !memcmp(v27, *(const void **)v37, v30) )
              goto LABEL_34;
            LODWORD(a4) = v64;
            v30 = v67;
          }
          ++v52;
        }
        while ( v52 < v33 );
      }
      goto LABEL_22;
    }
    while ( 1 )
    {
      LOBYTE(v34) = v32;
      if ( (_BYTE)v32 )
        break;
LABEL_55:
      v29 += 8;
      v32 >>= 8;
      v61 = v29;
      if ( !v32 )
        goto LABEL_21;
    }
    v35 = *(_QWORD *)(v26 + 8);
    v36 = v29;
    v71 = v29;
    while ( 1 )
    {
      v72 = SidHashByteToIndexLookupTable[(unsigned __int8)v34];
      v37 = v35 + 16LL * (unsigned int)(v36 + v72);
      if ( **(_WORD **)v37 == (_WORD)a4 )
        break;
LABEL_58:
      v34 = (unsigned __int8)v34 ^ (1 << v72);
      if ( !(_BYTE)v34 )
      {
        v29 = v61;
        goto LABEL_55;
      }
    }
    if ( memcmp(v27, *(const void **)v37, v30) )
    {
      v36 = v71;
      LODWORD(a4) = v64;
      v30 = v67;
      goto LABEL_58;
    }
LABEL_34:
    if ( !a11 && v37 == *(_QWORD *)(v26 + 8) && (*(_DWORD *)(v37 + 8) & 0x10) == 0 || (*(_DWORD *)(v37 + 8) & 4) != 0 )
    {
      v25 = v68;
      goto LABEL_38;
    }
LABEL_22:
    v17 = a8;
LABEL_23:
    v16 = v75;
LABEL_24:
    v21 = a11;
LABEL_25:
    v23 = (int)a7;
LABEL_26:
    result = *((unsigned __int16 *)v22 + 1);
    v14 = a2;
    v22 += result;
    v13 = v63;
    ++v62;
  }
  while ( v62 < v70 );
  return result;
}
