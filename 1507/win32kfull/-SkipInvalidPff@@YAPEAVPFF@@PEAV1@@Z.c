/*
 * XREFs of ?SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z @ 0x1C025D318
 * Callers:
 *     ?pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z @ 0x1C0029538 (-pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z.c)
 *     vCleanupPrivateFonts @ 0x1C00E8EF0 (vCleanupPrivateFonts.c)
 *     vUnlinkAllEudcRFONTsAndPFEsWorker @ 0x1C00FAAB4 (vUnlinkAllEudcRFONTsAndPFEsWorker.c)
 *     ?GetPFFFromId@@YAPEAVPFF@@PEAVPFT@@IPEAPEAPEAV1@@Z @ 0x1C0110120 (-GetPFFFromId@@YAPEAVPFF@@PEAVPFT@@IPEAPEAPEAV1@@Z.c)
 *     ?bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z @ 0x1C0129BFC (-bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z.c)
 *     vLinkEudcPFEsWorker @ 0x1C013E308 (vLinkEudcPFEsWorker.c)
 *     ?pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEAGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z @ 0x1C013FA64 (-pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEAGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z.c)
 *     ?ChangeGhostFont@PUBLIC_PFTOBJ@@QEAAHPEAXH@Z @ 0x1C025CC14 (-ChangeGhostFont@PUBLIC_PFTOBJ@@QEAAHPEAXH@Z.c)
 *     ?GetEmbedFonts@PUBLIC_PFTOBJ@@QEAAKXZ @ 0x1C025CD40 (-GetEmbedFonts@PUBLIC_PFTOBJ@@QEAAKXZ.c)
 *     ?QueryFonts@PUBLIC_PFTOBJ@@QEAAHPEAU_UNIVERSAL_FONT_ID@@KPEAT_LARGE_INTEGER@@@Z @ 0x1C025CFD8 (-QueryFonts@PUBLIC_PFTOBJ@@QEAAHPEAU_UNIVERSAL_FONT_ID@@KPEAT_LARGE_INTEGER@@@Z.c)
 *     ?VerifyPFF@PUBLIC_PFTOBJ@@QEAAHPEAVPFF@@@Z @ 0x1C025D550 (-VerifyPFF@PUBLIC_PFTOBJ@@QEAAHPEAVPFF@@@Z.c)
 *     vDeactivateEudcRFONTsWorker @ 0x1C028B454 (vDeactivateEudcRFONTsWorker.c)
 *     vUnlinkEudcRFONTsAndPFEsWorker @ 0x1C028BA04 (vUnlinkEudcRFONTsAndPFEsWorker.c)
 *     vUnlinkEudcRFONTsWorker @ 0x1C028BB30 (vUnlinkEudcRFONTsWorker.c)
 *     _lambda_9bc42c391025735687ce71b9e59c95f3_::operator() @ 0x1C02A35F4 (_lambda_9bc42c391025735687ce71b9e59c95f3_--operator().c)
 * Callees:
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C01D1870 (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 */

struct PFF *__fastcall SkipInvalidPff(struct PFF *a1)
{
  bool v2; // cc
  int v3; // eax

  v2 = dword_1C031B5B0 <= 0;
  if ( dword_1C031B5B0 < 0 )
  {
    LOBYTE(v3) = EvaluateCurrentState((int **)&g_Feature_2056571192_57604928_FeatureDescriptorDetails);
    _InterlockedCompareExchange(&dword_1C031B5B0, v3 != 0, -1);
    v2 = dword_1C031B5B0 <= 0;
  }
  if ( !v2 )
  {
    while ( a1 && (*((_DWORD *)a1 + 13) & 0x10000) != 0 )
      a1 = (struct PFF *)*((_QWORD *)a1 + 1);
  }
  return a1;
}
