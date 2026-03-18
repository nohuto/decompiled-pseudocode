/*
 * XREFs of ??0AutoSharedPushLock@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C015742C
 * Callers:
 *     ??0UmfdHostSharedReadyLock@UmfdHostLifeTimeManager@@QEAA@XZ @ 0x1C015740C (--0UmfdHostSharedReadyLock@UmfdHostLifeTimeManager@@QEAA@XZ.c)
 *     ??0AutoSharedUmfdFileViewLock@@QEAA@XZ @ 0x1C02A3EF4 (--0AutoSharedUmfdFileViewLock@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

AutoSharedPushLock *__fastcall AutoSharedPushLock::AutoSharedPushLock(
        AutoSharedPushLock *this,
        struct _EX_PUSH_LOCK *a2)
{
  *(_QWORD *)this = a2;
  KeEnterCriticalRegion();
  GreAcquirePushLockShared(a2);
  return this;
}
