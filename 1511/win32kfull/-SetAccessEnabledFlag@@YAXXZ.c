/*
 * XREFs of ?SetAccessEnabledFlag@@YAXXZ @ 0x1C00F51E0
 * Callers:
 *     xxxUpdatePerUserAccessPackSettings @ 0x1C00F4860 (xxxUpdatePerUserAccessPackSettings.c)
 *     xxxSystemParametersInfo @ 0x1C0126360 (xxxSystemParametersInfo.c)
 *     ?SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z @ 0x1C01D6C88 (-SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z.c)
 *     ?xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01EE480 (-xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
void SetAccessEnabledFlag(void)
{
  if ( (xmmword_1C03222CC & 1) != 0
    || (xmmword_1C03222CC & 4) != 0
    || (dword_1C03222C4 & 1) != 0
    || (dword_1C03222C4 & 4) != 0
    || (gHighContrast[1] & 4) != 0
    || (xmmword_1C032229C & 1) != 0
    || (xmmword_1C032229C & 4) != 0
    || (dword_1C03222BC & 1) != 0
    || (dword_1C03222BC & 4) != 0
    || (xmmword_1C0322254 & 1) != 0
    || (gdwPUDFlags & 0x8000) != 0 )
  {
    gdwPUDFlags |= 0x100u;
  }
  else
  {
    gdwPUDFlags &= ~0x100u;
  }
}
