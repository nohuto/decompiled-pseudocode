/*
 * XREFs of ?CitpAllowForegroundProcess@@YAHPEBU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0010FFC
 * Callers:
 *     ?CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagMONITOR@@PEAUtagSHELL_INPUT_USAGE_DATA_INFO@@@Z @ 0x1C00112CC (-CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagM.c)
 *     CitSessionConnectChange @ 0x1C004EE90 (CitSessionConnectChange.c)
 *     CitDisplayPowerChange @ 0x1C00868F0 (CitDisplayPowerChange.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CitpAllowForegroundProcess(const struct _CIT_IMPACT_CONTEXT *a1)
{
  return (*((_BYTE *)a1 + 432) & 8) != 0 && *((_DWORD *)a1 + 134);
}
