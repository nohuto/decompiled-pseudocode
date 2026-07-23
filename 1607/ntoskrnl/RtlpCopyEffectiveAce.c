/*
 * XREFs of RtlpCopyEffectiveAce @ 0x140420940
 * Callers:
 *     RtlpGenerateInheritedAce @ 0x140413670 (RtlpGenerateInheritedAce.c)
 *     RtlpCopyAces @ 0x14041D660 (RtlpCopyAces.c)
 * Callees:
 *     RtlLengthSid @ 0x14000BE2C (RtlLengthSid.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     RtlMapGenericMask @ 0x1403FF7D0 (RtlMapGenericMask.c)
 *     RtlEqualPrefixSid @ 0x1404AF0F4 (RtlEqualPrefixSid.c)
 */

char __fastcall RtlpCopyEffectiveAce(
        char *Src,
        char a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        PGENERIC_MAPPING GenericMapping,
        _QWORD **a9,
        unsigned int a10,
        void **a11,
        _DWORD *a12,
        __int64 a13,
        _BYTE *a14,
        _BYTE *a15,
        _BYTE *a16)
{
  __int64 v17; // r8
  __int64 v18; // r8
  char v19; // cl
  __int64 v20; // rbx
  char *v22; // r12
  unsigned int v23; // eax
  int v24; // ecx
  ACCESS_MASK v25; // ecx
  _BYTE *v26; // r11
  char *v27; // rdx
  char *v28; // r12
  char *v29; // r12
  unsigned __int8 *v30; // rdi
  unsigned __int8 *v31; // rdi
  char *v32; // r12
  unsigned int v33; // r12d
  int v34; // ecx
  int v35; // eax
  unsigned __int8 *v36; // rcx
  int v37; // eax
  int v38; // eax
  int v39; // eax
  int v40; // ecx
  int v41; // ecx
  int v42; // ecx
  unsigned __int8 *v43; // rax
  int v44; // eax
  int v45; // eax
  int v46; // r10d
  int v47; // r8d
  unsigned __int64 v48; // rax
  char *v49; // r8
  _QWORD **v50; // r10
  __int64 v51; // rdx
  __int64 v52; // rdx
  unsigned int v53; // eax
  int v54; // edi
  char v55; // [rsp+20h] [rbp-B9h]
  unsigned int Size; // [rsp+24h] [rbp-B5h]
  char Size_4; // [rsp+28h] [rbp-B1h]
  ACCESS_MASK AccessMask; // [rsp+2Ch] [rbp-ADh] BYREF
  _QWORD *v60; // [rsp+30h] [rbp-A9h]
  void *v61; // [rsp+38h] [rbp-A1h]
  void *v62; // [rsp+40h] [rbp-99h]
  _BYTE *v63; // [rsp+48h] [rbp-91h]
  int v64; // [rsp+50h] [rbp-89h]
  void *Srca; // [rsp+58h] [rbp-81h]
  unsigned __int8 *v66; // [rsp+60h] [rbp-79h]
  unsigned __int8 *v67; // [rsp+68h] [rbp-71h]
  __int64 v68; // [rsp+70h] [rbp-69h]
  unsigned __int8 *v69; // [rsp+78h] [rbp-61h]
  void *v70; // [rsp+80h] [rbp-59h]
  __int16 Sid2; // [rsp+88h] [rbp-51h] BYREF
  int v72; // [rsp+8Ah] [rbp-4Fh]
  __int16 v73; // [rsp+8Eh] [rbp-4Bh]
  int v74; // [rsp+90h] [rbp-49h]
  char v75[8]; // [rsp+B8h] [rbp-21h] BYREF
  int v76; // [rsp+C0h] [rbp-19h]

  v17 = a4;
  if ( a6 )
    v17 = a6;
  LODWORD(v60) = 0;
  v67 = (unsigned __int8 *)v17;
  v18 = a5;
  if ( a7 )
    v18 = a7;
  WORD2(v60) = 768;
  v72 = 0;
  v66 = (unsigned __int8 *)v18;
  v69 = (unsigned __int8 *)a4;
  v55 = a2;
  v68 = a5;
  v63 = a15;
  Size_4 = 0;
  Sid2 = 257;
  v73 = 768;
  v74 = 0;
  *a15 = 0;
  if ( a14 )
    *a14 = 0;
  *a16 = 0;
  v19 = *Src;
  v20 = *((unsigned __int16 *)Src + 1);
  if ( (unsigned __int8)*Src <= 0xAu || (unsigned __int8)(v19 - 13) <= 1u )
  {
    Srca = Src;
    v61 = 0LL;
    v70 = 0LL;
    v64 = 0;
    if ( (unsigned __int8)v19 <= 3u )
    {
      v22 = Src + 8;
      Size = 8;
      v62 = Src + 8;
      goto LABEL_23;
    }
    if ( ((v19 - 9) & 0xFA) == 0 )
    {
      v22 = Src + 8;
      Size = 8;
      v62 = Src + 8;
      v70 = &Src[RtlLengthSid(Src + 8) + 8];
      v64 = v20 - RtlLengthSid(Src + 8) - 8;
LABEL_53:
      a2 = v55;
      goto LABEL_23;
    }
    if ( v19 != 4 )
    {
      v46 = *((_DWORD *)Src + 2) & 1;
      v47 = *((_DWORD *)Src + 2) & 2;
      v48 = (v47 != 0 ? 0x10 : 0) + (unsigned __int64)(v46 != 0 ? 0x10 : 0);
      v22 = &Src[v48 + 12];
      v62 = v22;
      Size = v48 + 12;
      if ( v47 )
      {
        if ( v46 )
          v49 = Src + 28;
        else
          v49 = Src + 12;
      }
      else
      {
        v49 = 0LL;
      }
      if ( a14 && v49 )
      {
        v50 = a9;
        if ( !a9 || (AccessMask = 0, !a10) )
        {
LABEL_81:
          LODWORD(v20) = 0;
          goto LABEL_19;
        }
        while ( 1 )
        {
          v51 = *(_QWORD *)v49;
          v60 = *v50;
          v52 = v51 - *v60;
          if ( !v52 )
            v52 = *((_QWORD *)v49 + 1) - v60[1];
          if ( !v52 )
            break;
          ++v50;
          if ( ++AccessMask >= a10 )
            goto LABEL_81;
        }
        *a14 = 1;
        if ( a3 )
        {
          Size_4 = 1;
        }
        else
        {
          *a15 = 1;
          if ( (*((_DWORD *)Src + 2) & 1) != 0 )
          {
            LODWORD(v20) = v20 - 16;
            Size = v48 - 4;
            memmove(v75, Src, (unsigned int)(v48 - 4));
            v76 &= ~2u;
            Srca = v75;
          }
          else
          {
            LODWORD(v20) = v20 - 20;
            Size = v48 - 8;
            memmove(v75, Src, (unsigned int)(v48 - 8));
            Srca = v75;
            v75[0] = *((_BYTE *)RtlBaseAceType + (unsigned __int8)*Src);
          }
        }
      }
      goto LABEL_53;
    }
    v61 = Src + 12;
    v22 = &Src[RtlLengthSid(Src + 12) + 12];
    Size = 12;
    v62 = v22;
    if ( !RtlEqualPrefixSid(Src + 12, &Sid2) )
    {
      v45 = (unsigned __int8)Src[13];
      v61 = 0LL;
      Size = 4 * v45 + 20;
      goto LABEL_53;
    }
    v40 = *((_DWORD *)v61 + 2);
    if ( v40 )
    {
      v41 = v40 - 1;
      if ( v41 )
      {
        v42 = v41 - 1;
        if ( !v42 )
        {
          v43 = v67;
          goto LABEL_62;
        }
        if ( v42 == 1 )
        {
          v43 = v66;
LABEL_62:
          v61 = v43;
          LODWORD(v20) = v20 + 4 * v43[1] - 4;
          *v63 = 1;
          goto LABEL_53;
        }
      }
      else
      {
        v43 = (unsigned __int8 *)v68;
        if ( v68 )
          goto LABEL_62;
      }
      a2 = v55;
      if ( !*v63 )
      {
        v44 = *((unsigned __int8 *)v61 + 1);
        v61 = 0LL;
        Size = 4 * v44 + 20;
      }
LABEL_23:
      if ( !(_DWORD)v20 )
        goto LABEL_12;
      LODWORD(v60) = *((_DWORD *)Src + 1);
      AccessMask = (unsigned int)v60;
      RtlMapGenericMask(&AccessMask, GenericMapping);
      v23 = (unsigned __int8)*Src;
      if ( (unsigned __int8)v23 <= 0xAu && (v24 = 1651, _bittest(&v24, v23)) )
        v25 = GenericMapping->GenericAll & AccessMask;
      else
        v25 = (GenericMapping->GenericAll | 0x1000000) & AccessMask;
      if ( v25 != (_DWORD)v60 )
        *v63 = 1;
      LODWORD(v60) = v25 & 0x11FFFFF;
      if ( (v25 & 0x11FFFFF) == 0 && !RtlEqualPrefixSid(v22, &Sid2) )
      {
        LODWORD(v20) = 0;
        goto LABEL_11;
      }
      if ( !RtlEqualPrefixSid(v22, &Sid2) )
        goto LABEL_31;
      v35 = *((_DWORD *)v22 + 2);
      if ( v35 )
      {
        v38 = v35 - 1;
        if ( v38 )
        {
          v39 = v38 - 1;
          if ( v39 )
          {
            if ( v39 != 1 )
              goto LABEL_31;
            v36 = v66;
          }
          else
          {
            v36 = v67;
          }
        }
        else
        {
          v36 = (unsigned __int8 *)v68;
          if ( !v68 )
            goto LABEL_31;
        }
      }
      else
      {
        v36 = v69;
      }
      v37 = v36[1];
      *v26 = 1;
      v62 = v36;
      LODWORD(v20) = v20 + 4 * v37 - 4;
LABEL_31:
      if ( Size_4 && *v26 )
      {
        v53 = Size;
        if ( (*((_DWORD *)Src + 2) & 1) != 0 )
        {
          LODWORD(v20) = v20 - 16;
          Size -= 16;
          memmove(v75, Src, v53 - 16);
          v76 &= ~2u;
          v27 = v75;
        }
        else
        {
          LODWORD(v20) = v20 - 20;
          Size -= 20;
          memmove(v75, Src, v53 - 20);
          v27 = v75;
          v75[0] = *((_BYTE *)RtlBaseAceType + (unsigned __int8)*Src);
        }
      }
      else
      {
        v27 = (char *)Srca;
      }
      v28 = (char *)*a11;
      if ( *a11 && (unsigned int)v20 <= a13 + *(unsigned __int16 *)(a13 + 2) - (_QWORD)v28 )
      {
        memmove(*a11, v27, Size);
        v29 = &v28[Size];
        v30 = (unsigned __int8 *)v61;
        if ( v61 )
        {
          memmove(v29, v61, 4 * *((unsigned __int8 *)v61 + 1) + 8);
          v29 += 4 * v30[1] + 8;
        }
        v31 = (unsigned __int8 *)v62;
        memmove(v29, v62, 4 * *((unsigned __int8 *)v62 + 1) + 8);
        v32 = &v29[4 * v31[1] + 8];
        if ( v70 && v64 > 0 )
        {
          v54 = v64;
          memmove(v32, v70, v64);
          LODWORD(v32) = v54 + (_DWORD)v32;
        }
        v33 = (_DWORD)v32 - *(_DWORD *)a11;
        if ( (unsigned int)v20 < v33 )
          return 0;
        LODWORD(v20) = v33;
        v34 = (int)v60;
        *((_WORD *)*a11 + 1) = v33;
        *((_DWORD *)*a11 + 1) = v34;
        goto LABEL_11;
      }
LABEL_43:
      *a16 = 1;
      goto LABEL_17;
    }
    v43 = v69;
    goto LABEL_62;
  }
  if ( v20 > a13 + *(unsigned __int16 *)(a13 + 2) - (_QWORD)*a11 )
    goto LABEL_43;
  memmove(*a11, Src, *((unsigned __int16 *)Src + 1));
LABEL_11:
  a2 = v55;
LABEL_12:
  if ( !*a16 && (_DWORD)v20 )
  {
    *((_BYTE *)*a11 + 1) &= 0xE0u;
    if ( a2 )
      *((_BYTE *)*a11 + 1) |= 0x10u;
    ++*(_WORD *)(a13 + 4);
  }
LABEL_17:
  if ( (unsigned int)v20 <= 0xFFFF )
  {
    if ( *a16 )
    {
LABEL_20:
      *a12 = v20;
      return 1;
    }
LABEL_19:
    *a11 = (char *)*a11 + (unsigned int)v20;
    goto LABEL_20;
  }
  return 0;
}
