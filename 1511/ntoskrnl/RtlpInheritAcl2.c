/*
 * XREFs of RtlpInheritAcl2 @ 0x140471430
 * Callers:
 *     RtlpNewSecurityObject @ 0x14042F920 (RtlpNewSecurityObject.c)
 * Callees:
 *     memmove @ 0x140166980 (memmove.c)
 *     RtlFirstFreeAce @ 0x1403BDDB8 (RtlFirstFreeAce.c)
 *     RtlpCopyAces @ 0x140471900 (RtlpCopyAces.c)
 *     RtlpGenerateInheritAcl @ 0x1404722A0 (RtlpGenerateInheritAcl.c)
 */

__int64 __fastcall RtlpInheritAcl2(
        _BYTE *a1,
        unsigned __int8 *a2,
        __int16 a3,
        unsigned __int8 a4,
        __int64 a5,
        char a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        PGENERIC_MAPPING a11,
        int a12,
        __int64 a13,
        int a14,
        PACE a15,
        PACL Acl,
        _BYTE *a17,
        int *a18)
{
  PACE v18; // r12
  PACL v19; // rbx
  __int16 v21; // r10
  __int64 v22; // r8
  ACE_HEADER Header; // edx
  char v24; // r13
  int v25; // esi
  int v26; // ebp
  int v27; // r14d
  __int64 v28; // r9
  unsigned __int8 v29; // di
  _BYTE *v30; // r11
  int *v31; // rax
  int v32; // ecx
  int v33; // edx
  char v34; // al
  __int64 result; // rax
  int v36; // ecx
  char v37; // al
  int v38; // eax
  __int64 v39; // rax
  char v40; // [rsp+80h] [rbp-58h]
  char v41; // [rsp+81h] [rbp-57h]
  USHORT AceCount; // [rsp+82h] [rbp-56h]
  int v43; // [rsp+84h] [rbp-54h]
  __int64 v44; // [rsp+88h] [rbp-50h] BYREF
  PACE Ace; // [rsp+90h] [rbp-48h] BYREF
  char v47; // [rsp+F0h] [rbp+18h]

  v47 = a3;
  v18 = a15;
  v19 = Acl;
  v21 = a3;
  v22 = 2LL;
  v44 = 0LL;
  Header = a15->Header;
  v24 = 0;
  Ace = 0LL;
  v25 = 0;
  v26 = 0;
  AceCount = 0;
  v27 = 0;
  v40 = 0;
  v41 = 1;
  LOBYTE(v43) = 2;
  v28 = 2LL;
  if ( (unsigned int)(*(_DWORD *)&Header - 8) <= 0xFFF4 )
  {
    memset(Acl, 0, *(unsigned int *)&Header);
    *(_WORD *)&v19->AclRevision = 2;
    *(_DWORD *)&v19->AceCount = 0;
    v19->AclSize = *(_WORD *)&Header.AceType & 0xFFFC;
  }
  v29 = a5;
  v30 = a17;
  v31 = a18;
  v32 = (_BYTE)a5 != 0 ? 0x400 : 0;
  *a17 = 0;
  v33 = v21 & 8;
  LODWORD(a5) = v33;
  *v31 = v32;
  if ( (v21 & 8) != 0 )
  {
    v37 = 0;
    goto LABEL_32;
  }
  if ( (v21 & 0x1000) != 0 )
  {
    v40 = 1;
    *v31 = v32 | 0x1000;
  }
  if ( (v21 & 0x1004) == 0 )
    goto LABEL_30;
  if ( a2 )
  {
    v41 = 0;
    if ( *a2 >= 2u )
      v28 = *a2;
    v43 = v28;
    if ( v29 )
    {
      if ( (v21 & 0x1000) != 0 )
      {
        LOBYTE(v28) = 16;
      }
      else
      {
        v22 = 1LL;
        LOBYTE(v28) = 0;
      }
      v34 = 1;
    }
    else
    {
      LOBYTE(v28) = 0;
      v34 = 0;
    }
    result = RtlpCopyAces(a2, a11, v22, v28, v34, a7, a8, a9, a10, a4, 0, a12, (char *)&v44 + 4, v19);
    v26 = HIDWORD(v44);
    v25 = HIDWORD(v44);
    if ( (_DWORD)result == -1073741789 )
    {
      v24 = 1;
    }
    else if ( (int)result < 0 )
    {
      return result;
    }
    if ( a6 )
    {
      if ( HIDWORD(v44) )
      {
        AceCount = v19->AceCount;
        if ( !RtlFirstFreeAce(v19, &Ace) )
          return 3221225597LL;
      }
    }
    LODWORD(v28) = v43;
    LOBYTE(v21) = v47;
    v30 = a17;
  }
  else if ( v29 )
  {
    v36 = a12;
    if ( a12 == 1 )
    {
      if ( (v21 & 0x1004) == 4 )
        return 3221225591LL;
      goto LABEL_29;
    }
LABEL_43:
    v37 = v40;
    if ( v36 == 2 && (v26 || v40 || a2 && !*((_WORD *)a2 + 2)) )
      *v30 = 1;
    goto LABEL_31;
  }
  v36 = a12;
  if ( a12 != 1 )
    goto LABEL_43;
LABEL_29:
  *v30 = 1;
LABEL_30:
  v37 = v40;
LABEL_31:
  v33 = a5;
LABEL_32:
  if ( (!v29 && (v21 & 4) == 0 || v33 || v29 && !v37) && a1 )
  {
    if ( (unsigned __int8)(*a1 - 2) > 2u )
      return 3221225560LL;
    if ( (unsigned int)v28 <= (unsigned __int8)*a1 )
      LOBYTE(v28) = *a1;
    LOBYTE(v43) = v28;
    result = RtlpGenerateInheritAcl(
               (int)a1,
               a4,
               v29,
               a7,
               a8,
               a9,
               a10,
               a11,
               a13,
               a14,
               a12,
               v24,
               (__int64)&v44,
               v19,
               (__int64)&a5);
    if ( (_DWORD)result == -1073741789 )
    {
      v24 = 1;
    }
    else if ( (int)result < 0 )
    {
      return result;
    }
    if ( a6 && v26 && (_BYTE)a5 && !v24 )
    {
      if ( !RtlFirstFreeAce(v19, &a15) )
        return 3221225597LL;
      v38 = (int)a15;
      if ( !a15 )
        v38 = (_DWORD)v19 + v19->AclSize;
      memmove(&v19[1], Ace, (unsigned int)(v38 - (_DWORD)Ace));
      v19->AceCount -= AceCount;
      v25 = 0;
    }
    v27 = v44;
  }
  v39 = (unsigned int)(v27 + v25);
  if ( !(_DWORD)v39 )
  {
    if ( !*a17 )
    {
      v18->Header = 0;
      return 2147483659LL;
    }
    if ( v41 )
    {
      v18->Header = 0;
      return 0LL;
    }
  }
  if ( (unsigned __int64)(v39 + 8) > 0xFFFF )
    return 3221225597LL;
  v18->Header = (ACE_HEADER)(v27 + v26 + 8);
  if ( v24 )
    return 3221225507LL;
  v19->AclRevision = v43;
  v19->AclSize = v27 + v25 + 8;
  return 0LL;
}
