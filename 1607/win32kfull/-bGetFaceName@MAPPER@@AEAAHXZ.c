/*
 * XREFs of ?bGetFaceName@MAPPER@@AEAAHXZ @ 0x1C0026084
 * Callers:
 *     ?ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z @ 0x1C0024C7C (-ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z.c)
 *     ??0MAPPER@@QEAA@PEAVXDCOBJ@@PEAKPEAU_POINTL@@1PEBUtagENUMLOGFONTEXDVW@@PEBGKHK@Z @ 0x1C00261C8 (--0MAPPER@@QEAA@PEAVXDCOBJ@@PEAKPEAU_POINTL@@1PEBUtagENUMLOGFONTEXDVW@@PEBGKHK@Z.c)
 * Callees:
 *     ?FindFaceName@@YAPEAGK@Z @ 0x1C002292C (-FindFaceName@@YAPEAGK@Z.c)
 *     ?bCalculateWishCell@MAPPER@@AEAAHXZ @ 0x1C0025E84 (-bCalculateWishCell@MAPPER@@AEAAHXZ.c)
 *     ?bCalcOrientation@MAPPER@@QEAAHXZ @ 0x1C0025F0C (-bCalcOrientation@MAPPER@@QEAAHXZ.c)
 *     ?bFindBitmapFont@MAPPER@@QEAAHPEAG@Z @ 0x1C0025F98 (-bFindBitmapFont@MAPPER@@QEAAHPEAG@Z.c)
 */

__int64 __fastcall MAPPER::bGetFaceName(MAPPER *this)
{
  unsigned __int8 v1; // r8
  int v3; // edx
  int v4; // edi
  char v5; // cl
  char v6; // al
  char v7; // cl
  int v8; // eax
  unsigned __int16 *FaceName; // rsi
  unsigned __int16 *v10; // rax

  v1 = *((_BYTE *)this + 284);
  if ( v1 == 1 )
    v1 = MAPPER::DefaultCharset;
  *((_DWORD *)this + 63) |= 0x20000u;
  v3 = *((_DWORD *)this + 63);
  v4 = v1;
  v5 = *(_BYTE *)(*((_QWORD *)this + 1) + 27LL);
  v6 = v5 & 3;
  if ( (v5 & 3) == 1 )
    v4 = v1 | 0x8000;
  v7 = v5 & 0x70;
  if ( v7 == 16 )
  {
    v4 |= 0x4000u;
  }
  else if ( !v6 && v7 == 48 )
  {
    v4 |= 0x8000u;
  }
  if ( (v3 & 0x2000000) != 0 )
    v4 |= 0x2000u;
  if ( v1 || (v3 & 0x100) == 0 || (v3 & 4) == 0 && !(unsigned int)MAPPER::bCalculateWishCell(this) )
    goto LABEL_21;
  if ( (*((_DWORD *)this + 63) & 0x80000) == 0 && !(unsigned int)MAPPER::bCalcOrientation((__int64 **)this) )
    goto LABEL_21;
  v8 = *((_DWORD *)this + 44);
  if ( v8 )
  {
    if ( v8 != 900 && v8 != 1800 && v8 != 2700 )
      goto LABEL_21;
  }
  FaceName = FindFaceName(v4 | 0x1000u);
  if ( (unsigned int)MAPPER::bFindBitmapFont(this, FaceName)
    || (FaceName = FindFaceName(v4 | 0x800u), (unsigned int)MAPPER::bFindBitmapFont(this, FaceName)) )
  {
    *((_QWORD *)this + 2) = FaceName;
    return 1LL;
  }
  if ( (*((_DWORD *)this + 63) & 0x100000) == 0 )
  {
LABEL_21:
    v10 = FindFaceName(v4);
    if ( *v10 || (*((_DWORD *)this + 63) & 0x40000000) == 0 )
      *((_QWORD *)this + 2) = v10;
    return 1LL;
  }
  return 0LL;
}
