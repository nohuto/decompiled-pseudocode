/*
 * XREFs of RtlpCopyEffectiveAce @ 0x180040048
 * Callers:
 *     RtlpCopyAces @ 0x18003D350 (RtlpCopyAces.c)
 *     RtlpGenerateInheritedAce @ 0x18003FB94 (RtlpGenerateInheritedAce.c)
 * Callees:
 *     RtlEqualPrefixSid @ 0x180040520 (RtlEqualPrefixSid.c)
 *     RtlMapGenericMask @ 0x1800405E0 (RtlMapGenericMask.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 */

char __fastcall RtlpCopyEffectiveAce(
        ACCESS_MASK *Src,
        char a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        PGENERIC_MAPPING GenericMapping,
        __int64 a9,
        unsigned int a10,
        void **a11,
        _DWORD *a12,
        __int64 a13,
        _BYTE *a14,
        _BYTE *a15,
        _BYTE *a16)
{
  _DWORD *v17; // r12
  __int64 v18; // r14
  char v19; // r13
  __int64 v20; // rax
  __int64 v21; // rcx
  void **v22; // r9
  __int64 v23; // rdi
  unsigned __int8 *v24; // r12
  char *v25; // r13
  unsigned int v26; // r14d
  int v27; // ecx
  unsigned int v28; // r15d
  int v29; // r15d
  char *v30; // rdx
  char *v31; // rsi
  char *v32; // rsi
  char *v33; // rsi
  unsigned int v34; // esi
  _BYTE *v35; // rcx
  int v37; // ecx
  char *v38; // rax
  int v39; // eax
  char *v40; // r13
  char *v41; // rcx
  __int64 v42; // rdx
  unsigned int v43; // r10d
  __int64 v44; // rax
  int v45; // ecx
  int v46; // ecx
  unsigned int v47; // eax
  ACCESS_MASK v48; // ecx
  ACCESS_MASK v49; // ecx
  ACCESS_MASK v50; // ecx
  unsigned __int8 *v51; // rax
  int v52; // eax
  int v53; // eax
  int v54; // eax
  char v56; // [rsp+21h] [rbp-B8h]
  int v57; // [rsp+24h] [rbp-B5h]
  ACCESS_MASK AccessMask; // [rsp+38h] [rbp-A1h] BYREF
  _BYTE *v59; // [rsp+40h] [rbp-99h]
  __int64 v60; // [rsp+48h] [rbp-91h]
  void *Srca; // [rsp+50h] [rbp-89h]
  __int64 v62; // [rsp+58h] [rbp-81h]
  __int64 v63; // [rsp+60h] [rbp-79h]
  __int64 v64; // [rsp+68h] [rbp-71h]
  __int64 v65; // [rsp+70h] [rbp-69h]
  unsigned __int8 *v66; // [rsp+78h] [rbp-61h]
  void *v67; // [rsp+80h] [rbp-59h]
  __int16 Sid2; // [rsp+88h] [rbp-51h] BYREF
  int v69; // [rsp+8Ah] [rbp-4Fh]
  __int16 v70; // [rsp+8Eh] [rbp-4Bh]
  int v71; // [rsp+90h] [rbp-49h]
  char v72[8]; // [rsp+B8h] [rbp-21h] BYREF
  int v73; // [rsp+C0h] [rbp-19h]

  v17 = a12;
  v18 = a13;
  v19 = a2;
  v69 = 0;
  v70 = 768;
  v20 = a4;
  if ( a6 )
    v20 = a6;
  v21 = a5;
  v66 = (unsigned __int8 *)a4;
  v22 = a11;
  if ( a7 )
    v21 = a7;
  v63 = v21;
  v65 = a5;
  v62 = (__int64)a12;
  v60 = a13;
  v59 = a16;
  v56 = 0;
  Sid2 = 257;
  v71 = 0;
  v64 = v20;
  *a15 = 0;
  if ( a14 )
    *a14 = 0;
  *a16 = 0;
  v23 = *((unsigned __int16 *)Src + 1);
  if ( *(_BYTE *)Src > 0xAu && (unsigned __int8)(*(_BYTE *)Src - 13) > 1u )
  {
    if ( v23 > a13 + *(unsigned __int16 *)(a13 + 2) - (_QWORD)*a11 )
    {
      v35 = v59;
      *v59 = 1;
      goto LABEL_34;
    }
    memmove(*a11, Src, *((unsigned __int16 *)Src + 1));
    v22 = a11;
    goto LABEL_28;
  }
  v24 = 0LL;
  Srca = Src;
  v67 = 0LL;
  v57 = 0;
  if ( *(_BYTE *)Src <= 3u )
  {
    v25 = (char *)(Src + 2);
    v26 = 8;
    goto LABEL_10;
  }
  if ( ((*(_BYTE *)Src - 9) & 0xFA) == 0 )
  {
    v25 = (char *)(Src + 2);
    v26 = 8;
    v47 = 4 * *((unsigned __int8 *)Src + 9) + 8;
    v67 = (char *)Src + v47 + 8;
    v57 = v23 - v47 - 8;
    goto LABEL_10;
  }
  v40 = (char *)(Src + 3);
  if ( *(_BYTE *)Src == 4 )
  {
    v24 = (unsigned __int8 *)(Src + 3);
    v26 = 12;
    v25 = &v40[4 * *((unsigned __int8 *)Src + 13) + 8];
    if ( !RtlEqualPrefixSid(Src + 3, &Sid2) )
      goto LABEL_88;
    v48 = Src[5];
    if ( v48 )
    {
      v49 = v48 - 1;
      if ( v49 )
      {
        v50 = v49 - 1;
        if ( !v50 )
        {
          v51 = (unsigned __int8 *)v64;
          goto LABEL_82;
        }
        if ( v50 == 1 )
        {
          v51 = (unsigned __int8 *)v63;
LABEL_82:
          v24 = v51;
          v52 = v51[1];
          *a15 = 1;
          LODWORD(v23) = v23 + 4 * v52 - 4;
LABEL_92:
          v22 = a11;
          goto LABEL_10;
        }
        goto LABEL_87;
      }
      if ( !v65 )
      {
LABEL_87:
        if ( *a15 )
          goto LABEL_92;
LABEL_88:
        v54 = v24[1];
        v24 = 0LL;
        v26 = 4 * v54 + 20;
        goto LABEL_92;
      }
      v53 = *(unsigned __int8 *)(v65 + 1);
      v24 = (unsigned __int8 *)v65;
    }
    else
    {
      v24 = v66;
      v53 = v66[1];
    }
    *a15 = 1;
    LODWORD(v23) = v23 + 4 * v53 - 4;
    goto LABEL_87;
  }
  v25 = &v40[((Src[2] & 2) != 0 ? 0x10 : 0) + (unsigned __int64)((Src[2] & 1) != 0 ? 0x10 : 0)];
  v26 = (_DWORD)v25 - (_DWORD)Src;
  if ( (Src[2] & 2) != 0 )
  {
    if ( (Src[2] & 1) != 0 )
      v41 = (char *)(Src + 7);
    else
      v41 = (char *)(Src + 3);
  }
  else
  {
    v41 = 0LL;
  }
  if ( a14 && v41 )
  {
    v42 = a9;
    if ( !a9 || (v43 = 0, !a10) )
    {
LABEL_58:
      LODWORD(v23) = 0;
      goto LABEL_10;
    }
    while ( 1 )
    {
      v44 = *(_QWORD *)v41 - **(_QWORD **)v42;
      if ( *(_QWORD *)v41 == **(_QWORD **)v42 )
        v44 = *((_QWORD *)v41 + 1) - *(_QWORD *)(*(_QWORD *)v42 + 8LL);
      if ( !v44 )
        break;
      ++v43;
      v42 += 8LL;
      if ( v43 >= a10 )
        goto LABEL_58;
    }
    *a14 = 1;
    if ( a3 )
    {
      v56 = 1;
      goto LABEL_10;
    }
    *a15 = 1;
    if ( (Src[2] & 1) != 0 )
    {
      v26 -= 16;
      LODWORD(v23) = v23 - 16;
      memmove(v72, Src, v26);
      v73 &= ~2u;
      Srca = v72;
    }
    else
    {
      v26 -= 20;
      LODWORD(v23) = v23 - 20;
      memmove(v72, Src, v26);
      Srca = v72;
      v72[0] = RtlBaseAceType[*(unsigned __int8 *)Src];
    }
    goto LABEL_92;
  }
LABEL_10:
  if ( (_DWORD)v23 )
  {
    AccessMask = Src[1];
    RtlMapGenericMask(&AccessMask, GenericMapping);
    if ( *(_BYTE *)Src <= 0xAu && (v27 = 1651, _bittest(&v27, *(unsigned __int8 *)Src)) )
      v28 = GenericMapping->GenericAll & AccessMask;
    else
      v28 = (GenericMapping->GenericAll | 0x1000000) & AccessMask;
    if ( v28 != Src[1] )
      *a15 = 1;
    v29 = v28 & 0x11FFFFF;
    if ( !v29 && !RtlEqualPrefixSid(v25, &Sid2) )
    {
      v22 = a11;
      LODWORD(v23) = 0;
      goto LABEL_27;
    }
    if ( !RtlEqualPrefixSid(v25, &Sid2) )
    {
LABEL_18:
      if ( v56 && *a15 )
      {
        if ( (Src[2] & 1) != 0 )
        {
          v26 -= 16;
          LODWORD(v23) = v23 - 16;
          memmove(v72, Src, v26);
          v73 &= ~2u;
          v30 = v72;
        }
        else
        {
          v26 -= 20;
          LODWORD(v23) = v23 - 20;
          memmove(v72, Src, v26);
          v30 = v72;
          v72[0] = RtlBaseAceType[*(unsigned __int8 *)Src];
        }
      }
      else
      {
        v30 = (char *)Srca;
      }
      v22 = a11;
      v31 = (char *)*a11;
      if ( !*a11 || (unsigned int)v23 > v60 + *(unsigned __int16 *)(v60 + 2) - (_QWORD)v31 )
      {
        v35 = v59;
        v18 = v60;
        v17 = (_DWORD *)v62;
        v19 = a2;
        *v59 = 1;
        goto LABEL_29;
      }
      memmove(*a11, v30, v26);
      v32 = &v31[v26];
      if ( v24 )
      {
        memmove(v32, v24, 4 * v24[1] + 8);
        v32 += 4 * v24[1] + 8;
      }
      memmove(v32, v25, 4 * (unsigned __int8)v25[1] + 8);
      v33 = &v32[4 * (unsigned __int8)v25[1] + 8];
      if ( v67 && v57 > 0 )
      {
        memmove(v33, v67, v57);
        LODWORD(v33) = v57 + (_DWORD)v33;
      }
      v22 = a11;
      v34 = (_DWORD)v33 - *(_DWORD *)a11;
      if ( (unsigned int)v23 < v34 )
        return 0;
      LODWORD(v23) = v34;
      *((_WORD *)*a11 + 1) = v34;
      *((_DWORD *)*a11 + 1) = v29;
      goto LABEL_27;
    }
    v37 = *((_DWORD *)v25 + 2);
    if ( v37 )
    {
      v45 = v37 - 1;
      if ( v45 )
      {
        v46 = v45 - 1;
        if ( v46 )
        {
          if ( v46 != 1 )
            goto LABEL_18;
          v38 = (char *)v63;
        }
        else
        {
          v38 = (char *)v64;
        }
      }
      else
      {
        v38 = (char *)v65;
        if ( !v65 )
          goto LABEL_18;
      }
    }
    else
    {
      v38 = (char *)v66;
    }
    v25 = v38;
    v39 = (unsigned __int8)v38[1];
    *a15 = 1;
    LODWORD(v23) = v23 + 4 * v39 - 4;
    goto LABEL_18;
  }
LABEL_27:
  v18 = v60;
  v17 = (_DWORD *)v62;
  v19 = a2;
LABEL_28:
  v35 = v59;
LABEL_29:
  if ( !*v35 && (_DWORD)v23 )
  {
    *((_BYTE *)*v22 + 1) &= 0xE0u;
    if ( v19 )
      *((_BYTE *)*v22 + 1) |= 0x10u;
    ++*(_WORD *)(v18 + 4);
  }
LABEL_34:
  if ( (unsigned int)v23 > 0xFFFF )
    return 0;
  if ( !*v35 )
    *v22 = (char *)*v22 + (unsigned int)v23;
  *v17 = v23;
  return 1;
}
