/*
 * XREFs of RtlpCopyEffectiveAce @ 0x180060A18
 * Callers:
 *     RtlpGenerateInheritedAce @ 0x180060584 (RtlpGenerateInheritedAce.c)
 *     RtlpCopyAces @ 0x18006192C (RtlpCopyAces.c)
 * Callees:
 *     RtlEqualPrefixSid @ 0x180060EF0 (RtlEqualPrefixSid.c)
 *     RtlMapGenericMask @ 0x180060FB0 (RtlMapGenericMask.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     memmove @ 0x1800AB5C0 (memmove.c)
 */

char __fastcall RtlpCopyEffectiveAce(
        char *Src,
        char a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
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
  __int64 v27; // r8
  __int64 v28; // r9
  int v29; // ecx
  int v30; // r15d
  int v31; // r15d
  char *v32; // rdx
  char *v33; // rsi
  char *v34; // rsi
  char *v35; // rsi
  unsigned int v36; // esi
  _BYTE *v37; // rcx
  int v39; // ecx
  char *v40; // rax
  int v41; // eax
  char *v42; // r13
  char *v43; // rcx
  __int64 v44; // rdx
  unsigned int v45; // r10d
  __int64 v46; // rax
  int v47; // ecx
  int v48; // ecx
  unsigned int v49; // eax
  int v50; // ecx
  int v51; // ecx
  int v52; // ecx
  unsigned __int8 *v53; // rax
  int v54; // eax
  int v55; // eax
  int v56; // eax
  char v58; // [rsp+21h] [rbp-B8h]
  int v59; // [rsp+24h] [rbp-B5h]
  int v60; // [rsp+38h] [rbp-A1h] BYREF
  _BYTE *v61; // [rsp+40h] [rbp-99h]
  __int64 v62; // [rsp+48h] [rbp-91h]
  void *Srca; // [rsp+50h] [rbp-89h]
  __int64 v64; // [rsp+58h] [rbp-81h]
  __int64 v65; // [rsp+60h] [rbp-79h]
  unsigned __int8 *v66; // [rsp+68h] [rbp-71h]
  void *v67; // [rsp+70h] [rbp-69h]
  __int64 v68; // [rsp+78h] [rbp-61h]
  __int64 v69; // [rsp+80h] [rbp-59h]
  __int16 v70; // [rsp+88h] [rbp-51h] BYREF
  int v71; // [rsp+8Ah] [rbp-4Fh]
  __int16 v72; // [rsp+8Eh] [rbp-4Bh]
  int v73; // [rsp+90h] [rbp-49h]
  char v74[8]; // [rsp+B8h] [rbp-21h] BYREF
  int v75; // [rsp+C0h] [rbp-19h]

  v17 = a12;
  v18 = a13;
  v19 = a2;
  v71 = 0;
  v72 = 768;
  v20 = a4;
  if ( a6 )
    v20 = a6;
  v21 = a5;
  v66 = (unsigned __int8 *)a4;
  v22 = a11;
  if ( a7 )
    v21 = a7;
  v68 = v21;
  v65 = a5;
  v64 = (__int64)a12;
  v62 = a13;
  v61 = a16;
  v58 = 0;
  v70 = 257;
  v73 = 0;
  v69 = v20;
  *a15 = 0;
  if ( a14 )
    *a14 = 0;
  *a16 = 0;
  v23 = *((unsigned __int16 *)Src + 1);
  if ( (unsigned __int8)*Src > 0xAu && (unsigned __int8)(*Src - 13) > 1u )
  {
    if ( v23 > a13 + *(unsigned __int16 *)(a13 + 2) - (_QWORD)*a11 )
    {
      v37 = v61;
      *v61 = 1;
      goto LABEL_34;
    }
    memmove(*a11, Src, *((unsigned __int16 *)Src + 1));
    v22 = a11;
    goto LABEL_28;
  }
  v24 = 0LL;
  Srca = Src;
  v67 = 0LL;
  v59 = 0;
  if ( (unsigned __int8)*Src <= 3u )
  {
    v25 = Src + 8;
    v26 = 8;
    goto LABEL_10;
  }
  if ( ((*Src - 9) & 0xFA) == 0 )
  {
    v25 = Src + 8;
    v26 = 8;
    v49 = 4 * (unsigned __int8)Src[9] + 8;
    v67 = &Src[v49 + 8];
    v59 = v23 - v49 - 8;
    goto LABEL_10;
  }
  v42 = Src + 12;
  if ( *Src == 4 )
  {
    v24 = (unsigned __int8 *)(Src + 12);
    v26 = 12;
    v25 = &v42[4 * (unsigned __int8)Src[13] + 8];
    if ( !(unsigned __int8)RtlEqualPrefixSid(Src + 12, &v70, a16, a11) )
      goto LABEL_88;
    v50 = *((_DWORD *)Src + 5);
    if ( v50 )
    {
      v51 = v50 - 1;
      if ( v51 )
      {
        v52 = v51 - 1;
        if ( !v52 )
        {
          v53 = (unsigned __int8 *)v69;
          goto LABEL_82;
        }
        if ( v52 == 1 )
        {
          v53 = (unsigned __int8 *)v68;
LABEL_82:
          v24 = v53;
          v54 = v53[1];
          *a15 = 1;
          LODWORD(v23) = v23 + 4 * v54 - 4;
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
        v56 = v24[1];
        v24 = 0LL;
        v26 = 4 * v56 + 20;
        goto LABEL_92;
      }
      v55 = *(unsigned __int8 *)(v65 + 1);
      v24 = (unsigned __int8 *)v65;
    }
    else
    {
      v24 = v66;
      v55 = v66[1];
    }
    *a15 = 1;
    LODWORD(v23) = v23 + 4 * v55 - 4;
    goto LABEL_87;
  }
  v25 = &v42[((*((_DWORD *)Src + 2) & 2) != 0 ? 0x10 : 0)
           + (unsigned __int64)((*((_DWORD *)Src + 2) & 1) != 0 ? 0x10 : 0)];
  v26 = (_DWORD)v25 - (_DWORD)Src;
  if ( (*((_DWORD *)Src + 2) & 2) != 0 )
  {
    if ( (*((_DWORD *)Src + 2) & 1) != 0 )
      v43 = Src + 28;
    else
      v43 = Src + 12;
  }
  else
  {
    v43 = 0LL;
  }
  if ( a14 && v43 )
  {
    v44 = a9;
    if ( !a9 || (v45 = 0, !a10) )
    {
LABEL_58:
      LODWORD(v23) = 0;
      goto LABEL_10;
    }
    while ( 1 )
    {
      v46 = *(_QWORD *)v43 - **(_QWORD **)v44;
      if ( *(_QWORD *)v43 == **(_QWORD **)v44 )
        v46 = *((_QWORD *)v43 + 1) - *(_QWORD *)(*(_QWORD *)v44 + 8LL);
      if ( !v46 )
        break;
      ++v45;
      v44 += 8LL;
      if ( v45 >= a10 )
        goto LABEL_58;
    }
    *a14 = 1;
    if ( a3 )
    {
      v58 = 1;
      goto LABEL_10;
    }
    *a15 = 1;
    if ( (Src[8] & 1) != 0 )
    {
      v26 -= 16;
      LODWORD(v23) = v23 - 16;
      memmove(v74, Src, v26);
      v75 &= ~2u;
      Srca = v74;
    }
    else
    {
      v26 -= 20;
      LODWORD(v23) = v23 - 20;
      memmove(v74, Src, v26);
      Srca = v74;
      v74[0] = RtlBaseAceType[(unsigned __int8)*Src];
    }
    goto LABEL_92;
  }
LABEL_10:
  if ( (_DWORD)v23 )
  {
    v60 = *((_DWORD *)Src + 1);
    RtlMapGenericMask(&v60, a8);
    if ( (unsigned __int8)*Src <= 0xAu && (v29 = 1651, _bittest(&v29, (unsigned __int8)*Src)) )
      v30 = *(_DWORD *)(a8 + 12) & v60;
    else
      v30 = (*(_DWORD *)(a8 + 12) | 0x1000000) & v60;
    if ( v30 != *((_DWORD *)Src + 1) )
      *a15 = 1;
    v31 = v30 & 0x11FFFFF;
    if ( !v31 && !(unsigned __int8)RtlEqualPrefixSid(v25, &v70, v27, v28) )
    {
      v22 = a11;
      LODWORD(v23) = 0;
      goto LABEL_27;
    }
    if ( !(unsigned __int8)RtlEqualPrefixSid(v25, &v70, v27, v28) )
    {
LABEL_18:
      if ( v58 && *a15 )
      {
        if ( (Src[8] & 1) != 0 )
        {
          v26 -= 16;
          LODWORD(v23) = v23 - 16;
          memmove(v74, Src, v26);
          v75 &= ~2u;
          v32 = v74;
        }
        else
        {
          v26 -= 20;
          LODWORD(v23) = v23 - 20;
          memmove(v74, Src, v26);
          v32 = v74;
          v74[0] = RtlBaseAceType[(unsigned __int8)*Src];
        }
      }
      else
      {
        v32 = (char *)Srca;
      }
      v22 = a11;
      v33 = (char *)*a11;
      if ( !*a11 || (unsigned int)v23 > v62 + *(unsigned __int16 *)(v62 + 2) - (_QWORD)v33 )
      {
        v37 = v61;
        v18 = v62;
        v17 = (_DWORD *)v64;
        v19 = a2;
        *v61 = 1;
        goto LABEL_29;
      }
      memmove(*a11, v32, v26);
      v34 = &v33[v26];
      if ( v24 )
      {
        memmove(v34, v24, 4 * v24[1] + 8);
        v34 += 4 * v24[1] + 8;
      }
      memmove(v34, v25, 4 * (unsigned __int8)v25[1] + 8);
      v35 = &v34[4 * (unsigned __int8)v25[1] + 8];
      if ( v67 && v59 > 0 )
      {
        memmove(v35, v67, v59);
        LODWORD(v35) = v59 + (_DWORD)v35;
      }
      v22 = a11;
      v36 = (_DWORD)v35 - *(_DWORD *)a11;
      if ( (unsigned int)v23 < v36 )
        return 0;
      LODWORD(v23) = v36;
      *((_WORD *)*a11 + 1) = v36;
      *((_DWORD *)*a11 + 1) = v31;
      goto LABEL_27;
    }
    v39 = *((_DWORD *)v25 + 2);
    if ( v39 )
    {
      v47 = v39 - 1;
      if ( v47 )
      {
        v48 = v47 - 1;
        if ( v48 )
        {
          if ( v48 != 1 )
            goto LABEL_18;
          v40 = (char *)v68;
        }
        else
        {
          v40 = (char *)v69;
        }
      }
      else
      {
        v40 = (char *)v65;
        if ( !v65 )
          goto LABEL_18;
      }
    }
    else
    {
      v40 = (char *)v66;
    }
    v25 = v40;
    v41 = (unsigned __int8)v40[1];
    *a15 = 1;
    LODWORD(v23) = v23 + 4 * v41 - 4;
    goto LABEL_18;
  }
LABEL_27:
  v18 = v62;
  v17 = (_DWORD *)v64;
  v19 = a2;
LABEL_28:
  v37 = v61;
LABEL_29:
  if ( !*v37 && (_DWORD)v23 )
  {
    *((_BYTE *)*v22 + 1) &= 0xE0u;
    if ( v19 )
      *((_BYTE *)*v22 + 1) |= 0x10u;
    ++*(_WORD *)(v18 + 4);
  }
LABEL_34:
  if ( (unsigned int)v23 > 0xFFFF )
    return 0;
  if ( !*v37 )
    *v22 = (char *)*v22 + (unsigned int)v23;
  *v17 = v23;
  return 1;
}
