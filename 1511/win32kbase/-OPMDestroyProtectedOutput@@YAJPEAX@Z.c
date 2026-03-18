/*
 * XREFs of ?OPMDestroyProtectedOutput@@YAJPEAX@Z @ 0x1C0082784
 * Callers:
 *     NtGdiDestroyOPMProtectedOutput @ 0x1C0082480 (NtGdiDestroyOPMProtectedOutput.c)
 *     DrvCreatePhysicalMonitorObjects @ 0x1C0082540 (DrvCreatePhysicalMonitorObjects.c)
 * Callees:
 *     ??1CAutoMutex@@QEAA@XZ @ 0x1C0067B40 (--1CAutoMutex@@QEAA@XZ.c)
 *     ??0CAutoMutex@@QEAA@PEAVCMutex@@@Z @ 0x1C0067B70 (--0CAutoMutex@@QEAA@PEAVCMutex@@@Z.c)
 *     ?GetHandleObject@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@QEAAJPEAXPEAPEAVCOPMProtectedOutput@@@Z @ 0x1C00830B0 (-GetHandleObject@-$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@QEAAJPEAXPEAPEAVCOPMProtected.c)
 *     ?DestroyHandleInternal@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@AEAAJPEAVCOPMProtectedOutput@@K@Z @ 0x1C0083114 (-DestroyHandleInternal@-$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@AEAAJPEAVCOPMProtectedO.c)
 */

__int64 __fastcall OPMDestroyProtectedOutput(void *a1)
{
  void *v1; // rsi
  unsigned int v3; // ebx
  int HandleObject; // edi
  int v5; // eax
  __int64 v7; // [rsp+48h] [rbp+10h] BYREF
  PRKMUTEX *v8; // [rsp+50h] [rbp+18h] BYREF

  v1 = qword_1C01045D8;
  CAutoMutex::CAutoMutex((CAutoMutex *)&v8, (struct CMutex *)((char *)qword_1C01045D8 + 24));
  v3 = 0;
  HandleObject = CMonitorHandleTable<COPMProtectedOutput,void *>::GetHandleObject(v1, a1, &v7);
  if ( HandleObject >= 0 )
  {
    v5 = CMonitorHandleTable<COPMProtectedOutput,void *>::DestroyHandleInternal(v1, v7, (unsigned int)a1);
    HandleObject = 0;
    if ( v5 < 0 )
      HandleObject = v5;
  }
  CAutoMutex::~CAutoMutex(&v8);
  if ( HandleObject < 0 )
    return (unsigned int)HandleObject;
  return v3;
}
