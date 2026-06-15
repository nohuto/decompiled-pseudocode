/*
 * XREFs of ?IsPlaying@CApplication@@QEAAHH@Z @ 0x180004A20
 * Callers:
 *     ?IsPlaying@CApplicationManager@@QEAAHPEAVCProcess@@H@Z @ 0x180003E3C (-IsPlaying@CApplicationManager@@QEAAHPEAVCProcess@@H@Z.c)
 * Callees:
 *     ?GetActiveRenderStreamCount@CProcess@@QEAAIK@Z @ 0x18000535C (-GetActiveRenderStreamCount@CProcess@@QEAAIK@Z.c)
 *     ?GetNext@?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProcess@@AEAPEAU__POSITION@@@Z @ 0x18000EDE8 (-GetNext@-$CAtlList@PEAVCProcess@@V-$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProces.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001F9E8 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001FA0C (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 */

__int64 __fastcall CApplication::IsPlaying(CApplication *this, __int64 a2, bool a3)
{
  __int64 v4; // rcx
  unsigned int v5; // edi
  CProcess **Next; // rax
  CProcess *v7; // rbx
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)v9, (struct _RTL_CRITICAL_SECTION *)((char *)this + 24), a3);
  v5 = 0;
  v10 = *((_QWORD *)this + 8);
  if ( v10 )
  {
    while ( 1 )
    {
      Next = (CProcess **)ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::GetNext(v4, &v10);
      v7 = *Next;
      if ( !*((_DWORD *)*Next + 104)
        && (CProcess::GetActiveRenderStreamCount(*Next, 2u)
         || CProcess::GetActiveRenderStreamCount(v7, 0xAu)
         || CProcess::GetActiveRenderStreamCount(v7, 1u)
         || CProcess::GetActiveRenderStreamCount(v7, 0xBu)) )
      {
        break;
      }
      if ( !v10 )
        goto LABEL_8;
    }
    v5 = 1;
  }
LABEL_8:
  if ( v9[8] )
    ATL::CCritSecLock::Unlock((ATL::CCritSecLock *)v9);
  return v5;
}
