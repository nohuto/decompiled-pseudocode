/*
 * XREFs of ?vClearSurface@PDEVOBJ@@QEAAXXZ @ 0x1C00BEDE4
 * Callers:
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C00C68F8 (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 * Callees:
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0025504 (--1DCOBJ@@QEAA@XZ.c)
 *     EngAcquireSemaphore @ 0x1C0025AF0 (EngAcquireSemaphore.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C002F988 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002FA5C (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0073A30 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C00740D0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 */

void __fastcall PDEVOBJ::vClearSurface(PDEVOBJ *this)
{
  _BYTE v2[32]; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v3[88]; // [rsp+40h] [rbp-58h] BYREF

  EngAcquireSemaphore(ghsemDriverMgmt);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 12);
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v2, this);
  *(_QWORD *)(*(_QWORD *)this + 2576LL) = 0LL;
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v2);
  DCOBJ::~DCOBJ((DCOBJ *)v3);
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt");
  GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDriverMgmt);
}
