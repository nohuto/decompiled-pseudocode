/*
 * XREFs of _GetPointerDeviceType @ 0x1C01CD408
 * Callers:
 *     ?ContactVisualization@@YAHKPEBUtagPOINTERINFONODE@@HK@Z @ 0x1C01DABE0 (-ContactVisualization@@YAHKPEBUtagPOINTERINFONODE@@HK@Z.c)
 *     ?ProcessEdgyInertia@Edgy@@YAXPEBUINERTIA_INFO_INTERNAL@@@Z @ 0x1C02292DC (-ProcessEdgyInertia@Edgy@@YAXPEBUINERTIA_INFO_INTERNAL@@@Z.c)
 *     ?_GetArcData@Edgy@@YA?AUtagARC_DATA@1@AEAUtagEDGY_DATA@@PEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C02294F4 (-_GetArcData@Edgy@@YA-AUtagARC_DATA@1@AEAUtagEDGY_DATA@@PEBUtagPOINTERINPUTFRAME@@@Z.c)
 *     ?_StoreLastUpDataAndPost@Edgy@@YAXAEAUtagEDGY_DATA@@PEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C022A01C (-_StoreLastUpDataAndPost@Edgy@@YAXAEAUtagEDGY_DATA@@PEBUtagPOINTERINPUTFRAME@@@Z.c)
 * Callees:
 *     PHIDTtoPT @ 0x1C000F43C (PHIDTtoPT.c)
 *     HMValidateHandleNoSecure @ 0x1C0066B04 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall GetPointerDeviceType(unsigned __int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // ecx

  v1 = HMValidateHandleNoSecure(a1, 19);
  v2 = -1;
  if ( v1 && *(_DWORD *)(v1 + 316) )
    return (unsigned int)PHIDTtoPT(*(_QWORD *)(v1 + 416));
  return v2;
}
