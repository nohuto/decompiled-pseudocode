/*
 * XREFs of sbit_GetMetrics @ 0x1C001D128
 * Callers:
 *     fs_FindBitMapSize @ 0x1C00C408C (fs_FindBitMapSize.c)
 * Callees:
 *     GetSbitMetrics @ 0x1C001CBBC (GetSbitMetrics.c)
 *     RowBytesAlign32 @ 0x1C001D418 (RowBytesAlign32.c)
 *     SScaleX @ 0x1C001D46C (SScaleX.c)
 *     SScaleY @ 0x1C001D484 (SScaleY.c)
 *     UScaleY @ 0x1C001D49C (UScaleY.c)
 *     UScaleX @ 0x1C001D4B0 (UScaleX.c)
 */

__int64 __fastcall sbit_GetMetrics(
        __int64 a1,
        __int64 a2,
        int *a3,
        int *a4,
        int *a5,
        _DWORD *a6,
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
  int v24; // ebp
  __int16 v25; // r10
  __int64 v26; // rcx
  int v27; // ebp
  int v28; // r13d
  int v29; // esi
  __int64 v30; // rdx
  int v31; // r10d
  __int64 v32; // rcx
  __int64 v33; // r8
  unsigned __int64 v34; // r8
  unsigned int v35; // edx
  __int64 v36; // r11
  unsigned int v37; // eax
  unsigned __int64 v38; // r9
  int v39; // ecx
  int v40; // eax
  int v41; // ecx
  bool v42; // zf
  int v43; // ecx
  int *v44; // rax
  int v45; // esi
  int v46; // edx
  int v47; // ecx
  unsigned __int16 v48; // cx
  int v49; // eax
  int v50; // r15d
  int v51; // eax
  int v52; // ecx
  __int16 v53; // [rsp+20h] [rbp-48h]
  __int16 v54; // [rsp+22h] [rbp-46h]
  __int16 v55; // [rsp+24h] [rbp-44h]
  int v56; // [rsp+28h] [rbp-40h]
  int v57; // [rsp+2Ch] [rbp-3Ch]
  unsigned int v58; // [rsp+30h] [rbp-38h]
  int v59; // [rsp+34h] [rbp-34h]

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
    v53 = v23;
    v54 = v22 - v25;
    v55 = v23 + *(_WORD *)(a1 + 60);
    v56 = (unsigned __int16)UScaleX(a1, *(unsigned __int16 *)(a1 + 50)) << 6;
    v58 = (unsigned __int16)UScaleY(v26, *(unsigned __int16 *)(a1 + 52)) << 6;
    v59 = v24;
    v57 = v22 << 6;
    v27 = v24 << 6;
    v28 = (__int16)SScaleX(a1, *(unsigned __int16 *)(a1 + 78)) << 6;
    v29 = (__int16)SScaleY(a1, *(unsigned __int16 *)(a1 + 80)) << 6;
    result = RowBytesAlign32(*(unsigned __int16 *)(a1 + 48), *(unsigned __int16 *)(a1 + 94), a1 + 54);
    if ( !(_DWORD)result )
    {
      result = RowBytesAlign32(*(unsigned __int16 *)(a1 + 48), v15, a1 + 56);
      if ( !(_DWORD)result )
      {
        result = RowBytesAlign32(*(unsigned __int16 *)(a1 + 60), v30, a1 + 62);
        if ( !(_DWORD)result )
        {
          v32 = *(unsigned __int16 *)(a1 + 46);
          v33 = *(unsigned __int16 *)(a1 + 54);
          *(_DWORD *)(a1 + 24) = 0;
          v34 = v32 * v33;
          if ( v34 > 0xFFFFFFFF )
            return 6149LL;
          if ( v32 * (unsigned __int64)*(unsigned __int16 *)(a1 + 56) > 0xFFFFFFFF )
            return 6149LL;
          v35 = *(unsigned __int16 *)(a1 + 62);
          v36 = *(unsigned __int16 *)(a1 + 58);
          if ( v36 * (unsigned __int64)*(unsigned __int16 *)(a1 + 62) > 0xFFFFFFFF )
            return 6149LL;
          if ( (unsigned __int16)v35 <= *(_WORD *)(a1 + 56) )
            v35 = *(unsigned __int16 *)(a1 + 56);
          v37 = *(unsigned __int16 *)(a1 + 58);
          if ( (unsigned __int16)v36 <= (unsigned __int16)v32 )
            v37 = v32;
          v38 = v35 * (unsigned __int64)v37;
          if ( v38 > 0xFFFFFFFF )
            return 6149LL;
          switch ( *(_WORD *)(a1 + 38) )
          {
            case 0:
              a9[2] = v54;
              *a9 = v31;
              a9[3] = v55;
              a9[1] = v53;
              v39 = *(unsigned __int16 *)(a1 + 60);
              *a3 = v56;
              a4[1] = v57;
              *a5 = v27;
              a5[1] = v31 << 6;
              a3[1] = 0;
              *a4 = v27;
              *a6 = 0;
              a6[1] = v58;
              *a7 = v28;
              a7[1] = v29;
              *a8 = v28;
              a8[1] = v29;
              v40 = *(unsigned __int16 *)(a1 + 58);
              v41 = ((v15 * v39 + 31) >> 3) & 0xFFFC;
              *(_WORD *)(a1 + 64) = v41;
              v42 = *(_WORD *)(a1 + 28) == 3;
              *(_DWORD *)(a1 + 16) = v40 * v41;
              if ( !v42 )
              {
                v42 = *(_WORD *)(a1 + 94) == 1;
                if ( *(_WORD *)(a1 + 94) == 1 )
                {
                  *(_DWORD *)(a1 + 20) = 0;
LABEL_20:
                  *a10 = *(_WORD *)(a1 + 64);
                  *a11 = *(_DWORD *)(a1 + 16);
                  *a12 = *(_DWORD *)(a1 + 20);
                  return 0LL;
                }
LABEL_36:
                *(_DWORD *)(a1 + 20) = v38;
                if ( !v42 )
                {
                  *(_DWORD *)(a1 + 24) = v34;
                  *(_DWORD *)(a1 + 20) = v38 + v34;
                }
                goto LABEL_20;
              }
LABEL_35:
              v42 = *(_WORD *)(a1 + 94) == 1;
              goto LABEL_36;
            case 1:
              a9[3] = -v54;
              v45 = -v29;
              *a9 = v55;
              a9[1] = -(__int16)v31;
              a9[2] = v53;
              a3[1] = v56;
              v46 = (v55 - v59) << 6;
              *a4 = -v57;
              *a3 = 0;
              a4[1] = v46 + v27;
              a5[1] = (v55 << 6) - v27;
              *a5 = 0;
              *a7 = v45;
              *(_QWORD *)a6 = -v58;
              a7[1] = v46 + v28;
              v44 = a8;
              *a8 = v45 - (v31 << 6);
              break;
            case 2:
              a3[1] = 0;
              a9[2] = -(__int16)v31;
              *a9 = -v54;
              a9[3] = -v53;
              a9[1] = -v55;
              *a3 = -v56;
              v50 = (v59 - v55) << 6;
              *a4 = v50 - v27;
              v51 = (v31 - v54) << 6;
              a4[1] = v51 - v57;
              a5[1] = -64 * v54;
              v52 = *(unsigned __int16 *)(a1 + 60);
              *a5 = -v27;
              *a6 = 0;
              a6[1] = -v58;
              *a7 = v50 - v28;
              a7[1] = v51 - v29;
              *a8 = -64 * v55;
              a8[1] = -v29;
              v48 = ((v15 * v52 + 31) >> 3) & 0xFFFC;
              v49 = *(unsigned __int16 *)(a1 + 58);
              goto LABEL_34;
            case 3:
              a9[1] = v54;
              a9[2] = -v55;
              *a9 = -v53;
              a9[3] = v31;
              v43 = (v54 - v31) << 6;
              a3[1] = -v56;
              *a4 = v43 + v57;
              *a3 = 0;
              a4[1] = -v27;
              *a5 = 0;
              a5[1] = v27 - (v59 << 6);
              *(_QWORD *)a6 = v58;
              *a7 = v43 + v29;
              a7[1] = -v28;
              v44 = a8;
              *a8 = v29 + ((v54 - 2 * v31) << 6);
              break;
            default:
              return 6146LL;
          }
          v47 = *(unsigned __int16 *)(a1 + 58);
          v44[1] = 0;
          v48 = ((v15 * v47 + 31) >> 3) & 0xFFFC;
          v49 = *(unsigned __int16 *)(a1 + 60);
LABEL_34:
          *(_WORD *)(a1 + 64) = v48;
          *(_DWORD *)(a1 + 16) = v49 * v48;
          goto LABEL_35;
        }
      }
    }
  }
  return result;
}
