/*
 * XREFs of ?HasPlayToStreams@CApplication@@QEAAHXZ @ 0x180065BA0
 * Callers:
 *     ?UpdateActiveMediaAppForSession@CApplicationManager@@QEAAXPEAVCApplication@@H@Z @ 0x180065CA8 (-UpdateActiveMediaAppForSession@CApplicationManager@@QEAAXPEAVCApplication@@H@Z.c)
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProcess@@AEAPEAU__POSITION@@@Z @ 0x18000EDE8 (-GetNext@-$CAtlList@PEAVCProcess@@V-$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProces.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001F9E8 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001FA0C (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 */

__int64 __fastcall CApplication::HasPlayToStreams(CApplication *this)
{
  __int64 v2; // rcx
  unsigned int v3; // edi
  __int64 *Next; // rax
  LPCRITICAL_SECTION v6; // [rsp+20h] [rbp-18h] BYREF
  char v7; // [rsp+28h] [rbp-10h]
  _QWORD *v8; // [rsp+40h] [rbp+8h] BYREF

  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v6, (struct _RTL_CRITICAL_SECTION *)((char *)this + 24));
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
        goto LABEL_7;
    }
    v3 = 1;
  }
LABEL_7:
  if ( v7 )
    ATL::CCritSecLock::Unlock(&v6);
  return v3;
}
