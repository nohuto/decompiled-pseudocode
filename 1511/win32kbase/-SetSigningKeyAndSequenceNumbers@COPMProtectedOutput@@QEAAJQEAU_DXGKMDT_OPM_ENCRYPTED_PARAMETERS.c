/*
 * XREFs of ?SetSigningKeyAndSequenceNumbers@COPMProtectedOutput@@QEAAJQEAU_DXGKMDT_OPM_ENCRYPTED_PARAMETERS@@@Z @ 0x1C0082DA4
 * Callers:
 *     ?SetSigningKeyAndSequenceNumbers@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_ENCRYPTED_PARAMETERS@@@Z @ 0x1C0082970 (-SetSigningKeyAndSequenceNumbers@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_ENCRYPTED_PARAMETERS@@@Z.c)
 * Callees:
 *     ??1CAutoMutex@@QEAA@XZ @ 0x1C0067B40 (--1CAutoMutex@@QEAA@XZ.c)
 *     ??0CAutoMutex@@QEAA@PEAVCMutex@@@Z @ 0x1C0067B70 (--0CAutoMutex@@QEAA@PEAVCMutex@@@Z.c)
 *     CallMonitor @ 0x1C0083A30 (CallMonitor.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall COPMProtectedOutput::SetSigningKeyAndSequenceNumbers(
        struct CMutex **this,
        struct _DXGKMDT_OPM_ENCRYPTED_PARAMETERS *const a2)
{
  struct _DEVICE_OBJECT *v4; // rcx
  unsigned int v5; // ebx
  _QWORD InputBuffer[3]; // [rsp+30h] [rbp-18h] BYREF
  PRKMUTEX *v8; // [rsp+50h] [rbp+8h] BYREF

  CAutoMutex::CAutoMutex((CAutoMutex *)&v8, this[1]);
  if ( (*((unsigned __int8 (__fastcall **)(struct CMutex **))*this + 2))(this) )
  {
    v5 = -1071774438;
  }
  else
  {
    v4 = (struct _DEVICE_OBJECT *)this[2];
    InputBuffer[0] = this[9];
    InputBuffer[1] = a2;
    v5 = CallMonitor(v4, 0x232493u, InputBuffer, 0x10u, 0LL, 0);
  }
  CAutoMutex::~CAutoMutex(&v8);
  return v5;
}
