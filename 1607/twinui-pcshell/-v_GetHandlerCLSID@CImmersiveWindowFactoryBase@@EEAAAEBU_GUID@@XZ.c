/*
 * XREFs of ?v_GetHandlerCLSID@CImmersiveWindowFactoryBase@@EEAAAEBU_GUID@@XZ @ 0x18002BA50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

const struct _GUID *__fastcall CImmersiveWindowFactoryBase::v_GetHandlerCLSID(CImmersiveWindowFactoryBase *this)
{
  return &CLSID_ImmersiveWindowFactoryProxy;
}
