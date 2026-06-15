/*
 * XREFs of ?LinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x180012D50
 * Callers:
 *     ?Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x18001CD88 (-Register@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 * Callees:
 *     ?AddHead@?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCProcess@@@Z @ 0x180007174 (-AddHead@-$CAtlList@PEAVCProcess@@V-$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAPEAU__POSITION.c)
 *     ?GetActiveProcessCount@CApplication@@QEAAIXZ @ 0x180013348 (-GetActiveProcessCount@CApplication@@QEAAIXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B270 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplication::LinkProcess(CApplication *this, struct CProcess *a2)
{
  struct CProcess *v2; // rsi
  CApplication *v3; // rbx
  unsigned int v4; // edi
  __int64 result; // rax
  ATL::CAtlException *v6; // rbx
  ATL::CAtlException *v7; // [rsp+28h] [rbp-30h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-28h] BYREF
  char v9; // [rsp+38h] [rbp-20h]
  struct CProcess *v11; // [rsp+68h] [rbp+10h] BYREF
  int v12; // [rsp+70h] [rbp+18h]

  v11 = a2;
  v2 = a2;
  v3 = this;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 24);
  v9 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  if ( !CApplication::GetActiveProcessCount(v3) )
    *((_DWORD *)v3 + 129) = 1;
  v4 = 0;
  try
  {
    ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::AddHead((struct ATL::CAtlPlex **)v3 + 8, &v11);
  }
  catch ( ATL::CAtlException *v7 )
  {
    v6 = v7;
    if ( *(_DWORD *)v7 == -1073741571 )
      _resetstkoflw();
    v12 = *(_DWORD *)v6;
    v4 = v12;
    if ( v12 >= 0 )
    {
      v3 = this;
      v2 = v11;
      goto LABEL_4;
    }
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        11LL,
        &WPP_f7cdc31509cb4a3405552b22f946de83_Traceguids,
        (unsigned int)v12);
    }
LABEL_5:
    if ( v9 )
      LeaveCriticalSection(lpCriticalSection);
    result = v4;
  }
LABEL_4:
  *((_QWORD *)v2 + 28) = v3;
  goto LABEL_5;
}
