/*
 * XREFs of RtlpGenerateInheritedAce @ 0x18003FB94
 * Callers:
 *     RtlpGenerateInheritAcl @ 0x18003F9C0 (RtlpGenerateInheritAcl.c)
 * Callees:
 *     RtlpIsDuplicateAce @ 0x18003FE90 (RtlpIsDuplicateAce.c)
 *     RtlpCopyEffectiveAce @ 0x180040048 (RtlpCopyEffectiveAce.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 */

__int64 __fastcall RtlpGenerateInheritedAce(
        _BYTE *Src,
        char a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        PGENERIC_MAPPING GenericMapping,
        __int64 a9,
        int a10,
        unsigned int *a11,
        __int64 a12,
        unsigned int *a13,
        _BYTE *a14)
{
  __int64 v14; // r9
  unsigned int v16; // r15d
  char v17; // r10
  char v18; // si
  __int64 v20; // rcx
  unsigned int v21; // r12d
  unsigned int v22; // r13d
  char v23; // al
  unsigned int v25; // edx
  unsigned __int64 v26; // rbx
  unsigned int v28; // eax
  _WORD v30[2]; // [rsp+88h] [rbp-9h] BYREF
  unsigned int v31; // [rsp+8Ch] [rbp-5h] BYREF
  bool v32; // [rsp+E0h] [rbp+4Fh]
  __int64 v34; // [rsp+130h] [rbp+9Fh]

  v14 = (__int64)a14;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v31 = 0;
  v20 = 0LL;
  v30[0] = 0;
  v21 = 0;
  *a14 = 0;
  v22 = 0;
  v32 = 0;
  if ( a2 )
  {
    v23 = Src[1];
    if ( (v23 & 4) == 0 && ((v23 & 1) != 0 || (v23 & 2) != 0) )
      v32 = 1;
  }
  v25 = 0;
  v26 = a12 + 8;
  if ( *(_WORD *)(a12 + 4) )
  {
    while ( v26 < a12 + (unsigned __int64)*(unsigned __int16 *)(a12 + 2) )
    {
      ++v25;
      v26 += *(unsigned __int16 *)(v26 + 2);
      if ( v25 >= *(unsigned __int16 *)(a12 + 4) )
      {
        v14 = (__int64)a14;
        goto LABEL_11;
      }
    }
    return 3221225597LL;
  }
LABEL_11:
  if ( v26 > a12 + (unsigned __int64)*(unsigned __int16 *)(a12 + 2) )
    return 3221225597LL;
  a14 = (_BYTE *)v26;
  if ( !v26 )
    return 3221225597LL;
  if ( a2 )
  {
    if ( (Src[1] & 2) != 0 )
    {
LABEL_15:
      v34 = v26;
      if ( !(unsigned __int8)RtlpCopyEffectiveAce(
                               Src,
                               a5,
                               a6,
                               a7,
                               GenericMapping,
                               a9,
                               a10,
                               (__int64)&a14,
                               (__int64)&v31,
                               a12,
                               v14,
                               (__int64)v30 + 1,
                               (__int64)v30) )
        return 3221225597LL;
      v18 = v30[0];
      v16 = v31;
      if ( !LOBYTE(v30[0]) && v31 && (unsigned __int8)RtlpIsDuplicateAce(a12, v26) )
      {
        v22 = v16;
        --*(_WORD *)(a12 + 4);
        v16 = 0;
      }
      else
      {
        v26 = (unsigned __int64)a14;
      }
      v17 = HIBYTE(v30[0]);
      v21 = v16;
      v20 = v34;
    }
  }
  else if ( (Src[1] & 1) != 0 )
  {
    goto LABEL_15;
  }
  if ( !v32 )
    goto LABEL_22;
  if ( v16 && !v17 )
  {
    if ( !v18 )
    {
      *(_BYTE *)(v20 + 1) |= Src[1] & 3;
      if ( a3 )
        *(_BYTE *)(v20 + 1) |= 0x10u;
    }
    goto LABEL_22;
  }
  if ( *Src <= 8u && !*((_DWORD *)Src + 1) )
  {
LABEL_22:
    *a11 = v21;
    *a13 = v22;
    return v18 != 0 ? 0xC0000023 : 0;
  }
  v21 += *((unsigned __int16 *)Src + 1);
  if ( v21 <= 0xFFFF )
  {
    if ( *((unsigned __int16 *)Src + 1) > (__int64)(a12 + *(unsigned __int16 *)(a12 + 2) - v26) )
    {
      v18 = 1;
    }
    else if ( !v18 )
    {
      memmove((void *)v26, Src, *((unsigned __int16 *)Src + 1));
      *(_BYTE *)(v26 + 1) |= 8u;
      ++*(_WORD *)(a12 + 4);
      if ( a3 )
      {
        *(_BYTE *)(v26 + 1) |= 0x10u;
        if ( (unsigned __int8)RtlpIsDuplicateAce(a12, v26) )
        {
          --*(_WORD *)(a12 + 4);
          v28 = *((unsigned __int16 *)Src + 1);
          if ( v22 <= v28 )
            v22 = *((unsigned __int16 *)Src + 1);
          v21 -= v28;
        }
      }
    }
    goto LABEL_22;
  }
  return 3221225597LL;
}
