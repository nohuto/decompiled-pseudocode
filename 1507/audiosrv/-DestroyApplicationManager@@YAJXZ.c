/*
 * XREFs of ?DestroyApplicationManager@@YAJXZ @ 0x1800A1590
 * Callers:
 *     ??1CWindowsPolicyManager@@UEAA@XZ @ 0x1800A0898 (--1CWindowsPolicyManager@@UEAA@XZ.c)
 * Callees:
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B220 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001B244 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?Release@CRefCountedObject@@QEAAJXZ @ 0x18002D17C (-Release@CRefCountedObject@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 DestroyApplicationManager(void)
{
  CRefCountedObject *v0; // rbx
  LPCRITICAL_SECTION v2; // [rsp+28h] [rbp-30h] BYREF
  char v3; // [rsp+30h] [rbp-28h]
  LPCRITICAL_SECTION v4; // [rsp+38h] [rbp-20h] BYREF
  char v5; // [rsp+40h] [rbp-18h]

  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v4, &g_csApplicationManager);
  v0 = g_ApplicationManager;
  ATL::CCritSecLock::CCritSecLock(
    (ATL::CCritSecLock *)&v2,
    (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 24));
  *((_DWORD *)v0 + 4) = 1;
  if ( v3 )
    ATL::CCritSecLock::Unlock(&v2);
  if ( g_ApplicationManager )
  {
    CRefCountedObject::Release(g_ApplicationManager);
    g_ApplicationManager = 0LL;
  }
  if ( v5 )
    ATL::CCritSecLock::Unlock(&v4);
  return 0LL;
}
