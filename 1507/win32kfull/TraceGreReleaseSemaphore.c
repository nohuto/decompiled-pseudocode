/*
 * XREFs of TraceGreReleaseSemaphore @ 0x1C015CBD8
 * Callers:
 *     ?bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z @ 0x1C002A864 (-bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z.c)
 *     NtGdiAddEmbFontToDC @ 0x1C026AA60 (NtGdiAddEmbFontToDC.c)
 *     NtGdiAddRemoteMMInstanceToDC @ 0x1C026AB90 (NtGdiAddRemoteMMInstanceToDC.c)
 *     NtGdiGetUFIPathname @ 0x1C02A7800 (NtGdiGetUFIPathname.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall TraceGreReleaseSemaphore(__int64 a1, __int64 a2)
{
  return EtwTraceGreLockReleaseSemaphore(a1, a2);
}
