/*
 * XREFs of ?bCalculateWishCell@MAPPER@@AEAAHXZ @ 0x1C0028C80
 * Callers:
 *     ?bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z @ 0x1C00281B0 (-bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z.c)
 *     ?bGetFaceName@MAPPER@@AEAAHXZ @ 0x1C0028E7C (-bGetFaceName@MAPPER@@AEAAHXZ.c)
 *     ?bFoundForcedMatch@MAPPER@@QEAAHPEAU_UNIVERSAL_FONT_ID@@@Z @ 0x1C0286EC4 (-bFoundForcedMatch@MAPPER@@QEAAHPEAU_UNIVERSAL_FONT_ID@@@Z.c)
 * Callees:
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0032CA0 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     bFToL @ 0x1C00A95A4 (bFToL.c)
 */

__int64 __fastcall MAPPER::bCalculateWishCell(MAPPER *this)
{
  int v2; // eax
  int v3; // edx
  int v4; // edi
  unsigned int v6; // r11d
  int v7; // r15d
  int v8; // esi
  int v9; // r9d
  int v10; // r10d
  __int64 v11; // rcx
  int v12; // r8d
  int v13; // eax
  int v14; // edi
  int v15; // eax
  int v16; // eax
  float *v17; // [rsp+20h] [rbp-10h] BYREF
  unsigned int v18; // [rsp+50h] [rbp+20h] BYREF

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
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v17, *(struct XDCOBJ **)this, 0x204u);
  v6 = 0;
  v7 = (__PAIR64__(*v17 > 0.0, *v17) - COERCE_UNSIGNED_INT(0.0)) >> 32;
  v8 = (__PAIR64__(v17[1] > 0.0, *((_DWORD *)v17 + 1)) - COERCE_UNSIGNED_INT(0.0)) >> 32;
  v9 = (__PAIR64__(v17[2] > 0.0, *((_DWORD *)v17 + 2)) - COERCE_UNSIGNED_INT(0.0)) >> 32;
  v10 = (__PAIR64__(v17[3] > 0.0, *((_DWORD *)v17 + 3)) - COERCE_UNSIGNED_INT(0.0)) >> 32;
  v11 = *(unsigned int *)(*(_QWORD *)(**(_QWORD **)this + 80LL) + 352LL);
  if ( (v11 & 0x40) != 0 )
  {
    v9 = -v9;
    v10 = -v10;
  }
  v12 = *((_DWORD *)this + 63);
  if ( (v12 & 0x81000) != 0 )
    goto LABEL_14;
  if ( v4 == 900 * (v4 / 900) )
  {
    v11 = (v9 + v8) | (v7 - v10) | ((unsigned __int8)v7 ^ (unsigned __int8)~(_BYTE)v8) & 1u;
    if ( !((v9 + v8) | (v7 - v10) | ((unsigned __int8)v7 ^ (unsigned __int8)~(_BYTE)v8) & 1) )
    {
      v13 = (((__PAIR64__(v17[1] > 0.0, *((_DWORD *)v17 + 1)) - COERCE_UNSIGNED_INT(0.0)) >> 32) & 0x384)
          + (v9 & 0xA8C)
          + v4
          + (((__PAIR64__(*v17 > 0.0, *v17) - COERCE_UNSIGNED_INT(0.0)) >> 32) & 0x708);
      *((_DWORD *)this + 44) = v13;
      if ( v13 >= 3600 )
        *((_DWORD *)this + 44) = v13 - 3600;
      *((_DWORD *)this + 63) = v12 | 0x80000;
LABEL_14:
      v14 = *((_DWORD *)this + 63);
      if ( (v14 & 8) == 0 )
      {
        v18 = 0;
        bFToL(v11, &v18, 0LL);
        v15 = v18;
        *((_DWORD *)this + 41) = v18;
        if ( v15 < 0 )
          *((_DWORD *)this + 41) = -v15;
        *((_DWORD *)this + 41) = (*((_DWORD *)this + 41) + 8) >> 4;
      }
      if ( *(_DWORD *)(*((_QWORD *)this + 1) + 4LL) != v6 && (v14 & 0x10) == 0 )
      {
        v18 = v6;
        bFToL(v11, &v18, 0LL);
        v16 = v18;
        *((_DWORD *)this + 42) = v18;
        if ( v16 < 0 )
          *((_DWORD *)this + 42) = -v16;
        *((_DWORD *)this + 42) = (*((_DWORD *)this + 42) + 8) >> 4;
      }
      v6 = 1;
      *((_DWORD *)this + 63) = v14 | 0x1C;
      return v6;
    }
  }
  *((_DWORD *)this + 63) = v12 | 0x20;
  return v6;
}
