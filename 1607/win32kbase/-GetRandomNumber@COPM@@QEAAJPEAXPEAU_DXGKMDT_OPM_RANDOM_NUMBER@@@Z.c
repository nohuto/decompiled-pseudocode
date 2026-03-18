/*
 * XREFs of ?GetRandomNumber@COPM@@QEAAJPEAXPEAU_DXGKMDT_OPM_RANDOM_NUMBER@@@Z @ 0x1C00843F8
 * Callers:
 *     NtGdiGetOPMRandomNumber @ 0x1C0083D70 (NtGdiGetOPMRandomNumber.c)
 * Callees:
 *     ??1CAutoMutex@@QEAA@XZ @ 0x1C0052F30 (--1CAutoMutex@@QEAA@XZ.c)
 *     ??0CAutoMutex@@QEAA@PEAVCMutex@@@Z @ 0x1C0052F60 (--0CAutoMutex@@QEAA@PEAVCMutex@@@Z.c)
 *     ?GetRandomNumber@COPMProtectedOutput@@QEAAJPEAU_DXGKMDT_OPM_RANDOM_NUMBER@@@Z @ 0x1C0084850 (-GetRandomNumber@COPMProtectedOutput@@QEAAJPEAU_DXGKMDT_OPM_RANDOM_NUMBER@@@Z.c)
 *     ?GetHandleObject@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@QEAAJPEAXPEAPEAVCOPMProtectedOutput@@@Z @ 0x1C0084AF0 (-GetHandleObject@-$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@QEAAJPEAXPEAPEAVCOPMProtected.c)
 */

__int64 __fastcall COPM::GetRandomNumber(COPM *this, void *a2, struct _DXGKMDT_OPM_RANDOM_NUMBER *a3)
{
  struct _DEVOBJ_EXTENSION *DeviceObjectExtension; // rbx
  int HandleObject; // eax
  unsigned int v7; // ebx
  COPMProtectedOutput *v9; // [rsp+30h] [rbp+8h] BYREF
  PRKMUTEX *v10; // [rsp+48h] [rbp+20h] BYREF

  v9 = this;
  DeviceObjectExtension = WPP_MAIN_CB.DeviceObjectExtension;
  CAutoMutex::CAutoMutex((CAutoMutex *)&v10, (struct CMutex *)&WPP_MAIN_CB.DeviceObjectExtension->Dope);
  HandleObject = CMonitorHandleTable<COPMProtectedOutput,void *>::GetHandleObject(DeviceObjectExtension, a2, &v9);
  v7 = 0;
  if ( HandleObject < 0 || (HandleObject = COPMProtectedOutput::GetRandomNumber(v9, a3), HandleObject < 0) )
    v7 = HandleObject;
  CAutoMutex::~CAutoMutex(&v10);
  return v7;
}
