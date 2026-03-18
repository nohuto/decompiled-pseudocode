/*
 * XREFs of ?CitpIsUserDesktopActive@@YAEPEBU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C00797BC
 * Callers:
 *     CitSessionConnectChange @ 0x1C0079310 (CitSessionConnectChange.c)
 *     ?CitpContextInitialize@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0079454 (-CitpContextInitialize@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     CitDesktopSwitch @ 0x1C0079660 (CitDesktopSwitch.c)
 *     CitDisplayPowerChange @ 0x1C0085528 (CitDisplayPowerChange.c)
 * Callees:
 *     <none>
 */

bool __fastcall CitpIsUserDesktopActive(const struct _CIT_IMPACT_CONTEXT *a1)
{
  return *((_DWORD *)a1 + 132) == 1 && (*((_BYTE *)a1 + 432) & 0x18) == 0x18;
}
