/*
 * XREFs of ?DestroyProtectedOutputsOwnedByProcess@COPM@@QEAAXPEAX@Z @ 0x1C0067AB4
 * Callers:
 *     GdiProcessCallout @ 0x1C0044F00 (GdiProcessCallout.c)
 * Callees:
 *     ??1CAutoMutex@@QEAA@XZ @ 0x1C0067B40 (--1CAutoMutex@@QEAA@XZ.c)
 *     ??0CAutoMutex@@QEAA@PEAVCMutex@@@Z @ 0x1C0067B70 (--0CAutoMutex@@QEAA@PEAVCMutex@@@Z.c)
 *     ?GetFirstElementIndex@?$CList@VCOPMProtectedOutput@@@@QEAAEPEAK@Z @ 0x1C0067C6C (-GetFirstElementIndex@-$CList@VCOPMProtectedOutput@@@@QEAAEPEAK@Z.c)
 *     ?DestroyHandleInternal@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@AEAAJPEAVCOPMProtectedOutput@@K@Z @ 0x1C0083114 (-DestroyHandleInternal@-$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@AEAAJPEAVCOPMProtectedO.c)
 *     ?GetNextElementIndex@?$CList@VCOPMProtectedOutput@@@@QEAAEKPEAK@Z @ 0x1C0083554 (-GetNextElementIndex@-$CList@VCOPMProtectedOutput@@@@QEAAEKPEAK@Z.c)
 *     ?GetElement@?$CList@VCOPMProtectedOutput@@@@QEAAJKPEAPEAVCOPMProtectedOutput@@@Z @ 0x1C0083590 (-GetElement@-$CList@VCOPMProtectedOutput@@@@QEAAJKPEAPEAVCOPMProtectedOutput@@@Z.c)
 */

void __fastcall COPM::DestroyProtectedOutputsOwnedByProcess(COPM *this, void *a2)
{
  void *v2; // rbx
  char i; // al
  COPM *v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF
  char v7; // [rsp+48h] [rbp+20h] BYREF

  v5 = this;
  v2 = qword_1C01045D8;
  CAutoMutex::CAutoMutex((CAutoMutex *)&v7, (struct CMutex *)((char *)qword_1C01045D8 + 24));
  for ( i = CList<COPMProtectedOutput>::GetFirstElementIndex(v2, &v5);
        i;
        i = CList<COPMProtectedOutput>::GetNextElementIndex(v2, (unsigned int)v5, &v5) )
  {
    v6 = 0LL;
    CList<COPMProtectedOutput>::GetElement(v2, (unsigned int)v5, &v6);
    if ( a2 == *(void **)(v6 + 56) )
      CMonitorHandleTable<COPMProtectedOutput,void *>::DestroyHandleInternal(v2, v6, (unsigned int)v5);
  }
  CAutoMutex::~CAutoMutex((CAutoMutex *)&v7);
}
