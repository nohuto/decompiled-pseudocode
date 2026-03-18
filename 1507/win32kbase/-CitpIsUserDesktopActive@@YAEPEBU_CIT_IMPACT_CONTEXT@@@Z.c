/*
 * XREFs of ?CitpIsUserDesktopActive@@YAEPEBU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0014DCC
 * Callers:
 *     CitDesktopSwitch @ 0x1C0014C70 (CitDesktopSwitch.c)
 *     CitDisplayPowerChange @ 0x1C006A880 (CitDisplayPowerChange.c)
 *     CitSessionConnectChange @ 0x1C006F7A0 (CitSessionConnectChange.c)
 *     ?CitpContextInitialize@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0083390 (-CitpContextInitialize@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CitpIsUserDesktopActive(const struct _CIT_IMPACT_CONTEXT *a1)
{
  return *((_DWORD *)a1 + 122) == 1 && (*((_BYTE *)a1 + 432) & 0x18) == 0x18;
}
