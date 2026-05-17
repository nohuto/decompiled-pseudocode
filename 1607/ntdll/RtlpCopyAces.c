/*
 * XREFs of RtlpCopyAces @ 0x18003D360
 * Callers:
 *     RtlpInheritAcl2 @ 0x180040638 (RtlpInheritAcl2.c)
 *     RtlpComputeMergedAcl2 @ 0x18008FD88 (RtlpComputeMergedAcl2.c)
 * Callees:
 *     RtlFirstFreeAce @ 0x180014E20 (RtlFirstFreeAce.c)
 *     RtlpCopyEffectiveAce @ 0x180040058 (RtlpCopyEffectiveAce.c)
 *     RtlMapGenericMask @ 0x1800405F0 (RtlMapGenericMask.c)
 *     RtlFindAceByType @ 0x18007A440 (RtlFindAceByType.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 */

__int64 __fastcall RtlpCopyAces(
        __int64 a1,
        __int64 a2,
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
        _DWORD *a13,
        __int64 a14)
{
  char v14; // r14
  __int64 v15; // r15
  _DWORD *v16; // r13
  unsigned __int8 v18; // al
  __int64 v19; // rbx
  unsigned int v20; // edx
  unsigned int v21; // esi
  _BYTE *v22; // rdi
  bool v23; // zf
  int v25; // edx
  _BYTE *v26; // rsi
  __int64 v27; // r13
  char v28; // r15
  char v29; // r8
  int v30; // ecx
  int v31; // eax
  int v32; // ecx
  _BYTE v34[11]; // [rsp+89h] [rbp-68h] BYREF
  int v35; // [rsp+94h] [rbp-5Dh]
  void *v36; // [rsp+98h] [rbp-59h] BYREF
  int v37; // [rsp+A0h] [rbp-51h]
  __int64 v38; // [rsp+A8h] [rbp-49h]
  __int64 v39; // [rsp+B0h] [rbp-41h]
  __int64 v40; // [rsp+B8h] [rbp-39h]
  __int64 v41; // [rsp+C0h] [rbp-31h]
  __int64 v42; // [rsp+C8h] [rbp-29h]
  __int64 v43; // [rsp+D0h] [rbp-21h]
  __int64 v44; // [rsp+D8h] [rbp-19h]
  int v45; // [rsp+E0h] [rbp-11h]
  unsigned __int16 v46; // [rsp+E4h] [rbp-Dh]

  v14 = 0;
  v15 = a2;
  v16 = a13;
  v42 = a6;
  v41 = a7;
  v40 = a8;
  v39 = a9;
  v18 = *(_BYTE *)a14 - 2;
  v37 = a3;
  v38 = a2;
  v43 = a1;
  v44 = (__int64)a13;
  if ( v18 > 2u )
    return 3221225560LL;
  if ( !RtlFirstFreeAce(a14, &v36) )
    return 3221225597LL;
  v19 = a1 + 8;
  v20 = 0;
  v21 = 0;
  *(_DWORD *)&v34[3] = 0;
  v35 = 0;
  if ( !*(_WORD *)(a1 + 4) )
    goto LABEL_14;
  v22 = v36;
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
    if ( RtlFindAceByType(a14, 17LL, 0LL) )
      break;
    v20 = *(_DWORD *)&v34[3];
LABEL_7:
    if ( v37 )
    {
      if ( v37 == 1 )
        v23 = (*(_BYTE *)(v19 + 1) & 0x10) == 0;
      else
        v23 = v37 == 2;
      if ( !v23 )
        goto LABEL_11;
LABEL_16:
      if ( !a5 )
      {
        v27 = *(unsigned __int16 *)(v19 + 2);
        if ( v22 && v27 <= a14 + *(unsigned __int16 *)(a14 + 2) - (_QWORD)v22 )
        {
          if ( !v14 )
          {
            memmove(v22, (const void *)v19, *(unsigned __int16 *)(v19 + 2));
            if ( (*v22 <= 0xAu || (unsigned __int8)(*v22 - 13) <= 1u) && (v22[1] & 8) == 0 )
            {
              RtlMapGenericMask(v22 + 4, v15);
              if ( *v22 <= 0xAu && (v30 = 1651, _bittest(&v30, (unsigned __int8)*v22)) )
                v31 = *(_DWORD *)(v15 + 12);
              else
                v31 = *(_DWORD *)(v15 + 12) | 0x1000000;
              *((_DWORD *)v22 + 1) &= v31;
            }
            v22[1] &= ~a4;
            ++*(_WORD *)(a14 + 4);
            goto LABEL_29;
          }
          goto LABEL_55;
        }
        v14 = 1;
        goto LABEL_28;
      }
      v25 = 0;
      v34[0] = 0;
      v26 = v22;
      *(_DWORD *)&v34[7] = 0;
      LODWORD(v27) = 0;
      v36 = v22;
      if ( !a10 || (v28 = 1, (*(_BYTE *)(v19 + 1) & 3) == 0) )
        v28 = 0;
      if ( (*(_BYTE *)(v19 + 1) & 8) == 0 )
      {
        if ( !(unsigned __int8)RtlpCopyEffectiveAce(
                                 (void *)v19,
                                 v41,
                                 v40,
                                 v39,
                                 v38,
                                 0LL,
                                 0,
                                 (__int64)&v36,
                                 (__int64)&v34[7],
                                 a14,
                                 0LL,
                                 (__int64)v34,
                                 (__int64)&v34[1]) )
          return 3221225597LL;
        v25 = *(_DWORD *)&v34[7];
        LODWORD(v27) = *(_DWORD *)&v34[7];
        if ( v34[1] )
          v14 = 1;
        if ( !v14 && *(_DWORD *)&v34[7] )
        {
          v29 = a4;
          v26 = v36;
          v22[1] &= ~a4;
          goto LABEL_27;
        }
        v26 = v36;
      }
      v29 = a4;
LABEL_27:
      if ( !v28 )
        goto LABEL_28;
      v45 = 0;
      v32 = *(_DWORD *)(v19 + 10);
      v46 = 768;
      if ( !v32 )
        v32 = *(unsigned __int16 *)(v19 + 14) - v46;
      if ( v25 && !v34[0] )
      {
        if ( !v14 )
        {
          v22[1] = ~v29 & (v22[1] | *(_BYTE *)(v19 + 1) & 0x1F);
          goto LABEL_29;
        }
      }
      else
      {
        if ( *(_BYTE *)v19 <= 8u && !*(_DWORD *)(v19 + 4) && v32 )
        {
LABEL_28:
          if ( !v14 )
          {
LABEL_29:
            v22 += (unsigned int)v27;
LABEL_30:
            v15 = v38;
            v21 = v27 + v35;
            v20 = *(_DWORD *)&v34[3];
            v35 += v27;
            goto LABEL_11;
          }
          goto LABEL_55;
        }
        LODWORD(v27) = *(unsigned __int16 *)(v19 + 2) + (_DWORD)v27;
        if ( (unsigned int)v27 > 0xFFFF )
          return 3221225597LL;
        if ( *(unsigned __int16 *)(v19 + 2) > a14 + *(unsigned __int16 *)(a14 + 2) - (_QWORD)v26 )
        {
          v14 = 1;
          goto LABEL_55;
        }
        if ( !v14 )
        {
          memmove(v26, (const void *)v19, *(unsigned __int16 *)(v19 + 2));
          v26[1] = ~a4 & (v26[1] | 8);
          ++*(_WORD *)(a14 + 4);
          goto LABEL_28;
        }
      }
LABEL_55:
      v22 = (_BYTE *)(a14 + *(unsigned __int16 *)(a14 + 2));
      goto LABEL_30;
    }
    if ( (*(_BYTE *)(v19 + 1) & 0x10) != 0 )
      goto LABEL_16;
LABEL_11:
    ++v20;
    v19 += *(unsigned __int16 *)(v19 + 2);
    *(_DWORD *)&v34[3] = v20;
  }
  while ( v20 < *(unsigned __int16 *)(v43 + 4) );
  if ( v21 > 0xFFFF )
    return 3221225597LL;
  v16 = (_DWORD *)v44;
LABEL_14:
  *v16 = v21;
  return v14 != 0 ? 0xC0000023 : 0;
}
