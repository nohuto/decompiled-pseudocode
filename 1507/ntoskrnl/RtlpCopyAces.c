/*
 * XREFs of RtlpCopyAces @ 0x140486AE0
 * Callers:
 *     RtlpInheritAcl2 @ 0x1404876F0 (RtlpInheritAcl2.c)
 *     RtlpComputeMergedAcl2 @ 0x1406CA13C (RtlpComputeMergedAcl2.c)
 * Callees:
 *     RtlFindAceByType @ 0x1400459A0 (RtlFindAceByType.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     RtlpCopyEffectiveAce @ 0x140435120 (RtlpCopyEffectiveAce.c)
 */

__int64 __fastcall RtlpCopyAces(
        __int64 a1,
        GENERIC_MAPPING *a2,
        int a3,
        char a4,
        char a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        char a10,
        char a11,
        int a12,
        unsigned int *a13,
        PACL Acl)
{
  int v14; // esi
  GENERIC_MAPPING *GenericMapping; // r10
  __int64 v16; // r11
  __int64 v17; // r12
  unsigned __int8 v18; // al
  char v19; // r9
  PACL v20; // rcx
  unsigned int v21; // r15d
  int *v22; // rbx
  unsigned int v23; // r8d
  __int64 v24; // rdi
  unsigned int v25; // r13d
  unsigned int v26; // ebp
  char v27; // cl
  signed __int64 v28; // rsi
  int v29; // ecx
  GENERIC_MAPPING *v30; // rdx
  int v31; // ecx
  int v32; // ecx
  int v33; // ecx
  int v34; // ecx
  int GenericAll; // eax
  int v37; // ecx
  _BYTE *v38; // rbp
  char v39; // r12
  char v40; // dl
  char v41; // al
  char v42; // r8
  int v43; // edx
  char v44; // [rsp+80h] [rbp-98h]
  char v46; // [rsp+82h] [rbp-96h] BYREF
  unsigned int v47; // [rsp+84h] [rbp-94h]
  char v48; // [rsp+88h] [rbp-90h] BYREF
  __int64 v49; // [rsp+90h] [rbp-88h]
  __int64 v50; // [rsp+98h] [rbp-80h] BYREF
  GENERIC_MAPPING *v51; // [rsp+A0h] [rbp-78h]
  int v52; // [rsp+A8h] [rbp-70h]
  void *v53; // [rsp+B0h] [rbp-68h] BYREF
  __int64 v54; // [rsp+B8h] [rbp-60h]
  unsigned int *v55; // [rsp+C0h] [rbp-58h]
  __int64 v56; // [rsp+C8h] [rbp-50h]
  __int64 v57; // [rsp+D0h] [rbp-48h]
  __int64 v58; // [rsp+D8h] [rbp-40h]
  int v59; // [rsp+E0h] [rbp-38h]
  unsigned __int16 v60; // [rsp+E4h] [rbp-34h]

  v14 = a3;
  GenericMapping = a2;
  v16 = a6;
  v17 = a1;
  v58 = a7;
  v56 = a8;
  v57 = a9;
  v55 = a13;
  v18 = Acl->AclRevision - 2;
  v19 = 0;
  v52 = a3;
  v51 = a2;
  v49 = a1;
  v54 = a6;
  v44 = 0;
  if ( v18 > 2u )
    return 3221225560LL;
  v20 = Acl + 1;
  v21 = 0;
  v22 = 0LL;
  v23 = 0;
  if ( Acl->AceCount )
  {
    do
    {
      if ( v20 >= (PACL)((char *)Acl + Acl->AclSize) )
        return 3221225597LL;
      ++v23;
      v20 = (PACL)((char *)v20 + v20->AclSize);
    }
    while ( v23 < Acl->AceCount );
    v19 = 0;
  }
  if ( v20 <= (PACL)((char *)Acl + Acl->AclSize) )
    v22 = (int *)v20;
  v24 = v17 + 8;
  v25 = 0;
  v26 = 0;
  v47 = 0;
  if ( !*(_WORD *)(v17 + 4) )
  {
LABEL_37:
    *v55 = v25;
    if ( v19 )
      return (unsigned int)-1073741789;
    return v21;
  }
  while ( 1 )
  {
    v27 = a5;
    if ( *(_BYTE *)v24 == 17 )
      break;
    if ( a12 == 3 )
      goto LABEL_33;
LABEL_8:
    if ( v14 )
    {
      if ( v14 != 1 )
      {
        if ( v14 != 2 )
          goto LABEL_33;
LABEL_11:
        if ( !v27 )
        {
          v28 = *(unsigned __int16 *)(v24 + 2);
          if ( v22 && v28 <= (__int64)Acl + Acl->AclSize - (_QWORD)v22 )
          {
            if ( !v19 )
            {
              memmove(v22, (const void *)v24, *(unsigned __int16 *)(v24 + 2));
              if ( (*(_BYTE *)v22 <= 0xAu || (unsigned __int8)(*(_BYTE *)v22 - 13) <= 1u)
                && (*((_BYTE *)v22 + 1) & 8) == 0 )
              {
                v29 = v22[1];
                v30 = v51;
                if ( v29 < 0 )
                  v22[1] = v29 | v51->GenericRead;
                v31 = v22[1];
                if ( (v31 & 0x40000000) != 0 )
                  v22[1] = v31 | v30->GenericWrite;
                v32 = v22[1];
                if ( (v32 & 0x20000000) != 0 )
                  v22[1] = v32 | v30->GenericExecute;
                v33 = v22[1];
                if ( (v33 & 0x10000000) != 0 )
                  v22[1] = v33 | v30->GenericAll;
                v22[1] &= 0xFFFFFFFu;
                if ( *(_BYTE *)v22 <= 0xAu && (v34 = 1651, _bittest(&v34, *(unsigned __int8 *)v22)) )
                  GenericAll = v30->GenericAll;
                else
                  GenericAll = v30->GenericAll | 0x1000000;
                v22[1] &= GenericAll;
              }
              *((_BYTE *)v22 + 1) &= ~a4;
              goto LABEL_30;
            }
          }
          else
          {
            v19 = 1;
            v44 = 1;
          }
LABEL_66:
          v22 = (int *)((char *)Acl + Acl->AclSize);
          goto LABEL_32;
        }
        v37 = 0;
        v53 = v22;
        v38 = v22;
        LODWORD(v50) = 0;
        LODWORD(v28) = 0;
        v46 = 0;
        v39 = a10 && (*(_BYTE *)(v24 + 1) & 3) != 0;
        v40 = *(_BYTE *)(v24 + 1);
        if ( (v40 & 8) == 0 )
        {
          v41 = 0;
          if ( a11 )
            v41 = (v40 & 0x10) != 0;
          if ( !RtlpCopyEffectiveAce(
                  (char *)v24,
                  v41,
                  v39,
                  v16,
                  v58,
                  v56,
                  v57,
                  GenericMapping,
                  0LL,
                  0,
                  &v53,
                  &v50,
                  (__int64)Acl,
                  0LL,
                  &v46,
                  &v48) )
            return 3221225597LL;
          if ( v48 )
          {
            v19 = 1;
            v44 = 1;
          }
          else
          {
            v19 = v44;
          }
          v37 = v50;
          LODWORD(v28) = v50;
          if ( !v19 && (_DWORD)v50 )
          {
            v42 = a4;
            v38 = v53;
            *((_BYTE *)v22 + 1) &= ~a4;
LABEL_51:
            if ( !v39 )
              goto LABEL_52;
            v43 = *(_DWORD *)(v24 + 10);
            v59 = 0;
            v60 = 768;
            if ( !v43 )
              v43 = *(unsigned __int16 *)(v24 + 14) - v60;
            if ( v37 && !v46 )
            {
              v26 = v47;
              v17 = v49;
              if ( !v19 )
              {
                *((_BYTE *)v22 + 1) = ~v42 & (*((_BYTE *)v22 + 1) | *(_BYTE *)(v24 + 1) & 0x1F);
                goto LABEL_31;
              }
              goto LABEL_66;
            }
            if ( *(_BYTE *)v24 > 8u || *(_DWORD *)(v24 + 4) || !v43 )
            {
              LODWORD(v28) = *(unsigned __int16 *)(v24 + 2) + (_DWORD)v28;
              if ( (unsigned int)v28 > 0xFFFF )
                return 3221225597LL;
              if ( *(unsigned __int16 *)(v24 + 2) > (__int64)Acl + Acl->AclSize - (_QWORD)v38 )
              {
                v19 = 1;
                v44 = 1;
              }
              else if ( !v19 )
              {
                memmove(v38, (const void *)v24, *(unsigned __int16 *)(v24 + 2));
                v17 = v49;
                v38[1] = ~a4 & (v38[1] | 8);
                v26 = v47;
LABEL_30:
                v19 = v44;
                ++Acl->AceCount;
LABEL_31:
                v22 = (int *)((char *)v22 + (unsigned int)v28);
LABEL_32:
                v25 += v28;
                v14 = v52;
                goto LABEL_33;
              }
            }
            else
            {
LABEL_52:
              if ( !v19 )
              {
                v26 = v47;
                v17 = v49;
                goto LABEL_31;
              }
            }
            v26 = v47;
            v17 = v49;
            goto LABEL_66;
          }
          v38 = v53;
        }
        v42 = a4;
        goto LABEL_51;
      }
      if ( (*(_BYTE *)(v24 + 1) & 0x10) == 0 )
        goto LABEL_11;
    }
    else if ( (*(_BYTE *)(v24 + 1) & 0x10) != 0 )
    {
      goto LABEL_11;
    }
LABEL_33:
    ++v26;
    v24 += *(unsigned __int16 *)(v24 + 2);
    v47 = v26;
    if ( v26 >= *(unsigned __int16 *)(v17 + 4) )
      goto LABEL_35;
    GenericMapping = v51;
    v16 = v54;
  }
  if ( a12 != 3 )
    goto LABEL_33;
  if ( !RtlFindAceByType(Acl, 0x11u, 0LL) )
  {
    v19 = v44;
    v27 = a5;
    GenericMapping = v51;
    v16 = v54;
    goto LABEL_8;
  }
LABEL_35:
  if ( v25 <= 0xFFFF )
  {
    v19 = v44;
    goto LABEL_37;
  }
  return 3221225597LL;
}
