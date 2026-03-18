/*
 * XREFs of ??_GSESSION_ADAPTER@@QEAAPEAXI@Z @ 0x1C0008128
 * Callers:
 *     ?RemoveAdapterFromSession@DXGSESSIONDATA@@QEAAJAEAU_LUID@@@Z @ 0x1C009ED90 (-RemoveAdapterFromSession@DXGSESSIONDATA@@QEAAJAEAU_LUID@@@Z.c)
 *     ?AddAdapterToSession@DXGSESSIONDATA@@QEAAJAEAU_LUID@@PEAPEAVSESSION_ADAPTER@@@Z @ 0x1C009EE04 (-AddAdapterToSession@DXGSESSIONDATA@@QEAAJAEAU_LUID@@PEAPEAVSESSION_ADAPTER@@@Z.c)
 *     DxgkDestroyCsrssProcess @ 0x1C00C6B88 (DxgkDestroyCsrssProcess.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 *     ??1SESSION_ADAPTER@@QEAA@XZ @ 0x1C009FB78 (--1SESSION_ADAPTER@@QEAA@XZ.c)
 */

SESSION_ADAPTER *__fastcall SESSION_ADAPTER::`scalar deleting destructor'(SESSION_ADAPTER *this)
{
  SESSION_ADAPTER::~SESSION_ADAPTER(this);
  operator delete(this);
  return this;
}
