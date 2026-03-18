/*
 * XREFs of ?CitpIsUserDesktopActive@@YAEPEBU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C004F7CC
 * Callers:
 *     CitSessionConnectChange @ 0x1C004EE90 (CitSessionConnectChange.c)
 *     ?CitpContextInitialize@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C004F458 (-CitpContextInitialize@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     CitDesktopSwitch @ 0x1C004F670 (CitDesktopSwitch.c)
 *     CitDisplayPowerChange @ 0x1C00868F0 (CitDisplayPowerChange.c)
 * Callees:
 *     <none>
 */

bool __fastcall CitpIsUserDesktopActive(const struct _CIT_IMPACT_CONTEXT *a1)
{
  return *((_DWORD *)a1 + 134) == 1 && (*((_BYTE *)a1 + 432) & 0x18) == 0x18;
}
