/*
 * XREFs of ?HasPlayToStreams@CApplication@@QEAAHXZ @ 0x1800134D8
 * Callers:
 *     ?UpdateActiveMediaAppForSession@CApplicationManager@@QEAAXPEAVCApplication@@H@Z @ 0x18001BD74 (-UpdateActiveMediaAppForSession@CApplicationManager@@QEAAXPEAVCApplication@@H@Z.c)
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProcess@@AEAPEAU__POSITION@@@Z @ 0x180001544 (-GetNext@-$CAtlList@PEAVCProcess@@V-$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProces.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B270 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 */

__int64 __fastcall CApplication::HasPlayToStreams(CApplication *this)
{
  __int64 v2; // rcx
  unsigned int v3; // edi
  __int64 *Next; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v7; // [rsp+28h] [rbp-10h]
  _QWORD *v8; // [rsp+40h] [rbp+8h] BYREF

  v7 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 24);
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v3 = 0;
  v8 = (_QWORD *)*((_QWORD *)this + 8);
  if ( v8 )
  {
    while ( 1 )
    {
      Next = ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::GetNext(v2, &v8);
      v2 = *Next;
      if ( !*(_DWORD *)(*Next + 416) )
      {
        if ( *(_DWORD *)(v2 + 452) )
          break;
      }
      if ( !v8 )
        goto LABEL_2;
    }
    v3 = 1;
  }
LABEL_2:
  if ( v7 )
    LeaveCriticalSection(lpCriticalSection);
  return v3;
}
