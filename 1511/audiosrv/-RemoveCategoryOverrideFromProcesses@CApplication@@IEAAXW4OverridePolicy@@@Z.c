/*
 * XREFs of ?RemoveCategoryOverrideFromProcesses@CApplication@@IEAAXW4OverridePolicy@@@Z @ 0x180004804
 * Callers:
 *     ?CleanupBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ @ 0x180004D74 (-CleanupBCMStartupLatencyGracePeriod@CApplication@@QEAAXXZ.c)
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProcess@@AEAPEAU__POSITION@@@Z @ 0x18000EDE8 (-GetNext@-$CAtlList@PEAVCProcess@@V-$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProces.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001F9E8 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001FA0C (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 */

void __fastcall CApplication::RemoveCategoryOverrideFromProcesses(__int64 a1, __int64 a2, bool a3)
{
  __int64 v4; // rcx
  __int64 Next; // rax
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)v6, (struct _RTL_CRITICAL_SECTION *)(a1 + 24), a3);
  v7 = *(_QWORD *)(a1 + 64);
  while ( v7 )
  {
    Next = ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::GetNext(v4, &v7);
    v4 = *(_QWORD *)Next;
    if ( !*(_DWORD *)(*(_QWORD *)Next + 416LL) && *(_DWORD *)(v4 + 440) == 7 )
    {
      *(_QWORD *)(v4 + 440) = 0LL;
      *(_DWORD *)(v4 + 448) = 4;
    }
  }
  if ( v6[8] )
    ATL::CCritSecLock::Unlock((ATL::CCritSecLock *)v6);
}
