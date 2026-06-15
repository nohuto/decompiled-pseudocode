/*
 * XREFs of ?UnregisterAppClosureNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x18009F274
 * Callers:
 *     s_pbmUnregisterAppClosureNotification @ 0x180091670 (s_pbmUnregisterAppClosureNotification.c)
 * Callees:
 *     ?Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x18001F770 (-Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001F9E8 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001FA0C (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::UnregisterAppClosureNotificationClient(
        CApplicationManager *this,
        struct CProcess *a2)
{
  CApplicationManager *v3; // rbx
  LPCRITICAL_SECTION v5; // [rsp+28h] [rbp-20h] BYREF
  char v6; // [rsp+30h] [rbp-18h]

  v3 = g_ApplicationManager;
  ATL::CCritSecLock::CCritSecLock(
    (ATL::CCritSecLock *)&v5,
    (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 24));
  *((_DWORD *)a2 + 109) = 0;
  CApplicationManager::Unregister(v3, a2);
  if ( v6 )
    ATL::CCritSecLock::Unlock(&v5);
  return 0LL;
}
