/*
 * XREFs of SepExamineSaclEx @ 0x140584948
 * Callers:
 *     SepExamineGlobalSaclEx @ 0x14015B154 (SepExamineGlobalSaclEx.c)
 *     SepAccessCheckAndAuditAlarm @ 0x140525750 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     SepSidInToken @ 0x1400078CC (SepSidInToken.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x140109210 (AuthzBasepFreeSecurityAttributesList.c)
 *     AuthzBasepEvaluateAceCondition @ 0x14011C690 (AuthzBasepEvaluateAceCondition.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x14012A2E4 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     AuthzBasepObjectInTypeList @ 0x14015ABAC (AuthzBasepObjectInTypeList.c)
 *     memcmp @ 0x140172AE0 (memcmp.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     SepSetAuditInfoForObjectType @ 0x140584C38 (SepSetAuditInfoForObjectType.c)
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
  unsigned int v23; // edx
  char *v24; // r14
  char v25; // r15
  char v26; // al
  int v27; // ecx
  int v28; // edi
  unsigned int i; // ebx
  int v30; // edx
  int v31; // r12d
  _DWORD *v32; // rdi
  char *v33; // rbx
  char v34; // al
  int v35; // ecx
  int v36; // eax
  int v37; // eax
  bool v38; // zf
  bool v39; // zf
  unsigned int v40; // ebx
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
        v37 = memcmp(*v21, SeAnonymousLogonSid, 4 * *((unsigned __int8 *)SeAnonymousLogonSid + 1) + 8);
        v19 = a12;
        v16 = a13;
        v14 = a3;
        v17 = a2;
        if ( !v37 )
          Size = 4 * v22[1] + 8;
      }
      v23 = 0;
      v24 = (char *)(a1 + 8);
      v62 = 0;
      v61 = (char *)(a1 + 8);
      while ( 1 )
      {
        if ( (*v19 || *v16) && a6 <= 1 )
        {
LABEL_19:
          if ( v13 )
          {
            AuthzBasepFreeSecurityAttributesList(v13);
            ExFreePoolWithTag(v13, 0);
          }
          return;
        }
        v25 = v24[1];
        if ( (v25 & 8) == 0 )
          break;
LABEL_18:
        ++v23;
        v20 = Size_4;
        v24 += *((unsigned __int16 *)v24 + 1);
        v14 = a3;
        v17 = a2;
        v62 = v23;
        v61 = v24;
        if ( v23 >= v58 )
          goto LABEL_19;
      }
      v56 = -1;
      v26 = *v24;
      if ( *v24 == 2 )
      {
        LOBYTE(v16) = 1;
        if ( !(unsigned __int8)SepSidInToken(v14, a10, (__int64)(v24 + 8), (__int64)v16, 0)
          && (!Size || *(_WORD *)v22 != *((_WORD *)v24 + 4) || memcmp(v22, v24 + 8, Size)) )
        {
          goto LABEL_15;
        }
        v28 = *((_DWORD *)v24 + 1);
        if ( a6 )
        {
          for ( i = 0; i < a6; ++i )
          {
            LOBYTE(v27) = v25;
            SepSetAuditInfoForObjectType(
              v27,
              v28,
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
LABEL_14:
          v22 = v59;
          v24 = v61;
          v13 = v60;
LABEL_15:
          v19 = a12;
LABEL_16:
          v23 = v62;
LABEL_17:
          v16 = a13;
          goto LABEL_18;
        }
        if ( *a8 >= 0 )
        {
          if ( (v25 & 0x40) == 0 )
            goto LABEL_15;
          if ( (*a9 & v28) != 0 )
          {
LABEL_48:
            v19 = a12;
            *a12 = 1;
            goto LABEL_16;
          }
          v38 = v20 == 64;
LABEL_47:
          if ( !v38 )
            goto LABEL_15;
          goto LABEL_48;
        }
        if ( v25 >= 0 )
          goto LABEL_15;
        if ( (v28 & a4) != 0 )
          goto LABEL_53;
        v39 = v20 == (char)0x80;
        goto LABEL_52;
      }
      if ( v26 == 7 )
      {
        v30 = *((_DWORD *)v24 + 2);
        v31 = *((_DWORD *)v24 + 1);
        if ( (v30 & 1) != 0 )
          v32 = v24 + 12;
        else
          v32 = 0LL;
        LOBYTE(v16) = 1;
        v33 = &v24[8 * (v30 & 2) + 12 + ((*((_DWORD *)v24 + 2) & 1) != 0 ? 0x10 : 0)];
        v34 = SepSidInToken(v14, a10, (__int64)v33, (__int64)v16, 0);
        if ( !v32 )
        {
          if ( !v34 && (!Size || *(_WORD *)v22 != *(_WORD *)v33 || memcmp(v22, v33, Size)) )
            goto LABEL_15;
          v40 = 0;
          if ( !a6 )
            goto LABEL_15;
          do
          {
            LOBYTE(v35) = v25;
            SepSetAuditInfoForObjectType(
              v35,
              v31,
              a4,
              a5,
              a6,
              a7,
              v40++,
              (__int64)a8,
              (__int64)a9,
              (__int64)a12,
              (__int64)a13);
          }
          while ( v40 < a6 );
          goto LABEL_14;
        }
        if ( !v34 && (!Size || *(_WORD *)v22 != *(_WORD *)v33 || memcmp(v22, v33, Size)) )
          goto LABEL_15;
        if ( AuthzBasepObjectInTypeList(v32, a5, a6, &v56) )
        {
          v36 = v56;
LABEL_30:
          if ( v36 != -1 )
          {
            v53 = (int)a8;
            LOBYTE(v53) = v25;
            SepSetAuditInfoForObjectType(
              v53,
              v31,
              a4,
              a5,
              a6,
              a7,
              v36,
              (__int64)a8,
              (__int64)a9,
              (__int64)a12,
              (__int64)a13);
          }
          goto LABEL_15;
        }
      }
      else
      {
        if ( v26 != 13 )
          goto LABEL_18;
        v31 = *((_DWORD *)v24 + 1);
        v41 = v24 + 8;
        v42 = 4 * (unsigned __int8)v24[9] + 8;
        if ( v17 && !v13 )
        {
          AuthzBasepInitializeResourceClaimsFromSacl(v17, (__int64)&v60);
          v22 = (unsigned __int8 *)SeWorldSid;
          v13 = v60;
          v19 = a12;
          v23 = v62;
          v59 = (unsigned __int8 *)SeWorldSid;
        }
        v43 = *((unsigned __int16 *)v24 + 1) - v42;
        if ( (int)(v43 - 8) <= 0 )
          goto LABEL_17;
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
          goto LABEL_15;
        }
        LOBYTE(v49) = 1;
        v50 = SepSidInToken(a3, a10, (__int64)(v24 + 8), v49, 0);
        v22 = (unsigned __int8 *)SeWorldSid;
        v59 = (unsigned __int8 *)SeWorldSid;
        if ( !v50 && (!Size || *(_WORD *)SeWorldSid != *v41 || memcmp(SeWorldSid, v24 + 8, Size)) )
          goto LABEL_15;
        if ( !a6 )
        {
          if ( *a8 >= 0 )
          {
            if ( (v25 & 0x40) == 0 )
              goto LABEL_15;
            if ( (*a9 & v31) != 0 )
              goto LABEL_48;
            v38 = Size_4 == 64;
            goto LABEL_47;
          }
          if ( v25 >= 0 )
            goto LABEL_15;
          if ( (v31 & a4) != 0 )
          {
LABEL_53:
            v16 = a13;
            v19 = a12;
            v23 = v62;
            *a13 = 1;
            goto LABEL_18;
          }
          v39 = Size_4 == (char)0x80;
LABEL_52:
          if ( v39 )
            goto LABEL_53;
          goto LABEL_15;
        }
        for ( j = 0; j < a6; ++j )
        {
          LOBYTE(v51) = v25;
          SepSetAuditInfoForObjectType(
            v51,
            v31,
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
        v24 = v61;
        v13 = v60;
      }
      v36 = -1;
      goto LABEL_30;
    }
  }
}
