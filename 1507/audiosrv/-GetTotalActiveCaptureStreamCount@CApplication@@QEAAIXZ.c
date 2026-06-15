/*
 * XREFs of ?GetTotalActiveCaptureStreamCount@CApplication@@QEAAIXZ @ 0x180003340
 * Callers:
 *     ?ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBGW4__MIDL___MIDL_itf_playbackmanagerrpc_0000_0000_0001@@K@Z @ 0x180002150 (-ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBGW4__MIDL___MIDL_itf_playbackmana.c)
 *     ?OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z @ 0x18001BB50 (-OnApplicationInteractivityChanged@CApplicationManager@@QEAAXPEAVCApplication@@@Z.c)
 *     ?Invoke@CStreamStoppedWorkItem@@UEAAXXZ @ 0x18002C130 (-Invoke@CStreamStoppedWorkItem@@UEAAXXZ.c)
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProcess@@AEAPEAU__POSITION@@@Z @ 0x180001544 (-GetNext@-$CAtlList@PEAVCProcess@@V-$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProces.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B220 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001B244 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 */

__int64 __fastcall CApplication::GetTotalActiveCaptureStreamCount(CApplication *this, __int64 a2, bool a3)
{
  unsigned int v4; // edi
  __int64 v5; // rcx
  __int64 *Next; // rax
  _BYTE v8[24]; // [rsp+20h] [rbp-18h] BYREF
  _QWORD *v9; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)v8, (struct _RTL_CRITICAL_SECTION *)((char *)this + 24), a3);
  v9 = (_QWORD *)*((_QWORD *)this + 8);
  while ( v9 )
  {
    Next = ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::GetNext(v5, &v9);
    v5 = *Next;
    if ( !*(_DWORD *)(*Next + 416) )
      v4 += *(_DWORD *)(v5 + 308);
  }
  if ( v8[8] )
    ATL::CCritSecLock::Unlock((ATL::CCritSecLock *)v8);
  return v4;
}
