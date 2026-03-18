/*
 * XREFs of __report_rangecheckfailure @ 0x1C01C3198
 * Callers:
 *     RemoveHmodDependency @ 0x1C00849F0 (RemoveHmodDependency.c)
 *     SetAppCompatFlags @ 0x1C0086EA0 (SetAppCompatFlags.c)
 *     xxxDoSysExpunge @ 0x1C00F0D2C (xxxDoSysExpunge.c)
 *     NtUserRemoteConnect @ 0x1C00FFB70 (NtUserRemoteConnect.c)
 *     ?SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z @ 0x1C01D6C88 (-SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z.c)
 *     bConvertMBCS @ 0x1C0245254 (bConvertMBCS.c)
 *     NtGdiEudcLoadUnloadLink @ 0x1C028BA10 (NtGdiEudcLoadUnloadLink.c)
 *     NtGdiGetEudcTimeStampEx @ 0x1C028BBC0 (NtGdiGetEudcTimeStampEx.c)
 *     ?UmfdEscEngCreateFile@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C02A3464 (-UmfdEscEngCreateFile@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     NtGdiMakeFontDir @ 0x1C02A73F0 (NtGdiMakeFontDir.c)
 * Callees:
 *     <none>
 */

void __noreturn _report_rangecheckfailure()
{
  __fastfail(8u);
}
