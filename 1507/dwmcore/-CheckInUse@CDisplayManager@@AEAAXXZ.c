/*
 * XREFs of ?CheckInUse@CDisplayManager@@AEAAXXZ @ 0x180123118
 * Callers:
 *     ?Disconnect@CConnection@@QEAAXXZ @ 0x1800E10C0 (-Disconnect@CConnection@@QEAAXXZ.c)
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180051C78 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?Release@CDisplaySet@@QEBAXXZ @ 0x1800557B8 (-Release@CDisplaySet@@QEBAXXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CDisplayManager::CheckInUse(CDisplayManager *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = &g_DisplayManager;
  EnterCriticalSection(&g_DisplayManager);
  if ( qword_1801930E8 )
  {
    if ( *(_DWORD *)qword_1801930E8 != 1 || dword_180193110 )
      goto LABEL_10;
    if ( qword_1801930E8 )
    {
      CDisplaySet::Release(qword_1801930E8);
      qword_1801930E8 = 0LL;
    }
  }
  else if ( !qword_1801930F8 || dword_180193110 )
  {
    goto LABEL_10;
  }
  if ( qword_1801930F8 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_1801930F8 + 8LL))(qword_1801930F8);
    qword_1801930F8 = 0LL;
  }
LABEL_10:
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v1);
}
