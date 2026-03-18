/*
 * XREFs of ?DestroyProtectedOutputsOwnedByProcess@COPM@@QEAAXPEAX@Z @ 0x1C0052EA0
 * Callers:
 *     GdiProcessCallout @ 0x1C0059660 (GdiProcessCallout.c)
 * Callees:
 *     ??1CAutoMutex@@QEAA@XZ @ 0x1C0052F30 (--1CAutoMutex@@QEAA@XZ.c)
 *     ??0CAutoMutex@@QEAA@PEAVCMutex@@@Z @ 0x1C0052F60 (--0CAutoMutex@@QEAA@PEAVCMutex@@@Z.c)
 *     ?GetFirstElementIndex@?$CList@VCOPMProtectedOutput@@@@QEAAEPEAK@Z @ 0x1C005305C (-GetFirstElementIndex@-$CList@VCOPMProtectedOutput@@@@QEAAEPEAK@Z.c)
 *     ?DestroyHandleInternal@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@AEAAJPEAVCOPMProtectedOutput@@K@Z @ 0x1C0084A8C (-DestroyHandleInternal@-$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@AEAAJPEAVCOPMProtectedO.c)
 *     ?GetNextElementIndex@?$CList@VCOPMProtectedOutput@@@@QEAAEKPEAK@Z @ 0x1C0084ECC (-GetNextElementIndex@-$CList@VCOPMProtectedOutput@@@@QEAAEKPEAK@Z.c)
 *     ?GetElement@?$CList@VCOPMProtectedOutput@@@@QEAAJKPEAPEAVCOPMProtectedOutput@@@Z @ 0x1C0084F08 (-GetElement@-$CList@VCOPMProtectedOutput@@@@QEAAJKPEAPEAVCOPMProtectedOutput@@@Z.c)
 */

void __fastcall COPM::DestroyProtectedOutputsOwnedByProcess(COPM *this, void *a2)
{
  struct _DEVOBJ_EXTENSION *DeviceObjectExtension; // rbx
  char i; // al
  COPM *v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF
  char v7; // [rsp+48h] [rbp+20h] BYREF

  v5 = this;
  DeviceObjectExtension = WPP_MAIN_CB.DeviceObjectExtension;
  CAutoMutex::CAutoMutex((CAutoMutex *)&v7, (struct CMutex *)&WPP_MAIN_CB.DeviceObjectExtension->Dope);
  for ( i = CList<COPMProtectedOutput>::GetFirstElementIndex(DeviceObjectExtension, &v5);
        i;
        i = CList<COPMProtectedOutput>::GetNextElementIndex(DeviceObjectExtension, (unsigned int)v5, &v5) )
  {
    v6 = 0LL;
    CList<COPMProtectedOutput>::GetElement(DeviceObjectExtension, (unsigned int)v5, &v6);
    if ( a2 == *(void **)(v6 + 56) )
      CMonitorHandleTable<COPMProtectedOutput,void *>::DestroyHandleInternal(
        DeviceObjectExtension,
        v6,
        (unsigned int)v5);
  }
  CAutoMutex::~CAutoMutex((CAutoMutex *)&v7);
}
