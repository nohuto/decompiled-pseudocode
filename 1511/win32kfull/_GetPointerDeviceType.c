/*
 * XREFs of _GetPointerDeviceType @ 0x1C01CEFEC
 * Callers:
 *     ?ContactVisualization@@YAHKPEBUtagPOINTERINFONODE@@HK@Z @ 0x1C01DB1E0 (-ContactVisualization@@YAHKPEBUtagPOINTERINFONODE@@HK@Z.c)
 *     ?ProcessEdgyInertia@Edgy@@YAXPEBUINERTIA_INFO_INTERNAL@@@Z @ 0x1C02295DC (-ProcessEdgyInertia@Edgy@@YAXPEBUINERTIA_INFO_INTERNAL@@@Z.c)
 *     ?_GetArcData@Edgy@@YA?AUtagARC_DATA@1@AEAUtagEDGY_DATA@@PEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C02297F4 (-_GetArcData@Edgy@@YA-AUtagARC_DATA@1@AEAUtagEDGY_DATA@@PEBUtagPOINTERINPUTFRAME@@@Z.c)
 *     ?_StoreLastUpDataAndPost@Edgy@@YAXAEAUtagEDGY_DATA@@PEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C022A31C (-_StoreLastUpDataAndPost@Edgy@@YAXAEAUtagEDGY_DATA@@PEBUtagPOINTERINPUTFRAME@@@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0055AB4 (HMValidateHandleNoSecure.c)
 *     PHIDTtoPT @ 0x1C011DAA0 (PHIDTtoPT.c)
 */

__int64 __fastcall GetPointerDeviceType(unsigned __int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // ecx

  v1 = HMValidateHandleNoSecure(a1, 19);
  v2 = -1;
  if ( v1 && *(_DWORD *)(v1 + 308) )
    return (unsigned int)PHIDTtoPT(*(_QWORD *)(v1 + 416));
  return v2;
}
