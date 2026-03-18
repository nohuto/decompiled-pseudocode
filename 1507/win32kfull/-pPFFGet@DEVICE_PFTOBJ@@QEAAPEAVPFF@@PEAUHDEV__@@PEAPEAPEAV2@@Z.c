/*
 * XREFs of ?pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z @ 0x1C0029538
 * Callers:
 *     ?ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z @ 0x1C0027940 (-ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z.c)
 *     GreEnumFonts @ 0x1C00E5F4C (GreEnumFonts.c)
 *     ?bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAVPDEVOBJ@@I@Z @ 0x1C025D6B4 (-bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAVPDEVOBJ@@I@Z.c)
 *     DEVICE_PFTOBJ_pPFFGetWrap @ 0x1C025E130 (DEVICE_PFTOBJ_pPFFGetWrap.c)
 *     ?bFoundForcedMatch@MAPPER@@QEAAHPEAU_UNIVERSAL_FONT_ID@@@Z @ 0x1C0286EC4 (-bFoundForcedMatch@MAPPER@@QEAAHPEAU_UNIVERSAL_FONT_ID@@@Z.c)
 *     ?vAttemptDeviceMatch@MAPPER@@QEAAXXZ @ 0x1C028728C (-vAttemptDeviceMatch@MAPPER@@QEAAXXZ.c)
 * Callees:
 *     ?SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z @ 0x1C025D318 (-SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z.c)
 */

struct PFF *__fastcall DEVICE_PFTOBJ::pPFFGet(DEVICE_PFTOBJ *this, unsigned __int64 a2, struct PFF ***a3)
{
  struct PFF **v4; // rax
  struct PFF *v5; // rcx
  struct PFF *result; // rax

  v4 = (struct PFF **)(*(_QWORD *)this + 32LL + 8 * ((a2 >> 4) % *(unsigned int *)(*(_QWORD *)this + 24LL)));
  v5 = *v4;
  if ( a3 )
    *a3 = v4;
  while ( 1 )
  {
    result = SkipInvalidPff(v5);
    if ( !result || a2 == *((_QWORD *)result + 11) )
      break;
    v5 = (struct PFF *)*((_QWORD *)result + 1);
  }
  return result;
}
