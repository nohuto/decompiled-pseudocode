/*
 * XREFs of ?SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z @ 0x1C025A35C
 * Callers:
 *     ?bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z @ 0x1C0022D74 (-bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z.c)
 *     vCleanupPrivateFonts @ 0x1C0022F90 (vCleanupPrivateFonts.c)
 *     ?pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEAGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z @ 0x1C0024220 (-pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEAGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z.c)
 *     ?pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z @ 0x1C0028190 (-pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z.c)
 *     ?GetProcessSessionFonts@@YAJPEAU_EPROCESS@@IIPEAI1PEAPEAXPEAG@Z @ 0x1C00FD9FC (-GetProcessSessionFonts@@YAJPEAU_EPROCESS@@IIPEAI1PEAPEAXPEAG@Z.c)
 *     vLinkEudcPFEsWorker @ 0x1C01084AC (vLinkEudcPFEsWorker.c)
 *     vUnlinkAllEudcRFONTsAndPFEsWorker @ 0x1C011FC04 (vUnlinkAllEudcRFONTsAndPFEsWorker.c)
 *     ?GetPFFFromId@@YAPEAVPFF@@PEAVPFT@@IPEAPEAPEAV1@@Z @ 0x1C012986C (-GetPFFFromId@@YAPEAVPFF@@PEAVPFT@@IPEAPEAPEAV1@@Z.c)
 *     ?ChangeGhostFont@PUBLIC_PFTOBJ@@QEAAHPEAXH@Z @ 0x1C0259D24 (-ChangeGhostFont@PUBLIC_PFTOBJ@@QEAAHPEAXH@Z.c)
 *     ?GetEmbedFonts@PUBLIC_PFTOBJ@@QEAAKXZ @ 0x1C0259E4C (-GetEmbedFonts@PUBLIC_PFTOBJ@@QEAAKXZ.c)
 *     ?QueryFonts@PUBLIC_PFTOBJ@@QEAAHPEAU_UNIVERSAL_FONT_ID@@KPEAT_LARGE_INTEGER@@@Z @ 0x1C025A194 (-QueryFonts@PUBLIC_PFTOBJ@@QEAAHPEAU_UNIVERSAL_FONT_ID@@KPEAT_LARGE_INTEGER@@@Z.c)
 *     ?VerifyPFF@PUBLIC_PFTOBJ@@QEAAHPEAVPFF@@@Z @ 0x1C025A558 (-VerifyPFF@PUBLIC_PFTOBJ@@QEAAHPEAVPFF@@@Z.c)
 *     vDeactivateEudcRFONTsWorker @ 0x1C0289E44 (vDeactivateEudcRFONTsWorker.c)
 *     vUnlinkEudcRFONTsAndPFEsWorker @ 0x1C028A454 (vUnlinkEudcRFONTsAndPFEsWorker.c)
 *     vUnlinkEudcRFONTsWorker @ 0x1C028A5A0 (vUnlinkEudcRFONTsWorker.c)
 *     _lambda_e4e79ac46a0bd5e7c8e76743931293b9_::operator() @ 0x1C02A3F6C (_lambda_e4e79ac46a0bd5e7c8e76743931293b9_--operator().c)
 * Callees:
 *     <none>
 */

struct PFF *__fastcall SkipInvalidPff(struct PFF *a1)
{
  while ( a1 && (*((_DWORD *)a1 + 13) & 0x10000) != 0 )
    a1 = (struct PFF *)*((_QWORD *)a1 + 1);
  return a1;
}
