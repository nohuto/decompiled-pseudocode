/*
 * XREFs of ?DelinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x18001C614
 * Callers:
 *     ?Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x18001F770 (-Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 * Callees:
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001F9E8 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001FA30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Find@?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEBAPEAU__POSITION@@AEBQEAVCProcess@@PEAU3@@Z @ 0x180030654 (-Find@-$CAtlList@PEAVCProcess@@V-$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEBAPEAU__POSITION@@A.c)
 *     ?RemoveAt@?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x1800306DC (-RemoveAt@-$CAtlList@PEAVCProcess@@V-$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAXPEAU__POSITI.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 */

// Absent C++ exception handlers: #catch=1
__int64 __fastcall CApplication::DelinkProcess(CApplication *this, struct CProcess *a2)
{
  unsigned int v4; // esi
  __int64 v5; // rax
  ATL::CAtlException *v7; // [rsp+28h] [rbp-20h] BYREF
  char *v8; // [rsp+30h] [rbp-18h] BYREF
  char v9; // [rsp+38h] [rbp-10h]
  struct CProcess *v10; // [rsp+58h] [rbp+10h] BYREF

  v10 = a2;
  v4 = 0;
  v8 = (char *)this + 24;
  v9 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v8);
  *((_QWORD *)a2 + 28) = 0LL;
  v5 = ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::Find((char *)this + 64, &v10);
  if ( v5 )
  {
    try
    {
      ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::RemoveAt((char *)this + 64, v5);
    }
    catch ( ATL::CAtlException *v7 )
    {
      __eh34_catch_handler_absent(0, 0, CApplication::DelinkProcess_::_1_::catch_0);
      v4 = (unsigned int)v10;
      if ( (int)v10 < 0
        && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          12LL,
          &WPP_fcf29b4c1df1b65e7f7c4a2882eee266_Traceguids,
          (unsigned int)v10);
      }
    }
  }
  if ( v9 )
    ATL::CCritSecLock::Unlock((ATL::CCritSecLock *)&v8);
  return v4;
}
