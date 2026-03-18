/*
 * XREFs of ?SetAccessEnabledFlag@@YAXXZ @ 0x1C01357A4
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C003A8E0 (xxxSystemParametersInfo.c)
 *     xxxUpdatePerUserAccessPackSettings @ 0x1C0134E24 (xxxUpdatePerUserAccessPackSettings.c)
 *     ?SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z @ 0x1C01D50CC (-SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z.c)
 *     ?xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01EDF60 (-xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
void SetAccessEnabledFlag(void)
{
  if ( (xmmword_1C0323934 & 1) != 0
    || (xmmword_1C0323934 & 4) != 0
    || (dword_1C032392C & 1) != 0
    || (dword_1C032392C & 4) != 0
    || (gHighContrast[1] & 4) != 0
    || (xmmword_1C0323904 & 1) != 0
    || (xmmword_1C0323904 & 4) != 0
    || (dword_1C0323924 & 1) != 0
    || (dword_1C0323924 & 4) != 0
    || (xmmword_1C0328824 & 1) != 0
    || (gdwPUDFlags & 0x8000) != 0 )
  {
    gdwPUDFlags |= 0x100u;
  }
  else
  {
    gdwPUDFlags &= ~0x100u;
  }
}
