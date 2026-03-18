/*
 * XREFs of ?CreateCompleted@FxPkgGeneral@@QEAAXPEAVFxIrp@@@Z @ 0x1C0020A18
 * Callers:
 *     ?_CreateCompletionRoutine@FxPkgGeneral@@CAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C002C910 (-_CreateCompletionRoutine@FxPkgGeneral@@CAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 * Callees:
 *     ?DecrementOpenHandleCount@FxPkgGeneral@@AEAAXXZ @ 0x1C0062670 (-DecrementOpenHandleCount@FxPkgGeneral@@AEAAXXZ.c)
 *     ?_DestroyFileObject@FxFileObject@@SAXPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@@@Z @ 0x1C007A28C (-_DestroyFileObject@FxFileObject@@SAXPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@@@Z.c)
 */

void __fastcall FxPkgGeneral::CreateCompleted(FxPkgGeneral *this, FxIrp *Irp)
{
  if ( Irp->m_Irp->IoStatus.Status < 0 )
  {
    FxFileObject::_DestroyFileObject(
      this->m_Device,
      (_WDF_FILEOBJECT_CLASS)this->m_DeviceBase[1].m_DisposeSingleEntry.Next,
      Irp->m_Irp->Tail.Overlay.CurrentStackLocation->FileObject);
    FxPkgGeneral::DecrementOpenHandleCount(this);
  }
}
