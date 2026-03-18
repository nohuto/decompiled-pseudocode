/*
 * XREFs of OPMDestroyAllProtectedOutputs @ 0x1C006CFB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAutoMutex@@QEAA@XZ @ 0x1C000F080 (--1CAutoMutex@@QEAA@XZ.c)
 *     ??0CAutoMutex@@QEAA@PEAVCMutex@@@Z @ 0x1C000F0B0 (--0CAutoMutex@@QEAA@PEAVCMutex@@@Z.c)
 *     ?DestroyAllHandlesFromAdapter@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@QEAAXPEAU_LUID@@@Z @ 0x1C0070860 (-DestroyAllHandlesFromAdapter@-$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@QEAAXPEAU_LUID@@.c)
 */

void OPMDestroyAllProtectedOutputs()
{
  void *v0; // rbx
  PRKMUTEX *v1; // [rsp+30h] [rbp+8h] BYREF

  v0 = qword_1C01003A0;
  CAutoMutex::CAutoMutex((CAutoMutex *)&v1, (struct CMutex *)((char *)qword_1C01003A0 + 24));
  CMonitorHandleTable<COPMProtectedOutput,void *>::DestroyAllHandlesFromAdapter(v0, 0LL);
  CAutoMutex::~CAutoMutex(&v1);
}
