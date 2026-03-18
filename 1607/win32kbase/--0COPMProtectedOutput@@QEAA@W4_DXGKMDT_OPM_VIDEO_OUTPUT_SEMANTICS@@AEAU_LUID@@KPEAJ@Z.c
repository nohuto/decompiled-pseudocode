/*
 * XREFs of ??0COPMProtectedOutput@@QEAA@W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAJ@Z @ 0x1C00849C8
 * Callers:
 *     ?CreateProtectedOutput@COPM@@QEAAJW4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAPEAXPEAH@Z @ 0x1C008457C (-CreateProtectedOutput@COPM@@QEAAJW4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAPEAXPEAH.c)
 * Callees:
 *     ??1CAutoMutex@@QEAA@XZ @ 0x1C0052F30 (--1CAutoMutex@@QEAA@XZ.c)
 *     ??0CAutoMutex@@QEAA@PEAVCMutex@@@Z @ 0x1C0052F60 (--0CAutoMutex@@QEAA@PEAVCMutex@@@Z.c)
 *     ?Destroy@COPMProtectedOutput@@UEAAJXZ @ 0x1C0084670 (-Destroy@COPMProtectedOutput@@UEAAJXZ.c)
 *     ?IsDestroyed@CMonitorPDO@@UEAAEXZ @ 0x1C0084BC0 (-IsDestroyed@CMonitorPDO@@UEAAEXZ.c)
 *     ??0CMonitorPDO@@QEAA@AEAU_LUID@@KPEAJ@Z @ 0x1C0084CE0 (--0CMonitorPDO@@QEAA@AEAU_LUID@@KPEAJ@Z.c)
 *     CallMonitor @ 0x1C0085320 (CallMonitor.c)
 */

COPMProtectedOutput *__fastcall COPMProtectedOutput::COPMProtectedOutput(
        COPMProtectedOutput *this,
        enum _DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS a2,
        struct _LUID *a3,
        unsigned int a4,
        int *a5)
{
  int *v5; // rsi
  enum _DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS v7; // eax
  int v8; // edi
  enum _DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS InputBuffer; // [rsp+48h] [rbp+10h] BYREF

  InputBuffer = a2;
  v5 = a5;
  CMonitorPDO::CMonitorPDO(this, a3, a4, a5);
  *((_BYTE *)this + 80) = 0;
  *(_QWORD *)this = &COPMProtectedOutput::`vftable';
  v7 = InputBuffer;
  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 21) = v7;
  if ( *v5 < 0 )
    return this;
  CAutoMutex::CAutoMutex((CAutoMutex *)&a5, *((struct CMutex **)this + 1));
  if ( CMonitorPDO::IsDestroyed(this) )
  {
    v8 = -1071774438;
    CAutoMutex::~CAutoMutex((PRKMUTEX **)&a5);
LABEL_8:
    COPMProtectedOutput::Destroy(this);
    *v5 = v8;
    return this;
  }
  v8 = CallMonitor(*((PDEVICE_OBJECT *)this + 2), 0x23248Bu, &InputBuffer, 4u, (char *)this + 72, 8u);
  if ( v8 >= 0 )
    *((_BYTE *)this + 80) = 1;
  CAutoMutex::~CAutoMutex((PRKMUTEX **)&a5);
  if ( v8 < 0 )
    goto LABEL_8;
  return this;
}
