/*
 * XREFs of ?pPvtDataMatch@PFFOBJ@@QEAAPEAUtagPvtData@@XZ @ 0x1C02B68F8
 * Callers:
 *     ?bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z @ 0x1C0022BB8 (-bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z.c)
 *     ?ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z @ 0x1C0023DC8 (-ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z.c)
 *     ?bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z @ 0x1C00254DC (-bNearMatch@MAPPER@@QEAAHAEAVPFEOBJ@@PEAEH@Z.c)
 *     ?bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@@Z @ 0x1C0026F48 (-bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@@Z.c)
 *     ?bFilteredOut@PFEOBJ@@QEAAHPEAU_EFFILTER_INFO@@@Z @ 0x1C0027B60 (-bFilteredOut@PFEOBJ@@QEAAHPEAU_EFFILTER_INFO@@@Z.c)
 *     ?GetPFFFromId@@YAPEAVPFF@@PEAVPFT@@IPEAPEAPEAV1@@Z @ 0x1C012986C (-GetPFFFromId@@YAPEAVPFF@@PEAVPFT@@IPEAPEAPEAV1@@Z.c)
 *     ?bAddPvtData@PFFOBJ@@QEAAHK@Z @ 0x1C02B61D4 (-bAddPvtData@PFFOBJ@@QEAAHK@Z.c)
 * Callees:
 *     <none>
 */

struct tagPvtData *__fastcall PFFOBJ::pPvtDataMatch(PFFOBJ *this)
{
  __int64 i; // rbx

  for ( i = *(_QWORD *)(*(_QWORD *)this + 160LL);
        i
     && ((*(_DWORD *)(i + 8) & 4) == 0 || *(_DWORD *)(i + 12) != (unsigned int)PsGetCurrentThreadId())
     && *(_DWORD *)(i + 12) != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC);
        i = *(_QWORD *)(i + 16) )
  {
    ;
  }
  return (struct tagPvtData *)i;
}
