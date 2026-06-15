/*
 * XREFs of ?IsPlaying@CApplication@@QEAAHH@Z @ 0x180003094
 * Callers:
 *     ?IsPlaying@CApplicationManager@@QEAAHPEAVCProcess@@H@Z @ 0x180002674 (-IsPlaying@CApplicationManager@@QEAAHPEAVCProcess@@H@Z.c)
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProcess@@AEAPEAU__POSITION@@@Z @ 0x180001544 (-GetNext@-$CAtlList@PEAVCProcess@@V-$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProces.c)
 *     ?GetActiveRenderStreamCount@CProcess@@QEAAIK@Z @ 0x180003678 (-GetActiveRenderStreamCount@CProcess@@QEAAIK@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B220 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B270 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 */

__int64 __fastcall CApplication::IsPlaying(CApplication *this)
{
  __int64 v2; // rcx
  unsigned int v3; // edi
  CProcess **Next; // rax
  CProcess *v5; // rbx
  char *v7; // [rsp+20h] [rbp-18h] BYREF
  char v8; // [rsp+28h] [rbp-10h]
  _QWORD *v9; // [rsp+40h] [rbp+8h] BYREF

  v8 = 0;
  v7 = (char *)this + 24;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v7);
  v3 = 0;
  v9 = (_QWORD *)*((_QWORD *)this + 8);
  if ( v9 )
  {
    while ( 1 )
    {
      Next = (CProcess **)ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::GetNext(v2, &v9);
      v5 = *Next;
      if ( !*((_DWORD *)*Next + 104)
        && (CProcess::GetActiveRenderStreamCount(*Next, 2u)
         || CProcess::GetActiveRenderStreamCount(v5, 0xAu)
         || CProcess::GetActiveRenderStreamCount(v5, 1u)
         || CProcess::GetActiveRenderStreamCount(v5, 0xBu)) )
      {
        break;
      }
      if ( !v9 )
        goto LABEL_8;
    }
    v3 = 1;
  }
LABEL_8:
  if ( v8 )
    ATL::CCritSecLock::Unlock((ATL::CCritSecLock *)&v7);
  return v3;
}
