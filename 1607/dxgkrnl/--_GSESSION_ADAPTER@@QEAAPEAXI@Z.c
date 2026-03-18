/*
 * XREFs of ??_GSESSION_ADAPTER@@QEAAPEAXI@Z @ 0x1C0001B90
 * Callers:
 *     ?RemoveAdapterFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@@Z @ 0x1C007B938 (-RemoveAdapterFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@@Z.c)
 *     ?AddAdapterToSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@PEAPEAVSESSION_ADAPTER@@@Z @ 0x1C007B9AC (-AddAdapterToSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@PEAPEAVSESSION_ADAPTER@@@Z.c)
 *     DxgkDestroyCsrssProcess @ 0x1C00DBB18 (DxgkDestroyCsrssProcess.c)
 * Callees:
 *     ??1SESSION_ADAPTER@@QEAA@XZ @ 0x1C007C8FC (--1SESSION_ADAPTER@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 */

SESSION_ADAPTER *__fastcall SESSION_ADAPTER::`scalar deleting destructor'(SESSION_ADAPTER *this)
{
  SESSION_ADAPTER::~SESSION_ADAPTER(this);
  operator delete(this);
  return this;
}
