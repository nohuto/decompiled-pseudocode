/*
 * XREFs of ?PowerNotRequiredCallback@FxPoxInterface@@CAXPEAX@Z @ 0x1C008E640
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerNotRequiredCallbackWorker@FxPoxInterface@@AEAAXE@Z @ 0x1C008E0FC (-PowerNotRequiredCallbackWorker@FxPoxInterface@@AEAAXE@Z.c)
 */

void __fastcall FxPoxInterface::PowerNotRequiredCallback(FxPoxInterface *Context)
{
  FxPoxInterface::PowerNotRequiredCallbackWorker(Context, 1u);
  PoFxCompleteDevicePowerNotRequired(Context->m_PoHandle);
}
