/*
 * XREFs of ?Destroy@COPMProtectedOutput@@UEAAJXZ @ 0x1C0067F60
 * Callers:
 *     ??_ECOPMProtectedOutput@@UEAAPEAXI@Z @ 0x1C00680E0 (--_ECOPMProtectedOutput@@UEAAPEAXI@Z.c)
 *     ??0COPMProtectedOutput@@QEAA@W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAJ@Z @ 0x1C006812C (--0COPMProtectedOutput@@QEAA@W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAJ@Z.c)
 * Callees:
 *     ??1CAutoMutex@@QEAA@XZ @ 0x1C000F080 (--1CAutoMutex@@QEAA@XZ.c)
 *     ??0CAutoMutex@@QEAA@PEAVCMutex@@@Z @ 0x1C000F0B0 (--0CAutoMutex@@QEAA@PEAVCMutex@@@Z.c)
 *     ?Destroy@CMonitorPDO@@UEAAJXZ @ 0x1C0068380 (-Destroy@CMonitorPDO@@UEAAJXZ.c)
 *     CallMonitor @ 0x1C00689F0 (CallMonitor.c)
 */

__int64 __fastcall COPMProtectedOutput::Destroy(COPMProtectedOutput *this)
{
  int v2; // edi
  int v3; // eax
  int v4; // eax
  PRKMUTEX *v6; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  CAutoMutex::CAutoMutex((CAutoMutex *)&v6, *((struct CMutex **)this + 1));
  if ( *((_BYTE *)this + 80) )
  {
    v3 = CallMonitor(*((PDEVICE_OBJECT *)this + 2), 0x2324A3u, (char *)this + 72, 8u, 0LL, 0);
    *((_BYTE *)this + 80) = 0;
    if ( v3 < 0 )
      v2 = v3;
    *((_QWORD *)this + 9) = 0LL;
  }
  CAutoMutex::~CAutoMutex(&v6);
  v4 = CMonitorPDO::Destroy(this);
  if ( v4 < 0 && v2 >= 0 )
    return (unsigned int)v4;
  return (unsigned int)v2;
}
