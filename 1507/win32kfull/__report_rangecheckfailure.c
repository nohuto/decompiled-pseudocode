/*
 * XREFs of __report_rangecheckfailure @ 0x1C01C15D8
 * Callers:
 *     RemoveHmodDependency @ 0x1C004ACAC (RemoveHmodDependency.c)
 *     SetAppCompatFlags @ 0x1C00594F0 (SetAppCompatFlags.c)
 *     xxxDoSysExpunge @ 0x1C00EBC3C (xxxDoSysExpunge.c)
 *     NtUserRemoteConnect @ 0x1C0153870 (NtUserRemoteConnect.c)
 *     ?SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z @ 0x1C01D50CC (-SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z.c)
 *     bConvertMBCS @ 0x1C024512C (bConvertMBCS.c)
 *     NtGdiEudcLoadUnloadLink @ 0x1C028BBF0 (NtGdiEudcLoadUnloadLink.c)
 *     NtGdiGetEudcTimeStampEx @ 0x1C028BDA0 (NtGdiGetEudcTimeStampEx.c)
 *     ?UmfdEscEngCreateFile@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C02A3C18 (-UmfdEscEngCreateFile@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     NtGdiMakeFontDir @ 0x1C02A7BE0 (NtGdiMakeFontDir.c)
 * Callees:
 *     <none>
 */

void __noreturn _report_rangecheckfailure()
{
  __fastfail(8u);
}
