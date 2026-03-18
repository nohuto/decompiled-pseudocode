/*
 * XREFs of sbit_GetMetrics @ 0x1C00A1DA0
 * Callers:
 *     fs_FindBitMapSize @ 0x1C00AC4E8 (fs_FindBitMapSize.c)
 * Callees:
 *     GetSbitMetrics @ 0x1C00A18B8 (GetSbitMetrics.c)
 *     SScaleX @ 0x1C00A2338 (SScaleX.c)
 *     SScaleY @ 0x1C00A2350 (SScaleY.c)
 *     UScaleY @ 0x1C00A2368 (UScaleY.c)
 *     UScaleX @ 0x1C00A237C (UScaleX.c)
 *     UIntMult @ 0x1C01DCF90 (UIntMult.c)
 *     RowBytesAlign32 @ 0x1C02DA850 (RowBytesAlign32.c)
 */

__int64 __fastcall sbit_GetMetrics(
        __int64 a1,
        __int64 a2,
        int *a3,
        int *a4,
        int *a5,
        int *a6,
        int *a7,
        int *a8,
        _WORD *a9,
        _WORD *a10,
        _DWORD *a11,
        _DWORD *a12)
{
  unsigned __int16 v15; // di
  __int64 result; // rax
  __int16 v17; // ax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int16 v20; // ax
  __int64 v21; // rdx
  int v22; // esi
  __int16 v23; // ax
  int v24; // r14d
  __int16 v25; // r10
  unsigned __int16 v26; // ax
  __int64 v27; // rdx
  __int64 v28; // rcx
  unsigned __int16 v29; // ax
  __int64 v30; // rdx
  int v31; // r15d
  __int16 v32; // ax
  __int64 v33; // rdx
  int v34; // r14d
  __int64 v35; // rdx
  UINT v36; // edx
  UINT v37; // ecx
  UINT v38; // ecx
  UINT v39; // edx
  UINT v40; // r10d
  UINT v41; // r11d
  unsigned __int16 v42; // ax
  int v43; // r8d
  int v44; // ecx
  int v45; // eax
  int v46; // eax
  int v47; // r15d
  int v48; // r8d
  int v49; // r8d
  int *v50; // rax
  int v51; // ecx
  unsigned __int16 v52; // cx
  int v53; // eax
  UINT v54; // eax
  UINT v55; // ecx
  int v56; // eax
  int v57; // r9d
  int v58; // r8d
  int v59; // eax
  int v60; // esi
  int v61; // r9d
  int v62; // ecx
  int v63; // r8d
  int v64; // r14d
  int v65; // edx
  unsigned int v66; // r8d
  int v67; // r8d
  int v68; // ecx
  int v69; // r8d
  int v70; // r8d
  int v71; // eax
  int v72; // ecx
  bool v73; // zf
  __int16 v74; // [rsp+20h] [rbp-30h]
  __int16 v75; // [rsp+22h] [rbp-2Eh]
  __int16 v76; // [rsp+24h] [rbp-2Ch]
  UINT v77; // [rsp+28h] [rbp-28h] BYREF
  int v78; // [rsp+2Ch] [rbp-24h]
  int v79; // [rsp+30h] [rbp-20h]
  int v80; // [rsp+34h] [rbp-1Ch]
  UINT puResult; // [rsp+38h] [rbp-18h] BYREF
  int v82; // [rsp+3Ch] [rbp-14h]
  int v83; // [rsp+40h] [rbp-10h]

  if ( *(_WORD *)(a1 + 94) == 1 )
    v15 = 1;
  else
    v15 = 8;
  result = GetSbitMetrics(a1, a2);
  if ( !(_DWORD)result )
  {
    if ( *(_WORD *)(a1 + 28) == 3 && (!*(_WORD *)(a1 + 34) || !*(_WORD *)(a1 + 36)) )
      return 7168LL;
    v17 = UScaleX(a1, *(unsigned __int16 *)(a1 + 48));
    v18 = *(unsigned __int16 *)(a1 + 46);
    *(_WORD *)(a1 + 60) = v17;
    v20 = UScaleY(v19, v18);
    v21 = *(unsigned __int16 *)(a1 + 76);
    *(_WORD *)(a1 + 58) = v20;
    v22 = (__int16)SScaleY(a1, v21);
    v23 = SScaleX(a1, *(unsigned __int16 *)(a1 + 74));
    v24 = v23;
    v76 = v23;
    v74 = v22 - v25;
    v75 = v23 + *(_WORD *)(a1 + 60);
    v26 = UScaleX(a1, *(unsigned __int16 *)(a1 + 50));
    v27 = *(unsigned __int16 *)(a1 + 52);
    v79 = v26 << 6;
    v29 = UScaleY(v28, v27);
    v30 = *(unsigned __int16 *)(a1 + 78);
    v80 = v29 << 6;
    v78 = v22 << 6;
    v83 = v24;
    v31 = v24 << 6;
    v32 = SScaleX(a1, v30);
    v33 = *(unsigned __int16 *)(a1 + 80);
    v82 = v32 << 6;
    v34 = (__int16)SScaleY(a1, v33) << 6;
    result = RowBytesAlign32(*(unsigned __int16 *)(a1 + 48), *(unsigned __int16 *)(a1 + 94), a1 + 54);
    if ( !(_DWORD)result )
    {
      result = RowBytesAlign32(*(unsigned __int16 *)(a1 + 48), v15, a1 + 56);
      if ( !(_DWORD)result )
      {
        result = RowBytesAlign32(*(unsigned __int16 *)(a1 + 60), v35, a1 + 62);
        if ( !(_DWORD)result )
        {
          v36 = *(unsigned __int16 *)(a1 + 54);
          v37 = *(unsigned __int16 *)(a1 + 46);
          *(_DWORD *)(a1 + 24) = 0;
          if ( UIntMult(v37, v36, &puResult) >= 0
            && UIntMult(v38, *(unsigned __int16 *)(a1 + 56), &v77) >= 0
            && UIntMult(*(unsigned __int16 *)(a1 + 58), *(unsigned __int16 *)(a1 + 62), &v77) >= 0 )
          {
            v42 = *(_WORD *)(a1 + 58);
            if ( (unsigned __int16)v39 > (unsigned __int16)v41 )
              v41 = v39;
            if ( v42 > (unsigned __int16)v40 )
              v40 = v42;
            if ( UIntMult(v40, v41, &v77) >= 0 )
            {
              switch ( *(_WORD *)(a1 + 38) )
              {
                case 0:
                  a9[2] = v74;
                  v67 = v78;
                  *a9 = v22;
                  a9[1] = v76;
                  a9[3] = v75;
                  v68 = *(unsigned __int16 *)(a1 + 60);
                  *a3 = v79;
                  a4[1] = v67;
                  v69 = v80;
                  *a5 = v31;
                  a5[1] = v22 << 6;
                  a3[1] = 0;
                  *a4 = v31;
                  a6[1] = v69;
                  v70 = v82;
                  *a6 = 0;
                  *a7 = v70;
                  a7[1] = v34;
                  *a8 = v70;
                  a8[1] = v34;
                  v71 = *(unsigned __int16 *)(a1 + 58);
                  v72 = ((v15 * v68 + 31) >> 3) & 0xFFFC;
                  *(_WORD *)(a1 + 64) = v72;
                  v73 = *(_WORD *)(a1 + 28) == 3;
                  *(_DWORD *)(a1 + 16) = v71 * v72;
                  if ( !v73 && *(_WORD *)(a1 + 94) == 1 )
                  {
                    *(_DWORD *)(a1 + 20) = 0;
LABEL_30:
                    *a10 = *(_WORD *)(a1 + 64);
                    *a11 = *(_DWORD *)(a1 + 16);
                    *a12 = *(_DWORD *)(a1 + 20);
                    return 0LL;
                  }
LABEL_28:
                  v54 = v77;
                  *(_DWORD *)(a1 + 20) = v77;
                  if ( *(_WORD *)(a1 + 94) != 1 )
                  {
                    v55 = puResult;
                    *(_DWORD *)(a1 + 20) = puResult + v54;
                    *(_DWORD *)(a1 + 24) = v55;
                  }
                  goto LABEL_30;
                case 1:
                  a9[3] = -v74;
                  v63 = v78;
                  v64 = -v34;
                  *a9 = v75;
                  v65 = v75 - v83;
                  a9[1] = -(__int16)v22;
                  a9[2] = v76;
                  a3[1] = v79;
                  v65 <<= 6;
                  *a4 = -v63;
                  v66 = -v80;
                  *a3 = 0;
                  a4[1] = v65 + v31;
                  a5[1] = (v75 << 6) - v31;
                  *a5 = 0;
                  *a7 = v64;
                  *(_QWORD *)a6 = v66;
                  a7[1] = v65 + v82;
                  v50 = a8;
                  *a8 = v64 - (v22 << 6);
                  break;
                case 2:
                  a3[1] = 0;
                  *a9 = -v74;
                  a9[2] = -(__int16)v22;
                  a9[1] = -v75;
                  v56 = v79;
                  a9[3] = -v76;
                  v57 = v83;
                  v58 = v80;
                  *a3 = -v56;
                  v59 = (v57 - v75) << 6;
                  v60 = (v22 - v74) << 6;
                  v61 = v59 - v82;
                  *a4 = v59 - v31;
                  a4[1] = v60 - v78;
                  a5[1] = -64 * v74;
                  v62 = *(unsigned __int16 *)(a1 + 60);
                  *a5 = -v31;
                  *a6 = 0;
                  a6[1] = -v58;
                  *a7 = v61;
                  a7[1] = v60 - v34;
                  *a8 = -64 * v75;
                  a8[1] = -v34;
                  v52 = ((v15 * v62 + 31) >> 3) & 0xFFFC;
                  v53 = *(unsigned __int16 *)(a1 + 58);
                  goto LABEL_27;
                case 3:
                  a9[1] = v74;
                  a9[2] = -v75;
                  *a9 = -v76;
                  v43 = v83;
                  a9[3] = v22;
                  a3[1] = -v79;
                  v44 = (v74 - v22) << 6;
                  v45 = v44 + v78;
                  *a3 = 0;
                  *a4 = v45;
                  v46 = -v31;
                  v47 = v31 - (v43 << 6);
                  v48 = v80;
                  a4[1] = v46;
                  *a5 = 0;
                  a5[1] = v47;
                  *a6 = v48;
                  v49 = v82;
                  a6[1] = 0;
                  *a7 = v44 + v34;
                  a7[1] = -v49;
                  v50 = a8;
                  *a8 = v34 + ((v74 - 2 * v22) << 6);
                  break;
                default:
                  return 6146LL;
              }
              v51 = *(unsigned __int16 *)(a1 + 58);
              v50[1] = 0;
              v52 = ((v15 * v51 + 31) >> 3) & 0xFFFC;
              v53 = *(unsigned __int16 *)(a1 + 60);
LABEL_27:
              *(_WORD *)(a1 + 64) = v52;
              *(_DWORD *)(a1 + 16) = v53 * v52;
              goto LABEL_28;
            }
          }
          return 6149LL;
        }
      }
    }
  }
  return result;
}
