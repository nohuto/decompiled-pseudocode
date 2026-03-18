/*
 * XREFs of _GetPointerDeviceType @ 0x1C01C89BC
 * Callers:
 *     ?ContactVisualization@@YAHKPEBUtagPOINTERINFONODE@@HK@Z @ 0x1C01D2BA0 (-ContactVisualization@@YAHKPEBUtagPOINTERINFONODE@@HK@Z.c)
 *     ?ProcessEdgyInertia@Edgy@@YAXPEBUINERTIA_INFO_INTERNAL@@@Z @ 0x1C021F6F8 (-ProcessEdgyInertia@Edgy@@YAXPEBUINERTIA_INFO_INTERNAL@@@Z.c)
 *     ?_GetArcData@Edgy@@YA?AUtagARC_DATA@1@AEAUtagEDGY_DATA@@PEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C021F948 (-_GetArcData@Edgy@@YA-AUtagARC_DATA@1@AEAUtagEDGY_DATA@@PEBUtagPOINTERINPUTFRAME@@@Z.c)
 *     ?_StoreLastUpDataAndPost@Edgy@@YAXAEAUtagEDGY_DATA@@PEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C0220578 (-_StoreLastUpDataAndPost@Edgy@@YAXAEAUtagEDGY_DATA@@PEBUtagPOINTERINPUTFRAME@@@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C007A3E8 (HMValidateHandleNoSecure.c)
 *     PHIDTtoPT @ 0x1C00E4374 (PHIDTtoPT.c)
 */

__int64 __fastcall GetPointerDeviceType(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  unsigned int v5; // ecx

  LOBYTE(a2) = 19;
  v4 = HMValidateHandleNoSecure(a1, a2, a3, a4);
  v5 = -1;
  if ( v4 && *(_DWORD *)(v4 + 316) )
    return (unsigned int)PHIDTtoPT(*(_QWORD *)(v4 + 480));
  return v5;
}
