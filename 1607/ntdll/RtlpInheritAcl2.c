/*
 * XREFs of RtlpInheritAcl2 @ 0x180040628
 * Callers:
 *     RtlpInheritAcl @ 0x18004157C (RtlpInheritAcl.c)
 * Callees:
 *     RtlFirstFreeAce @ 0x180014E10 (RtlFirstFreeAce.c)
 *     RtlpCopyAces @ 0x18003D350 (RtlpCopyAces.c)
 *     RtlpGenerateInheritAcl @ 0x18003F9C0 (RtlpGenerateInheritAcl.c)
 *     RtlCreateAcl @ 0x1800409F0 (RtlCreateAcl.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 */

__int64 __fastcall RtlpInheritAcl2(
        _BYTE *a1,
        unsigned __int8 *a2,
        int a3,
        char a4,
        char a5,
        char a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        PGENERIC_MAPPING a11,
        int a12,
        __int64 a13,
        int a14,
        ULONG *a15,
        PACL Acl,
        _BYTE *a17,
        int *a18)
{
  PACL v18; // rbx
  int v20; // r14d
  int v21; // edi
  unsigned int v22; // r12d
  int v23; // esi
  char v24; // r13
  _BYTE *v25; // r9
  int *v26; // rax
  __int16 v27; // r8
  int v28; // ecx
  bool v29; // zf
  int v30; // edx
  char v31; // al
  __int64 result; // rax
  __int64 v33; // rax
  int v34; // r8d
  char v35; // al
  char v36; // r9
  int v37; // ecx
  int v38; // eax
  __int64 v39; // [rsp+58h] [rbp-49h]
  char v40; // [rsp+88h] [rbp-19h]
  char v41; // [rsp+89h] [rbp-18h]
  unsigned __int16 AceCount; // [rsp+8Ah] [rbp-17h]
  __int64 v43; // [rsp+8Ch] [rbp-15h] BYREF
  PVOID FirstFree; // [rsp+98h] [rbp-9h] BYREF
  __int64 v46; // [rsp+F8h] [rbp+57h] BYREF
  int v47; // [rsp+100h] [rbp+5Fh]

  LOBYTE(v47) = a4;
  LODWORD(v46) = a3;
  v18 = Acl;
  v20 = 0;
  v43 = 0LL;
  v21 = 0;
  AceCount = 0;
  FirstFree = 0LL;
  v22 = 2;
  v40 = 0;
  v41 = 1;
  v23 = 0;
  v24 = 0;
  RtlCreateAcl(Acl, *a15, 2u);
  v25 = a17;
  v26 = a18;
  v27 = v46;
  v28 = a5 != 0 ? 0x400 : 0;
  v29 = (v46 & 8) == 0;
  v30 = v46 & 8;
  *a17 = 0;
  LODWORD(a18) = v30;
  *v26 = v28;
  if ( v29 )
  {
    if ( (v27 & 0x1000) != 0 )
    {
      v40 = 1;
      *v26 = v28 | 0x1000;
    }
    if ( (v27 & 0x1004) == 0 )
      goto LABEL_5;
    if ( !a2 )
    {
      if ( a5 )
      {
        v37 = a12;
        if ( a12 == 1 )
        {
          if ( (v27 & 0x1004) == 4 )
            return 3221225591LL;
          goto LABEL_44;
        }
LABEL_49:
        v31 = v40;
        if ( v37 == 2 && (v20 || v40 || a2 && !*((_WORD *)a2 + 2)) )
          *v25 = 1;
        goto LABEL_6;
      }
LABEL_43:
      v37 = a12;
      if ( a12 == 1 )
      {
LABEL_44:
        *v25 = 1;
LABEL_5:
        v31 = v40;
LABEL_6:
        v30 = (int)a18;
        goto LABEL_7;
      }
      goto LABEL_49;
    }
    v41 = 0;
    if ( *a2 >= 2u )
      v22 = *a2;
    if ( a5 )
    {
      if ( (v27 & 0x1000) != 0 )
      {
        v34 = 2;
        v36 = 16;
        v35 = 1;
        goto LABEL_38;
      }
      v34 = 1;
      v35 = 1;
    }
    else
    {
      v34 = 2;
      v35 = 0;
    }
    v36 = 0;
LABEL_38:
    LOBYTE(v39) = 0;
    result = RtlpCopyAces(
               (__int64)a2,
               a11,
               v34,
               v36,
               v35,
               a7,
               a8,
               a9,
               a10,
               v47,
               v39,
               a12,
               (unsigned int *)&v43 + 1,
               v18);
    v20 = HIDWORD(v43);
    v21 = HIDWORD(v43);
    if ( (_DWORD)result == -1073741789 )
    {
      v24 = 1;
      result = 0LL;
    }
    if ( (int)result < 0 )
      return result;
    if ( a6 )
    {
      if ( HIDWORD(v43) )
      {
        AceCount = v18->AceCount;
        if ( !RtlFirstFreeAce(v18, &FirstFree) )
          return 3221225597LL;
      }
    }
    LOBYTE(v27) = v46;
    v25 = a17;
    goto LABEL_43;
  }
  v31 = 0;
LABEL_7:
  if ( (a5 || (v27 & 4) != 0) && !v30 && (!a5 || v31) || !a1 )
    goto LABEL_20;
  if ( (unsigned __int8)(*a1 - 2) > 2u )
    return 3221225560LL;
  if ( v22 <= (unsigned __int8)*a1 )
    LOBYTE(v22) = *a1;
  result = RtlpGenerateInheritAcl((__int64)a1, v47, a5, a7, a8, a9, a10, a11, a13, a14, a12, v24, &v43, v18, &v46);
  if ( (_DWORD)result == -1073741789 )
  {
    v24 = 1;
    result = 0LL;
  }
  if ( (int)result >= 0 )
  {
    if ( a6 && v20 && (_BYTE)v46 && !v24 )
    {
      if ( !RtlFirstFreeAce(v18, (PVOID *)&a18) )
        return 3221225597LL;
      v38 = (int)a18;
      if ( !a18 )
        v38 = (_DWORD)v18 + v18->AclSize;
      memmove(&v18[1], FirstFree, (unsigned int)(v38 - (_DWORD)FirstFree));
      v18->AceCount -= AceCount;
      v21 = 0;
    }
    v23 = v43;
LABEL_20:
    v33 = (unsigned int)(v23 + v21);
    if ( !(_DWORD)v33 )
    {
      if ( !*a17 )
      {
        result = 2147483659LL;
LABEL_23:
        *a15 = 0;
        return result;
      }
      if ( v41 )
      {
        result = 0LL;
        goto LABEL_23;
      }
    }
    if ( (unsigned __int64)(v33 + 8) <= 0xFFFF )
    {
      *a15 = v23 + v20 + 8;
      if ( v24 )
        return 3221225507LL;
      v18->AclRevision = v22;
      v18->AclSize = v23 + v21 + 8;
      return 0LL;
    }
    return 3221225597LL;
  }
  return result;
}
