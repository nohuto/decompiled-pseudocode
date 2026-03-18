/*
 * XREFs of sfac_SearchForBitmap @ 0x1C00A479C
 * Callers:
 *     GetSbitComponent @ 0x1C000A1E0 (GetSbitComponent.c)
 *     sbit_SearchForBitmap @ 0x1C00AD468 (sbit_SearchForBitmap.c)
 * Callees:
 *     InvokeReleaseSfntFrag @ 0x1C00A631C (InvokeReleaseSfntFrag.c)
 *     sfac_GetDataPtr @ 0x1C00A6330 (sfac_GetDataPtr.c)
 */

__int64 __fastcall sfac_SearchForBitmap(
        __int64 a1,
        unsigned __int16 a2,
        unsigned int a3,
        _DWORD *a4,
        _WORD *a5,
        _WORD *a6,
        unsigned __int32 *a7,
        unsigned __int16 *a8,
        unsigned __int32 *a9,
        unsigned __int32 *a10)
{
  unsigned __int64 v10; // rsi
  _DWORD *v11; // r14
  __int64 v12; // rbp
  __int64 result; // rax
  __int64 v16; // r8
  unsigned int v17; // r13d
  unsigned int v18; // r11d
  unsigned int v19; // r12d
  unsigned int v20; // edx
  unsigned __int16 v21; // r11
  __int64 v22; // rdx
  __int64 v23; // rbp
  __int16 v24; // cx
  unsigned __int16 v25; // r15
  unsigned __int32 v26; // r10d
  __int64 v27; // rdx
  __int64 j; // r11
  unsigned int v29; // ecx
  unsigned int v30; // ebp
  unsigned int v31; // r14d
  unsigned int v32; // r9d
  unsigned __int16 v33; // cx
  unsigned __int32 v34; // edx
  unsigned __int32 v35; // r9d
  unsigned __int32 v36; // r10d
  unsigned __int32 *v37; // rbp
  _WORD *v38; // r11
  int v39; // edx
  unsigned __int32 v40; // eax
  __int64 v41; // r9
  unsigned int v42; // edx
  unsigned __int32 v43; // r9d
  __int64 v44; // r14
  unsigned int v45; // r11d
  unsigned int v46; // r9d
  unsigned int v47; // ebp
  unsigned int v48; // edx
  unsigned int v49; // r15d
  __int64 k; // rax
  unsigned __int16 v51; // ax
  __int64 v52; // r9
  unsigned int v53; // r9d
  int v54; // eax
  unsigned int i; // [rsp+30h] [rbp-48h]
  unsigned int v56; // [rsp+34h] [rbp-44h]
  __int64 v57[8]; // [rsp+38h] [rbp-40h] BYREF
  unsigned __int16 v58; // [rsp+80h] [rbp+8h]

  v10 = *(unsigned int *)(a1 + 164);
  *a4 = 0;
  v11 = a4;
  v12 = a3;
  result = sfac_GetDataPtr(a1, 0, v10, 17, 1, (__int64)v57);
  if ( !(_DWORD)result )
  {
    v16 = v57[0];
    if ( __ROR2__(*(_WORD *)((unsigned int)(v12 + 40) + v57[0]), 8) <= a2
      && __ROR2__(*(_WORD *)((unsigned int)(v12 + 42) + v57[0]), 8) >= a2 )
    {
      v17 = _byteswap_ulong(*(_DWORD *)(v12 + v57[0]));
      v56 = v17;
      v18 = v17;
      v19 = _byteswap_ulong(*(_DWORD *)((unsigned int)(v12 + 8) + v57[0]));
      if ( v17 <= (unsigned int)v10 && v19 <= ((unsigned int)v10 - v17) >> 3 && v19 )
      {
        v20 = v17 + 4;
        for ( i = v17 + 4; ; v20 = i )
        {
          if ( *v11 )
            goto LABEL_38;
          v21 = __ROR2__(*(_WORD *)(v18 + v16), 8);
          if ( v21 > a2 || __ROR2__(*(_WORD *)(v20 - 2 + v16), 8) < a2 )
            goto LABEL_37;
          v22 = v17 + _byteswap_ulong(*(_DWORD *)(v20 + v16));
          v23 = (unsigned int)(v22 + 8);
          if ( (unsigned int)v23 > (unsigned int)v10 || (unsigned int)v22 > (unsigned int)v10 || (unsigned int)v10 < 8 )
            goto LABEL_38;
          v24 = __ROR2__(*(_WORD *)(v22 + v16), 8);
          v25 = __ROR2__(*(_WORD *)((unsigned int)(v22 + 2) + v16), 8);
          v58 = v25;
          v26 = _byteswap_ulong(*(_DWORD *)((unsigned int)(v22 + 4) + v16));
          if ( v24 == 1 )
            break;
          if ( v24 != 2 )
          {
            if ( v24 != 3 )
            {
              if ( v24 == 4 )
              {
                if ( v23 + 4 > v10 )
                  goto LABEL_38;
                _mm_lfence();
                v16 = v57[0];
                v27 = (unsigned int)(v22 + 12);
                LODWORD(j) = v27;
                v29 = _byteswap_ulong(*(_DWORD *)(v23 + v57[0]));
                v30 = 0;
                v31 = v29 - 1;
                if ( v29 > ((unsigned int)(v10 - v27) >> 2) - 1 )
                  goto LABEL_38;
                if ( __ROR2__(*(_WORD *)(v27 + v57[0]), 8) != a2 )
                {
                  v32 = v29 - 1;
                  for ( j = (unsigned int)v27 + 4 * v31; ; j = (unsigned int)v27 + 4 * v32 )
                  {
                    v33 = __ROR2__(*(_WORD *)(j + v57[0]), 8);
                    if ( v33 < a2 )
                    {
                      v30 = v32;
                    }
                    else
                    {
                      if ( v33 == a2 )
                        goto LABEL_28;
                      v31 = v32;
                    }
                    if ( v31 - v30 < 2 )
                      break;
                    v32 = (v31 + v30) >> 1;
                  }
                  goto LABEL_38;
                }
LABEL_28:
                v11 = a4;
                v34 = (unsigned __int16)__ROR2__(*(_WORD *)((unsigned int)(j + 2) + v57[0]), 8);
                v35 = (unsigned __int16)__ROR2__(*(_WORD *)((unsigned int)(j + 6) + v57[0]), 8) - v34;
LABEL_29:
                v36 = v34 + v26;
                v37 = a9;
                *a7 = v36;
                *a6 = 2;
              }
              else
              {
                if ( v24 != 5 )
                  goto LABEL_38;
                v44 = (unsigned int)(v22 + 24);
                if ( (unsigned int)v44 > (unsigned int)v10 )
                  goto LABEL_38;
                _mm_lfence();
                v16 = v57[0];
                v45 = 0;
                v46 = *(_DWORD *)(v23 + v57[0]);
                v47 = 0;
                *a7 = v22 + 12;
                v35 = _byteswap_ulong(v46);
                *a6 = 1;
                *a5 = 3;
                v48 = _byteswap_ulong(*(_DWORD *)((unsigned int)(v22 + 20) + v16));
                v49 = v48 - 1;
                if ( v48 > (unsigned int)(v10 - v44) >> 1 )
                  goto LABEL_38;
                if ( __ROR2__(*(_WORD *)(v44 + v16), 8) != a2 )
                {
                  v45 = v48 - 1;
                  for ( k = (unsigned int)v44 + 2 * v49; ; k = (unsigned int)v44 + 2 * v45 )
                  {
                    v51 = __ROR2__(*(_WORD *)(k + v16), 8);
                    if ( v51 == a2 )
                      break;
                    if ( v51 >= a2 )
                      v49 = v45;
                    else
                      v47 = v45;
                    if ( v49 - v47 < 2 )
                      goto LABEL_38;
                    v45 = (v49 + v47) >> 1;
                  }
                }
                v37 = a9;
                v11 = a4;
                v25 = v58;
                v36 = v35 * v45 + v26;
                *a9 = v36;
              }
              v38 = a5;
              goto LABEL_31;
            }
            v52 = (unsigned int)v22 + 2 * (a2 - v21 + 4);
            if ( v52 + 4 > v10 )
              goto LABEL_38;
            v34 = (unsigned __int16)__ROR2__(*(_WORD *)(v52 + v16), 8);
            v43 = (unsigned __int16)__ROR2__(*(_WORD *)((unsigned int)(v52 + 2) + v16), 8);
LABEL_43:
            v35 = v43 - v34;
            if ( !v35 )
              goto LABEL_38;
            goto LABEL_29;
          }
          if ( v23 + 4 > v10 )
            goto LABEL_38;
          v53 = *(_DWORD *)(v23 + v16);
          v37 = a9;
          v54 = v21;
          v38 = a5;
          v35 = _byteswap_ulong(v53);
          v36 = v35 * (a2 - v54) + v26;
          *a9 = v36;
          *a7 = v22 + 12;
          *a6 = 1;
          *a5 = 3;
LABEL_31:
          *a10 = v35;
          *a8 = v25;
          v39 = *(unsigned __int8 *)(a3 + 47 + v16);
          if ( !v25 )
            goto LABEL_37;
          if ( v25 <= 2u )
          {
            if ( v39 == 1 )
              *v38 = 1;
            else
              *v38 = 2;
            v40 = v36 + 5;
LABEL_36:
            *v37 = v40;
            *v11 = 1;
            goto LABEL_37;
          }
          if ( v25 == 5 )
            goto LABEL_67;
          if ( v25 > 5u )
          {
            if ( v25 <= 7u )
              goto LABEL_66;
            if ( v25 == 8 )
            {
              if ( v39 == 1 )
                *v38 = 1;
              else
                *v38 = 2;
              v40 = v36 + 6;
              goto LABEL_36;
            }
            if ( v25 == 9 )
            {
LABEL_66:
              *v38 = 3;
              *v37 = v36 + 8;
LABEL_67:
              *v11 = 1;
            }
          }
LABEL_37:
          i += 8;
          v18 = v56 + 8;
          v56 += 8;
          if ( !--v19 )
            goto LABEL_38;
        }
        v41 = (unsigned int)v22 + 4 * (a2 - v21 + 2);
        if ( v41 + 8 > v10 )
          goto LABEL_38;
        v42 = *(_DWORD *)(v41 + v16);
        v43 = _byteswap_ulong(*(_DWORD *)((unsigned int)(v41 + 4) + v16));
        v34 = _byteswap_ulong(v42);
        goto LABEL_43;
      }
    }
LABEL_38:
    InvokeReleaseSfntFrag(*(unsigned int *)(a1 + 12));
    return 0LL;
  }
  return result;
}
