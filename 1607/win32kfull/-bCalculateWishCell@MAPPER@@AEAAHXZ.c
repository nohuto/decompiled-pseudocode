/*
 * XREFs of ?bCalculateWishCell@MAPPER@@AEAAHXZ @ 0x1C0025E84
 * Callers:
 *     ?bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z @ 0x1C00254DC (-bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z.c)
 *     ?bGetFaceName@MAPPER@@AEAAHXZ @ 0x1C0026084 (-bGetFaceName@MAPPER@@AEAAHXZ.c)
 *     ?bFoundForcedMatch@MAPPER@@QEAAHPEAU_UNIVERSAL_FONT_ID@@@Z @ 0x1C0285A18 (-bFoundForcedMatch@MAPPER@@QEAAHPEAU_UNIVERSAL_FONT_ID@@@Z.c)
 * Callees:
 *     bFToL @ 0x1C0018BF4 (bFToL.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0039508 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 */

__int64 __fastcall MAPPER::bCalculateWishCell(MAPPER *this)
{
  int v2; // eax
  int v3; // edx
  int v4; // edi
  float *v6; // r14
  unsigned int v7; // r11d
  int v8; // r15d
  int v9; // esi
  int v10; // r9d
  int v11; // r10d
  int v12; // r8d
  int v13; // eax
  int v14; // edi
  __m128i v15; // xmm0
  float v16; // xmm0_4
  float v17; // xmm0_4
  int v18; // eax
  __m128i v19; // xmm0
  float v20; // xmm0_4
  float v21; // xmm0_4
  int v22; // eax
  float *v23; // [rsp+20h] [rbp-10h] BYREF
  unsigned int v24; // [rsp+50h] [rbp+20h] BYREF

  v2 = lNormAngle(*(unsigned int *)(*((_QWORD *)this + 1) + 12LL));
  v3 = *((_DWORD *)this + 63);
  v4 = v2;
  if ( (v3 & 0x20) != 0 )
    return 0LL;
  if ( (*(_DWORD *)(*(_QWORD *)(**(_QWORD **)this + 80LL) + 352LL) & 0x802) == 0x802 || (v3 & 0x40) != 0 )
  {
    *((_DWORD *)this + 44) = v2;
    *((_DWORD *)this + 63) = v3 | 0x1C;
    return 1LL;
  }
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v23, *(struct XDCOBJ **)this, 0x204u);
  v6 = v23;
  v7 = 0;
  v8 = (__PAIR64__(*v23 > 0.0, *v23) - COERCE_UNSIGNED_INT(0.0)) >> 32;
  v10 = (__PAIR64__(v23[2] > 0.0, *((_DWORD *)v23 + 2)) - COERCE_UNSIGNED_INT(0.0)) >> 32;
  v11 = (__PAIR64__(v23[3] > 0.0, *((_DWORD *)v23 + 3)) - COERCE_UNSIGNED_INT(0.0)) >> 32;
  if ( (*(_DWORD *)(*(_QWORD *)(**(_QWORD **)this + 80LL) + 352LL) & 0x40) != 0 )
  {
    v10 = -v10;
    v11 = -v11;
  }
  v12 = *((_DWORD *)this + 63);
  if ( (v12 & 0x81000) != 0 )
    goto LABEL_14;
  if ( v4 == 900 * (v4 / 900) )
  {
    v9 = (__PAIR64__(v23[1] > 0.0, *((_DWORD *)v23 + 1)) - COERCE_UNSIGNED_INT(0.0)) >> 32;
    if ( !((v10 + v9) | (v8 - v11) | ((unsigned __int8)v8 ^ (unsigned __int8)~(_BYTE)v9) & 1) )
    {
      v13 = (((__PAIR64__(v23[1] > 0.0, *((_DWORD *)v23 + 1)) - COERCE_UNSIGNED_INT(0.0)) >> 32) & 0x384)
          + (v10 & 0xA8C)
          + v4
          + (((__PAIR64__(*v23 > 0.0, *v23) - COERCE_UNSIGNED_INT(0.0)) >> 32) & 0x708);
      *((_DWORD *)this + 44) = v13;
      if ( v13 >= 3600 )
        *((_DWORD *)this + 44) = v13 - 3600;
      *((_DWORD *)this + 63) = v12 | 0x80000;
LABEL_14:
      v14 = *((_DWORD *)this + 63);
      if ( (v14 & 8) == 0 )
      {
        v15 = _mm_cvtsi32_si128(*((_DWORD *)this + 41));
        v24 = 0;
        LODWORD(v16) = _mm_cvtepi32_ps(v15).m128_u32[0];
        if ( v11 )
          v17 = v16 * v6[3];
        else
          v17 = v16 * v6[2];
        bFToL(v17, &v24, 0);
        v18 = v24;
        *((_DWORD *)this + 41) = v24;
        if ( v18 < 0 )
          *((_DWORD *)this + 41) = -v18;
        *((_DWORD *)this + 41) = (*((_DWORD *)this + 41) + 8) >> 4;
      }
      if ( *(_DWORD *)(*((_QWORD *)this + 1) + 4LL) != v7 && (v14 & 0x10) == 0 )
      {
        v19 = _mm_cvtsi32_si128(*((_DWORD *)this + 42));
        v24 = v7;
        LODWORD(v20) = _mm_cvtepi32_ps(v19).m128_u32[0];
        if ( v8 )
          v21 = v20 * *v6;
        else
          v21 = v20 * v6[1];
        bFToL(v21, &v24, 0);
        v22 = v24;
        *((_DWORD *)this + 42) = v24;
        if ( v22 < 0 )
          *((_DWORD *)this + 42) = -v22;
        *((_DWORD *)this + 42) = (*((_DWORD *)this + 42) + 8) >> 4;
      }
      v7 = 1;
      *((_DWORD *)this + 63) = v14 | 0x1C;
      return v7;
    }
  }
  *((_DWORD *)this + 63) = v12 | 0x20;
  return v7;
}
