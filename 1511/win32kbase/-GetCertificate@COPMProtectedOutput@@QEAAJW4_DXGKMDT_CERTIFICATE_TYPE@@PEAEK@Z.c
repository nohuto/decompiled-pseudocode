/*
 * XREFs of ?GetCertificate@COPMProtectedOutput@@QEAAJW4_DXGKMDT_CERTIFICATE_TYPE@@PEAEK@Z @ 0x1C0082EA0
 * Callers:
 *     ?GetCertificate@COPM@@QEAAJPEAXW4_DXGKMDT_CERTIFICATE_TYPE@@PEAEK@Z @ 0x1C0082A60 (-GetCertificate@COPM@@QEAAJPEAXW4_DXGKMDT_CERTIFICATE_TYPE@@PEAEK@Z.c)
 * Callees:
 *     ??1CAutoMutex@@QEAA@XZ @ 0x1C0067B40 (--1CAutoMutex@@QEAA@XZ.c)
 *     ??0CAutoMutex@@QEAA@PEAVCMutex@@@Z @ 0x1C0067B70 (--0CAutoMutex@@QEAA@PEAVCMutex@@@Z.c)
 *     CallMonitor @ 0x1C0083A30 (CallMonitor.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall COPMProtectedOutput::GetCertificate(
        COPMProtectedOutput *this,
        enum _DXGKMDT_CERTIFICATE_TYPE a2,
        unsigned __int8 *a3,
        ULONG a4)
{
  unsigned int v7; // ebx
  PRKMUTEX *v9; // [rsp+40h] [rbp+8h] BYREF
  enum _DXGKMDT_CERTIFICATE_TYPE InputBuffer; // [rsp+48h] [rbp+10h] BYREF

  InputBuffer = a2;
  CAutoMutex::CAutoMutex((CAutoMutex *)&v9, *((struct CMutex **)this + 1));
  if ( (*(unsigned __int8 (__fastcall **)(COPMProtectedOutput *))(*(_QWORD *)this + 16LL))(this) )
    v7 = -1071774438;
  else
    v7 = CallMonitor(*((PDEVICE_OBJECT *)this + 2), 0x232487u, &InputBuffer, 4u, a3, a4);
  CAutoMutex::~CAutoMutex(&v9);
  return v7;
}
