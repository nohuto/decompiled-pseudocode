/*
 * XREFs of ?SetPdo@WDFDEVICE_INIT@@QEAAXPEAVFxDevice@@@Z @ 0x1C000F3AC
 * Callers:
 *     ?CreateDevice@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@PEAE@Z @ 0x1C001D5B8 (-CreateDevice@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@PEAE@Z.c)
 *     imp_WdfPdoInitAllocate @ 0x1C002FA00 (imp_WdfPdoInitAllocate.c)
 * Callees:
 *     <none>
 */

void __fastcall WDFDEVICE_INIT::SetPdo(WDFDEVICE_INIT *this, FxDevice *Parent)
{
  this->Characteristics |= 0x80u;
  this->InitType = FxDeviceInitTypePdo;
  this->Pdo.Parent = Parent;
  if ( !Parent->m_PowerPageableCapable )
    this->PowerPageable = 0;
}
