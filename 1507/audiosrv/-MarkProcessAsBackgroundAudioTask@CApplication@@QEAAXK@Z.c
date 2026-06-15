/*
 * XREFs of ?MarkProcessAsBackgroundAudioTask@CApplication@@QEAAXK@Z @ 0x1800A3588
 * Callers:
 *     ?TsSessionLaunchBackgroundTask@@YAJKPEBG0@Z @ 0x1800A054C (-TsSessionLaunchBackgroundTask@@YAJKPEBG0@Z.c)
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProcess@@AEAPEAU__POSITION@@@Z @ 0x180001544 (-GetNext@-$CAtlList@PEAVCProcess@@V-$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProces.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B220 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001B244 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 */

void __fastcall CApplication::MarkProcessAsBackgroundAudioTask(CApplication *this, int a2)
{
  __int64 v4; // rcx
  __int64 *Next; // rax
  LPCRITICAL_SECTION v6; // [rsp+20h] [rbp-18h] BYREF
  char v7; // [rsp+28h] [rbp-10h]
  _QWORD *v8; // [rsp+40h] [rbp+8h] BYREF

  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v6, (struct _RTL_CRITICAL_SECTION *)((char *)this + 24));
  v8 = (_QWORD *)*((_QWORD *)this + 8);
  if ( v8 )
  {
    while ( 1 )
    {
      Next = ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::GetNext(v4, &v8);
      v4 = *Next;
      if ( *(_DWORD *)(*Next + 168) == a2 && !*(_DWORD *)(v4 + 416) )
        break;
      if ( !v8 )
        goto LABEL_7;
    }
    *(_DWORD *)(v4 + 460) = 1;
  }
LABEL_7:
  if ( v7 )
    ATL::CCritSecLock::Unlock(&v6);
}
