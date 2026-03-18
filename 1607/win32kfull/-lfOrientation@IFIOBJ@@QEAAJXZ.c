/*
 * XREFs of ?lfOrientation@IFIOBJ@@QEAAJXZ @ 0x1C0026720
 * Callers:
 *     ?vIFIMetricsToEnumLogFontW@@YAXPEAUtagENUMLOGFONTW@@PEAU_IFIMETRICS@@@Z @ 0x1C0023914 (-vIFIMetricsToEnumLogFontW@@YAXPEAUtagENUMLOGFONTW@@PEAU_IFIMETRICS@@@Z.c)
 *     ?bInit@PFEMEMOBJ@@QEAAHPEAVPFF@@KPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@2HPEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C0064060 (-bInit@PFEMEMOBJ@@QEAAHPEAVPFF@@KPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@2HPEAU_UNIVERSAL_FONT_ID@@.c)
 *     vIFIMetricsToLogFontW @ 0x1C0299A3C (vIFIMetricsToLogFontW.c)
 * Callees:
 *     bFToL @ 0x1C0018BF4 (bFToL.c)
 *     ?vArctan@@YAXVEFLOAT@@0AEAV1@AEAJ@Z @ 0x1C02AA2C8 (-vArctan@@YAXVEFLOAT@@0AEAV1@AEAJ@Z.c)
 */

__int64 __fastcall IFIOBJ::lfOrientation(IFIOBJ *this)
{
  int v1; // r9d
  int v2; // r10d
  BOOL v3; // ecx
  int v5; // eax
  int v6; // [rsp+30h] [rbp+8h] BYREF
  float v7; // [rsp+38h] [rbp+10h] BYREF

  v1 = *(_DWORD *)(*(_QWORD *)this + 120LL);
  v2 = *(_DWORD *)(*(_QWORD *)this + 124LL);
  v3 = v2 < 0;
  if ( (((unsigned __int8)((v1 > 0) - (v1 < 0)) ^ (unsigned __int8)((v2 > 0) - v3)) & 1) != 0 )
    return ((v1 > 0) - (v1 < 0)) & 0x708 | ((v2 > 0) - v3) & 0xA8C | (v3 - (v2 > 0)) & 0x384u;
  vArctan(
    (unsigned int)_mm_cvtsi128_si32((__m128i)COERCE_UNSIGNED_INT((float)v1)),
    (unsigned int)_mm_cvtsi128_si32((__m128i)COERCE_UNSIGNED_INT((float)v2)),
    &v7,
    &v6);
  v5 = bFToL(v7 * 10.0, &v6, 6);
  return v6 & (unsigned int)-(v5 != 0);
}
