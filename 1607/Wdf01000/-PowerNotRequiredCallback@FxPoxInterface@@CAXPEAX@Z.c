/*
 * XREFs of ?PowerNotRequiredCallback@FxPoxInterface@@CAXPEAX@Z @ 0x1C0039040
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerNotRequiredCallbackWorker@FxPoxInterface@@AEAAXE@Z @ 0x1C0022D40 (-PowerNotRequiredCallbackWorker@FxPoxInterface@@AEAAXE@Z.c)
 */

void __fastcall FxPoxInterface::PowerNotRequiredCallback(FxPoxInterface *Context)
{
  FxPoxInterface::PowerNotRequiredCallbackWorker(Context, 1u);
  PoFxCompleteDevicePowerNotRequired(Context->m_PoHandle);
}
