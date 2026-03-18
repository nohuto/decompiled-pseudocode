/*
 * XREFs of ?PowerNotRequiredCallback@FxPoxInterface@@CAXPEAX@Z @ 0x1C003C2F0
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerNotRequiredCallbackWorker@FxPoxInterface@@AEAAXE@Z @ 0x1C002E0A4 (-PowerNotRequiredCallbackWorker@FxPoxInterface@@AEAAXE@Z.c)
 */

void __fastcall FxPoxInterface::PowerNotRequiredCallback(FxPoxInterface *Context)
{
  FxPoxInterface::PowerNotRequiredCallbackWorker(Context, 1u);
  PoFxCompleteDevicePowerNotRequired(Context->m_PoHandle);
}
