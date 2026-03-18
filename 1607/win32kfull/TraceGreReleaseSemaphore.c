/*
 * XREFs of TraceGreReleaseSemaphore @ 0x1C0159D38
 * Callers:
 *     ?dtHelper@RFONTOBJ@@QEAAXH@Z @ 0x1C002CCA8 (-dtHelper@RFONTOBJ@@QEAAXH@Z.c)
 *     ?bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z @ 0x1C002E04C (-bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z.c)
 *     NtGdiAddEmbFontToDC @ 0x1C0267A90 (NtGdiAddEmbFontToDC.c)
 *     NtGdiAddRemoteMMInstanceToDC @ 0x1C0267BC0 (NtGdiAddRemoteMMInstanceToDC.c)
 *     ?GetLinkedFontUFIs@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C0299C1C (-GetLinkedFontUFIs@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAU_UNIVERSAL_FONT_ID@@H@Z.c)
 *     NtGdiGetUFIPathname @ 0x1C02A8A20 (NtGdiGetUFIPathname.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall TraceGreReleaseSemaphore(__int64 a1, __int64 a2)
{
  return EtwTraceGreLockReleaseSemaphore(a1, a2);
}
