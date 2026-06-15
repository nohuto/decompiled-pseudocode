/*
 * XREFs of ?GetTotalActiveRenderStreamCount@CApplication@@QEAAIXZ @ 0x1800A2FF4
 * Callers:
 *     ?ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBGW4__MIDL___MIDL_itf_playbackmanagerrpc_0000_0000_0001@@K@Z @ 0x180002150 (-ProcessInteractivityNotification@CApplicationManager@@QEAAJPEBGW4__MIDL___MIDL_itf_playbackmana.c)
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProcess@@AEAPEAU__POSITION@@@Z @ 0x180001544 (-GetNext@-$CAtlList@PEAVCProcess@@V-$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProces.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B220 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001B244 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 */

__int64 __fastcall CApplication::GetTotalActiveRenderStreamCount(CApplication *this)
{
  unsigned int v2; // edi
  __int64 v3; // rcx
  __int64 *Next; // rax
  LPCRITICAL_SECTION v6; // [rsp+20h] [rbp-18h] BYREF
  char v7; // [rsp+28h] [rbp-10h]
  _QWORD *v8; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v6, (struct _RTL_CRITICAL_SECTION *)((char *)this + 24));
  v8 = (_QWORD *)*((_QWORD *)this + 8);
  while ( v8 )
  {
    Next = ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::GetNext(v3, &v8);
    v3 = *Next;
    if ( !*(_DWORD *)(*Next + 416) )
      v2 += *(_DWORD *)(v3 + 304);
  }
  if ( v7 )
    ATL::CCritSecLock::Unlock(&v6);
  return v2;
}
