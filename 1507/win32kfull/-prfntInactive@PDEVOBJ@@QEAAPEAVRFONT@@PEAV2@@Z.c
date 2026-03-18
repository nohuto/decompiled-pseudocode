/*
 * XREFs of ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z @ 0x1C0126370
 * Callers:
 *     ?bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z @ 0x1C002A864 (-bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z.c)
 *     ?bHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x1C002FDDC (-bHookRedir@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?bFindRFONT@RFONTOBJ@@QEAAHPEAU_FD_XFORM@@KKAEAVPDEVOBJ@@PEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z @ 0x1C010F958 (-bFindRFONT@RFONTOBJ@@QEAAHPEAU_FD_XFORM@@KKAEAVPDEVOBJ@@PEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z.c)
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z @ 0x1C0125E48 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z.c)
 *     vDeactivateEudcRFONTsWorker @ 0x1C028B454 (vDeactivateEudcRFONTsWorker.c)
 *     ?bHookBmpDrv@@YAHAEAVXDCOBJ@@@Z @ 0x1C028DD34 (-bHookBmpDrv@@YAHAEAVXDCOBJ@@@Z.c)
 *     vRemoveAllInactiveRFONTs @ 0x1C029BE5C (vRemoveAllInactiveRFONTs.c)
 * Callees:
 *     <none>
 */

struct RFONT *__fastcall PDEVOBJ::prfntInactive(PDEVOBJ *this, struct RFONT *a2)
{
  __int64 v2; // r8
  struct RFONT *result; // rax
  __int64 v4; // rcx

  v2 = *(_QWORD *)this;
  if ( (*(_DWORD *)(*(_QWORD *)this + 56LL) & 0x800000) != 0 )
  {
    v4 = *(_QWORD *)(v2 + 3544);
    result = *(struct RFONT **)(v4 + 1560);
    *(_QWORD *)(v4 + 1560) = a2;
  }
  else
  {
    result = *(struct RFONT **)(v2 + 1560);
    *(_QWORD *)(v2 + 1560) = a2;
  }
  return result;
}
