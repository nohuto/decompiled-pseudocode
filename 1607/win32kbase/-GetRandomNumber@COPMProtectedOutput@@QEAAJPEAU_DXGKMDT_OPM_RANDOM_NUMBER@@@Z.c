/*
 * XREFs of ?GetRandomNumber@COPMProtectedOutput@@QEAAJPEAU_DXGKMDT_OPM_RANDOM_NUMBER@@@Z @ 0x1C0084850
 * Callers:
 *     ?GetRandomNumber@COPM@@QEAAJPEAXPEAU_DXGKMDT_OPM_RANDOM_NUMBER@@@Z @ 0x1C00843F8 (-GetRandomNumber@COPM@@QEAAJPEAXPEAU_DXGKMDT_OPM_RANDOM_NUMBER@@@Z.c)
 * Callees:
 *     ??1CAutoMutex@@QEAA@XZ @ 0x1C0052F30 (--1CAutoMutex@@QEAA@XZ.c)
 *     ??0CAutoMutex@@QEAA@PEAVCMutex@@@Z @ 0x1C0052F60 (--0CAutoMutex@@QEAA@PEAVCMutex@@@Z.c)
 *     CallMonitor @ 0x1C0085320 (CallMonitor.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall COPMProtectedOutput::GetRandomNumber(
        COPMProtectedOutput *this,
        struct _DXGKMDT_OPM_RANDOM_NUMBER *a2)
{
  unsigned int v4; // ebx
  PRKMUTEX *v6; // [rsp+40h] [rbp+8h] BYREF

  CAutoMutex::CAutoMutex((CAutoMutex *)&v6, *((struct CMutex **)this + 1));
  if ( (*(unsigned __int8 (__fastcall **)(COPMProtectedOutput *))(*(_QWORD *)this + 16LL))(this) )
    v4 = -1071774438;
  else
    v4 = CallMonitor(*((PDEVICE_OBJECT *)this + 2), 0x23248Fu, (char *)this + 72, 8u, a2, 0x10u);
  CAutoMutex::~CAutoMutex(&v6);
  return v4;
}
