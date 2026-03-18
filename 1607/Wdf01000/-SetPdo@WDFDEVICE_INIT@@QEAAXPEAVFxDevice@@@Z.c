/*
 * XREFs of ?SetPdo@WDFDEVICE_INIT@@QEAAXPEAVFxDevice@@@Z @ 0x1C002048C
 * Callers:
 *     ?CreateDevice@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@PEAE@Z @ 0x1C0021C28 (-CreateDevice@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@PEAE@Z.c)
 *     imp_WdfPdoInitAllocate @ 0x1C0030500 (imp_WdfPdoInitAllocate.c)
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
