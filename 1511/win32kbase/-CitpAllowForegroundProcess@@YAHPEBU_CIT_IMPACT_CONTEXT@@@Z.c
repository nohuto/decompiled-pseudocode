/*
 * XREFs of ?CitpAllowForegroundProcess@@YAHPEBU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C004B2E8
 * Callers:
 *     ?CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagMONITOR@@@Z @ 0x1C0049518 (-CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagM.c)
 *     CitSessionConnectChange @ 0x1C0079310 (CitSessionConnectChange.c)
 *     CitDisplayPowerChange @ 0x1C0085528 (CitDisplayPowerChange.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CitpAllowForegroundProcess(const struct _CIT_IMPACT_CONTEXT *a1)
{
  return (*((_BYTE *)a1 + 432) & 8) != 0 && *((_DWORD *)a1 + 132);
}
