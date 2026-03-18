/*
 * XREFs of OPMDestroyAllProtectedOutputs @ 0x1C0066470
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAutoMutex@@QEAA@XZ @ 0x1C0067B40 (--1CAutoMutex@@QEAA@XZ.c)
 *     ??0CAutoMutex@@QEAA@PEAVCMutex@@@Z @ 0x1C0067B70 (--0CAutoMutex@@QEAA@PEAVCMutex@@@Z.c)
 *     ?DestroyAllHandlesFromAdapter@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@QEAAXPEAU_LUID@@@Z @ 0x1C0067C38 (-DestroyAllHandlesFromAdapter@-$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@QEAAXPEAU_LUID@@.c)
 */

void OPMDestroyAllProtectedOutputs()
{
  void *v0; // rbx
  char v1; // [rsp+30h] [rbp+8h] BYREF

  v0 = qword_1C01045D8;
  CAutoMutex::CAutoMutex((CAutoMutex *)&v1, (struct CMutex *)((char *)qword_1C01045D8 + 24));
  CMonitorHandleTable<COPMProtectedOutput,void *>::DestroyAllHandlesFromAdapter(v0, 0LL);
  CAutoMutex::~CAutoMutex((CAutoMutex *)&v1);
}
