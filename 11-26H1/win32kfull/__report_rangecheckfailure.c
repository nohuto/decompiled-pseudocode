/*
 * XREFs of __report_rangecheckfailure @ 0x140297D70
 * Callers:
 *     NtGdiMakeFontDir @ 0x140226E50 (NtGdiMakeFontDir.c)
 *     NtUserRemoteConnect @ 0x140233DB0 (NtUserRemoteConnect.c)
 *     SetAppCompatFlags @ 0x140269460 (SetAppCompatFlags.c)
 *     ?SetHighContrastWorker@@YAHREAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z @ 0x1402ACF70 (-SetHighContrastWorker@@YAHREAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z.c)
 *     NtGdiEudcLoadUnloadLink @ 0x140325810 (NtGdiEudcLoadUnloadLink.c)
 *     NtGdiGetEudcTimeStampEx @ 0x1403259B0 (NtGdiGetEudcTimeStampEx.c)
 *     ?UmfdEscEngCreateFile@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x140349DE0 (-UmfdEscEngCreateFile@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 * Callees:
 *     <none>
 */

void __noreturn _report_rangecheckfailure()
{
  __fastfail(8u);
}
