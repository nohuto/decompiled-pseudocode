/*
 * XREFs of sfac_GetSbitBitmap @ 0x1C000BFDC
 * Callers:
 *     GetSbitComponent @ 0x1C000BEA4 (GetSbitComponent.c)
 * Callees:
 *     InvokeReleaseSfntFrag @ 0x1C001EDA8 (InvokeReleaseSfntFrag.c)
 *     sfac_GetDataPtr @ 0x1C001EDBC (sfac_GetDataPtr.c)
 */

__int64 __fastcall sfac_GetSbitBitmap(
        __int64 a1,
        unsigned __int16 a2,
        int a3,
        unsigned int a4,
        __int16 a5,
        unsigned __int16 a6,
        __int16 a7,
        __int16 a8,
        __int16 a9,
        __int64 a10,
        unsigned __int16 a11,
        unsigned __int16 a12,
        unsigned __int16 a13,
        unsigned __int16 a14,
        unsigned int a15,
        unsigned __int64 a16,
        _WORD *a17)
{
  unsigned __int64 v18; // r15
  __int64 v19; // rbx
  __int64 result; // rax
  _BYTE *v21; // r8
  unsigned __int64 v22; // rbx
  unsigned __int64 v23; // r11
  __int64 v24; // r10
  __int16 v25; // r14
  unsigned __int16 v26; // si
  __int16 v27; // di
  __int16 v28; // r9
  __int16 v29; // bx
  unsigned __int16 v30; // cx
  __int16 v31; // r9
  unsigned __int16 v32; // dx
  unsigned __int16 v33; // r13
  unsigned __int16 v34; // r10
  unsigned int v35; // edx
  __int64 v36; // rcx
  char v37; // dl
  __int64 v38; // rax
  __int16 v39; // r13
  char v40; // dl
  _BYTE *v41; // rax
  bool v42; // zf
  int v43; // r9d
  __int16 v44; // di
  unsigned __int16 v45; // dx
  _BYTE *v46; // rcx
  __int16 v47; // si
  __int64 v48; // r13
  _BYTE *v49; // rdx
  unsigned __int16 v50; // r10
  __int16 v51; // di
  unsigned __int16 v52; // r10
  unsigned __int16 v53; // ax
  _BYTE *v54; // [rsp+38h] [rbp-40h] BYREF
  __int64 v55; // [rsp+40h] [rbp-38h]
  unsigned int v57; // [rsp+98h] [rbp+20h]
  unsigned __int16 v58; // [rsp+C8h] [rbp+50h]

  v57 = a4;
  v18 = a16 + a15;
  v19 = a4;
  result = sfac_GetDataPtr(a1, a3, a4, 16, 1, (__int64)&v54);
  if ( !(_DWORD)result )
  {
    v21 = v54;
    v22 = (unsigned __int64)&v54[v19];
    *a17 = 0;
    v23 = a16 + a13 * a12;
    LODWORD(v24) = (a14 * a11) >> 3;
    v25 = (a14 * a11) & 7;
    if ( a2 != 1 )
    {
      if ( a2 == 2 || a2 == 5 )
        goto LABEL_13;
      if ( a2 != 6 )
      {
        if ( a2 != 7 )
        {
          if ( (unsigned int)a2 - 8 <= 1 )
          {
            if ( (unsigned __int64)(v21 + 2) <= v22 )
              *a17 = __ROR2__(*(_WORD *)v21, 8);
            else
              *a17 = 0;
          }
          goto LABEL_10;
        }
LABEL_13:
        v26 = 0;
        v27 = a9;
        v28 = 0;
        v29 = a9 + a5;
        if ( a9 + a5 )
        {
          v30 = a14 * a6;
          v24 = (unsigned __int16)v24;
          v55 = (unsigned __int16)v24;
          while ( 1 )
          {
            v31 = v28 - a14 * a7;
            v54 = (_BYTE *)(v24 + v23);
            v32 = v30;
            v58 = v30;
            v33 = (a14 * a11) & 7;
            v34 = 8;
            if ( v30 )
              break;
LABEL_27:
            v28 = v31 - a14 * a8;
            if ( v27 )
              --v27;
            else
              v23 += a13;
            v30 = a14 * a6;
            v24 = v55;
            if ( !--v29 )
              goto LABEL_10;
          }
          while ( 1 )
          {
            if ( v31 < 8 )
            {
              v35 = v57;
              v36 = (unsigned __int16)(((unsigned __int16)(7 - v31) >> 3) + 1);
              v31 += 8 * v36;
              do
              {
                v26 <<= 8;
                if ( v35 )
                {
                  v26 |= (unsigned __int8)*v21++;
                  --v35;
                }
                --v36;
              }
              while ( v36 );
              v57 = v35;
              v32 = v58;
            }
            if ( v34 > v32 + v33 )
              v34 = v32 + v33;
            if ( (unsigned __int64)v54 >= v18 || (unsigned __int64)v54 < a16 )
              break;
            v37 = byte_1C02E8338[v34] & (v26 >> (v31 + v33 - 8));
            v38 = v33;
            v39 = v33 - v34;
            v31 += v39;
            v40 = byte_1C02ED8E0[v38] & v37;
            v41 = v54;
            *v54 |= v40;
            v42 = v39 + v58 == 0;
            v32 = v39 + v58;
            v54 = v41 + 1;
            v58 += v39;
            v33 = 0;
            if ( v42 )
              goto LABEL_27;
          }
LABEL_55:
          InvokeReleaseSfntFrag(*(unsigned int *)(a1 + 12));
          return 6656LL;
        }
        goto LABEL_10;
      }
    }
    v43 = (a14 * a6 + 7) / 8;
    if ( v25 )
    {
      v47 = a5;
      if ( a5 )
      {
        v48 = (unsigned __int16)v24;
        while ( 1 )
        {
          v49 = (_BYTE *)(v23 + v48);
          v50 = 0;
          if ( (unsigned __int64)&v21[(unsigned __int16)v43] > v22 )
            LOWORD(v43) = v22 - (_WORD)v21;
          v51 = 0;
          if ( (_WORD)v43 )
            break;
LABEL_51:
          if ( (unsigned __int64)v49 >= v18 || (unsigned __int64)v49 < a16 )
            goto LABEL_55;
          v23 += a13;
          *v49 |= v50 >> v25;
          if ( !--v47 )
            goto LABEL_10;
        }
        while ( (unsigned __int64)v49 < v18 && (unsigned __int64)v49 >= a16 )
        {
          v52 = (unsigned __int8)*v21++ | v50;
          v53 = v52;
          v50 = v52 << 8;
          *v49++ |= v53 >> v25;
          if ( (unsigned __int16)++v51 >= (unsigned __int16)v43 )
            goto LABEL_51;
        }
        goto LABEL_55;
      }
    }
    else
    {
      v44 = a5;
      if ( a5 )
      {
        while ( 1 )
        {
          if ( (unsigned __int64)&v21[(unsigned __int16)v43] > v22 )
            LOWORD(v43) = v22 - (_WORD)v21;
          v45 = 0;
          if ( (_WORD)v43 )
            break;
LABEL_41:
          v23 += a13;
          if ( !--v44 )
            goto LABEL_10;
        }
        v46 = (_BYTE *)(v23 + (unsigned __int16)v24);
        while ( (unsigned __int64)v46 < v18 && (unsigned __int64)v46 >= a16 )
        {
          ++v45;
          *v46++ |= *v21++;
          if ( v45 >= (unsigned __int16)v43 )
            goto LABEL_41;
        }
        goto LABEL_55;
      }
    }
LABEL_10:
    InvokeReleaseSfntFrag(*(unsigned int *)(a1 + 12));
    return 0LL;
  }
  return result;
}
