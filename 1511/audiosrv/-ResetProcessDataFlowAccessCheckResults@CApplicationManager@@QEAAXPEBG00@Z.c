/*
 * XREFs of ?ResetProcessDataFlowAccessCheckResults@CApplicationManager@@QEAAXPEBG00@Z @ 0x18009EF5C
 * Callers:
 *     ?SetProcessDataFlowAccessCheckResults@CWindowsPolicyManager@@UEAAJPEBG00_N@Z @ 0x18009DE10 (-SetProcessDataFlowAccessCheckResults@CWindowsPolicyManager@@UEAAJPEBG00_N@Z.c)
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProcess@@AEAPEAU__POSITION@@@Z @ 0x18000EDE8 (-GetNext@-$CAtlList@PEAVCProcess@@V-$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProces.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001F9E8 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001FA0C (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?ResetDataFlowAccessCheckResults@CProcess@@QEAAXXZ @ 0x180064FF8 (-ResetDataFlowAccessCheckResults@CProcess@@QEAAXXZ.c)
 */

void __fastcall CApplicationManager::ResetProcessDataFlowAccessCheckResults(
        CApplicationManager *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4)
{
  __int64 v7; // rcx
  LPCWCH *v8; // rbx
  LPCRITICAL_SECTION v9; // [rsp+30h] [rbp-18h] BYREF
  char v10; // [rsp+38h] [rbp-10h]
  _QWORD *v11; // [rsp+68h] [rbp+20h] BYREF

  v11 = a4;
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v9, (struct _RTL_CRITICAL_SECTION *)((char *)this + 24));
  v11 = (_QWORD *)*((_QWORD *)this + 14);
  while ( v11 )
  {
    v8 = (LPCWCH *)*ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::GetNext(v7, &v11);
    if ( (!a2 || CompareStringOrdinal(a2, -1, v8[26], -1, 1) == 2)
      && (!a3 || CompareStringOrdinal(a3, -1, v8[24], -1, 1) == 2) )
    {
      CProcess::ResetDataFlowAccessCheckResults((CProcess *)v8);
    }
  }
  if ( v10 )
    ATL::CCritSecLock::Unlock(&v9);
}
