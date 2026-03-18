/*
 * XREFs of ??$sprintf_s@$0BE@@@YAHAEAY0BE@DPEBDZZ @ 0x180188E3C
 * Callers:
 *     ?AppendLights@D3DShaderLinker@@QEAAJAEBVCLightsMask@@@Z @ 0x180188EC0 (-AppendLights@D3DShaderLinker@@QEAAJAEBVCLightsMask@@@Z.c)
 * Callees:
 *     <none>
 */

int sprintf_s<20>(char *a1, const char *a2, ...)
{
  va_list va; // [rsp+40h] [rbp+18h] BYREF

  va_start(va, a2);
  return vsprintf_s(a1, 0x14uLL, a2, va);
}
