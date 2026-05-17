/*
 * XREFs of RtlpInheritAcl2 @ 0x180040638
 * Callers:
 *     RtlpInheritAcl @ 0x18004158C (RtlpInheritAcl.c)
 * Callees:
 *     RtlFirstFreeAce @ 0x180014E20 (RtlFirstFreeAce.c)
 *     RtlpCopyAces @ 0x18003D360 (RtlpCopyAces.c)
 *     RtlpGenerateInheritAcl @ 0x18003F9D0 (RtlpGenerateInheritAcl.c)
 *     RtlCreateAcl @ 0x180040A00 (RtlCreateAcl.c)
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
        __int64 a11,
        int a12,
        __int64 a13,
        int a14,
        _DWORD *a15,
        __int64 a16,
        _BYTE *a17,
        int *a18)
{
  __int64 v18; // rbx
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
  char v39; // [rsp+88h] [rbp-19h]
  char v40; // [rsp+89h] [rbp-18h]
  __int16 v41; // [rsp+8Ah] [rbp-17h]
  int v42; // [rsp+8Ch] [rbp-15h] BYREF
  int v43; // [rsp+90h] [rbp-11h] BYREF
  void *Src; // [rsp+98h] [rbp-9h] BYREF
  int v46; // [rsp+F8h] [rbp+57h] BYREF
  char v47; // [rsp+100h] [rbp+5Fh]

  v47 = a4;
  v46 = a3;
  v18 = a16;
  v43 = 0;
  v20 = 0;
  v42 = 0;
  v21 = 0;
  v41 = 0;
  Src = 0LL;
  v22 = 2;
  v39 = 0;
  v40 = 1;
  v23 = 0;
  v24 = 0;
  RtlCreateAcl(a16, (unsigned int)*a15, 2LL);
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
      v39 = 1;
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
        v31 = v39;
        if ( v37 == 2 && (v20 || v39 || a2 && !*((_WORD *)a2 + 2)) )
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
        v31 = v39;
LABEL_6:
        v30 = (int)a18;
        goto LABEL_7;
      }
      goto LABEL_49;
    }
    v40 = 0;
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
    result = RtlpCopyAces((__int64)a2, a11, v34, v36, v35, a7, a8, a9, a10, v47, 0, a12, &v43, v18);
    v20 = v43;
    v21 = v43;
    if ( (_DWORD)result == -1073741789 )
    {
      v24 = 1;
      result = 0LL;
    }
    if ( (int)result < 0 )
      return result;
    if ( a6 )
    {
      if ( v43 )
      {
        v41 = *(_WORD *)(v18 + 4);
        if ( !RtlFirstFreeAce(v18, &Src) )
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
  result = RtlpGenerateInheritAcl((__int64)a1, v47, a5, a7, a8, a9, a10, a11, a13, a14, a12, v24, &v42, v18, &v46);
  if ( (_DWORD)result == -1073741789 )
  {
    v24 = 1;
    result = 0LL;
  }
  if ( (int)result >= 0 )
  {
    if ( a6 && v20 && (_BYTE)v46 && !v24 )
    {
      if ( !RtlFirstFreeAce(v18, &a18) )
        return 3221225597LL;
      v38 = (int)a18;
      if ( !a18 )
        v38 = v18 + *(unsigned __int16 *)(v18 + 2);
      memmove((void *)(v18 + 8), Src, (unsigned int)(v38 - (_DWORD)Src));
      *(_WORD *)(v18 + 4) -= v41;
      v21 = 0;
    }
    v23 = v42;
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
      if ( v40 )
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
      *(_BYTE *)v18 = v22;
      *(_WORD *)(v18 + 2) = v23 + v21 + 8;
      return 0LL;
    }
    return 3221225597LL;
  }
  return result;
}
