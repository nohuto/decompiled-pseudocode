/*
 * XREFs of ?SendTrackStateNotification@CApplication@@QEAAJW4__MIDL___MIDL_itf_audiosrv_0000_0000_0002@@@Z @ 0x180004770
 * Callers:
 *     ?Invoke@CStreamStartedWorkItem@@UEAAXXZ @ 0x18002E5E0 (-Invoke@CStreamStartedWorkItem@@UEAAXXZ.c)
 *     ?Invoke@CStreamStoppedWorkItem@@UEAAXXZ @ 0x18002F360 (-Invoke@CStreamStoppedWorkItem@@UEAAXXZ.c)
 * Callees:
 *     ?SendPBMNotification@CProcess@@QEAAJW4__MIDL___MIDL_itf_audiosrv_0000_0000_0002@@@Z @ 0x180005484 (-SendPBMNotification@CProcess@@QEAAJW4__MIDL___MIDL_itf_audiosrv_0000_0000_0002@@@Z.c)
 *     ?GetNext@?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProcess@@AEAPEAU__POSITION@@@Z @ 0x18000EDE8 (-GetNext@-$CAtlList@PEAVCProcess@@V-$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProces.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001F9E8 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001FA0C (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplication::SendTrackStateNotification(__int64 a1, __int64 a2, bool a3)
{
  unsigned int v4; // edi
  __int64 v5; // rcx
  __int64 Next; // rax
  _BYTE v8[32]; // [rsp+28h] [rbp-20h] BYREF
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF

  v4 = -2147023728;
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)v8, (struct _RTL_CRITICAL_SECTION *)(a1 + 24), a3);
  v9 = *(_QWORD *)(a1 + 64);
  if ( v9 )
  {
    while ( 1 )
    {
      Next = ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::GetNext(v5, &v9);
      v5 = *(_QWORD *)Next;
      if ( !*(_DWORD *)(*(_QWORD *)Next + 416LL) && (*(_DWORD *)(v5 + 428) & 0x1000) != 0 )
        break;
      if ( !v9 )
        goto LABEL_7;
    }
    v4 = CProcess::SendPBMNotification(v5, 12LL);
  }
LABEL_7:
  if ( v8[8] )
    ATL::CCritSecLock::Unlock((ATL::CCritSecLock *)v8);
  return v4;
}
