/*
 * XREFs of OPMDestroyAllProtectedOutputs @ 0x1C0050A00
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAutoMutex@@QEAA@XZ @ 0x1C0052F30 (--1CAutoMutex@@QEAA@XZ.c)
 *     ??0CAutoMutex@@QEAA@PEAVCMutex@@@Z @ 0x1C0052F60 (--0CAutoMutex@@QEAA@PEAVCMutex@@@Z.c)
 *     ?DestroyAllHandlesFromAdapter@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@QEAAXPEAU_LUID@@@Z @ 0x1C0053028 (-DestroyAllHandlesFromAdapter@-$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@QEAAXPEAU_LUID@@.c)
 */

void OPMDestroyAllProtectedOutputs()
{
  struct _DEVOBJ_EXTENSION *DeviceObjectExtension; // rbx
  char v1; // [rsp+30h] [rbp+8h] BYREF

  DeviceObjectExtension = WPP_MAIN_CB.DeviceObjectExtension;
  CAutoMutex::CAutoMutex((CAutoMutex *)&v1, (struct CMutex *)&WPP_MAIN_CB.DeviceObjectExtension->Dope);
  CMonitorHandleTable<COPMProtectedOutput,void *>::DestroyAllHandlesFromAdapter(DeviceObjectExtension, 0LL);
  CAutoMutex::~CAutoMutex((CAutoMutex *)&v1);
}
