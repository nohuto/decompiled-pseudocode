/*
 * XREFs of ?Invoke@CGoodFaithPLMExemptionExpiredWorkItem@@UEAAXXZ @ 0x1800A4280
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001F9E8 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001FA0C (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     WPP_SF_S @ 0x180069E40 (WPP_SF_S.c)
 *     ?GoodFaithPLMExemptionExpired@CApplication@@QEAAJXZ @ 0x1800A02C8 (-GoodFaithPLMExemptionExpired@CApplication@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CGoodFaithPLMExemptionExpiredWorkItem::Invoke(CGoodFaithPLMExemptionExpiredWorkItem *this)
{
  CApplication *v2; // rbx
  LPCRITICAL_SECTION v3; // [rsp+28h] [rbp-20h] BYREF
  char v4; // [rsp+30h] [rbp-18h]

  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x1Cu,
      (__int64)&WPP_ae37a66e23d368ef9c746f7994216229_Traceguids,
      *(const wchar_t **)(*((_QWORD *)this + 1) + 16LL));
  }
  v2 = (CApplication *)*((_QWORD *)this + 1);
  ATL::CCritSecLock::CCritSecLock(
    (ATL::CCritSecLock *)&v3,
    (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 24));
  CApplication::GoodFaithPLMExemptionExpired(v2);
  if ( v4 )
    ATL::CCritSecLock::Unlock(&v3);
}
