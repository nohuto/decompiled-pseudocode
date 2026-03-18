/*
 * XREFs of ?Invoke@FxCxFileObjectFileCreate@@QEAAEPEAUWDFDEVICE__@@PEAUWDFREQUEST__@@PEAUWDFFILEOBJECT__@@@Z @ 0x1C00A4BCC
 * Callers:
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C00026E0 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall FxCxFileObjectFileCreate::Invoke(
        FxCxFileObjectFileCreate *this,
        WDFDEVICE__ *Device,
        WDFREQUEST__ *Request,
        WDFFILEOBJECT__ *FileObject)
{
  unsigned __int8 v4; // di
  FxCallbackLock *m_CallbackLock; // rcx
  unsigned __int8 v10; // al
  FxCallbackLock *v11; // rcx
  FxCallbackLock_vtbl *v12; // rdx
  unsigned __int8 irql; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  if ( this->Method )
  {
    m_CallbackLock = this->m_CallbackLock;
    irql = 0;
    if ( m_CallbackLock )
      m_CallbackLock->Lock(m_CallbackLock, &irql);
    v10 = this->Method(Device, Request, FileObject);
    v11 = this->m_CallbackLock;
    v4 = v10;
    if ( this->m_CallbackLock )
    {
      v12 = v11->__vftable;
      LOBYTE(v12) = irql;
      v11->Unlock(v11, (unsigned __int8)v12);
    }
  }
  return v4;
}
