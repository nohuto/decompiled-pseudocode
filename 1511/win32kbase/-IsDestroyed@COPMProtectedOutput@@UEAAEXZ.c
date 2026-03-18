/*
 * XREFs of ?IsDestroyed@COPMProtectedOutput@@UEAAEXZ @ 0x1C0082CE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAutoMutex@@QEAA@XZ @ 0x1C0067B40 (--1CAutoMutex@@QEAA@XZ.c)
 *     ??0CAutoMutex@@QEAA@PEAVCMutex@@@Z @ 0x1C0067B70 (--0CAutoMutex@@QEAA@PEAVCMutex@@@Z.c)
 *     ?IsDestroyed@CMonitorPDO@@UEAAEXZ @ 0x1C00831F0 (-IsDestroyed@CMonitorPDO@@UEAAEXZ.c)
 */

unsigned __int8 __fastcall COPMProtectedOutput::IsDestroyed(struct CMutex **this)
{
  unsigned __int8 IsDestroyed; // bl
  PRKMUTEX *v4; // [rsp+30h] [rbp+8h] BYREF

  CAutoMutex::CAutoMutex((CAutoMutex *)&v4, this[1]);
  if ( *((_BYTE *)this + 80) )
    IsDestroyed = CMonitorPDO::IsDestroyed((CMonitorPDO *)this);
  else
    IsDestroyed = 1;
  CAutoMutex::~CAutoMutex(&v4);
  return IsDestroyed;
}
