/*
 * XREFs of ?GetToken@CAnimationClock@@QEAAJPEAPEAX@Z @ 0x18003B424
 * Callers:
 *     ?OnGetAnimationClockToken@CAnimationClockCoordinator@@QEAAJU_GUID@@PEAPEAX@Z @ 0x18003C020 (-OnGetAnimationClockToken@CAnimationClockCoordinator@@QEAAJU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180010F54 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAnimationClock::GetToken(CAnimationClock *this, void **a2)
{
  int v4; // edi
  struct _RTL_CRITICAL_SECTION *v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  *a2 = 0LL;
  if ( *((_QWORD *)this + 13)
    || (v4 = (*(__int64 (__fastcall **)(_QWORD, GUID *, char *))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                  + 21)
                                                               + 216LL))(
               *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 21),
               &GUID_64217f82_b1ca_430c_8a88_6cedec74c860,
               (char *)this + 104),
        v4 >= 0) )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, void **))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                               + 21)
                                                            + 224LL))(
           *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 21),
           *((_QWORD *)this + 13),
           a2);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v6);
  return (unsigned int)v4;
}
