/*
 * XREFs of ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z @ 0x1C0029AF0
 * Callers:
 *     ?bHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x1C0028A48 (-bHookRedir@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z @ 0x1C002D840 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z.c)
 *     ?bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z @ 0x1C002E04C (-bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z.c)
 *     vDeactivateEudcRFONTsWorker @ 0x1C0289E44 (vDeactivateEudcRFONTsWorker.c)
 *     ?bHookBmpDrv@@YAHAEAVXDCOBJ@@@Z @ 0x1C028C7A4 (-bHookBmpDrv@@YAHAEAVXDCOBJ@@@Z.c)
 *     vRemoveAllInactiveRFONTs @ 0x1C029B680 (vRemoveAllInactiveRFONTs.c)
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
    v4 = *(_QWORD *)(v2 + 3536);
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
