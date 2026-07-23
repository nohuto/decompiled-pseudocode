/*
 * XREFs of SepMaximumAccessCheckEx @ 0x14012BB10
 * Callers:
 *     SepAccessCheckEx @ 0x1401359B4 (SepAccessCheckEx.c)
 * Callees:
 *     SepSidInToken @ 0x140003818 (SepSidInToken.c)
 *     SepSidInTokenSidHash @ 0x14000383C (SepSidInTokenSidHash.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x1400050D4 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     AuthzBasepEvaluateAceCondition @ 0x140006054 (AuthzBasepEvaluateAceCondition.c)
 *     AuthzBasepAddAccessTypeList @ 0x1400D5BE4 (AuthzBasepAddAccessTypeList.c)
 *     AuthzBasepSetAccessReasons @ 0x1400D5CC0 (AuthzBasepSetAccessReasons.c)
 *     SepIsPackageSid @ 0x1400E2D40 (SepIsPackageSid.c)
 *     SepIsCapabilitySid @ 0x1400E34E4 (SepIsCapabilitySid.c)
 *     SepMatchPackage @ 0x1400E65D8 (SepMatchPackage.c)
 *     SepMatchCapability @ 0x1400E8724 (SepMatchCapability.c)
 *     AuthzBasepObjectInTypeList @ 0x14021A1C4 (AuthzBasepObjectInTypeList.c)
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
  char v15; // r12
  __int64 v17; // r14
  __int64 v18; // rbp
  int v19; // esi
  __int64 result; // rax
  unsigned int v21; // r13d
  char *v22; // rdi
  char v23; // al
  _SID_AND_ATTRIBUTES_HASH *v24; // rcx
  char v25; // al
  unsigned int v26; // r8d
  _DWORD *v27; // r11
  __int64 v28; // rbx
  int *v29; // r11
  int v30; // ecx
  int v31; // r8d
  void *v32; // rsi
  _DWORD *v33; // rbx
  int v34; // edx
  int v35; // eax
  char *v36; // rbx
  __int64 v37; // r8
  char v38; // bl
  char *v39; // rcx
  __int64 v40; // r9
  int v41; // ecx
  unsigned int v42; // ebx
  _QWORD *v43; // rax
  __int64 v44; // r11
  __int64 v45; // r10
  __int64 v46; // r8
  __int64 v47; // r9
  unsigned int v48; // ebx
  __int64 *v49; // rsi
  _QWORD *v50; // rax
  __int64 v51; // r11
  __int64 v52; // r10
  __int64 v53; // r8
  __int64 v54; // r9
  _DWORD *v55; // rcx
  int v56; // edx
  __int64 v57; // r8
  int v58; // [rsp+28h] [rbp-80h]
  int v59; // [rsp+B0h] [rbp+8h] BYREF
  __int64 v60; // [rsp+B8h] [rbp+10h]
  unsigned int v61; // [rsp+C0h] [rbp+18h]
  __int64 v62; // [rsp+C8h] [rbp+20h]

  v62 = a4;
  v60 = a2;
  v15 = a11;
  v17 = a8;
  v18 = a7;
  v19 = *(_DWORD *)(a1 + 200) >> 13;
  LOBYTE(v19) = (*(_DWORD *)(a1 + 200) & 0x2000) == 0;
  a6 = v19;
  if ( (_BYTE)a11 && a7 )
  {
    v27 = (_DWORD *)(a8 + 28);
    v28 = a7;
    do
    {
      AuthzBasepSetAccessReasons(*v27, 0x800000, 0, *(_QWORD *)(v27 + 3), 1);
      v30 = *v29;
      *v29 &= v31;
      *(v29 - 1) = v30;
      v27 = v29 + 12;
      --v28;
    }
    while ( v28 );
    a4 = v62;
  }
  result = *(unsigned __int16 *)(a3 + 4);
  v21 = 0;
  v22 = (char *)(a3 + 8);
  v61 = result;
  if ( (_DWORD)result )
  {
    while ( 1 )
    {
      if ( (v22[1] & 8) != 0 )
        goto LABEL_13;
      v23 = *v22;
      if ( !*v22 )
      {
        if ( (_BYTE)v19 )
        {
          if ( v15 )
            goto LABEL_26;
          v32 = v22 + 8;
          if ( SepIsPackageSid((__int64)(v22 + 8)) )
            goto LABEL_25;
          if ( SepIsCapabilitySid((__int64)(v22 + 8)) )
          {
LABEL_23:
            v33 = (_DWORD *)(a14 + 8);
            SepMatchCapability(a1, -1, v32, *((_DWORD *)v22 + 1), (_BYTE *)(a14 + 18), (_DWORD *)(a14 + 8));
LABEL_24:
            *(_DWORD *)a14 &= ~*v33;
            goto LABEL_13;
          }
LABEL_7:
          v24 = (_SID_AND_ATTRIBUTES_HASH *)(a1 + 232);
        }
        else
        {
          if ( !v15 )
            goto LABEL_7;
LABEL_26:
          v24 = (_SID_AND_ATTRIBUTES_HASH *)(a1 + 504);
        }
        v25 = SepSidInTokenSidHash(v24, 0LL, v22 + 8, 0, v15, a12);
        goto LABEL_9;
      }
      if ( v23 == 5 )
        break;
      if ( v23 != 4 )
      {
        if ( v23 == 1 )
          goto LABEL_97;
        if ( v23 == 6 )
        {
          LOBYTE(a4) = 1;
          if ( !(unsigned __int8)SepSidInToken(
                                   a1,
                                   0LL,
                                   (__int64)&v22[16 * (*((_DWORD *)v22 + 2) & 1) + 12 + 8 * (*((_DWORD *)v22 + 2) & 2)],
                                   a4,
                                   v15,
                                   a12) )
            goto LABEL_13;
          if ( (*((_DWORD *)v22 + 2) & 1) != 0 )
            v39 = v22 + 12;
          else
            v39 = 0LL;
          if ( v39 )
          {
            if ( !a9 )
            {
              v40 = *(_QWORD *)(v17 + 40);
              v41 = *((_DWORD *)v22 + 1) & ~*(_DWORD *)(v17 + 28);
              *(_DWORD *)(v17 + 32) |= v41;
              AuthzBasepSetAccessReasons(v41, 0x20000, v21, v40, 0);
              goto LABEL_13;
            }
            if ( !(unsigned __int8)AuthzBasepObjectInTypeList(v39, v17, (unsigned int)v18, &a11) )
              goto LABEL_13;
            v58 = 2;
LABEL_39:
            v26 = a11;
LABEL_12:
            AuthzBasepAddAccessTypeList(v17, (unsigned int)v18, v26, v21, *((_DWORD *)v22 + 1), v58);
            goto LABEL_13;
          }
LABEL_98:
          v58 = 2;
LABEL_11:
          v26 = 0;
          goto LABEL_12;
        }
        if ( v23 != 9 )
        {
          if ( !a13 )
            goto LABEL_13;
          if ( v23 != 10 )
            goto LABEL_13;
          if ( KeGetCurrentIrql() >= 2u )
            goto LABEL_13;
          v48 = 4 * (unsigned __int8)v22[9] + 8;
          if ( *((unsigned __int16 *)v22 + 1) - v48 == 8 )
            goto LABEL_13;
          v49 = a5;
          if ( a4 && !*a5 )
            AuthzBasepInitializeResourceClaimsFromSacl(a4, a5);
          v50 = *(_QWORD **)(a1 + 1096);
          v51 = v50 ? v50[75] : 0LL;
          v52 = v50 ? v50[73] : 0LL;
          v53 = v50 ? v50[74] : 0LL;
          v54 = v50 ? v50[72] : 0LL;
          AuthzBasepEvaluateAceCondition(
            a1,
            *(_QWORD *)(a1 + 776),
            *v49,
            v54,
            v53,
            v52,
            v51,
            &v22[v48 + 8],
            *((unsigned __int16 *)v22 + 1) - v48 - 8,
            1,
            v15,
            &v59);
          if ( ((v59 + 1) & 0xFFFFFFFD) != 0 )
            goto LABEL_13;
LABEL_97:
          LOBYTE(a4) = 1;
          if ( !(unsigned __int8)SepSidInToken(a1, 0LL, (__int64)(v22 + 8), a4, v15, a12) )
            goto LABEL_13;
          goto LABEL_98;
        }
        v42 = 4 * (unsigned __int8)v22[9] + 8;
        if ( *((unsigned __int16 *)v22 + 1) - v42 == 8 )
          goto LABEL_13;
        if ( a4 && !*a5 )
          AuthzBasepInitializeResourceClaimsFromSacl(a4, a5);
        v43 = *(_QWORD **)(a1 + 1096);
        v44 = v43 ? v43[75] : 0LL;
        v45 = v43 ? v43[73] : 0LL;
        v46 = v43 ? v43[74] : 0LL;
        v47 = v43 ? v43[72] : 0LL;
        AuthzBasepEvaluateAceCondition(
          a1,
          *(_QWORD *)(a1 + 776),
          *a5,
          v47,
          v46,
          v45,
          v44,
          &v22[v42 + 8],
          *((unsigned __int16 *)v22 + 1) - v42 - 8,
          0,
          v15,
          &v59);
        if ( v59 != 1 )
          goto LABEL_13;
        if ( (_BYTE)v19 && !v15 )
        {
          v32 = v22 + 8;
          if ( SepIsPackageSid((__int64)(v22 + 8)) )
          {
LABEL_25:
            v33 = (_DWORD *)(a14 + 4);
            SepMatchPackage(
              a1,
              -1,
              (__int64)v32,
              *((_DWORD *)v22 + 1),
              (_BYTE *)(a14 + 17),
              (_DWORD *)(a14 + 4),
              (_BYTE *)(a14 + 16));
            goto LABEL_24;
          }
          if ( SepIsCapabilitySid((__int64)(v22 + 8)) )
            goto LABEL_23;
        }
        v37 = (__int64)(v22 + 8);
        goto LABEL_34;
      }
      v38 = a12;
      if ( !(unsigned __int8)SepSidInToken(a1, 0LL, (__int64)&v22[4 * (unsigned __int8)v22[13] + 20], 0LL, v15, a12) )
        goto LABEL_13;
      v25 = SepSidInTokenSidHash((PSID_AND_ATTRIBUTES_HASH)(v60 + 232), 0LL, v22 + 12, 0, 0, v38);
LABEL_9:
      if ( v25 )
      {
        v58 = 1;
        goto LABEL_11;
      }
LABEL_13:
      result = *((unsigned __int16 *)v22 + 1);
      ++v21;
      LOBYTE(v19) = a6;
      v22 += result;
      a4 = v62;
      if ( v21 >= v61 )
        goto LABEL_14;
    }
    v34 = *((_DWORD *)v22 + 2);
    v35 = v34 & 1;
    if ( (v34 & 1) != 0 )
      v36 = v22 + 12;
    else
      v36 = 0LL;
    if ( v36 )
    {
      if ( !a9
        || !(unsigned __int8)SepSidInToken(
                               a1,
                               0LL,
                               (__int64)&v22[8 * (v34 & 2) + 12 + (v35 != 0 ? 0x10 : 0)],
                               0LL,
                               v15,
                               a12)
        || !(unsigned __int8)AuthzBasepObjectInTypeList(v36, v17, (unsigned int)v18, &a11) )
      {
        goto LABEL_13;
      }
      v58 = 1;
      goto LABEL_39;
    }
    v37 = (__int64)&v22[8 * (v34 & 2) + 12 + (v35 != 0 ? 0x10 : 0)];
LABEL_34:
    v25 = SepSidInToken(a1, 0LL, v37, 0LL, v15, a12);
    goto LABEL_9;
  }
LABEL_14:
  if ( v15 && (_DWORD)v18 )
  {
    v55 = (_DWORD *)(v17 + 28);
    v56 = ~a10;
    v57 = v18;
    do
    {
      result = *(v55 - 1) & (*v55 | (unsigned int)v56);
      *v55 = result;
      v55 += 12;
      --v57;
    }
    while ( v57 );
  }
  return result;
}
