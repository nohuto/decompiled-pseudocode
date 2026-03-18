/*
 * XREFs of ?GetInterfaceFromNumber@FxUsbDevice@@IEAAPEAVFxUsbInterface@@E@Z @ 0x1C008FB90
 * Callers:
 *     ?SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z @ 0x1C009024C (-SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z.c)
 * Callees:
 *     <none>
 */

FxUsbInterface *__fastcall FxUsbDevice::GetInterfaceFromNumber(FxUsbDevice *this, unsigned __int8 InterfaceNumber)
{
  __int64 v2; // r8
  FxUsbInterface **m_Interfaces; // r9

  v2 = 0LL;
  if ( !this->m_NumInterfaces )
    return 0LL;
  m_Interfaces = this->m_Interfaces;
  while ( m_Interfaces[v2]->m_InterfaceNumber != InterfaceNumber )
  {
    v2 = (unsigned int)(v2 + 1);
    if ( (unsigned int)v2 >= this->m_NumInterfaces )
      return 0LL;
  }
  return m_Interfaces[v2];
}
