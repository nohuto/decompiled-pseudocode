/*
 * XREFs of ?RemoveProcess@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x18001F6CC
 * Callers:
 *     ?Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x18001F770 (-Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 * Callees:
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001F9E8 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001FA30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Cleanup@CProcess@@QEAAJH@Z @ 0x18002A1CC (-Cleanup@CProcess@@QEAAJH@Z.c)
 *     ?Find@?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEBAPEAU__POSITION@@AEBQEAVCProcess@@PEAU3@@Z @ 0x180030654 (-Find@-$CAtlList@PEAVCProcess@@V-$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEBAPEAU__POSITION@@A.c)
 *     ?RemoveAt@?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x1800306DC (-RemoveAt@-$CAtlList@PEAVCProcess@@V-$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAXPEAU__POSITI.c)
 *     ?Release@CUnknown@@UEAAKXZ @ 0x180032A30 (-Release@CUnknown@@UEAAKXZ.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::RemoveProcess(CApplicationManager *this, struct CProcess *a2)
{
  CProcess *v2; // rsi
  int v4; // edi
  __int64 v5; // rax
  ATL::CAtlException *v7; // rbx
  ATL::CAtlException *v9; // [rsp+28h] [rbp-20h] BYREF
  char *v10; // [rsp+30h] [rbp-18h] BYREF
  char v11; // [rsp+38h] [rbp-10h]
  struct CProcess *v12; // [rsp+58h] [rbp+10h] BYREF

  v12 = a2;
  v2 = a2;
  v4 = 0;
  v10 = (char *)this + 24;
  v11 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v10);
  v5 = ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::Find((char *)this + 112, &v12);
  if ( v5 )
  {
    try
    {
      ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::RemoveAt((char *)this + 112, v5);
    }
    catch ( ATL::CAtlException *v9 )
    {
      v7 = v9;
      if ( *(_DWORD *)v9 == -1073741571 )
        _resetstkoflw();
      v2 = v12;
      v4 = *(_DWORD *)v7;
    }
    if ( v2 )
    {
      CProcess::Cleanup(v2, 0);
      CUnknown::Release(v2);
    }
    if ( v4 < 0
      && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        32LL,
        &WPP_470fb16e4de1ac112a2f931f3fb204f0_Traceguids,
        (unsigned int)v4);
    }
  }
  if ( v11 )
    ATL::CCritSecLock::Unlock((ATL::CCritSecLock *)&v10);
  return (unsigned int)v4;
}
