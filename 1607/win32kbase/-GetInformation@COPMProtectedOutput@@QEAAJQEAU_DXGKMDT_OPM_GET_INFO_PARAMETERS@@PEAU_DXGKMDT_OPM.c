/*
 * XREFs of ?GetInformation@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_GET_INFO_PARAMETERS@@PEAU_DXGKMDT_OPM_REQUESTED_INFORMATION@@@Z @ 0x1C0084740
 * Callers:
 *     ?GetInformation@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_GET_INFO_PARAMETERS@@QEAU_DXGKMDT_OPM_REQUESTED_INFORMATION@@@Z @ 0x1C0084314 (-GetInformation@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_GET_INFO_PARAMETERS@@QEAU_DXGKMDT_OPM_REQUESTED_.c)
 * Callees:
 *     ??1CAutoMutex@@QEAA@XZ @ 0x1C0052F30 (--1CAutoMutex@@QEAA@XZ.c)
 *     ??0CAutoMutex@@QEAA@PEAVCMutex@@@Z @ 0x1C0052F60 (--0CAutoMutex@@QEAA@PEAVCMutex@@@Z.c)
 *     CallMonitor @ 0x1C0085320 (CallMonitor.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall COPMProtectedOutput::GetInformation(
        struct CMutex **this,
        struct _DXGKMDT_OPM_GET_INFO_PARAMETERS *const a2,
        PRKMUTEX *a3)
{
  struct _DEVICE_OBJECT *v4; // rcx
  unsigned int v5; // ebx
  _QWORD InputBuffer[3]; // [rsp+30h] [rbp-18h] BYREF
  PRKMUTEX *v8; // [rsp+60h] [rbp+18h] BYREF

  v8 = a3;
  CAutoMutex::CAutoMutex((CAutoMutex *)&v8, this[1]);
  if ( (*((unsigned __int8 (__fastcall **)(struct CMutex **))*this + 2))(this) )
  {
    v5 = -1071774438;
  }
  else
  {
    v4 = (struct _DEVICE_OBJECT *)this[2];
    InputBuffer[0] = this[9];
    InputBuffer[1] = &unk_1C011E960;
    v5 = CallMonitor(v4, 0x232497u, InputBuffer, 0x10u, &unk_1C011F970, 0x1000u);
  }
  CAutoMutex::~CAutoMutex(&v8);
  return v5;
}
