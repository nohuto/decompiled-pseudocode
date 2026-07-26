/*
 * XREFs of ?GetActualBindingState@BindState@Ndis@@QEAA?AW4BINDING_ENABLED_OR_DISABLED@@XZ @ 0x1C00A4F20
 * Callers:
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C00A2C8C (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 *     ?UnbindOnDetach@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00A3EB4 (-UnbindOnDetach@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall Ndis::BindState::GetActualBindingState(Ndis::BindState *this)
{
  bool result; // al

  result = 0;
  if ( !this->PretendBindingActive )
    return this->m_bindContext.m_numElements == 0;
  return result;
}
