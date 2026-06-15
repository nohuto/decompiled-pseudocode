/*
 * XREFs of ?RegisterAppClosureNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x1800A1CBC
 * Callers:
 *     s_pbmRegisterAppClosureNotification @ 0x180093DD0 (s_pbmRegisterAppClosureNotification.c)
 * Callees:
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B220 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001B244 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x18001CD88 (-Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::RegisterAppClosureNotificationClient(
        CApplicationManager *this,
        struct CProcess *a2)
{
  CApplicationManager *v3; // rbx
  int v4; // ebx
  LPCRITICAL_SECTION v6; // [rsp+28h] [rbp-20h] BYREF
  char v7; // [rsp+30h] [rbp-18h]

  v3 = g_ApplicationManager;
  ATL::CCritSecLock::CCritSecLock(
    (ATL::CCritSecLock *)&v6,
    (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 24));
  v4 = CApplicationManager::Register(v3, a2);
  if ( v4 < 0 )
  {
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0x13u,
        (__int64)&WPP_a823fe2c17e0c03c8d4e6152eedcd7b2_Traceguids,
        v4);
    }
  }
  else
  {
    *((_DWORD *)a2 + 109) = 1;
  }
  if ( v7 )
    ATL::CCritSecLock::Unlock(&v6);
  return (unsigned int)v4;
}
