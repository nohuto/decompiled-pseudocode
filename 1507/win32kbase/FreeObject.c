/*
 * XREFs of FreeObject @ 0x1C0035700
 * Callers:
 *     ??0BRUSHMEMOBJ@@QEAA@KKHH@Z @ 0x1C000C4E0 (--0BRUSHMEMOBJ@@QEAA@KKHH@Z.c)
 *     ??0BRUSHMEMOBJ@@QEAA@PEAUHBITMAP__@@0HKKH@Z @ 0x1C000C720 (--0BRUSHMEMOBJ@@QEAA@PEAUHBITMAP__@@0HKKH@Z.c)
 *     ??0PATHMEMOBJ@@QEAA@XZ @ 0x1C0025680 (--0PATHMEMOBJ@@QEAA@XZ.c)
 *     ?vUnlock@EPATHOBJ@@QEAAXXZ @ 0x1C0026110 (-vUnlock@EPATHOBJ@@QEAAXXZ.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0034150 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     HmgFree @ 0x1C0035650 (HmgFree.c)
 *     ?bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z @ 0x1C0038890 (-bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z.c)
 *     ?bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z @ 0x1C003AD7C (-bDeletePalette@XEPALOBJ@@QEAAHHW4_CLEANUPTYPE@@@Z.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C003CC70 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     ?Release@CRegion@@QEBAJXZ @ 0x1C004A4FC (-Release@CRegion@@QEBAJXZ.c)
 *     ?Combine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z @ 0x1C004A5E0 (-Combine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z.c)
 *     ??0DCMEMOBJ@@QEAA@AEAVDCOBJ@@@Z @ 0x1C004AA70 (--0DCMEMOBJ@@QEAA@AEAVDCOBJ@@@Z.c)
 *     bDeleteBrush @ 0x1C005C2F0 (bDeleteBrush.c)
 *     HmgAlloc @ 0x1C0067040 (HmgAlloc.c)
 *     ?GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z @ 0x1C007BC6C (-GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z.c)
 *     ?bGarbageCollect@EPATHOBJGC@@QEAA_NXZ @ 0x1C00B00E0 (-bGarbageCollect@EPATHOBJGC@@QEAA_NXZ.c)
 *     ?bCreatePalette@PALMEMOBJ@@QEAAHKKPEAKKKKKH@Z @ 0x1C00B1320 (-bCreatePalette@PALMEMOBJ@@QEAAHKKPEAKKKKKH@Z.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C00B1940 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ?Free@SURFACE@@SAXPEAV1@@Z @ 0x1C00B1DD0 (-Free@SURFACE@@SAXPEAV1@@Z.c)
 *     ?bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@W4_CLEANUPTYPE@@@Z @ 0x1C00BCDD8 (-bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@W4_CLEANUPTYPE@@@Z.c)
 *     EngDeleteDriverObj @ 0x1C00BE530 (EngDeleteDriverObj.c)
 * Callees:
 *     IsWin32FreeToPagedLookasideListImplSupported_0 @ 0x1C0002C18 (IsWin32FreeToPagedLookasideListImplSupported_0.c)
 */

__int64 __fastcall FreeObject(__int64 a1)
{
  __int64 result; // rax

  if ( *(__int16 *)(a1 + 14) >= 0 )
    return Win32FreePool();
  result = IsWin32FreeToPagedLookasideListImplSupported_0();
  if ( (int)result >= 0 )
    return Win32FreeToPagedLookasideListImpl_0();
  return result;
}
