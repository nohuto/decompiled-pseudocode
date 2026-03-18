/*
 * XREFs of sfac_GetSbitBitmap @ 0x1C000A318
 * Callers:
 *     GetSbitComponent @ 0x1C000A1E0 (GetSbitComponent.c)
 * Callees:
 *     InvokeReleaseSfntFrag @ 0x1C00A631C (InvokeReleaseSfntFrag.c)
 *     sfac_GetDataPtr @ 0x1C00A6330 (sfac_GetDataPtr.c)
 */

__int64 __fastcall sfac_GetSbitBitmap(
        __int64 a1,
        unsigned __int16 a2,
        int a3,
        int a4,
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
  unsigned __int64 v17; // r15
  unsigned __int64 v19; // r14
  __int64 result; // rax
  __int16 v21; // di
  _BYTE *v22; // r10
  unsigned __int64 v23; // r9
  __int64 v24; // r8
  __int16 v25; // bp
  int v26; // ebx
  __int16 v27; // dx
  __int16 v28; // r11
  _BYTE *v29; // rcx
  unsigned __int16 v30; // r13
  __int16 v31; // r11
  __int16 v32; // di
  __int16 v33; // bx
  unsigned __int16 v34; // cx
  __int16 v35; // r11
  unsigned __int16 v36; // dx
  unsigned __int16 v37; // ax
  unsigned __int16 v38; // r8
  bool v39; // zf
  __int64 v40; // rcx
  int v41; // eax
  __int16 v42; // ax
  _BYTE *v43; // rcx
  __int16 v44; // r11
  __int64 v45; // r12
  _BYTE *v46; // rdx
  unsigned __int16 v47; // r8
  unsigned __int16 v48; // r8
  unsigned __int16 v49; // ax
  _BYTE *v50; // [rsp+38h] [rbp-50h] BYREF
  __int64 v51; // [rsp+40h] [rbp-48h]
  int v53; // [rsp+A8h] [rbp+20h]
  unsigned __int16 v54; // [rsp+D8h] [rbp+50h]

  v53 = a4;
  v17 = a16;
  v19 = a16 + a15;
  result = sfac_GetDataPtr(a1, a3, a4, 16, 1, (__int64)&v50);
  v21 = 0;
  if ( !(_DWORD)result )
  {
    v22 = v50;
    *a17 = 0;
    v23 = a16 + a13 * a12;
    LODWORD(v24) = (a14 * a11) >> 3;
    v25 = (a14 * a11) & 7;
    switch ( a2 )
    {
      case 1u:
        goto LABEL_3;
      case 2u:
      case 5u:
        goto LABEL_19;
      case 6u:
LABEL_3:
        v26 = (a14 * a6 + 7) / 8;
        if ( v25 )
        {
          v44 = a5;
          if ( a5 )
          {
            v45 = (unsigned __int16)v24;
            while ( 1 )
            {
              v46 = (_BYTE *)(v45 + v23);
              v47 = 0;
              if ( (_WORD)v26 )
                break;
LABEL_45:
              if ( (unsigned __int64)v46 >= v19 || (unsigned __int64)v46 < a16 )
                goto LABEL_49;
              v23 += a13;
              *v46 |= v47 >> v25;
              v21 = 0;
              if ( !--v44 )
                goto LABEL_11;
            }
            while ( (unsigned __int64)v46 < v19 && (unsigned __int64)v46 >= a16 )
            {
              v48 = (unsigned __int8)*v22++ | v47;
              v49 = v48;
              v47 = v48 << 8;
              *v46++ |= v49 >> v25;
              if ( (unsigned __int16)++v21 >= (unsigned __int16)v26 )
                goto LABEL_45;
            }
            goto LABEL_49;
          }
        }
        else
        {
          v27 = a5;
          if ( a5 )
          {
            while ( 1 )
            {
              v28 = 0;
              if ( (_WORD)v26 )
                break;
LABEL_10:
              v23 += a13;
              if ( !--v27 )
                goto LABEL_11;
            }
            v29 = (_BYTE *)(v23 + (unsigned __int16)v24);
            while ( (unsigned __int64)v29 < v19 && (unsigned __int64)v29 >= a16 )
            {
              *v29++ |= *v22++;
              if ( (unsigned __int16)++v28 >= (unsigned __int16)v26 )
                goto LABEL_10;
            }
LABEL_49:
            InvokeReleaseSfntFrag(*(unsigned int *)(a1 + 12));
            return 6656LL;
          }
        }
        break;
      case 7u:
LABEL_19:
        v30 = 0;
        v31 = 0;
        v32 = a9;
        v33 = a9 + a5;
        if ( a9 + a5 )
        {
          v34 = a14 * a6;
          v24 = (unsigned __int16)v24;
          v51 = (unsigned __int16)v24;
          do
          {
            v35 = v31 - a14 * a7;
            v50 = (_BYTE *)(v24 + v23);
            v36 = (a14 * a11) & 7;
            v37 = v34;
            v38 = 8;
            v39 = v34 == 0;
            while ( 1 )
            {
              v54 = v37;
              if ( v39 )
                break;
              if ( v35 < 8 )
              {
                v40 = (unsigned __int16)(((unsigned __int16)(7 - v35) >> 3) + 1);
                v35 += 8 * (((unsigned __int16)(7 - v35) >> 3) + 1);
                v41 = v53;
                do
                {
                  v30 <<= 8;
                  if ( v41 )
                  {
                    v42 = (unsigned __int8)*v22++;
                    v30 |= v42;
                    v41 = --v53;
                  }
                  --v40;
                }
                while ( v40 );
                v17 = a16;
                v37 = v54;
              }
              if ( v38 > v37 + v36 )
                v38 = v54 + v36;
              if ( (unsigned __int64)v50 >= v19 || (unsigned __int64)v50 < v17 )
                goto LABEL_49;
              v43 = v50;
              *v50 |= byte_1C02ED5E0[v36] & EndMask[v38] & (v30 >> (v35 + v36 - 8));
              v35 += v36 - v38;
              v50 = v43 + 1;
              v39 = v36 - v38 + v54 == 0;
              v37 = v36 - v38 + v54;
              v36 = 0;
            }
            v31 = v35 - a14 * a8;
            if ( v32 )
              --v32;
            else
              v23 += a13;
            v34 = a14 * a6;
            v24 = v51;
            --v33;
          }
          while ( v33 );
        }
        break;
      default:
        if ( (unsigned int)a2 - 8 <= 1 )
          *a17 = __ROR2__(*(_WORD *)v22, 8);
        break;
    }
LABEL_11:
    InvokeReleaseSfntFrag(*(unsigned int *)(a1 + 12));
    return 0LL;
  }
  return result;
}
