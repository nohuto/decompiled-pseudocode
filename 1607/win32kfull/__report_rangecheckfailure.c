/*
 * XREFs of __report_rangecheckfailure @ 0x1C01BF698
 * Callers:
 *     RemoveHmodDependency @ 0x1C00A758C (RemoveHmodDependency.c)
 *     SetAppCompatFlags @ 0x1C00DEF80 (SetAppCompatFlags.c)
 *     NtUserRemoteConnect @ 0x1C00EB960 (NtUserRemoteConnect.c)
 *     xxxDoSysExpunge @ 0x1C0109A1C (xxxDoSysExpunge.c)
 *     ?SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z @ 0x1C01CDB0C (-SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z.c)
 *     bConvertMBCS @ 0x1C0241254 (bConvertMBCS.c)
 *     NtGdiEudcLoadUnloadLink @ 0x1C028A660 (NtGdiEudcLoadUnloadLink.c)
 *     NtGdiGetEudcTimeStampEx @ 0x1C028A810 (NtGdiGetEudcTimeStampEx.c)
 *     ?UmfdEscEngCreateFile@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C02A4598 (-UmfdEscEngCreateFile@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     NtGdiMakeFontDir @ 0x1C02A8E00 (NtGdiMakeFontDir.c)
 * Callees:
 *     <none>
 */

void __noreturn _report_rangecheckfailure()
{
  __fastfail(8u);
}
