/*
 * XREFs of ?IsDestroyed@CMonitorPDO@@UEAAEXZ @ 0x1C0084BC0
 * Callers:
 *     ?IsDestroyed@COPMProtectedOutput@@UEAAEXZ @ 0x1C0084700 (-IsDestroyed@COPMProtectedOutput@@UEAAEXZ.c)
 *     ??0COPMProtectedOutput@@QEAA@W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAJ@Z @ 0x1C00849C8 (--0COPMProtectedOutput@@QEAA@W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAJ@Z.c)
 * Callees:
 *     ??1CAutoMutex@@QEAA@XZ @ 0x1C0052F30 (--1CAutoMutex@@QEAA@XZ.c)
 *     ??0CAutoMutex@@QEAA@PEAVCMutex@@@Z @ 0x1C0052F60 (--0CAutoMutex@@QEAA@PEAVCMutex@@@Z.c)
 */

char __fastcall CMonitorPDO::IsDestroyed(struct CMutex **this)
{
  char v2; // bl
  PRKMUTEX *v4; // [rsp+30h] [rbp+8h] BYREF

  CAutoMutex::CAutoMutex((CAutoMutex *)&v4, this[1]);
  v2 = 0;
  if ( !*((_WORD *)this + 12) || !*((_WORD *)this + 13) || !this[4] || !this[2] )
    v2 = 1;
  CAutoMutex::~CAutoMutex(&v4);
  return v2;
}
