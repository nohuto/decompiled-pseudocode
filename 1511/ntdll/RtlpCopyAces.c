/*
 * XREFs of RtlpCopyAces @ 0x18006192C
 * Callers:
 *     RtlpInheritAcl2 @ 0x18005FFB4 (RtlpInheritAcl2.c)
 *     RtlpComputeMergedAcl2 @ 0x18008BB2C (RtlpComputeMergedAcl2.c)
 * Callees:
 *     RtlFirstFreeAce @ 0x180019670 (RtlFirstFreeAce.c)
 *     RtlpCopyEffectiveAce @ 0x180060A18 (RtlpCopyEffectiveAce.c)
 *     RtlMapGenericMask @ 0x180060FB0 (RtlMapGenericMask.c)
 *     RtlFindAceByType @ 0x180061000 (RtlFindAceByType.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     memmove @ 0x1800AB5C0 (memmove.c)
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
  char v14; // r14
  PGENERIC_MAPPING v15; // r15
  unsigned int *v16; // r13
  unsigned __int8 v18; // al
  __int64 v19; // rbx
  unsigned int v20; // edx
  unsigned int v21; // esi
  ACCESS_MASK *v22; // rdi
  bool v23; // zf
  signed __int64 v25; // r13
  int v26; // ecx
  int GenericAll; // eax
  int v28; // edx
  _BYTE *v29; // rsi
  char v30; // r15
  char v31; // cl
  char v32; // al
  char v33; // r8
  int v34; // ecx
  _BYTE v36[15]; // [rsp+89h] [rbp-68h] BYREF
  PVOID FirstFree; // [rsp+98h] [rbp-59h] BYREF
  int v38; // [rsp+A0h] [rbp-51h]
  int v39; // [rsp+A4h] [rbp-4Dh]
  PGENERIC_MAPPING GenericMapping; // [rsp+A8h] [rbp-49h]
  unsigned int *v41; // [rsp+B0h] [rbp-41h]
  __int64 v42; // [rsp+B8h] [rbp-39h]
  __int64 v43; // [rsp+C0h] [rbp-31h]
  __int64 v44; // [rsp+C8h] [rbp-29h]
  __int64 v45; // [rsp+D0h] [rbp-21h]
  __int64 v46; // [rsp+D8h] [rbp-19h]
  int v47; // [rsp+E0h] [rbp-11h]
  unsigned __int16 v48; // [rsp+E4h] [rbp-Dh]

  v14 = 0;
  v15 = a2;
  v16 = a13;
  v44 = a6;
  v42 = a7;
  v45 = a8;
  v43 = a9;
  v18 = Acl->AclRevision - 2;
  v39 = a3;
  GenericMapping = a2;
  v46 = a1;
  v41 = a13;
  if ( v18 > 2u )
    return 3221225560LL;
  if ( !RtlFirstFreeAce(Acl, &FirstFree) )
    return 3221225597LL;
  v19 = a1 + 8;
  v20 = 0;
  v21 = 0;
  *(_DWORD *)&v36[3] = 0;
  v38 = 0;
  if ( !*(_WORD *)(a1 + 4) )
    goto LABEL_14;
  v22 = (ACCESS_MASK *)FirstFree;
  do
  {
    if ( *(_BYTE *)v19 != 17 )
    {
      if ( a12 == 3 )
        goto LABEL_11;
      goto LABEL_7;
    }
    if ( a12 != 3 )
      goto LABEL_11;
    if ( RtlFindAceByType(Acl, 0x11u, 0LL) )
      break;
    v20 = *(_DWORD *)&v36[3];
LABEL_7:
    if ( v39 )
    {
      if ( v39 == 1 )
        v23 = (*(_BYTE *)(v19 + 1) & 0x10) == 0;
      else
        v23 = v39 == 2;
      if ( !v23 )
        goto LABEL_11;
LABEL_16:
      if ( !a5 )
      {
        v25 = *(unsigned __int16 *)(v19 + 2);
        if ( v22 && v25 <= (__int64)Acl + Acl->AclSize - (_QWORD)v22 )
        {
          if ( !v14 )
          {
            memmove(v22, (const void *)v19, *(unsigned __int16 *)(v19 + 2));
            if ( (*(_BYTE *)v22 <= 0xAu || (unsigned __int8)(*(_BYTE *)v22 - 13) <= 1u)
              && (*((_BYTE *)v22 + 1) & 8) == 0 )
            {
              RtlMapGenericMask(v22 + 1, v15);
              if ( *(_BYTE *)v22 <= 0xAu && (v26 = 1651, _bittest(&v26, *(unsigned __int8 *)v22)) )
                GenericAll = v15->GenericAll;
              else
                GenericAll = v15->GenericAll | 0x1000000;
              v22[1] &= GenericAll;
            }
            *((_BYTE *)v22 + 1) &= ~a4;
            ++Acl->AceCount;
            goto LABEL_27;
          }
LABEL_56:
          v22 = (ACCESS_MASK *)((char *)Acl + Acl->AclSize);
          goto LABEL_28;
        }
        v14 = 1;
        goto LABEL_43;
      }
      v28 = 0;
      v36[0] = 0;
      v29 = v22;
      *(_DWORD *)&v36[7] = 0;
      LODWORD(v25) = 0;
      FirstFree = v22;
      if ( !a10 || (v30 = 1, (*(_BYTE *)(v19 + 1) & 3) == 0) )
        v30 = 0;
      v31 = *(_BYTE *)(v19 + 1);
      if ( (v31 & 8) == 0 )
      {
        v32 = 0;
        if ( a11 )
          v32 = (v31 & 0x10) != 0;
        if ( !RtlpCopyEffectiveAce(
                (ACCESS_MASK *)v19,
                v32,
                v30,
                v44,
                v42,
                v45,
                v43,
                GenericMapping,
                0LL,
                0,
                &FirstFree,
                &v36[7],
                (__int64)Acl,
                0LL,
                v36,
                &v36[1]) )
          return 3221225597LL;
        v28 = *(_DWORD *)&v36[7];
        LODWORD(v25) = *(_DWORD *)&v36[7];
        if ( v36[1] )
          v14 = 1;
        if ( !v14 && *(_DWORD *)&v36[7] )
        {
          v33 = a4;
          v29 = FirstFree;
          *((_BYTE *)v22 + 1) &= ~a4;
          goto LABEL_42;
        }
        v29 = FirstFree;
      }
      v33 = a4;
LABEL_42:
      if ( v30 )
      {
        v34 = *(_DWORD *)(v19 + 10);
        v47 = 0;
        v48 = 768;
        if ( !v34 )
          v34 = *(unsigned __int16 *)(v19 + 14) - v48;
        if ( v28 && !v36[0] )
        {
          if ( v14 )
            goto LABEL_56;
          *((_BYTE *)v22 + 1) = ~v33 & (*((_BYTE *)v22 + 1) | *(_BYTE *)(v19 + 1) & 0x1F);
LABEL_27:
          v22 = (ACCESS_MASK *)((char *)v22 + (unsigned int)v25);
LABEL_28:
          v15 = GenericMapping;
          v21 = v25 + v38;
          v20 = *(_DWORD *)&v36[3];
          v38 += v25;
          goto LABEL_11;
        }
        if ( *(_BYTE *)v19 > 8u || *(_DWORD *)(v19 + 4) || !v34 )
        {
          LODWORD(v25) = *(unsigned __int16 *)(v19 + 2) + (_DWORD)v25;
          if ( (unsigned int)v25 > 0xFFFF )
            return 3221225597LL;
          if ( *(unsigned __int16 *)(v19 + 2) > (__int64)Acl + Acl->AclSize - (_QWORD)v29 )
          {
            v14 = 1;
            goto LABEL_56;
          }
          if ( v14 )
            goto LABEL_56;
          memmove(v29, (const void *)v19, *(unsigned __int16 *)(v19 + 2));
          v29[1] = ~a4 & (v29[1] | 8);
          ++Acl->AceCount;
        }
      }
LABEL_43:
      if ( v14 )
        goto LABEL_56;
      goto LABEL_27;
    }
    if ( (*(_BYTE *)(v19 + 1) & 0x10) != 0 )
      goto LABEL_16;
LABEL_11:
    ++v20;
    v19 += *(unsigned __int16 *)(v19 + 2);
    *(_DWORD *)&v36[3] = v20;
  }
  while ( v20 < *(unsigned __int16 *)(v46 + 4) );
  if ( v21 > 0xFFFF )
    return 3221225597LL;
  v16 = v41;
LABEL_14:
  *v16 = v21;
  return v14 != 0 ? 0xC0000023 : 0;
}
