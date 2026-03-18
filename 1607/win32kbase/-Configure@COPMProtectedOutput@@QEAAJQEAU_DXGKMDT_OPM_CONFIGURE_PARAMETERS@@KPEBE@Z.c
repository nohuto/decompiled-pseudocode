/*
 * XREFs of ?Configure@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_CONFIGURE_PARAMETERS@@KPEBE@Z @ 0x1C00C127C
 * Callers:
 *     ?ConfigureProtectedOutput@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_CONFIGURE_PARAMETERS@@KPEBE@Z @ 0x1C00C1324 (-ConfigureProtectedOutput@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_CONFIGURE_PARAMETERS@@KPEBE@Z.c)
 * Callees:
 *     ??1CAutoMutex@@QEAA@XZ @ 0x1C0052F30 (--1CAutoMutex@@QEAA@XZ.c)
 *     ??0CAutoMutex@@QEAA@PEAVCMutex@@@Z @ 0x1C0052F60 (--0CAutoMutex@@QEAA@PEAVCMutex@@@Z.c)
 *     CallMonitor @ 0x1C0085320 (CallMonitor.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall COPMProtectedOutput::Configure(
        struct CMutex **this,
        struct _DXGKMDT_OPM_CONFIGURE_PARAMETERS *const a2,
        int a3,
        const unsigned __int8 *a4)
{
  unsigned int v8; // ebx
  struct _DEVICE_OBJECT *v9; // rcx
  _QWORD InputBuffer[2]; // [rsp+30h] [rbp-28h] BYREF
  int v12; // [rsp+40h] [rbp-18h]
  const unsigned __int8 *v13; // [rsp+48h] [rbp-10h]
  PRKMUTEX *v14; // [rsp+60h] [rbp+8h] BYREF

  CAutoMutex::CAutoMutex((CAutoMutex *)&v14, this[1]);
  if ( (*((unsigned __int8 (__fastcall **)(struct CMutex **))*this + 2))(this) )
  {
    v8 = -1071774438;
  }
  else
  {
    v9 = (struct _DEVICE_OBJECT *)this[2];
    InputBuffer[0] = this[9];
    InputBuffer[1] = a2;
    v12 = a3;
    v13 = a4;
    v8 = CallMonitor(v9, 0x23249Fu, InputBuffer, 0x20u, 0LL, 0);
  }
  CAutoMutex::~CAutoMutex(&v14);
  return v8;
}
