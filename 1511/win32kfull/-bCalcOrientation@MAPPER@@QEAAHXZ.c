/*
 * XREFs of ?bCalcOrientation@MAPPER@@QEAAHXZ @ 0x1C0020454
 * Callers:
 *     ?bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z @ 0x1C001F8E0 (-bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z.c)
 *     ?bGetFaceName@MAPPER@@AEAAHXZ @ 0x1C00205C8 (-bGetFaceName@MAPPER@@AEAAHXZ.c)
 * Callees:
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0019C30 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 */

__int64 __fastcall MAPPER::bCalcOrientation(__int64 **this)
{
  int v1; // r8d
  int v3; // r11d
  int v4; // r9d
  __int64 result; // rax
  __int64 v6; // r10
  int v7; // ecx
  float v8; // xmm0_4
  bool v9; // dl
  bool v10; // cf
  bool v11; // zf
  float v12; // xmm0_4
  int v13; // r9d
  int v14; // r8d
  int v15; // r10d
  int v16; // edi
  int v17; // esi
  unsigned int v18; // edx
  int v19; // r8d
  float *v20; // [rsp+20h] [rbp-18h] BYREF

  v1 = *((_DWORD *)this + 63);
  if ( (v1 & 0x1000) != 0 )
  {
    v3 = 0;
    v4 = *((_DWORD *)this[1] + 2);
    *((_DWORD *)this + 44) = v4;
    if ( v4 )
    {
      v6 = **this;
      v7 = *(_DWORD *)(*(_QWORD *)(v6 + 80) + 352LL);
      if ( (v7 & 2) != 0 && (v7 & 0x1000) == 0 )
      {
        v8 = *(float *)(v6 + 336);
        v9 = v8 > 0.0;
        v10 = v8 > 0.0;
        v11 = v8 == 0.0;
        v12 = *(float *)(v6 + 348);
        LOBYTE(v3) = v12 < 0.0;
        if ( v9 - (!v10 && !v11) != (v12 > 0.0) - v3 )
          *((_DWORD *)this + 44) = -v4;
      }
    }
    goto LABEL_3;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(**this + 80) + 352LL) & 0x802) == 0x802 || (v1 & 0x40) != 0 )
  {
    *((_DWORD *)this + 44) = *((_DWORD *)this[1] + 3);
LABEL_3:
    result = 1LL;
    *((_DWORD *)this + 63) = v1 | 0x80000;
    return result;
  }
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v20, (struct XDCOBJ *)*this, 0x204u);
  v15 = (__PAIR64__(v20[2] > 0.0, *((_DWORD *)v20 + 2)) - COERCE_UNSIGNED_INT(0.0)) >> 32;
  v16 = (__PAIR64__(v20[3] > 0.0, *((_DWORD *)v20 + 3)) - COERCE_UNSIGNED_INT(0.0)) >> 32;
  if ( (*(_DWORD *)(*(_QWORD *)(**this + 80) + 352LL) & 0x40) != 0 )
  {
    v15 = -v15;
    v16 = -v16;
  }
  v17 = *((_DWORD *)this[1] + 3);
  if ( v17 != 900 * (v17 / 900) )
    return 0;
  v18 = 1;
  v14 = (__PAIR64__(v20[1] > 0.0, *((_DWORD *)v20 + 1)) - COERCE_UNSIGNED_INT(0.0)) >> 32;
  v13 = (__PAIR64__(*v20 > 0.0, *v20) - COERCE_UNSIGNED_INT(0.0)) >> 32;
  if ( (v15 + v14) | (v13 - v16) | (v13 ^ ~v14) & 1 )
  {
    return 0;
  }
  else
  {
    v19 = (v15 & 0xA8C)
        + v17
        + (((__PAIR64__(*v20 > 0.0, *v20) - COERCE_UNSIGNED_INT(0.0)) >> 32) & 0x708)
        + (((__PAIR64__(v20[1] > 0.0, *((_DWORD *)v20 + 1)) - COERCE_UNSIGNED_INT(0.0)) >> 32) & 0x384);
    *((_DWORD *)this + 44) = v19;
    if ( v19 >= 3600 )
      *((_DWORD *)this + 44) = v19 - 3600;
    *((_DWORD *)this + 63) |= 0x80000u;
  }
  return v18;
}
