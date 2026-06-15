/*
 * XREFs of ?MarkAsPendingTermination@CApplication@@QEAAXXZ @ 0x1800A351C
 * Callers:
 *     ?OnApplicationStateChanged@CApplicationManager@@QEAAJPEAUApplicationStateChangedContext@@@Z @ 0x180002700 (-OnApplicationStateChanged@CApplicationManager@@QEAAJPEAUApplicationStateChangedContext@@@Z.c)
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProcess@@AEAPEAU__POSITION@@@Z @ 0x180001544 (-GetNext@-$CAtlList@PEAVCProcess@@V-$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProces.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B220 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001B244 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 */

void __fastcall CApplication::MarkAsPendingTermination(CApplication *this)
{
  __int64 v2; // rcx
  __int64 *Next; // rax
  LPCRITICAL_SECTION v4; // [rsp+20h] [rbp-18h] BYREF
  char v5; // [rsp+28h] [rbp-10h]
  _QWORD *v6; // [rsp+40h] [rbp+8h] BYREF

  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v4, (struct _RTL_CRITICAL_SECTION *)((char *)this + 24));
  v6 = (_QWORD *)*((_QWORD *)this + 8);
  while ( v6 )
  {
    Next = ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::GetNext(v2, &v6);
    v2 = *Next;
    if ( !*(_DWORD *)(*Next + 416) )
      *(_DWORD *)(v2 + 416) = 1;
  }
  if ( v5 )
    ATL::CCritSecLock::Unlock(&v4);
}
