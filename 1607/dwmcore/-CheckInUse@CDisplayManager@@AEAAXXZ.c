/*
 * XREFs of ?CheckInUse@CDisplayManager@@AEAAXXZ @ 0x180161720
 * Callers:
 *     ?Disconnect@CConnection@@QEAAXXZ @ 0x1801139A8 (-Disconnect@CConnection@@QEAAXXZ.c)
 * Callees:
 *     ?Release@CDisplaySet@@QEBAXXZ @ 0x18003653C (-Release@CDisplaySet@@QEBAXXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180038B54 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDisplayManager::CheckInUse(CDisplayManager *this)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  struct _RTL_CRITICAL_SECTION *v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = &g_DisplayManager;
  EnterCriticalSection(&g_DisplayManager);
  if ( qword_1801EFD28 )
  {
    if ( *(_DWORD *)qword_1801EFD28 != 1 || dword_1801EFD48 )
      goto LABEL_10;
    if ( qword_1801EFD28 )
    {
      CDisplaySet::Release(qword_1801EFD28, v1, v2);
      qword_1801EFD28 = 0LL;
    }
  }
  else if ( !qword_1801EFD30 || dword_1801EFD48 )
  {
    goto LABEL_10;
  }
  if ( qword_1801EFD30 )
  {
    (*(void (__fastcall **)(CDXGIEnumeration *))(*(_QWORD *)qword_1801EFD30 + 8LL))(qword_1801EFD30);
    qword_1801EFD30 = 0LL;
  }
LABEL_10:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v3);
}
