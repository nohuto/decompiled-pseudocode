/*
 * XREFs of ?Invoke@CGoodFaithPLMExemptionExpiredWorkItem@@UEAAXXZ @ 0x1800A6E50
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B220 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001B244 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     WPP_SF_S @ 0x18006B12C (WPP_SF_S.c)
 *     ?GoodFaithPLMExemptionExpired@CApplication@@QEAAJXZ @ 0x1800A3068 (-GoodFaithPLMExemptionExpired@CApplication@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CGoodFaithPLMExemptionExpiredWorkItem::Invoke(CGoodFaithPLMExemptionExpiredWorkItem *this)
{
  CApplication *v2; // rbx
  LPCRITICAL_SECTION v3; // [rsp+28h] [rbp-20h] BYREF
  char v4; // [rsp+30h] [rbp-18h]

  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_S(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
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
