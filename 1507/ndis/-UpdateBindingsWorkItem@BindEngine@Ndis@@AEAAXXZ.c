/*
 * XREFs of ?UpdateBindingsWorkItem@BindEngine@Ndis@@AEAAXXZ @ 0x1C00A2160
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateBindings@BindEngine@Ndis@@AEAAXXZ @ 0x1C00A2190 (-UpdateBindings@BindEngine@Ndis@@AEAAXXZ.c)
 */

void __fastcall Ndis::BindEngine::UpdateBindingsWorkItem(Ndis::BindEngine *this)
{
  this->m_bindThread = KeGetCurrentThread();
  Ndis::BindEngine::UpdateBindings(this);
  KeSetEvent(&this->m_backgroundWorkFinishedEvent.m_event, 0, 0);
}
