/*
 * XREFs of ?Destroy@CMonitorPDO@@UEAAJXZ @ 0x1C0068380
 * Callers:
 *     ?Destroy@COPMProtectedOutput@@UEAAJXZ @ 0x1C0067F60 (-Destroy@COPMProtectedOutput@@UEAAJXZ.c)
 *     ??1CMonitorPDO@@UEAA@XZ @ 0x1C0068460 (--1CMonitorPDO@@UEAA@XZ.c)
 *     ??0CMonitorPDO@@QEAA@AEAU_LUID@@KPEAJ@Z @ 0x1C00684A0 (--0CMonitorPDO@@QEAA@AEAU_LUID@@KPEAJ@Z.c)
 * Callees:
 *     ??1CAutoMutex@@QEAA@XZ @ 0x1C000F080 (--1CAutoMutex@@QEAA@XZ.c)
 *     ??0CAutoMutex@@QEAA@PEAVCMutex@@@Z @ 0x1C000F0B0 (--0CAutoMutex@@QEAA@PEAVCMutex@@@Z.c)
 */

__int64 __fastcall CMonitorPDO::Destroy(CMonitorPDO *this)
{
  int v2; // ebx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rbp
  void *v6; // rsi
  NTSTATUS v8; // eax
  NTSTATUS v9; // eax
  PRKMUTEX *v10; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  CAutoMutex::CAutoMutex((CAutoMutex *)&v10, *((struct CMutex **)this + 1));
  v3 = (void *)*((_QWORD *)this + 4);
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0);
    *((_DWORD *)this + 6) = 0;
    *((_QWORD *)this + 4) = 0LL;
  }
  v4 = (void *)*((_QWORD *)this + 2);
  if ( v4 )
  {
    ObfDereferenceObject(v4);
    *((_QWORD *)this + 2) = 0LL;
  }
  v5 = (void *)_InterlockedExchange64((volatile __int64 *)this + 5, 0LL);
  v6 = (void *)_InterlockedExchange64((volatile __int64 *)this + 6, 0LL);
  CAutoMutex::~CAutoMutex(&v10);
  if ( v5 )
  {
    v8 = IoUnregisterPlugPlayNotificationEx(v5);
    if ( v8 < 0 )
      v2 = v8;
  }
  if ( v6 )
  {
    v9 = IoUnregisterPlugPlayNotificationEx(v6);
    if ( v9 < 0 && v2 >= 0 )
      return (unsigned int)v9;
  }
  return (unsigned int)v2;
}
