/*
 * XREFs of ?SetAccessEnabledFlag@@YAXXZ @ 0x1C00931E4
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C0068630 (xxxSystemParametersInfo.c)
 *     xxxUpdatePerUserAccessPackSettings @ 0x1C0092870 (xxxUpdatePerUserAccessPackSettings.c)
 *     ?SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z @ 0x1C01CDB0C (-SetHighContrastWorker@@YAHPEAUtagINTERNALSETHIGHCONTRAST@@HPEAH@Z.c)
 *     ?xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01E4680 (-xxxAccessTimeOutTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
void SetAccessEnabledFlag(void)
{
  if ( (xmmword_1C0326F34 & 1) != 0
    || (xmmword_1C0326F34 & 4) != 0
    || (dword_1C0326F2C & 1) != 0
    || (dword_1C0326F2C & 4) != 0
    || (gHighContrast[1] & 4) != 0
    || (xmmword_1C0326F04 & 1) != 0
    || (xmmword_1C0326F04 & 4) != 0
    || (dword_1C0326F24 & 1) != 0
    || (dword_1C0326F24 & 4) != 0
    || (xmmword_1C032BBAC & 1) != 0
    || (gdwPUDFlags & 0x8000) != 0 )
  {
    gdwPUDFlags |= 0x100u;
  }
  else
  {
    gdwPUDFlags &= ~0x100u;
  }
}
