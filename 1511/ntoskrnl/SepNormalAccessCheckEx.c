/*
 * XREFs of SepNormalAccessCheckEx @ 0x140135D0C
 * Callers:
 *     SepAccessCheckEx @ 0x1401359B4 (SepAccessCheckEx.c)
 * Callees:
 *     SepSidInToken @ 0x140003818 (SepSidInToken.c)
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

void __fastcall SepNormalAccessCheckEx(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6,
        int a7,
        unsigned int a8,
        __int64 a9,
        int a10,
        char a11,
        char a12,
        char a13,
        _DWORD *a14)
{
  unsigned int v14; // ebp
  int v16; // r14d
  __int64 v18; // rsi
  bool v19; // dl
  _DWORD *v20; // rax
  __int64 v21; // rcx
  _DWORD *v22; // r13
  char v23; // bl
  unsigned int v24; // r12d
  __int64 v25; // rdi
  bool v26; // zf
  int v27; // ecx
  char v28; // al
  bool v29; // zf
  __int64 v30; // r8
  __int64 v31; // rcx
  __int64 v32; // r11
  __int64 v33; // rbx
  __int64 v34; // r11
  _DWORD *v35; // rbx
  int v36; // eax
  int v37; // edx
  int v38; // eax
  __int64 v39; // rbx
  __int64 v40; // rcx
  int v41; // eax
  bool v42; // zf
  unsigned int v43; // ebx
  _QWORD *v44; // rax
  __int64 v45; // r11
  __int64 v46; // r10
  __int64 v47; // r8
  __int64 v48; // r9
  unsigned int v49; // edx
  __int64 v50; // rcx
  unsigned int v51; // ebx
  _QWORD *v52; // rax
  __int64 v53; // r11
  __int64 v54; // r10
  __int64 v55; // r8
  __int64 v56; // r9
  unsigned int v57; // edx
  __int64 v58; // rcx
  unsigned int v59; // [rsp+60h] [rbp-48h]
  bool v60; // [rsp+64h] [rbp-44h]
  int v61; // [rsp+B8h] [rbp+10h]
  unsigned int v63; // [rsp+C8h] [rbp+20h] BYREF

  v14 = a8;
  v16 = 0;
  v61 = 0;
  v18 = a9;
  v59 = *(unsigned __int16 *)(a4 + 4);
  v19 = (*(_DWORD *)(a2 + 200) & 0x2000) == 0;
  v60 = v19;
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
  v22 = a14;
  v23 = a11;
  if ( v19 && !a11 )
  {
    v16 = a1 | *a14;
    v61 = v16;
  }
  v24 = 0;
  v25 = a4 + 8;
  v26 = v59 == 0;
  if ( v59 )
  {
    while ( 1 )
    {
      v27 = *(_DWORD *)(v18 + 24);
      if ( !v27 && !v16 )
      {
LABEL_20:
        v26 = v24 == v59;
        break;
      }
      if ( (*(_BYTE *)(v25 + 1) & 8) == 0 )
      {
        if ( !v27 )
        {
          if ( !*(_BYTE *)v25 )
          {
LABEL_10:
            v29 = !v19;
LABEL_11:
            if ( !v29 && !v23 && v16 )
            {
              if ( SepIsPackageSid(v25 + 8) )
              {
                v35 = v22 + 1;
                SepMatchPackage(a2, v61, v25 + 8, *(_DWORD *)(v25 + 4), (_BYTE *)v22 + 17, v22 + 1, (_BYTE *)v22 + 16);
LABEL_38:
                v36 = ~*v35;
                v16 &= v36;
                *v22 &= v36;
LABEL_39:
                v23 = a11;
                goto LABEL_17;
              }
              if ( SepIsCapabilitySid(v25 + 8) )
              {
                v35 = v22 + 2;
                SepMatchCapability(a2, v61, (void *)(v25 + 8), *(_DWORD *)(v25 + 4), (_BYTE *)v22 + 18, v22 + 2);
                goto LABEL_38;
              }
              v14 = a8;
            }
            if ( !*(_DWORD *)(v18 + 24) )
              goto LABEL_17;
            v30 = v25 + 8;
LABEL_14:
            v31 = a2;
LABEL_15:
            if ( (unsigned __int8)SepSidInToken(v31, 0LL, v30, 0LL, v23, a12) )
              AuthzBasepAddAccessTypeList(v18, v14, 0, v24, *(_DWORD *)(v25 + 4), 0);
            goto LABEL_17;
          }
          if ( *(_BYTE *)v25 != 9 )
            goto LABEL_17;
        }
        v28 = *(_BYTE *)v25;
        if ( !*(_BYTE *)v25 )
          goto LABEL_10;
        switch ( v28 )
        {
          case 5:
            v37 = *(_DWORD *)(v25 + 8);
            v38 = v37 & 1;
            if ( (v37 & 1) != 0 )
              v39 = v25 + 12;
            else
              v39 = 0LL;
            if ( v39 )
            {
              if ( a10
                && (unsigned __int8)SepSidInToken(
                                      a2,
                                      0LL,
                                      (v38 != 0 ? 0x10 : 0) + 8LL * (v37 & 2) + v25 + 12,
                                      0LL,
                                      a11,
                                      a12)
                && (unsigned __int8)AuthzBasepObjectInTypeList(v39, v18, v14, &v63) )
              {
                AuthzBasepAddAccessTypeList(v18, v14, v63, v24, *(_DWORD *)(v25 + 4), 0);
              }
              goto LABEL_39;
            }
            v23 = a11;
            v30 = (v38 != 0 ? 0x10 : 0) + 8LL * (v37 & 2) + v25 + 12;
            goto LABEL_14;
          case 4:
            if ( !(unsigned __int8)SepSidInToken(
                                     a2,
                                     0LL,
                                     v25 + 4 * (unsigned int)*(unsigned __int8 *)(v25 + 13) + 8 + 12LL,
                                     0LL,
                                     v23,
                                     a12) )
              break;
            v31 = a3;
            v30 = v25 + 12;
            goto LABEL_15;
          case 1:
LABEL_60:
            LOBYTE(a4) = 1;
            if ( (unsigned __int8)SepSidInToken(a2, 0LL, v25 + 8, a4, v23, a12) )
            {
              v41 = *(_DWORD *)(v25 + 4);
              if ( (v41 & *(_DWORD *)(v18 + 24)) != 0 )
              {
                AuthzBasepSetAccessReasons(*(_DWORD *)(v18 + 24) & v41, 0x20000, v24, *(_QWORD *)(v18 + 40), 0);
                goto LABEL_20;
              }
            }
            break;
          case 6:
            LOBYTE(a4) = 1;
            if ( !(unsigned __int8)SepSidInToken(
                                     a2,
                                     0LL,
                                     16LL * (*(_DWORD *)(v25 + 8) & 1) + 8LL * (*(_DWORD *)(v25 + 8) & 2) + v25 + 12,
                                     a4,
                                     v23,
                                     a12) )
              break;
            if ( (*(_DWORD *)(v25 + 8) & 1) != 0 )
              v40 = v25 + 12;
            else
              v40 = 0LL;
            if ( v40 && a10 )
            {
              if ( !(unsigned __int8)AuthzBasepObjectInTypeList(v40, v18, v14, &v63) )
                break;
              v42 = (*(_DWORD *)(v18 + 48LL * v63 + 24) & *(_DWORD *)(v25 + 4)) == 0;
            }
            else
            {
              v42 = (*(_DWORD *)(v25 + 4) & *(_DWORD *)(v18 + 24)) == 0;
            }
            if ( !v42 )
              goto LABEL_20;
            break;
          case 9:
            v43 = 4 * *(unsigned __int8 *)(v25 + 9) + 8;
            if ( *(unsigned __int16 *)(v25 + 2) - v43 == 8 )
              goto LABEL_39;
            if ( a5 && !*a6 )
              AuthzBasepInitializeResourceClaimsFromSacl(a5, a6);
            v44 = *(_QWORD **)(a2 + 1096);
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
              v48 = 0LL;
            v49 = *(unsigned __int16 *)(v25 + 2) - v43 - 8;
            v50 = v43;
            v23 = a11;
            AuthzBasepEvaluateAceCondition(
              a2,
              *(_QWORD *)(a2 + 776),
              *a6,
              v48,
              v47,
              v46,
              v45,
              (_DWORD *)(v25 + v50 + 8),
              v49,
              0,
              a11,
              &a7);
            if ( a7 == 1 )
            {
              v29 = !v60;
              goto LABEL_11;
            }
            break;
          default:
            if ( a13 && v28 == 10 && KeGetCurrentIrql() < 2u )
            {
              v51 = 4 * *(unsigned __int8 *)(v25 + 9) + 8;
              if ( *(unsigned __int16 *)(v25 + 2) - v51 == 8 )
                goto LABEL_39;
              if ( a5 && !*a6 )
                AuthzBasepInitializeResourceClaimsFromSacl(a5, a6);
              v52 = *(_QWORD **)(a2 + 1096);
              v53 = v52 ? v52[75] : 0LL;
              v54 = v52 ? v52[73] : 0LL;
              v55 = v52 ? v52[74] : 0LL;
              v56 = v52 ? v52[72] : 0LL;
              v57 = *(unsigned __int16 *)(v25 + 2) - v51 - 8;
              v58 = v51;
              v23 = a11;
              AuthzBasepEvaluateAceCondition(
                a2,
                *(_QWORD *)(a2 + 776),
                *a6,
                v56,
                v55,
                v54,
                v53,
                (_DWORD *)(v25 + v58 + 8),
                v57,
                1,
                a11,
                &a7);
              if ( ((a7 + 1) & 0xFFFFFFFD) == 0 )
                goto LABEL_60;
            }
            break;
        }
      }
LABEL_17:
      ++v24;
      v14 = a8;
      v25 += *(unsigned __int16 *)(v25 + 2);
      v26 = v24 == v59;
      if ( v24 >= v59 )
        break;
      v19 = v60;
    }
  }
  if ( v26 )
  {
    v32 = v18 + 24;
    if ( *(_DWORD *)(v18 + 24) )
    {
      if ( v14 )
      {
        v33 = v14;
        do
        {
          AuthzBasepSetAccessReasons(*(_DWORD *)v32, 0x800000, 0, *(_QWORD *)(v32 + 16), 0);
          v32 = v34 + 48;
          --v33;
        }
        while ( v33 );
      }
    }
  }
}
