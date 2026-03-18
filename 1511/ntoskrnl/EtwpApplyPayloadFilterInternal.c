/*
 * XREFs of EtwpApplyPayloadFilterInternal @ 0x140211B20
 * Callers:
 *     EtwpApplyEventIdPayloadFilter @ 0x140211280 (EtwpApplyEventIdPayloadFilter.c)
 * Callees:
 *     IoGetStackLimits @ 0x1400282E0 (IoGetStackLimits.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     __chkstk @ 0x14015C1E0 (__chkstk.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     sub_140212384 @ 0x140212384 (sub_140212384.c)
 *     sub_1402128D4 @ 0x1402128D4 (sub_1402128D4.c)
 *     RtlLengthRequiredSid @ 0x14046C3B0 (RtlLengthRequiredSid.c)
 *     ExSystemExceptionFilter @ 0x14049E9B4 (ExSystemExceptionFilter.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall EtwpApplyPayloadFilterInternal(
        unsigned __int16 *a1,
        unsigned int a2,
        void *a3,
        char a4,
        char a5,
        __int64 a6,
        _BYTE *a7)
{
  char v11; // r11
  __int64 v12; // rax
  __int64 v13; // r12
  unsigned int v14; // r8d
  unsigned int v15; // r9d
  unsigned int v16; // edx
  bool v17; // zf
  unsigned int v18; // eax
  __int64 v19; // rdi
  __int64 v20; // r14
  __int64 v21; // rcx
  unsigned __int64 v22; // rcx
  void *v23; // rsp
  void *v24; // rsp
  char *v25; // r14
  __int64 v26; // rcx
  unsigned __int64 v27; // rcx
  void *v28; // rsp
  void *v29; // rsp
  ULONG64 v30; // rcx
  char v31; // di
  unsigned int v32; // ecx
  _BYTE *v33; // rdx
  char *v34; // r11
  unsigned int v35; // r10d
  __int64 v36; // r8
  unsigned __int64 v37; // r9
  unsigned __int64 v38; // r8
  __int64 v39; // r13
  unsigned int v40; // r8d
  unsigned int v41; // esi
  unsigned __int64 v42; // r15
  __int64 v43; // r12
  char *v44; // r9
  unsigned int v45; // eax
  char v46; // cl
  __int64 v47; // rdi
  __int64 v48; // r14
  unsigned int v49; // eax
  _WORD *v50; // rcx
  unsigned int v51; // eax
  unsigned int v52; // r8d
  int v53; // r10d
  unsigned int v54; // edx
  _BYTE *v55; // rax
  unsigned int v56; // edx
  unsigned int v57; // ecx
  unsigned int v58; // r14d
  unsigned int v59; // ecx
  unsigned int v60; // eax
  __int64 v61; // r12
  unsigned __int64 v62; // r10
  __int64 v63; // r8
  unsigned __int16 *v64; // rsi
  char v65; // r14
  unsigned int v66; // r9d
  char *v67; // r8
  char v68; // r12
  char v69; // r13
  unsigned int v70; // r15d
  __int64 v71; // rax
  char v72; // r8
  char v73; // [rsp+30h] [rbp+0h] BYREF
  char v74[3]; // [rsp+31h] [rbp+1h] BYREF
  int v75; // [rsp+34h] [rbp+4h]
  int v76; // [rsp+38h] [rbp+8h]
  unsigned int v77; // [rsp+3Ch] [rbp+Ch]
  unsigned int v78; // [rsp+40h] [rbp+10h]
  unsigned int v79; // [rsp+44h] [rbp+14h]
  char *v80; // [rsp+48h] [rbp+18h]
  char v81; // [rsp+50h] [rbp+20h]
  char *v82; // [rsp+58h] [rbp+28h]
  char *v83; // [rsp+60h] [rbp+30h]
  ULONG SubAuthorityCount[2]; // [rsp+68h] [rbp+38h] BYREF
  unsigned int v85; // [rsp+70h] [rbp+40h]
  int v86; // [rsp+74h] [rbp+44h]
  __int64 v87; // [rsp+78h] [rbp+48h]
  unsigned __int16 v88; // [rsp+80h] [rbp+50h]
  unsigned __int64 LowLimit; // [rsp+88h] [rbp+58h] BYREF
  int v90; // [rsp+90h] [rbp+60h]
  unsigned __int64 HighLimit[3]; // [rsp+98h] [rbp+68h] BYREF

  v78 = a2;
  v75 = -1073741811;
  if ( a2 > 0x80 )
    return 3221225485LL;
  v88 = *a1;
  v11 = *((_BYTE *)a1 + 2);
  v81 = v11;
  v12 = *(_QWORD *)(a6 + 8);
  if ( !_bittest64(&v12, v88 % 63) )
    goto LABEL_4;
  v77 = 0;
  v76 = 0;
  v13 = a6 + *(unsigned __int16 *)(a6 + 32);
  v14 = 0;
  v15 = 0;
  v16 = *(unsigned __int16 *)(a6 + 34) / 0xCu;
  while ( 1 )
  {
    v87 = v13;
    v17 = v15 == v16;
    if ( v15 >= v16 )
      break;
    if ( *(_WORD *)v13 == v88 && *(_BYTE *)(v13 + 2) == v11 )
    {
      v17 = v15 == v16;
      break;
    }
    v18 = *(unsigned __int8 *)(v13 + 3);
    if ( (unsigned __int16)v18 >= *(_WORD *)(v13 + 6) )
      return 3221225485LL;
    if ( v14 < v18 )
      v14 = *(unsigned __int8 *)(v13 + 3);
    v13 += 12LL;
    ++v15;
  }
  if ( v17 )
  {
LABEL_4:
    *a7 = 1;
    return 0LL;
  }
  v80 = 0LL;
  v19 = 16 * a2;
  v85 = *(unsigned __int8 *)(v13 + 3) + 1;
  v20 = 4 * v85;
  IoGetStackLimits(&LowLimit, HighLimit);
  if ( (unsigned __int64)HighLimit - LowLimit < (unsigned int)(v20 + v19 + 4096) )
    return 3221225626LL;
  v21 = v20 + 15;
  if ( v20 + 15 <= (unsigned __int64)(unsigned int)v20 )
    v21 = 0xFFFFFFFFFFFFFF0LL;
  v22 = v21 & 0xFFFFFFFFFFFFFFF0uLL;
  v23 = alloca(v22);
  v24 = alloca(v22);
  v25 = &v73;
  v82 = &v73;
  if ( a4 )
  {
    v26 = v19 + 15;
    if ( v19 + 15 <= (unsigned __int64)(unsigned int)v19 )
      v26 = 0xFFFFFFFFFFFFFF0LL;
    v27 = v26 & 0xFFFFFFFFFFFFFFF0uLL;
    v28 = alloca(v27);
    v29 = alloca(v27);
    v80 = &v73;
    if ( (_DWORD)v19 )
    {
      if ( ((unsigned __int8)a3 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v30 = (ULONG64)a3 + (unsigned int)v19;
      if ( v30 > MmUserProbeAddress || v30 < (unsigned __int64)a3 )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    memmove(&v73, a3, (unsigned int)v19);
    v31 = 0;
    v32 = 0;
    v86 = 0;
    v33 = (_BYTE *)MmUserProbeAddress;
    v34 = v80;
    v35 = v78;
    while ( v32 < v35 )
    {
      v36 = *(unsigned int *)&v34[16 * v32 + 8];
      if ( (_DWORD)v36 )
      {
        v37 = *(_QWORD *)&v34[16 * v32];
        v38 = v37 + v36;
        if ( v38 > (unsigned __int64)v33 || v38 < v37 )
        {
          *v33 = 0;
          v33 = (_BYTE *)MmUserProbeAddress;
        }
      }
      v86 = ++v32;
    }
  }
  else
  {
    v34 = (char *)a3;
    v80 = (char *)a3;
    v35 = v78;
    v31 = 0;
  }
  v39 = a6 + *(unsigned __int16 *)(a6 + 36);
  v40 = 0;
  v75 = 0;
  v41 = 0;
  v42 = (unsigned __int64)v34;
  v43 = v39 + 4LL * *(unsigned __int16 *)(v13 + 4);
  v44 = &v73;
  v83 = &v73;
  v45 = 0;
  while ( 1 )
  {
    v79 = v45;
    if ( v45 >= v85 )
      break;
    if ( v40 == v35 )
      return 3221225990LL;
    v46 = *(_BYTE *)v43 & 0xF;
    if ( v46 == 7 )
    {
      if ( *(_WORD *)(v43 + 2) )
        return 3221225520LL;
      v44[3] = v40;
      *(_DWORD *)v44 = *(_DWORD *)v44 & 0xFF000000 | ((v41 & 0xFFF) << 12);
      goto LABEL_114;
    }
    v47 = *(unsigned __int16 *)(v43 + 2);
    if ( v46 == 8 )
    {
      v47 = a5 != 0 ? 8 : 4;
      v45 = v79;
    }
    if ( (*(_BYTE *)v43 & 0x10) != 0 )
    {
      if ( (unsigned int)v47 >= v45 )
        return 3221225520LL;
      if ( (unsigned __int8)((*(_BYTE *)(v39 + 4 * v47) & 0xF) - 1) > 1u )
        return 3221225520LL;
      if ( (*(_BYTE *)(v39 + 4 * v47) & 0x30) != 0 )
        return 3221225520LL;
      if ( *(_WORD *)(v39 + 4 * v47 + 2) > 8u )
        return 3221225520LL;
      if ( *(_BYTE *)(v39 + 4 * v47 + 1) != 1 )
        return 3221225520LL;
      _mm_lfence();
      if ( !(unsigned __int8)sub_1402128D4(
                               *(_QWORD *)&v34[16 * (unsigned __int8)v25[4 * v47 + 3]]
                             + ((*(_DWORD *)&v25[4 * v47] >> 12) & 0xFFF),
                               *(unsigned __int16 *)(v39 + 4 * v47 + 2),
                               SubAuthorityCount,
                               v44) )
        return 3221225520LL;
      LODWORD(v47) = SubAuthorityCount[0];
      if ( SubAuthorityCount[0] != *(_QWORD *)SubAuthorityCount )
        return 3221225520LL;
      v34 = v80;
    }
    v48 = *(unsigned __int8 *)(v43 + 1);
    if ( (*(_BYTE *)v43 & 0x20) != 0 )
    {
      if ( (unsigned int)v48 >= v79 )
        return 3221225520LL;
      if ( (unsigned __int8)((*(_BYTE *)(v39 + 4 * v48) & 0xF) - 1) > 1u )
        return 3221225520LL;
      if ( (*(_BYTE *)(v39 + 4 * v48) & 0x30) != 0 )
        return 3221225520LL;
      if ( *(_WORD *)(v39 + 4 * v48 + 2) > 8u )
        return 3221225520LL;
      if ( *(_BYTE *)(v39 + 4 * v48 + 1) != 1 )
        return 3221225520LL;
      _mm_lfence();
      if ( !(unsigned __int8)sub_1402128D4(
                               *(_QWORD *)&v34[16 * (unsigned __int8)v82[4 * v48 + 3]]
                             + ((*(_DWORD *)&v82[4 * v48] >> 12) & 0xFFF),
                               *(unsigned __int16 *)(v39 + 4 * v48 + 2),
                               SubAuthorityCount,
                               0LL) )
        return 3221225520LL;
      LODWORD(v48) = SubAuthorityCount[0];
      if ( SubAuthorityCount[0] != *(_QWORD *)SubAuthorityCount )
        return 3221225520LL;
    }
    if ( !(_DWORD)v47 )
    {
      if ( (*(_BYTE *)v43 & 0x10) != 0 || (_DWORD)v48 != 1 )
        return 3221225520LL;
      switch ( *(_BYTE *)v43 & 0xF )
      {
        case 3:
          v54 = *(_DWORD *)(v42 + 8);
          if ( v41 >= v54 )
            return 3221225485LL;
          v55 = (_BYTE *)(*(_QWORD *)v42 + v41);
          v56 = v54 - v41;
          v57 = 0;
          while ( v57 < v56 && *v55 )
          {
            v90 = ++v57;
            HighLimit[2] = (unsigned __int64)++v55;
          }
          if ( v57 == v56 )
            v77 = 1;
          else
            v76 = 1;
          LODWORD(v47) = v57;
          break;
        case 4:
          v49 = *(_DWORD *)(v42 + 8) - v41;
          if ( v49 < 2 )
            return 3221225485LL;
          v50 = (_WORD *)(*(_QWORD *)v42 + v41);
          v51 = v49 >> 1;
          v52 = 0;
          while ( v52 < v51 && *v50 )
          {
            v90 = ++v52;
            HighLimit[1] = (unsigned __int64)++v50;
          }
          if ( v52 == v51 )
          {
            v77 = 2;
            v53 = v76;
          }
          else
          {
            v53 = 2;
          }
          if ( v52 == v51 && v41 + 2LL * v51 != *(_DWORD *)(v42 + 8) )
            return 3221225485LL;
          LODWORD(v47) = 2 * v52;
          goto LABEL_97;
        case 6:
          if ( *(_DWORD *)(v42 + 8) - v41 < 2 )
            return 3221225485LL;
          if ( !(unsigned __int8)sub_1402128D4(*(_QWORD *)v42 + v41 + 1LL, 1LL, SubAuthorityCount, 0LL) )
            return 3221225485LL;
          LODWORD(v47) = RtlLengthRequiredSid(SubAuthorityCount[0]);
          if ( (_DWORD)v47 == -1 )
            return 3221225485LL;
          break;
        default:
          return 3221225520LL;
      }
    }
    v53 = v76;
LABEL_97:
    v58 = v47 * v48;
    if ( *(_DWORD *)(v42 + 8) - v41 < v58 )
      return 3221225990LL;
    v40 = v75;
    v44 = v83;
    v83[3] = v75;
    v59 = v58 & 0xFFF | *(_DWORD *)v44 & 0xFF000000 | ((v41 & 0xFFF) << 12);
    *(_DWORD *)v44 = v59;
    if ( (unsigned __int8)v44[3] != v40 || ((v59 >> 12) & 0xFFF) != v41 || (v59 & 0xFFF) != v58 )
      return 3221225990LL;
    v41 += v53 + v58;
    v31 = 0;
    v76 = 0;
    v60 = *(_DWORD *)(v42 + 8);
    if ( v41 > v60 )
      return 3221225473LL;
    v34 = v80;
    if ( v41 != v60 )
    {
      v35 = v78;
LABEL_113:
      v25 = v82;
      goto LABEL_114;
    }
    v75 = ++v40;
    v35 = v78;
    if ( v40 >= v78 )
      goto LABEL_113;
    v41 = 0;
    v42 += 16LL;
    if ( v42 >= (unsigned __int64)&v80[16 * v78] )
      return 3221225473LL;
    if ( v77 )
    {
      if ( *(_DWORD *)(v42 + 8) < v77 )
        return 3221225990LL;
      v41 = v77;
    }
    v77 = 0;
    if ( v41 != *(_DWORD *)(v42 + 8) )
      goto LABEL_113;
    v75 = ++v40;
    v25 = v82;
    if ( v40 < v78 )
    {
      v41 = 0;
      v42 += 16LL;
    }
LABEL_114:
    v45 = v79 + 1;
    v43 += 4LL;
    v44 += 4;
    v83 = v44;
  }
  if ( v77 )
    return 3221225990LL;
  v61 = v87;
  v62 = v39 + 4LL * *(unsigned __int16 *)(v87 + 4);
  LowLimit = v62;
  v63 = a6;
  v64 = (unsigned __int16 *)(a6 + *(unsigned __int16 *)(a6 + 40) + 4LL * *(unsigned __int16 *)(v87 + 8));
  v65 = 0;
  v73 = 1;
  v66 = 0;
  while ( 1 )
  {
    v75 = v66;
    if ( v66 >= *(unsigned __int16 *)(v61 + 10) )
      break;
    v67 = (char *)(v63 + 24LL * v64[1] + 56);
    v68 = 1;
    v69 = 0;
    v70 = 0;
    while ( 1 )
    {
      v83 = v67;
      if ( v70 >= ((*v64 >> 2) & 0x3Fu) )
        break;
      v71 = *(unsigned __int16 *)v67;
      if ( !(unsigned __int8)sub_140212384(
                               a6,
                               *(_BYTE *)(v62 + 4 * v71) & 0xF,
                               v67,
                               *(_QWORD *)&v34[16 * (unsigned __int8)v82[4 * v71 + 3]]
                             + (((unsigned __int64)*(unsigned int *)&v82[4 * v71] >> 12) & 0xFFF),
                               *(_DWORD *)&v82[4 * v71] & 0xFFF,
                               v74) )
        return 3221225520LL;
      v68 &= v74[0];
      v69 |= v74[0];
      ++v70;
      v67 = v83 + 24;
      v62 = LowLimit;
      v34 = v80;
    }
    v72 = v68;
    if ( (*v64 & 2) != 0 )
      v72 = v69;
    if ( (*v64 & 1) != 0 )
    {
      if ( v73 )
      {
        v65 = v72;
        v73 = 0;
      }
      else
      {
        v65 &= v72;
      }
    }
    else
    {
      v31 |= v72;
      if ( v31 == 1 )
        break;
    }
    v66 = v75 + 1;
    v64 += 2;
    v61 = v87;
    v63 = a6;
  }
  *a7 = v65 | v31;
  return 0LL;
}
