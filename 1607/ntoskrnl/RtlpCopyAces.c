/*
 * XREFs of RtlpCopyAces @ 0x14041D660
 * Callers:
 *     RtlpInheritAcl2 @ 0x14041CB70 (RtlpInheritAcl2.c)
 *     RtlpComputeMergedAcl2 @ 0x1406840FC (RtlpComputeMergedAcl2.c)
 * Callees:
 *     RtlFindAceByType @ 0x140012620 (RtlFindAceByType.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     RtlpCopyEffectiveAce @ 0x140420940 (RtlpCopyEffectiveAce.c)
 */

__int64 __fastcall RtlpCopyAces(
        __int64 a1,
        GENERIC_MAPPING *a2,
        int a3,
        char a4,
        char a5,
        void *a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        char a10,
        __int64 a11,
        int a12,
        unsigned int *a13,
        PACL Acl)
{
  int v14; // esi
  GENERIC_MAPPING *GenericMapping; // r10
  __int64 v16; // r12
  unsigned __int8 v17; // al
  char v18; // r9
  PACL v19; // rcx
  unsigned int v20; // r15d
  int *v21; // rbx
  unsigned int v22; // r8d
  __int64 v23; // rdi
  unsigned int v24; // r13d
  unsigned int v25; // ebp
  char v26; // cl
  signed __int64 v27; // rsi
  int v28; // ecx
  GENERIC_MAPPING *v29; // rdx
  int v30; // ecx
  int v31; // ecx
  int v32; // ecx
  int v33; // ecx
  int GenericAll; // eax
  int v36; // ecx
  int *v37; // rbp
  bool v38; // r12
  char v39; // r8
  int v40; // edx
  char v41; // [rsp+80h] [rbp-98h]
  char v43; // [rsp+82h] [rbp-96h] BYREF
  unsigned int v44; // [rsp+84h] [rbp-94h]
  char v45; // [rsp+88h] [rbp-90h] BYREF
  __int64 v46; // [rsp+90h] [rbp-88h]
  __int64 v47; // [rsp+98h] [rbp-80h] BYREF
  GENERIC_MAPPING *v48; // [rsp+A0h] [rbp-78h]
  int v49; // [rsp+A8h] [rbp-70h]
  void *v50[2]; // [rsp+B0h] [rbp-68h] BYREF
  __int64 v51; // [rsp+C0h] [rbp-58h]
  __int64 v52; // [rsp+C8h] [rbp-50h]
  __int64 v53; // [rsp+D0h] [rbp-48h]
  unsigned int *v54; // [rsp+D8h] [rbp-40h]
  int v55; // [rsp+E0h] [rbp-38h]
  unsigned __int16 v56; // [rsp+E4h] [rbp-34h]

  v14 = a3;
  GenericMapping = a2;
  v16 = a1;
  v53 = a7;
  v52 = a8;
  v51 = a9;
  v54 = a13;
  v17 = Acl->AclRevision - 2;
  v18 = 0;
  v49 = a3;
  v48 = a2;
  v46 = a1;
  v50[1] = a6;
  v41 = 0;
  if ( v17 > 2u )
    return 3221225560LL;
  v19 = Acl + 1;
  v20 = 0;
  v21 = 0LL;
  v22 = 0;
  if ( Acl->AceCount )
  {
    do
    {
      if ( v19 >= (PACL)((char *)Acl + Acl->AclSize) )
        return 3221225597LL;
      ++v22;
      v19 = (PACL)((char *)v19 + v19->AclSize);
    }
    while ( v22 < Acl->AceCount );
    v18 = 0;
  }
  if ( v19 <= (PACL)((char *)Acl + Acl->AclSize) )
    v21 = (int *)v19;
  v23 = v16 + 8;
  v24 = 0;
  v25 = 0;
  v44 = 0;
  if ( !*(_WORD *)(v16 + 4) )
  {
LABEL_36:
    *v54 = v24;
    if ( v18 )
      return (unsigned int)-1073741789;
    return v20;
  }
  while ( 1 )
  {
    v26 = a5;
    if ( *(_BYTE *)v23 == 17 )
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
        if ( !v26 )
        {
          v27 = *(unsigned __int16 *)(v23 + 2);
          if ( !v21 || v27 > (__int64)Acl + Acl->AclSize - (_QWORD)v21 )
          {
            v18 = 1;
            v41 = 1;
            v21 = (int *)((char *)Acl + Acl->AclSize);
            goto LABEL_32;
          }
          if ( !v18 )
          {
            memmove(v21, (const void *)v23, *(unsigned __int16 *)(v23 + 2));
            if ( (*(_BYTE *)v21 <= 0xAu || (unsigned __int8)(*(_BYTE *)v21 - 13) <= 1u)
              && (*((_BYTE *)v21 + 1) & 8) == 0 )
            {
              v28 = v21[1];
              v29 = v48;
              if ( v28 < 0 )
                v21[1] = v28 | v48->GenericRead;
              v30 = v21[1];
              if ( (v30 & 0x40000000) != 0 )
                v21[1] = v30 | v29->GenericWrite;
              v31 = v21[1];
              if ( (v31 & 0x20000000) != 0 )
                v21[1] = v31 | v29->GenericExecute;
              v32 = v21[1];
              if ( (v32 & 0x10000000) != 0 )
                v21[1] = v32 | v29->GenericAll;
              v21[1] &= 0xFFFFFFFu;
              if ( *(_BYTE *)v21 <= 0xAu && (v33 = 1651, _bittest(&v33, *(unsigned __int8 *)v21)) )
                GenericAll = v29->GenericAll;
              else
                GenericAll = v29->GenericAll | 0x1000000;
              v21[1] &= GenericAll;
            }
            *((_BYTE *)v21 + 1) &= ~a4;
            goto LABEL_30;
          }
LABEL_74:
          v21 = (int *)((char *)Acl + Acl->AclSize);
          goto LABEL_32;
        }
        v36 = 0;
        v37 = v21;
        LODWORD(v27) = 0;
        LODWORD(v47) = 0;
        v43 = 0;
        v50[0] = v21;
        v38 = a10 && (*(_BYTE *)(v23 + 1) & 3) != 0;
        if ( (*(_BYTE *)(v23 + 1) & 8) == 0 )
        {
          if ( !(unsigned __int8)RtlpCopyEffectiveAce(
                                   (void *)v23,
                                   v53,
                                   v52,
                                   v51,
                                   GenericMapping,
                                   0LL,
                                   0,
                                   (__int64)v50,
                                   (__int64)&v47,
                                   (__int64)Acl,
                                   0LL,
                                   (__int64)&v43,
                                   (__int64)&v45) )
            return 3221225597LL;
          if ( v45 )
          {
            v18 = 1;
            v41 = 1;
          }
          else
          {
            v18 = v41;
          }
          v36 = v47;
          LODWORD(v27) = v47;
          if ( !v18 && (_DWORD)v47 )
          {
            v39 = a4;
            v37 = (int *)v50[0];
            *((_BYTE *)v21 + 1) &= ~a4;
LABEL_52:
            if ( !v38 )
              goto LABEL_53;
            v40 = *(_DWORD *)(v23 + 10);
            v55 = 0;
            v56 = 768;
            if ( !v40 )
              v40 = *(unsigned __int16 *)(v23 + 14) - v56;
            if ( v36 && !v43 )
            {
              v25 = v44;
              v16 = v46;
              if ( !v18 )
              {
                *((_BYTE *)v21 + 1) = ~v39 & (*((_BYTE *)v21 + 1) | *(_BYTE *)(v23 + 1) & 0x1F);
                goto LABEL_31;
              }
              goto LABEL_74;
            }
            if ( *(_BYTE *)v23 > 8u || *(_DWORD *)(v23 + 4) || !v40 )
            {
              LODWORD(v27) = *(unsigned __int16 *)(v23 + 2) + (_DWORD)v27;
              if ( (unsigned int)v27 > 0xFFFF )
                return 3221225597LL;
              if ( *(unsigned __int16 *)(v23 + 2) > (__int64)Acl + Acl->AclSize - (_QWORD)v37 )
              {
                v18 = 1;
                v41 = 1;
              }
              else if ( !v18 )
              {
                memmove(v37, (const void *)v23, *(unsigned __int16 *)(v23 + 2));
                v16 = v46;
                *((_BYTE *)v37 + 1) = ~a4 & (*((_BYTE *)v37 + 1) | 8);
                v25 = v44;
LABEL_30:
                v18 = v41;
                ++Acl->AceCount;
LABEL_31:
                v21 = (int *)((char *)v21 + (unsigned int)v27);
LABEL_32:
                v24 += v27;
                v14 = v49;
                goto LABEL_33;
              }
            }
            else
            {
LABEL_53:
              if ( !v18 )
              {
                v25 = v44;
                v16 = v46;
                goto LABEL_31;
              }
            }
            v25 = v44;
            v16 = v46;
            goto LABEL_74;
          }
          v37 = (int *)v50[0];
        }
        v39 = a4;
        goto LABEL_52;
      }
      if ( (*(_BYTE *)(v23 + 1) & 0x10) == 0 )
        goto LABEL_11;
    }
    else if ( (*(_BYTE *)(v23 + 1) & 0x10) != 0 )
    {
      goto LABEL_11;
    }
LABEL_33:
    ++v25;
    v23 += *(unsigned __int16 *)(v23 + 2);
    v44 = v25;
    if ( v25 >= *(unsigned __int16 *)(v16 + 4) )
      goto LABEL_34;
    GenericMapping = v48;
  }
  if ( a12 != 3 )
    goto LABEL_33;
  if ( !RtlFindAceByType(Acl, 0x11u, 0LL) )
  {
    v18 = v41;
    v26 = a5;
    GenericMapping = v48;
    goto LABEL_8;
  }
LABEL_34:
  if ( v24 <= 0xFFFF )
  {
    v18 = v41;
    goto LABEL_36;
  }
  return 3221225597LL;
}
