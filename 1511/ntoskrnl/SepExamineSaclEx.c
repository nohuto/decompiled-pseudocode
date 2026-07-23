/*
 * XREFs of SepExamineSaclEx @ 0x140652A74
 * Callers:
 *     SepExamineGlobalSaclEx @ 0x140200A24 (SepExamineGlobalSaclEx.c)
 *     SepAccessCheckAndAuditAlarm @ 0x14046E620 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     SepSidInToken @ 0x140003818 (SepSidInToken.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x1400050D4 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     AuthzBasepEvaluateAceCondition @ 0x140006054 (AuthzBasepEvaluateAceCondition.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x14000D930 (AuthzBasepFreeSecurityAttributesList.c)
 *     memcmp @ 0x140144AB0 (memcmp.c)
 *     AuthzBasepObjectInTypeList @ 0x14021A1C4 (AuthzBasepObjectInTypeList.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     SepSetAuditInfoForObjectType @ 0x1406531EC (SepSetAuditInfoForObjectType.c)
 */

void __fastcall SepExamineSaclEx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        unsigned int a6,
        char a7,
        int *a8,
        _DWORD *a9,
        __int64 a10,
        char a11,
        _BYTE *a12,
        _BYTE *a13)
{
  _DWORD *v13; // r13
  __int64 v14; // r10
  _BYTE *v16; // r9
  __int64 v17; // r11
  _BYTE *v19; // r8
  char v20; // r12
  const void **v21; // rax
  unsigned __int8 *v22; // rsi
  int v23; // eax
  unsigned int v24; // edx
  char *v25; // r14
  char v26; // r15
  char v27; // al
  int v28; // ecx
  int v29; // edi
  bool v30; // zf
  bool v31; // zf
  unsigned int i; // ebx
  int v33; // edx
  int v34; // r12d
  _DWORD *v35; // rdi
  char *v36; // rbx
  char v37; // al
  int v38; // ecx
  unsigned int v39; // ebx
  int v40; // eax
  _WORD *v41; // rbx
  unsigned int v42; // edi
  unsigned int v43; // ecx
  _QWORD *v44; // rax
  __int64 v45; // r10
  __int64 v46; // r8
  __int64 v47; // rdx
  __int64 v48; // r9
  __int64 v49; // r9
  char v50; // al
  int v51; // ecx
  unsigned int j; // ebx
  int v53; // ecx
  unsigned int Size; // [rsp+60h] [rbp-78h]
  char Size_4; // [rsp+64h] [rbp-74h]
  int v56; // [rsp+68h] [rbp-70h] BYREF
  int v57; // [rsp+6Ch] [rbp-6Ch] BYREF
  unsigned int v58; // [rsp+70h] [rbp-68h]
  unsigned __int8 *v59; // [rsp+78h] [rbp-60h]
  _DWORD *v60; // [rsp+80h] [rbp-58h] BYREF
  char *v61; // [rsp+88h] [rbp-50h]
  unsigned int v62; // [rsp+E0h] [rbp+8h]

  v57 = -1;
  v13 = 0LL;
  v14 = a3;
  v60 = 0LL;
  v16 = a13;
  v17 = a2;
  Size = 0;
  v19 = a12;
  *a12 = 0;
  *a13 = 0;
  if ( a1 )
  {
    v58 = *(unsigned __int16 *)(a1 + 4);
    if ( v58 )
    {
      v20 = 0;
      Size_4 = 0;
      if ( (a4 & 0x2000000) != 0 )
      {
        v20 = 0x80;
        if ( *a8 >= 0 )
          v20 = 64;
        Size_4 = v20;
      }
      v21 = *(const void ***)(v14 + 152);
      v22 = (unsigned __int8 *)SeWorldSid;
      v59 = (unsigned __int8 *)SeWorldSid;
      if ( *(_WORD *)*v21 == *(_WORD *)SeAnonymousLogonSid )
      {
        v23 = memcmp(*v21, SeAnonymousLogonSid, 4 * *((unsigned __int8 *)SeAnonymousLogonSid + 1) + 8);
        v19 = a12;
        v16 = a13;
        v14 = a3;
        v17 = a2;
        if ( !v23 )
          Size = 4 * v22[1] + 8;
      }
      v24 = 0;
      v25 = (char *)(a1 + 8);
      v62 = 0;
      v61 = (char *)(a1 + 8);
      while ( 1 )
      {
        if ( (*v19 || *v16) && a6 <= 1 )
        {
LABEL_94:
          if ( v13 )
          {
            AuthzBasepFreeSecurityAttributesList(v13);
            ExFreePoolWithTag(v13, 0);
          }
          return;
        }
        v26 = v25[1];
        if ( (v26 & 8) == 0 )
        {
          v56 = -1;
          v27 = *v25;
          if ( *v25 == 2 )
          {
            LOBYTE(v16) = 1;
            if ( !(unsigned __int8)SepSidInToken(v14, a10, (__int64)(v25 + 8), (__int64)v16, 0, a11)
              && (!Size || *(_WORD *)v22 != *((_WORD *)v25 + 4) || memcmp(v22, v25 + 8, Size)) )
            {
              goto LABEL_90;
            }
            v29 = *((_DWORD *)v25 + 1);
            if ( a6 )
            {
              for ( i = 0; i < a6; ++i )
              {
                LOBYTE(v28) = v26;
                SepSetAuditInfoForObjectType(
                  v28,
                  v29,
                  a4,
                  a5,
                  a6,
                  a7,
                  i,
                  (__int64)a8,
                  (__int64)a9,
                  (__int64)a12,
                  (__int64)a13);
              }
              goto LABEL_34;
            }
            if ( *a8 >= 0 )
            {
              if ( (v26 & 0x40) == 0 )
                goto LABEL_90;
              if ( (*a9 & v29) == 0 )
              {
                v30 = v20 == 64;
LABEL_25:
                if ( !v30 )
                  goto LABEL_90;
              }
              goto LABEL_26;
            }
            if ( v26 >= 0 )
              goto LABEL_90;
            if ( (v29 & a4) == 0 )
            {
              v31 = v20 == (char)0x80;
LABEL_30:
              if ( !v31 )
                goto LABEL_90;
            }
            goto LABEL_31;
          }
          if ( v27 == 7 )
          {
            v33 = *((_DWORD *)v25 + 2);
            v34 = *((_DWORD *)v25 + 1);
            if ( (v33 & 1) != 0 )
              v35 = v25 + 12;
            else
              v35 = 0LL;
            LOBYTE(v16) = 1;
            v36 = &v25[8 * (v33 & 2) + 12 + ((*((_DWORD *)v25 + 2) & 1) != 0 ? 0x10 : 0)];
            v37 = SepSidInToken(v14, a10, (__int64)v36, (__int64)v16, 0, a11);
            if ( v35 )
            {
              if ( v37 || Size && *(_WORD *)v22 == *(_WORD *)v36 && !memcmp(v22, v36, Size) )
              {
                if ( !AuthzBasepObjectInTypeList(v35, a5, a6, &v56) )
                  goto LABEL_86;
                v40 = v56;
                goto LABEL_87;
              }
              goto LABEL_90;
            }
            if ( !v37 && (!Size || *(_WORD *)v22 != *(_WORD *)v36 || memcmp(v22, v36, Size)) )
              goto LABEL_90;
            v39 = 0;
            if ( !a6 )
              goto LABEL_90;
            do
            {
              LOBYTE(v38) = v26;
              SepSetAuditInfoForObjectType(
                v38,
                v34,
                a4,
                a5,
                a6,
                a7,
                v39++,
                (__int64)a8,
                (__int64)a9,
                (__int64)a12,
                (__int64)a13);
            }
            while ( v39 < a6 );
LABEL_34:
            v22 = v59;
            v25 = v61;
            v13 = v60;
            goto LABEL_90;
          }
          if ( v27 == 13 )
          {
            v34 = *((_DWORD *)v25 + 1);
            v41 = v25 + 8;
            v42 = 4 * (unsigned __int8)v25[9] + 8;
            if ( v17 && !v13 )
            {
              AuthzBasepInitializeResourceClaimsFromSacl(v17, &v60);
              v22 = (unsigned __int8 *)SeWorldSid;
              v13 = v60;
              v19 = a12;
              v24 = v62;
              v59 = (unsigned __int8 *)SeWorldSid;
            }
            v43 = *((unsigned __int16 *)v25 + 1) - v42;
            if ( (int)(v43 - 8) <= 0 )
              goto LABEL_92;
            v44 = *(_QWORD **)(a3 + 1096);
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
            AuthzBasepEvaluateAceCondition(
              a3,
              *(_QWORD *)(a3 + 776),
              (__int64)v13,
              v48,
              v47,
              v46,
              v45,
              (_WORD *)((char *)v41 + v42),
              v43 - 8,
              1,
              0,
              &v57);
            if ( v57 != 1 )
            {
              v22 = (unsigned __int8 *)SeWorldSid;
              v59 = (unsigned __int8 *)SeWorldSid;
              goto LABEL_90;
            }
            LOBYTE(v49) = 1;
            v50 = SepSidInToken(a3, a10, (__int64)(v25 + 8), v49, 0, a11);
            v22 = (unsigned __int8 *)SeWorldSid;
            v59 = (unsigned __int8 *)SeWorldSid;
            if ( !v50 && (!Size || *(_WORD *)SeWorldSid != *v41 || memcmp(SeWorldSid, v25 + 8, Size)) )
              goto LABEL_90;
            if ( a6 )
            {
              for ( j = 0; j < a6; ++j )
              {
                LOBYTE(v51) = v26;
                SepSetAuditInfoForObjectType(
                  v51,
                  v34,
                  a4,
                  a5,
                  a6,
                  a7,
                  j,
                  (__int64)a8,
                  (__int64)a9,
                  (__int64)a12,
                  (__int64)a13);
              }
              v22 = v59;
              v25 = v61;
              v13 = v60;
LABEL_86:
              v40 = -1;
LABEL_87:
              if ( v40 != -1 )
              {
                v53 = (int)a8;
                LOBYTE(v53) = v26;
                SepSetAuditInfoForObjectType(
                  v53,
                  v34,
                  a4,
                  a5,
                  a6,
                  a7,
                  v40,
                  (__int64)a8,
                  (__int64)a9,
                  (__int64)a12,
                  (__int64)a13);
              }
LABEL_90:
              v19 = a12;
LABEL_91:
              v24 = v62;
LABEL_92:
              v16 = a13;
              goto LABEL_93;
            }
            if ( *a8 >= 0 )
            {
              if ( (v26 & 0x40) == 0 )
                goto LABEL_90;
              if ( (*a9 & v34) == 0 )
              {
                v30 = Size_4 == 64;
                goto LABEL_25;
              }
LABEL_26:
              v19 = a12;
              *a12 = 1;
              goto LABEL_91;
            }
            if ( v26 >= 0 )
              goto LABEL_90;
            if ( (v34 & a4) == 0 )
            {
              v31 = Size_4 == (char)0x80;
              goto LABEL_30;
            }
LABEL_31:
            v16 = a13;
            v19 = a12;
            v24 = v62;
            *a13 = 1;
          }
        }
LABEL_93:
        ++v24;
        v20 = Size_4;
        v25 += *((unsigned __int16 *)v25 + 1);
        v14 = a3;
        v17 = a2;
        v62 = v24;
        v61 = v25;
        if ( v24 >= v58 )
          goto LABEL_94;
      }
    }
  }
}
