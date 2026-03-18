/*
 * XREFs of sfac_ShaveSbitMetrics @ 0x1C001CD04
 * Callers:
 *     GetSbitComponent @ 0x1C000BEA4 (GetSbitComponent.c)
 *     GetSbitMetrics @ 0x1C001CBBC (GetSbitMetrics.c)
 * Callees:
 *     InvokeReleaseSfntFrag @ 0x1C001EDA8 (InvokeReleaseSfntFrag.c)
 *     sfac_GetDataPtr @ 0x1C001EDBC (sfac_GetDataPtr.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

__int64 __fastcall sfac_ShaveSbitMetrics(
        __int64 a1,
        __int16 a2,
        int a3,
        int a4,
        unsigned __int16 a5,
        __int16 *a6,
        unsigned __int16 *a7,
        _WORD *a8,
        _WORD *a9,
        _WORD *a10,
        _WORD *a11,
        _WORD *a12,
        _WORD *a13,
        _WORD *a14,
        _WORD *a15)
{
  __int16 v15; // bx
  int v16; // r13d
  int v17; // r11d
  __int64 result; // rax
  __int16 v19; // cx
  unsigned __int8 v20; // di
  unsigned __int16 v21; // r12
  unsigned __int8 v22; // r14
  int v23; // esi
  unsigned __int16 v24; // r9
  unsigned __int16 v25; // r11
  __int16 v26; // r15
  __int16 v27; // ax
  __int16 v28; // r8
  unsigned __int8 *v29; // r12
  unsigned __int16 v30; // dx
  int v31; // edi
  unsigned __int16 v32; // r14
  unsigned __int16 v33; // r10
  __int16 v34; // ax
  __int16 v35; // dx
  unsigned __int8 *v36; // rcx
  char v37; // al
  _BYTE *v38; // r10
  char v39; // r9
  unsigned __int8 v40; // dl
  __int16 v41; // r8
  _WORD *v42; // r11
  _BYTE *v43; // r10
  unsigned __int8 v44; // dl
  char v45; // [rsp+30h] [rbp-89h]
  __int16 v46; // [rsp+32h] [rbp-87h]
  unsigned __int16 v47; // [rsp+34h] [rbp-85h]
  int v48; // [rsp+38h] [rbp-81h]
  unsigned __int8 *v49; // [rsp+40h] [rbp-79h] BYREF
  _WORD *v50; // [rsp+48h] [rbp-71h]
  __int16 *v51; // [rsp+50h] [rbp-69h]
  __int64 v52; // [rsp+58h] [rbp-61h]
  _WORD *v53; // [rsp+60h] [rbp-59h]
  _WORD *v54; // [rsp+68h] [rbp-51h]
  _WORD *v55; // [rsp+70h] [rbp-49h]
  _WORD *v56; // [rsp+78h] [rbp-41h]
  _WORD *v57; // [rsp+80h] [rbp-39h]
  _WORD *v58; // [rsp+88h] [rbp-31h]
  _WORD *v59; // [rsp+90h] [rbp-29h]
  _WORD *v60; // [rsp+98h] [rbp-21h]
  _QWORD v61[2]; // [rsp+A0h] [rbp-19h] BYREF

  v15 = 0;
  v16 = a4;
  v17 = a1;
  *a8 = 0;
  v52 = a1;
  *a9 = 0;
  v55 = a12;
  v59 = a13;
  *a10 = 0;
  *a11 = 0;
  v51 = a6;
  v50 = a7;
  v53 = a8;
  v54 = a9;
  v57 = a10;
  v58 = a11;
  v56 = a14;
  v60 = a15;
  if ( a2 != 5 )
    return 0LL;
  v19 = *a7;
  v20 = 0x80;
  v21 = a5;
  if ( a5 * *a7 > 128 )
    return 0LL;
  v22 = 0;
  v61[0] = 0LL;
  v61[1] = 0LL;
  if ( !a4 || !v19 || !*a6 )
    return 0LL;
  result = sfac_GetDataPtr(v17, a3, a4, 16, 1, (__int64)&v49);
  if ( !(_DWORD)result )
  {
    v23 = 0;
    v24 = 0;
    v48 = 0;
    v25 = 0;
    v26 = 0;
    v27 = *v51;
    v46 = *v51;
    v28 = *v51;
    if ( *v51 )
    {
      v29 = v49;
      v30 = a5 * *v50;
      v31 = 0;
      v47 = v30;
      do
      {
        v45 = 0;
        v49 = (unsigned __int8 *)v61;
        v32 = v30;
        v33 = 8;
        if ( v30 )
        {
          do
          {
            if ( v25 < 8u )
            {
              v24 <<= 8;
              if ( v16 )
              {
                v34 = *v29++;
                v24 |= v34;
                --v16;
              }
              v25 += 8;
            }
            if ( v33 > v32 )
              v33 = v32;
            v35 = v24 >> (v25 - 8);
            v25 -= v33;
            LOBYTE(v35) = byte_1C02E8338[v33] & v35;
            v36 = v49;
            v37 = v35 | v45;
            v45 |= v35;
            *v49 |= v35;
            v49 = v36 + 1;
            v32 -= v33;
          }
          while ( v32 );
          v23 = v48;
          v30 = v47;
          if ( v37 )
          {
            v31 = 1;
            v26 = v28 - 1;
          }
        }
        if ( !v31 )
        {
          LOWORD(v23) = v23 + 1;
          v48 = v23;
        }
        --v28;
      }
      while ( v28 );
      v22 = v61[0];
      v20 = 0x80;
      v21 = a5;
      v27 = v46;
    }
    if ( (_WORD)v23 == v27 )
    {
      LOWORD(v23) = 0;
      v26 = 0;
    }
    InvokeReleaseSfntFrag(*(unsigned int *)(v52 + 12));
    v38 = v61;
    switch ( v21 )
    {
      case 1u:
        v39 = 1;
        break;
      case 2u:
        v20 = -64;
        v39 = 3;
        break;
      case 4u:
        v20 = -16;
        v39 = 15;
        break;
      default:
        v39 = -1;
        v20 = -1;
        break;
    }
    v40 = v20;
    v41 = 0;
    if ( (v22 & v20) != 0 )
    {
LABEL_30:
      v42 = v50;
      v43 = (char *)v61 + ((unsigned __int64)(unsigned __int16)(v21 * (*v50 - 1)) >> 3);
      v44 = v20 >> ((v21 * (*(_BYTE *)v50 - 1)) & 7);
      while ( (v44 & *v43) == 0 )
      {
        ++v15;
        if ( v44 == v20 )
        {
          v44 = v39;
          --v43;
        }
        else
        {
          v44 <<= v21;
        }
      }
      *v53 = v41;
      *v54 = v15;
      *v42 -= v41 + v15;
      *v55 += v41;
      *v56 += v41;
      *v57 = v23;
      *v58 = v26;
      *v51 -= v23 + v26;
      *v59 -= v23;
      *v60 -= v23;
    }
    else
    {
      while ( ++v41 != *v50 )
      {
        v40 >>= v21;
        if ( !v40 )
        {
          v40 = v20;
          ++v38;
        }
        if ( (v40 & *v38) != 0 )
          goto LABEL_30;
      }
    }
    return 0LL;
  }
  return result;
}
