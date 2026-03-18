/*
 * XREFs of ??_GFxDeviceInterface@@QEAAPEAXI@Z @ 0x1C00725E4
 * Callers:
 *     imp_WdfDeviceCreateDeviceInterface @ 0x1C002E540 (imp_WdfDeviceCreateDeviceInterface.c)
 *     ??1FxPkgPnp@@MEAA@XZ @ 0x1C00877E0 (--1FxPkgPnp@@MEAA@XZ.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0004490 (-FxPoolFree@@YAXPEAX@Z.c)
 */

FxDeviceInterface *__fastcall FxDeviceInterface::`scalar deleting destructor'(FxDeviceInterface *this)
{
  unsigned __int16 *Buffer; // rcx

  Buffer = this->m_ReferenceString.Buffer;
  if ( Buffer )
  {
    FxPoolFree(Buffer);
    *(_QWORD *)&this->m_ReferenceString.Length = 0LL;
    this->m_ReferenceString.Buffer = 0LL;
  }
  if ( this->m_SymbolicLinkName.Buffer )
    RtlFreeUnicodeString(&this->m_SymbolicLinkName);
  FxPoolFree(this);
  return this;
}
