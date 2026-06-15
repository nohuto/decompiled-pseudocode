/*
 * XREFs of ?PreADGTermination@CAudioSrv@@EEAAXXZ @ 0x180001530
 * Callers:
 *     ?DoTerminateADG@CAudioDGProcess@@AEAAJXZ @ 0x1800014A8 (-DoTerminateADG@CAudioDGProcess@@AEAAJXZ.c)
 * Callees:
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x180017B40 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017BA0 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 *     ?GetNext@?$CAtlList@PEAVCVADServer@@V?$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAAEAPEAVCVADServer@@AEAPEAU__POSITION@@@Z @ 0x18005072C (-GetNext@-$CAtlList@PEAVCVADServer@@V-$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAAEAPEAVCVA.c)
 *     ?LogProductionAssert@@YAX_KPEBG@Z @ 0x180051BE8 (-LogProductionAssert@@YAX_KPEBG@Z.c)
 *     ?GetAt@?$CAtlList@PEAVCVADServer@@V?$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAAEAPEAVCVADServer@@PEAU__POSITION@@@Z @ 0x180052688 (-GetAt@-$CAtlList@PEAVCVADServer@@V-$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAAEAPEAVCVADS.c)
 *     ?StringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ @ 0x180053B98 (-StringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAudioSrv::PreADGTermination(CAudioSrv *this, __int64 a2, bool a3)
{
  __int64 v3; // rcx
  _QWORD *v4; // rax
  int v5; // ebx
  __int64 v6; // rcx
  _QWORD *v7; // rax
  __int64 v8; // rcx
  size_t cchDest; // [rsp+48h] [rbp-C0h] BYREF
  STRSAFE_LPWSTR v10; // [rsp+50h] [rbp-B8h] BYREF
  __int64 i; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v12[16]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v13; // [rsp+70h] [rbp-98h]
  wchar_t pszDest[1024]; // [rsp+78h] [rbp-90h] BYREF

  v13 = -2LL;
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)v12, &g_csVadList, a3);
  if ( qword_1800CA540 )
  {
    v10 = pszDest;
    cchDest = 1024LL;
    v4 = (_QWORD *)ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::GetAt(v3, 0LL);
    v5 = StringCchPrintfExW(
           pszDest,
           0x400uLL,
           &v10,
           &cchDest,
           0x800u,
           L"AudioSrv active Stream on AudioDG terminating: ",
           *v4);
    if ( v5 >= 0 )
    {
      v6 = g_VADServerList;
      for ( i = g_VADServerList; v6; v6 = i )
      {
        v7 = (_QWORD *)ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::GetAt(v6, v6);
        v5 = StringCchPrintfExW(v10, cchDest, &v10, &cchDest, 0x800u, L"%p ", *v7);
        if ( v5 )
          break;
        ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::GetNext(v8, &i);
      }
      if ( (int)(v5 + 0x80000000) < 0 || v5 == -2147024774 )
        LogProductionAssert(0x6D58B0uLL, pszDest);
    }
  }
  if ( v12[8] )
    ATL::CCritSecLock::Unlock((ATL::CCritSecLock *)v12);
}
