/*
 * XREFs of ?Deregister@MINIPORT_HOOK_DRIVER@@QEAAPEAXXZ @ 0x1C00E39BC
 * Callers:
 *     ?ndisMpHookNmrClientDetachProvider@@YAJPEAX@Z @ 0x1C006F920 (-ndisMpHookNmrClientDetachProvider@@YAJPEAX@Z.c)
 *     ?DeregisterAsync@MINIPORT_HOOK_DRIVER@@AEAAXXZ @ 0x1C00E3A40 (-DeregisterAsync@MINIPORT_HOOK_DRIVER@@AEAAXXZ.c)
 * Callees:
 *     memset @ 0x1C0023A40 (memset.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x1C009B148 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ?ReleaseExclusive@KLockHolder@@QEAAXXZ @ 0x1C00A6BE4 (-ReleaseExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00A6C60 (--1KLockHolder@@QEAA@XZ.c)
 *     ?WaitForAllHookedDriversToDeregister@MINIPORT_HOOK_DRIVER@@AEAAXXZ @ 0x1C00E3B24 (-WaitForAllHookedDriversToDeregister@MINIPORT_HOOK_DRIVER@@AEAAXXZ.c)
 */

unsigned __int64 __fastcall MINIPORT_HOOK_DRIVER::Deregister(struct _EX_RUNDOWN_REF *this)
{
  unsigned __int64 v2; // rsi
  unsigned __int64 Count; // rbx
  KLockHolder v5; // [rsp+20h] [rbp-28h] BYREF

  MINIPORT_HOOK_DRIVER::WaitForAllHookedDriversToDeregister((MINIPORT_HOOK_DRIVER *)this);
  KLockThisExclusive::KLockThisExclusive((KLockThisExclusive *)&v5, &g_MiniportHookDriversLock);
  v2 = 0LL;
  if ( BYTE1(this->Count) )
  {
    Count = this[2].Count;
    BYTE1(this->Count) = 0;
    ExReInitializeRundownProtection(this + 1);
    this[3].Count = 0LL;
    this[2].Count = 0LL;
    memset(&this[4], 0, 0x28uLL);
    KLockHolder::ReleaseExclusive(&v5);
    v2 = Count;
  }
  KLockHolder::~KLockHolder(&v5);
  return v2;
}
