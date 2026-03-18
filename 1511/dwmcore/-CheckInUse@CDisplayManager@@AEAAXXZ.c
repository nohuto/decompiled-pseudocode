/*
 * XREFs of ?CheckInUse@CDisplayManager@@AEAAXXZ @ 0x180138684
 * Callers:
 *     ?Disconnect@CConnection@@QEAAXXZ @ 0x1800FF7E0 (-Disconnect@CConnection@@QEAAXXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Release@CDisplaySet@@QEBAXXZ @ 0x18006F924 (-Release@CDisplaySet@@QEBAXXZ.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800A1C40 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 */

void __fastcall CDisplayManager::CheckInUse(CDisplayManager *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = &g_DisplayManager;
  EnterCriticalSection(&g_DisplayManager);
  if ( qword_1801A39E8 )
  {
    if ( *(_DWORD *)qword_1801A39E8 != 1 || dword_1801A3A10 )
      goto LABEL_10;
    if ( qword_1801A39E8 )
    {
      CDisplaySet::Release(qword_1801A39E8);
      qword_1801A39E8 = 0LL;
    }
  }
  else if ( !qword_1801A39F8 || dword_1801A3A10 )
  {
    goto LABEL_10;
  }
  if ( qword_1801A39F8 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_1801A39F8 + 8LL))(qword_1801A39F8);
    qword_1801A39F8 = 0LL;
  }
LABEL_10:
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v1);
}
